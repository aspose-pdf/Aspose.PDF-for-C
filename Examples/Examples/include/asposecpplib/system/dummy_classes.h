/// @file system/dummy_classes.h
#ifndef __dummy_classes_h__
#define __dummy_classes_h__

#include "system/event.h"
#include "system/eventargs.h"
#include "system/eventhandler.h"
#include "system/uri.h"
#include "system/io/text_writer.h"
#include "system/collections/dictionary.h"
#include <system/component_model/component.h>
#include <system/runtime/serialization/iserializable.h>
#include <net/http_status_code.h>

#include "fwd.h"

namespace System {
    namespace Web {

        /// Forward declaration.
        class HttpRequest;
        /// Forward declaration.
        class HttpResponse;

        /// Dummy class making it possible linking ported code with HttpContext references, but not executing it.
        /// Contains no properly implemented members.
        /// Objects of this class should only be allocated using System::MakeObject() function.
        /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
        /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
        class ASPOSECPP_SHARED_CLASS HttpContext : public Object
        {
        public:
            /// Not implemented.
            static System::SharedPtr<HttpContext> get_Current(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            static void set_Current(const System::SharedPtr<HttpContext>& context){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            System::SharedPtr<HttpRequest> get_Request(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
        };

        /// Dummy class making it possible linking ported code with HttpRequest references, but not executing it.
        /// Contains no properly implemented members.
        /// Objects of this class should only be allocated using System::MakeObject() function.
        /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
        /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
        class ASPOSECPP_SHARED_CLASS HttpRequest : public Object
        {
        public:
            /// Not implemented.
            System::String get_ApplicationPath(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            System::String MapPath(const System::String& virtualPath){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
        };

        /// Dummy class making it possible linking ported code with HttpResponse references, but not executing it.
        /// Contains no properly implemented members.
        /// Objects of this class should only be allocated using System::MakeObject() function.
        /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
        /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
        class ASPOSECPP_SHARED_CLASS HttpResponse : public Object
        {
        public:
            /// Not implemented.
            HttpResponse(const System::SharedPtr<System::IO::TextWriter>& writer) : Object() { }
            /// Not implemented.
            void AddHeader(const String& name, const String& value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            void BinaryWrite(const System::ArrayPtr<uint8_t>& buffer){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            void Clear(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            void ClearContent(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            void ClearHeaders(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            void End(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            SharedPtr<System::IO::Stream> get_OutputStream(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            void set_ContentType(const String& value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
        };

        namespace UI {
            namespace WebControls {

                /// Dummy class making it possible linking ported code with DataGrid references, but not executing it.
                /// Contains no properly implemented members.
                /// Objects of this class should only be allocated using System::MakeObject() function.
                /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
                /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
                class ASPOSECPP_SHARED_CLASS DataGrid : public Object
                {
                public:
                    /// Self pointer type.
                    typedef SharedPtr<DataGrid> ptr;
                };
            }
        }

    }

    namespace Net {

        /// Http request header definitions.
        enum class HttpRequestHeader
        {
            /// Cache control header.
            CacheControl = 0,
            /// Connection header.
            Connection = 1,
            /// Date header.
            Date = 2,
            /// Keep-alive header.
            KeepAlive = 3,
            /// Pragma header.
            Pragma = 4,
            /// Trailer header.
            Trailer = 5,
            /// Transfer encoding header.
            TransferEncoding = 6,
            /// Upgrade header.
            Upgrade = 7,
            /// Via header.
            Via = 8,
            /// Warning header.
            Warning = 9,
            /// Allow header.
            Allow = 10,
            /// Content-length header.
            ContentLength = 11,
            /// Content-type header.
            ContentType = 12,
            /// Cotnent-encoding header.
            ContentEncoding = 13,
            /// Content-language header.
            ContentLanguage = 14,
            /// Content-location header.
            ContentLocation = 15,
            /// Content-md5 header.
            ContentMd5 = 16,
            /// Content-range header.
            ContentRange = 17,
            /// Expires header.
            Expires = 18,
            /// Last-modified header.
            LastModified = 19,
            /// Accept header.
            Accept = 20,
            /// Accept-charset header.
            AcceptCharset = 21,
            /// Accept-encoding header.
            AcceptEncoding = 22,
            /// Accept-language header.
            AcceptLanguage = 23,
            /// Authorization header.
            Authorization = 24,
            /// Cookie header.
            Cookie = 25,
            /// Expect header.
            Expect = 26,
            /// From header.
            From = 27,
            /// Host header.
            Host = 28,
            /// If-match header.
            IfMatch = 29,
            /// If-modified-since header.
            IfModifiedSince = 30,
            /// If-not-match header.
            IfNoneMatch = 31,
            /// If-range header.
            IfRange = 32,
            /// If-unmodified-since header.
            IfUnmodifiedSince = 33,
            /// Max-forwards header.
            MaxForwards = 34,
            /// Proxy-authorization header.
            ProxyAuthorization = 35,
            /// Referer header.
            Referer = 36,
            /// Range header.
            Range = 37,
            /// TE header.
            Te = 38,
            /// Translate header.
            Translate = 39,
            /// User-agent header.
            UserAgent = 40
        };

        /// Http response header definitions.
        enum class HttpResponseHeader
        {
            /// Cache-control header.
            CacheControl = 0,
            /// Connection header.
            Connection = 1,
            /// Date header.
            Date = 2,
            /// Keep-alive header.
            KeepAlive = 3,
            /// Pragma header.
            Pragma = 4,
            /// Trailer header.
            Trailer = 5,
            /// Transfer-encoding header.
            TransferEncoding = 6,
            /// Upgrade header.
            Upgrade = 7,
            /// Via header.
            Via = 8,
            /// Warning header.
            Warning = 9,
            /// Allow header.
            Allow = 10,
            /// Content-length header.
            ContentLength = 11,
            /// Content-type header.
            ContentType = 12,
            /// Content-encoding header.
            ContentEncoding = 13,
            /// Content-language header.
            ContentLanguage = 14,
            /// Content-location header.
            ContentLocation = 15,
            /// Content-md5 header.
            ContentMd5 = 16,
            /// Content-range header.
            ContentRange = 17,
            /// Expires header.
            Expires = 18,
            /// Last-modified header.
            LastModified = 19,
            /// Accept-ranges header.
            AcceptRanges = 20,
            /// Age header.
            Age = 21,
            /// Etag header.
            ETag = 22,
            /// Location header.
            Location = 23,
            /// Proxy-authentificate header.
            ProxyAuthenticate = 24,
            /// Retry-after header.
            RetryAfter = 25,
            /// Serber header.
            Server = 26,
            /// Set-cookie header.
            SetCookie = 27,
            /// Vary header.
            Vary = 28,
            /// WWW-authenticate header.
            WwwAuthenticate = 29
        };

        /// Dummy class making it possible linking ported code with WebHeaderCollection references, but not executing it.
        /// Contains no properly implemented members.
        /// Objects of this class should only be allocated using System::MakeObject() function.
        /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
        /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
        class ASPOSECPP_SHARED_CLASS WebHeaderCollection : public System::Collections::Generic::Dictionary<String, String>
        {
        private:
            /// Converts HttpResponseHeader value into a string representation to use as a key in the dictionary
            String HeaderToString(const HttpResponseHeader &header)
            {
                return String::Format(u"Res.{0}",header);
            }

            /// Converts HttpRequestHeader value into a string representation to use as a key in the dictionary
            String HeaderToString(const HttpRequestHeader &header)
            {
                return String::Format(u"Req.{0}",header);
            }

        public:
            
            /// Keyed getter function.
            /// @param header Key to get value at.
            /// @return Copy of element at @p key position.
            /// @throw KeyNotFoundException if element is not found.
            String idx_get(const String &header)
            {
                return Collections::Generic::Dictionary<String, String>::idx_get(header);
            }
            
            /// Keyed setter function. Alters or creates element.
            /// @param header Key to set value at.
            /// @param value Value to set.
            void idx_set(const String &header, const String &value)
            {
                Collections::Generic::Dictionary<String, String>::idx_set(header, value);
            }
            
            /// Keyed getter function.
            /// @param header Key to get value at.
            /// @return Copy of element at @p key position.
            /// @throw KeyNotFoundException if element is not found.
            String idx_get(const HttpResponseHeader &header)
            {
                return Collections::Generic::Dictionary<String, String>::idx_get(HeaderToString(header));
            }
            
            /// Keyed setter function. Alters or creates element.
            /// @param header Key to set value at.
            /// @param value Value to set.
            void idx_set(const HttpResponseHeader &header, const String &value)
            {
                Collections::Generic::Dictionary<String, String>::idx_set(HeaderToString(header), value);
            }
            
            /// Keyed getter function.
            /// @param header Key to get value at.
            /// @return Copy of element at @p key position.
            /// @throw KeyNotFoundException if element is not found.
            String idx_get(const HttpRequestHeader &header)
            {
                return Collections::Generic::Dictionary<String, String>::idx_get(HeaderToString(header));
            }
            
            /// Keyed setter function. Alters or creates element.
            /// @param header Key to set value at.
            /// @param value Value to set.
            void idx_set(const HttpRequestHeader &header, const String &value)
            {
                Collections::Generic::Dictionary<String, String>::idx_set(HeaderToString(header), value);
            }

            /// Adds empty string value into dictionary.
            /// @param header Key to insert value for.
            /// @throw ArgumentException If key already exists.
            void Add(const String &header)
            {
                Collections::Generic::Dictionary<String, String>::Add(header, u"");
            }

            /// Adds string value into dictionary.
            /// @param header Key to insert value for.
            /// @param value Value to insert.
            /// @throw ArgumentException If key already exists.
            void Add(const HttpRequestHeader &header, const String &value)
            {
                Collections::Generic::Dictionary<String, String>::Add(HeaderToString(header), value);
            }
            
            /// Adds string value into dictionary.
            /// @param header Key to insert value for.
            /// @param value Value to insert.
            /// @throw ArgumentException If key already exists.
            void Add(const HttpResponseHeader &header, const String &value)
            {
                Collections::Generic::Dictionary<String, String>::Add(HeaderToString(header), value);
            }

            /// Adds string value into dictionary.
            /// @param header Key to insert value for.
            /// @param value Value to insert.
            /// @throw ArgumentException If key already exists.
            void Add(const System::String& header, const System::String& value) override
            {
                Collections::Generic::Dictionary<String, String>::Add(header, value);
            }

            /// Not implemented
            static bool IsRestricted(const String &headerName)
            {
                throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
            }
        };

        /// Dummy class making it possible linking ported code with WebResponse references, but not executing it.
        /// Contains no properly implemented members.
        /// Objects of this class should only be allocated using System::MakeObject() function.
        /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
        /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
        class ASPOSECPP_SHARED_CLASS WebResponse : public virtual Object
        {
            /// RTTI info
            RTTI_INFO(System::Net::WebResponse, ::System::BaseTypesInfo<System::Object>)
        protected:
            /// Not implemented.
            WebResponse(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
        public:
            /// Not implemented.
            virtual int64_t get_ContentLength(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual void set_ContentLength(int64_t value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual String get_ContentType(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual void set_ContentType(const String& value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual SharedPtr<WebHeaderCollection> get_Headers(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual bool get_IsFromCache(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual bool get_IsMutuallyAuthenticated(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual SharedPtr<Uri> get_ResponseUri(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual void Close(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual SharedPtr<System::IO::Stream> GetResponseStream(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
        };

        /// Dummy class making it possible linking ported code with HttpWebResponse references, but not executing it.
        /// Contains no properly implemented members.
        /// Objects of this class should only be allocated using System::MakeObject() function.
        /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
        /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
        class ASPOSECPP_SHARED_CLASS HttpWebResponse : public WebResponse
        {
            /// RTTI info
            RTTI_INFO(System::Net::HttpWebResponse, ::System::BaseTypesInfo<System::Net::WebResponse>)
        public:
            /// Not implemented.
            HttpStatusCode get_StatusCode() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            System::String get_CharacterSet() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            System::String GetResponseHeader(const System::String&){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
        };

        /// Dummy class making it possible linking ported code with FileWebResponse references, but not executing it.
        /// Contains no properly implemented members.
        /// Objects of this class should only be allocated using System::MakeObject() function.
        /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
        /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
        class ASPOSECPP_SHARED_CLASS FileWebResponse : public WebResponse, public System::Runtime::Serialization::ISerializable
        {
            /// ThisType alias
            typedef FileWebResponse ThisType;
            /// BaseType alias
            typedef System::Net::WebResponse BaseType;
            /// BaseType1 alias
            typedef System::Runtime::Serialization::ISerializable BaseType1;

            /// ThisTypeBaseTypesInfo alias
            typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;

            /// RTTI info
            RTTI_INFO(System::Net::FileWebResponse, ThisTypeBaseTypesInfo)

        public:
        
            /// Not implemented.
            int64_t get_ContentLength() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            System::String get_ContentType() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            System::SharedPtr<WebHeaderCollection> get_Headers() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            System::SharedPtr<System::Uri> get_ResponseUri() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
        
            /// Not implemented.
            void Close();
            /// Not implemented.
            System::SharedPtr<System::IO::Stream> GetResponseStream() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            void GetObjectData(System::SharedPtr<System::Runtime::Serialization::SerializationInfo> serializationInfo, System::SharedPtr<System::Runtime::Serialization::StreamingContext> streamingContext) { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
        };
        
        /// Dummy class making it possible linking ported code with FtpWebResponse references, but not executing it.
        /// Contains no properly implemented members.
        /// Objects of this class should only be allocated using System::MakeObject() function.
        /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
        /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
        class ASPOSECPP_SHARED_CLASS FtpWebResponse : public WebResponse, public System::IDisposable
        {
            /// ThisType alias
            typedef FtpWebResponse ThisType;
            /// BaseType alias
            typedef System::Net::WebResponse BaseType;
            /// BaseType1 alias
            typedef System::IDisposable BaseType1;

            /// ThisTypeBaseTypesInfo alias
            typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;

            /// RTTI info
            RTTI_INFO(System::Net::FtpWebResponse, ThisTypeBaseTypesInfo)

        public:
        
            /// Not implemented.
            int64_t get_ContentLength() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            System::String get_ContentType() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            System::SharedPtr<WebHeaderCollection> get_Headers() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            System::SharedPtr<System::Uri> get_ResponseUri() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
        
            /// Not implemented.
            void Close() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            System::SharedPtr<System::IO::Stream> GetResponseStream() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
        };
        
        class ICredentials; 
        /// Dummy class making it possible linking ported code with WebRequest references, but not executing it.
        /// Contains no properly implemented members.
        /// Objects of this class should only be allocated using System::MakeObject() function.
        /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
        /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
        class ASPOSECPP_SHARED_CLASS WebRequest : public virtual Object
        {
            /// ThisType alias
            typedef WebResponse ThisType;
            /// BaseType alias
            typedef System::Object BaseType;

            /// ThisTypeBaseTypesInfo alias
            typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
            ///RTTI info
            RTTI_INFO(System::Net::WebRequest, ThisTypeBaseTypesInfo)

        public:
            /// Not implemented.
            static SharedPtr<WebRequest> Create(const String& requestUriString){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            static SharedPtr<WebRequest> Create(const SharedPtr<Uri>& requestUri){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            virtual int64_t   get_ContentLength(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual void        set_ContentLength(int64_t value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual String  get_ContentType(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual void    set_ContentType(const String& value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual SharedPtr<ICredentials> get_Credentials(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            virtual void set_Credentials(const SharedPtr<ICredentials>& credentials){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            virtual SharedPtr<WebHeaderCollection> get_Headers(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual void set_Headers(const SharedPtr<WebHeaderCollection>& headers){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual String  get_Method(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual void    set_Method(const String& value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual int get_Timeout(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            virtual void set_Timeout(int timeout){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            /// Not implemented.
            virtual SharedPtr<System::IO::Stream> GetRequestStream(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual SharedPtr<WebResponse> GetResponse(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
        };

        /// Dummy class making it possible linking ported code with HttpWebRequest references, but not executing it.
        /// Contains no properly implemented members.
        /// Objects of this class should only be allocated using System::MakeObject() function.
        /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
        /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
        class ASPOSECPP_SHARED_CLASS HttpWebRequest : public WebRequest
        {
            /// ThisType alias
            typedef HttpWebRequest ThisType;
            /// BaseType alias
            typedef System::Net::WebRequest BaseType;

            /// ThisTypeBaseTypesInfo alias
            typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
            /// RTTI info
            RTTI_INFO(System::Net::HttpWebRequest, ThisTypeBaseTypesInfo)
        public:
            /// Not implemented.
            virtual int64_t   get_ContentLength(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual void        set_ContentLength(int64_t value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual String  get_ContentType(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual void    set_ContentType(const String& value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual SharedPtr<WebHeaderCollection> get_Headers(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual void set_Headers(const SharedPtr<WebHeaderCollection>& headers){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual String  get_Method(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual void    set_Method(const String& value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            String  get_Accept()
            {
                throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
            }
            /// Not implemented.
            void    set_Accept(String)
            {
                throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
            }
            /// Not implemented.
            SharedPtr<Uri> get_Address(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            String  get_UserAgent()
            {
                throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
            }
            /// Not implemented.
            void    set_UserAgent(String)
            {
                throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
            }
            /// Not implemented.
            virtual SharedPtr<System::IO::Stream> GetRequestStream(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            /// Not implemented.
            virtual SharedPtr<WebResponse> GetResponse(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
        };

        ///Provides a file system implementation of the WebRequest class.
        /// Dummy class making it possible linking ported code with FileWebRequest references, but not executing it.
        /// Contains no properly implemented members.
        class ASPOSECPP_SHARED_CLASS FileWebRequest : public System::Net::WebRequest, public virtual System::Runtime::Serialization::ISerializable
        {
            /// ThisType alias
            typedef FileWebRequest ThisType;
            /// BaseType alias
            typedef System::Net::WebRequest BaseType;
            /// BaseType1 alias
            typedef System::Runtime::Serialization::ISerializable BaseType1;

            /// ThisTypeBaseTypesInfo alias
            typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;

            /// RTTI info
            RTTI_INFO(System::Net::FileWebRequest, ThisTypeBaseTypesInfo);
        };

        /// Implements a File Transfer Protocol (FTP) client.
        /// Dummy class making it possible linking ported code with FtpWebRequest references, but not executing it.
        /// Contains no properly implemented members.
        class ASPOSECPP_SHARED_CLASS FtpWebRequest : public System::Net::WebRequest
        {
            /// ThisType alias
            typedef FtpWebRequest ThisType;
            /// BaseType alias
            typedef System::Net::WebRequest BaseType;


            /// ThisTypeBaseTypesInfo alias
            typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;

            /// RTTI info
            RTTI_INFO(System::Net::FtpWebRequest, ThisTypeBaseTypesInfo);
        };

        /// Dummy class making it possible linking ported code with ServicePoint references, but not executing it.
        /// Contains no properly implemented members.
        /// Objects of this class should only be allocated using System::MakeObject() function.
        /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
        /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
        class ServicePoint;

        /// Dummy class making it possible linking ported code with WebClient references, but not executing it.
        /// Contains no properly implemented members.
        /// Objects of this class should only be allocated using System::MakeObject() function.
        /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
        /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
        class ASPOSECPP_SHARED_CLASS WebClient : public ComponentModel::Component
        {
        public:
            /// Not implemented.
            void set_UseDefaultCredentials(bool)
            {
                throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
            }
            /// Not implemented.
            ByteArrayPtr DownloadData(const SharedPtr<Uri>&)
            {
                throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
            }
        };

        namespace Cache
        {

            /// Specifies caching behavior for resources obtained using System.Net.WebRequest and its derived classes.
            enum class RequestCacheLevel
            {
                /// Satisfies a request for a resource either by using the cached copy of the resource or by sending a request for the resource to the server
                Default = 0,

                /// Satisfies a request by using the server.
                /// No entries are taken from caches, added to caches, or removed from caches between the client and server.
                BypassCache = 1,

                /// Satisfies a request using the locally cached resource; does not send a request for an item that is not in the cache.
                CacheOnly = 2,

                /// Satisfies a request for a resource from the cache, if the resource is available; otherwise, sends a request for a resource to the server.
                CacheIfAvailable = 3,

                /// Satisfies a request by using the cached copy of the resource if the timestamp is the same as the timestamp of the resource on the server;
                /// otherwise, the resource is downloaded from the server, presented to the caller, and stored in the cache
                Revalidate = 4,

                /// Satisfies a request by using the server.
                Reload = 5,

                /// Never satisfies a request by using resources from the cache and does not cache resources. If the resource is present in the local cache, it is removed
                NoCacheNoStore = 6
            };

            /// Dummy class making it possible linking ported code with RequestCachePolicy references, but not executing it.
            /// Contains no properly implemented members.
            /// Objects of this class should only be allocated using System::MakeObject() function.
            /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
            /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
            class ASPOSECPP_SHARED_CLASS RequestCachePolicy : public System::Object
            {
                /// ThisType alias
                typedef RequestCachePolicy ThisType;
                ///BaseType alias
                typedef System::Object BaseType;

                /// ThisTypeBaseTypesInfo alias
                typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
                ///RTTI info
                RTTI_INFO(System::Net::Cache::RequestCachePolicy, ThisTypeBaseTypesInfo);

            public:

                /// Gets the RequestCacheLevel value specified when this instance was constructed.
                /// Not Implemented.
                RequestCacheLevel get_Level() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

                /// Initializes a new instance of the RequestCachePolicy class.
                /// Not Implemented.
                RequestCachePolicy() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

                /// Initializes a new instance of the RequestCachePolicy class  using the specified cache policy.
                /// Not Implemented.
                RequestCachePolicy(RequestCacheLevel level) { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

                /// Returns a string representation of this instance. (Overrides Object::ToString())
                /// Not Implemented.
                String ToString() ASPOSE_CONST override { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

            };

        } //namespace Cache
    } // namespace Net
} // namespace System

#endif
