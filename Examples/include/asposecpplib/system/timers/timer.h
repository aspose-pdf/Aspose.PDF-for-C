#ifndef __system_timers_timer__
#define __system_timers_timer__

#include <atomic>
#include <chrono>
#include <ctime>
#include "system/component_model/component.h"


namespace System {
namespace Timers {
	
	class Timer final : public System::ComponentModel::Component
	{
		typedef System::Timers::Timer ThisType
		typedef System::BaseTypesInfo<System::ComponentModel::Component> ThisBaseTypesInfo;
		
		RTTI_INFO(ThisType, ThisBaseTypesInfo)

		std::chrono::time_point<std::chrono::steady_clock> start, stop;
		bool enabled;
		int interval;
		std::atomic_bool AutoReset;
		
		public: 
		
		Timer(): 
		interval(1)
		,enabled(false)
		,start(nullptr)
		,stop(nullptr)
		{
			std::atomic_init(&AutoReset,false);
		}		
		//double in net in ns
		Timer(double _interval) : 
		,enabled(false)
		,start(nullptr)
		,stop(nullptr)
		{
			if (_interval < 0.0) interval = 1;  
			else interval = static_cast<int>(_interval);
			std::atomic_init(&AutoReset,false);
		}
		
		double get_Interval()
		{
			return interval;
		}
		
		void set_Interval(double ms)
		{
			interval = static_cast<int>(ms);
		}

		bool get_AutoReset()
		{
			return AutoReset.load();
		}
		
		void set_AutoReset(bool autoreset)
		{
			AutoReset.store(autoreset);
		}
		
		void set_Enabled(bool enable) 
		{ 
			enabled = enable;
			(enabled) ? Start() : Stop();
		}
		
		bool get_IsStopped()
		{
			return !enabled;
		}
		
		void Start()
		{
			enabled = true;
			start = std::chrono::steady_clock::now();
		}
		
		void Stop()
		{
			enabled = false;
			stop = std::chrono::steady_clock::now();
			set_AutoReset(false);
		}
		
		//Get delta (stop - start) in milliseconds
		int get_Elapsed()
		{
			if(start == nullptr || stop == nullptr) return 0;
			if(stop == nullptr) return 
				std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start).count();
			return std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count();
		}
		
		// add_Elapsed (time in millisecond, callable void function, arguments...)
		template <class callable, class... arguments>
		void add_Elapsed(callable&& f, arguments&&... args)
		{
			std::function<typename std::result_of<callable(arguments...)>::type()> task(std::bind(std::forward<callable>(f), std::forward<arguments>(args)...));

  			 enabled = true;
			 std::thread([interval, task, &AutoReset]() {
				do{
					auto x = std::chrono::steady_clock::now() + std::chrono::milliseconds(interval)
					task();
					std::this_thread::sleep_until(x);					
				}while(AutoReset.load());
            }).detach();
		}
	};
}
}
#endif //__system_timers_timer__