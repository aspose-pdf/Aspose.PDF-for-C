#ifndef __dummy_classes_h__
#define __dummy_classes_h__

#include "system/event.h"
#include "system/eventargs.h"
#include "system/eventhandler.h"
#include "system/uri.h"
#include "system/io/text_writer.h"
#include "system/collections/dictionary.h"


#include "fwd.h"

namespace System {
    namespace Web {

        class HttpRequest;
        class HttpResponse;

        class HttpContext : public Object
        {
        public:
            static System::SharedPtr<HttpContext> get_Current(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            static void set_Current(System::SharedPtr<HttpContext> context){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

            System::SharedPtr<HttpRequest> get_Request(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
        };

        class HttpRequest : public Object
        {
        public:
            System::String get_ApplicationPath(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            System::String MapPath(const System::String& virtualPath){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
        };

        class HttpResponse : public Object
        {
        public:
            HttpResponse(System::SharedPtr<System::IO::TextWriter> writer) : Object() { }
            void AddHeader(String name, String value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            void BinaryWrite(System::ArrayPtr<uint8_t> buffer){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            void Clear(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            void ClearContent(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            void ClearHeaders(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            void End(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            SharedPtr<System::IO::Stream> get_OutputStream(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            void set_ContentType(String value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
        };

        namespace UI {
            namespace WebControls {

                class DataGrid : public Object
                {
                public:
                    typedef SharedPtr<DataGrid> ptr;
                };
            }
        }

    }

    namespace Net {
        class NetworkCredential;

        class ICredentials : public System::Object
        {
        public:
            virtual SharedPtr<NetworkCredential> GetCredential(Uri uri, String authType) = 0;
            RTTI_INFO_DECL();
        };

        class ICredentialsByHost : public System::Object
        {
            virtual SharedPtr<NetworkCredential> GetCredential(String host, int port, String authenticationType) = 0;
            RTTI_INFO_DECL();
        };

        class NetworkCredential : public ICredentials, public ICredentialsByHost
        {
        public:
            NetworkCredential();
            NetworkCredential(String userName, String password);
            NetworkCredential(String userName, String password, String domain);

            String get_Domain();
            void set_Domain(String value);

            String get_Password();
            void set_Password(String value);

            String get_UserName();
            void set_UserName(String value);

            SharedPtr<NetworkCredential> GetCredential(Uri uri, String authType);
            SharedPtr<NetworkCredential> GetCredential(String host, int port, String authenticationType);
        };

        enum class HttpRequestHeader
        {
            // Summary:
            //     The Cache-Control header, which specifies directives that must be obeyed
            //     by all cache control mechanisms along the request/response chain.
            CacheControl = 0,
            //
            // Summary:
            //     The Connection header, which specifies options that are desired for a particular
            //     connection.
            Connection = 1,
            //
            // Summary:
            //     The Date header, which specifies the date and time at which the request originated.
            Date = 2,
            //
            // Summary:
            //     The Keep-Alive header, which specifies a parameter used into order to maintain
            //     a persistent connection.
            KeepAlive = 3,
            //
            // Summary:
            //     The Pragma header, which specifies implementation-specific directives that
            //     might apply to any agent along the request/response chain.
            Pragma = 4,
            //
            // Summary:
            //     The Trailer header, which specifies the header fields present in the trailer
            //     of a message encoded with chunked transfer-coding.
            Trailer = 5,
            //
            // Summary:
            //     The Transfer-Encoding header, which specifies what (if any) type of transformation
            //     that has been applied to the message body.
            TransferEncoding = 6,
            //
            // Summary:
            //     The Upgrade header, which specifies additional communications protocols that
            //     the client supports.
            Upgrade = 7,
            //
            // Summary:
            //     The Via header, which specifies intermediate protocols to be used by gateway
            //     and proxy agents.
            Via = 8,
            //
            // Summary:
            //     The Warning header, which specifies additional information about that status
            //     or transformation of a message that might not be reflected in the message.
            Warning = 9,
            //
            // Summary:
            //     The Allow header, which specifies the set of HTTP methods supported.
            Allow = 10,
            //
            // Summary:
            //     The Content-Length header, which specifies the length, in bytes, of the accompanying
            //     body data.
            ContentLength = 11,
            //
            // Summary:
            //     The Content-Type header, which specifies the MIME type of the accompanying
            //     body data.
            ContentType = 12,
            //
            // Summary:
            //     The Content-Encoding header, which specifies the encodings that have been
            //     applied to the accompanying body data.
            ContentEncoding = 13,
            //
            // Summary:
            //     The Content-Langauge header, which specifies the natural language(s) of the
            //     accompanying body data.
            ContentLanguage = 14,
            //
            // Summary:
            //     The Content-Location header, which specifies a URI from which the accompanying
            //     body may be obtained.
            ContentLocation = 15,
            //
            // Summary:
            //     The Content-MD5 header, which specifies the MD5 digest of the accompanying
            //     body data, for the purpose of providing an end-to-end message integrity check.
            ContentMd5 = 16,
            //
            // Summary:
            //     The Content-Range header, which specifies where in the full body the accompanying
            //     partial body data should be applied.
            ContentRange = 17,
            //
            // Summary:
            //     The Expires header, which specifies the date and time after which the accompanying
            //     body data should be considered stale.
            Expires = 18,
            //
            // Summary:
            //     The Last-Modified header, which specifies the date and time at which the
            //     accompanying body data was last modified.
            LastModified = 19,
            //
            // Summary:
            //     The Accept header, which specifies the MIME types that are acceptable for
            //     the response.
            Accept = 20,
            //
            // Summary:
            //     The Accept-Charset header, which specifies the character sets that are acceptable
            //     for the response.
            AcceptCharset = 21,
            //
            // Summary:
            //     The Accept-Encoding header, which specifies the content encodings that are
            //     acceptable for the response.
            AcceptEncoding = 22,
            //
            // Summary:
            //     The Accept-Langauge header, which specifies that natural languages that are
            //     preferred for the response.
            AcceptLanguage = 23,
            //
            // Summary:
            //     The Authorization header, which specifies the credentials that the client
            //     presents in order to authenticate itself to the server.
            Authorization = 24,
            //
            // Summary:
            //     The Cookie header, which specifies cookie data presented to the server.
            Cookie = 25,
            //
            // Summary:
            //     The Expect header, which specifies particular server behaviors that are required
            //     by the client.
            Expect = 26,
            //
            // Summary:
            //     The From header, which specifies an Internet E-mail address for the human
            //     user who controls the requesting user agent.
            From = 27,
            //
            // Summary:
            //     The Host header, which specifies the host name and port number of the resource
            //     being requested.
            Host = 28,
            //
            // Summary:
            //     The If-Match header, which specifies that the requested operation should
            //     be performed only if the client's cached copy of the indicated resource is
            //     current.
            IfMatch = 29,
            //
            // Summary:
            //     The If-Modified-Since header, which specifies that the requested operation
            //     should be performed only if the requested resource has been modified since
            //     the indicated data and time.
            IfModifiedSince = 30,
            //
            // Summary:
            //     The If-None-Match header, which specifies that the requested operation should
            //     be performed only if none of client's cached copies of the indicated resources
            //     are current.
            IfNoneMatch = 31,
            //
            // Summary:
            //     The If-Range header, which specifies that only the specified range of the
            //     requested resource should be sent, if the client's cached copy is current.
            IfRange = 32,
            //
            // Summary:
            //     The If-Unmodified-Since header, which specifies that the requested operation
            //     should be performed only if the requested resource has not been modified
            //     since the indicated date and time.
            IfUnmodifiedSince = 33,
            //
            // Summary:
            //     The Max-Forwards header, which specifies an integer indicating the remaining
            //     number of times that this request may be forwarded.
            MaxForwards = 34,
            //
            // Summary:
            //     The Proxy-Authorization header, which specifies the credentials that the
            //     client presents in order to authenticate itself to a proxy.
            ProxyAuthorization = 35,
            //
            // Summary:
            //     The Referer header, which specifies the URI of the resource from which the
            //     request URI was obtained.
            Referer = 36,
            //
            // Summary:
            //     The Range header, which specifies the the sub-range(s) of the response that
            //     the client requests be returned in lieu of the entire response.
            Range = 37,
            //
            // Summary:
            //     The TE header, which specifies the transfer encodings that are acceptable
            //     for the response.
            Te = 38,
            //
            // Summary:
            //     The Translate header, a Microsoft extension to the HTTP specification used
            //     in conjunction with WebDAV functionality.
            Translate = 39,
            //
            // Summary:
            //     The User-Agent header, which specifies information about the client agent.
            UserAgent = 40
        };

        enum class HttpResponseHeader
        {
            // Summary:
            //     The Cache-Control header, which specifies caching directives that must be
            //     obeyed by all caching mechanisms along the request/response chain.
            CacheControl = 0,
            //
            // Summary:
            //     The Connection header, which specifies options that are desired for a particular
            //     connection.
            Connection = 1,
            //
            // Summary:
            //     The Date header, which specifies the date and time at which the response
            //     originated.
            Date = 2,
            //
            // Summary:
            //     The Keep-Alive header, which specifies a parameter to be used to maintain
            //     a persistent connection.
            KeepAlive = 3,
            //
            // Summary:
            //     The Pragma header, which specifies implementation-specific directives that
            //     might apply to any agent along the request/response chain.
            Pragma = 4,
            //
            // Summary:
            //     The Trailer header, which specifies that the indicated header fields are
            //     present in the trailer of a message that is encoded with chunked transfer-coding.
            Trailer = 5,
            //
            // Summary:
            //     The Transfer-Encoding header, which specifies what (if any) type of transformation
            //     has been applied to the message body.
            TransferEncoding = 6,
            //
            // Summary:
            //     The Upgrade header, which specifies additional communications protocols that
            //     the client supports.
            Upgrade = 7,
            //
            // Summary:
            //     The Via header, which specifies intermediate protocols to be used by gateway
            //     and proxy agents.
            Via = 8,
            //
            // Summary:
            //     The Warning header, which specifies additional information about that status
            //     or transformation of a message that might not be reflected in the message.
            Warning = 9,
            //
            // Summary:
            //     The Allow header, which specifies the set of HTTP methods that are supported.
            Allow = 10,
            //
            // Summary:
            //     The Content-Length header, which specifies the length, in bytes, of the accompanying
            //     body data.
            ContentLength = 11,
            //
            // Summary:
            //     The Content-Type header, which specifies the MIME type of the accompanying
            //     body data.
            ContentType = 12,
            //
            // Summary:
            //     The Content-Encoding header, which specifies the encodings that have been
            //     applied to the accompanying body data.
            ContentEncoding = 13,
            //
            // Summary:
            //     The Content-Langauge header, which specifies the natural language or languages
            //     of the accompanying body data.
            ContentLanguage = 14,
            //
            // Summary:
            //     The Content-Location header, which specifies a URI from which the accompanying
            //     body can be obtained.
            ContentLocation = 15,
            //
            // Summary:
            //     The Content-MD5 header, which specifies the MD5 digest of the accompanying
            //     body data, for the purpose of providing an end-to-end message integrity check.
            ContentMd5 = 16,
            //
            // Summary:
            //     The Range header, which specifies the subrange or subranges of the response
            //     that the client requests be returned in lieu of the entire response.
            ContentRange = 17,
            //
            // Summary:
            //     The Expires header, which specifies the date and time after which the accompanying
            //     body data should be considered stale.
            Expires = 18,
            //
            // Summary:
            //     The Last-Modified header, which specifies the date and time at which the
            //     accompanying body data was last modified.
            LastModified = 19,
            //
            // Summary:
            //     The Accept-Ranges header, which specifies the range that is accepted by the
            //     server.
            AcceptRanges = 20,
            //
            // Summary:
            //     The Age header, which specifies the time, in seconds, since the response
            //     was generated by the originating server.
            Age = 21,
            //
            // Summary:
            //     The Etag header, which specifies the current value for the requested variant.
            ETag = 22,
            //
            // Summary:
            //     The Location header, which specifies a URI to which the client is redirected
            //     to obtain the requested resource.
            Location = 23,
            //
            // Summary:
            //     The Proxy-Authenticate header, which specifies that the client must authenticate
            //     itself to a proxy.
            ProxyAuthenticate = 24,
            //
            // Summary:
            //     The Retry-After header, which specifies a time (in seconds), or a date and
            //     time, after which the client can retry its request.
            RetryAfter = 25,
            //
            // Summary:
            //     The Server header, which specifies information about the originating server
            //     agent.
            Server = 26,
            //
            // Summary:
            //     The Set-Cookie header, which specifies cookie data that is presented to the
            //     client.
            SetCookie = 27,
            //
            // Summary:
            //     The Vary header, which specifies the request headers that are used to determine
            //     whether a cached response is fresh.
            Vary = 28,
            //
            // Summary:
            //     The WWW-Authenticate header, which specifies that the client must authenticate
            //     itself to the server.
            WwwAuthenticate = 29
        };

        enum class HttpStatusCode
        {

            //
            // Informational 1xx
            //
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            Continue = 100,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            SwitchingProtocols = 101,

            //
            // Successful 2xx
            //
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            OK = 200,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            Created = 201,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            Accepted = 202,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            NonAuthoritativeInformation = 203,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            NoContent = 204,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            ResetContent = 205,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            PartialContent = 206,

            //
            // Redirection 3xx
            //
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            MultipleChoices = 300,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            Ambiguous = 300,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            MovedPermanently = 301,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            Moved = 301,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            Found = 302,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            Redirect = 302,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            SeeOther = 303,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            RedirectMethod = 303,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            NotModified = 304,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            UseProxy = 305,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            Unused = 306,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            TemporaryRedirect = 307,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            RedirectKeepVerb = 307,

            //
            // Client Error 4xx
            //
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            BadRequest = 400,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            Unauthorized = 401,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            PaymentRequired = 402,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            Forbidden = 403,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            NotFound = 404,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            MethodNotAllowed = 405,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            NotAcceptable = 406,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            ProxyAuthenticationRequired = 407,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            RequestTimeout = 408,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            Conflict = 409,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            Gone = 410,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            LengthRequired = 411,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            PreconditionFailed = 412,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            RequestEntityTooLarge = 413,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            RequestUriTooLong = 414,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            UnsupportedMediaType = 415,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            RequestedRangeNotSatisfiable = 416,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            ExpectationFailed = 417,

            UpgradeRequired = 426,

            //
            // Server Error 5xx
            //
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            InternalServerError = 500,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            NotImplemented = 501,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            BadGateway = 502,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            ServiceUnavailable = 503,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            GatewayTimeout = 504,
            /// <devdoc>
            ///    <para>[To be supplied.]</para>
            /// </devdoc>
            HttpVersionNotSupported = 505,

        };

        class WebHeaderCollection : public System::Collections::Generic::Dictionary<String, String>
        {
        public:
            void Add(const String &header){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            void Add(HttpRequestHeader header, const String &value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            void Add(HttpResponseHeader header, const String &value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            virtual void Add(const String &name, const String &value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
        };

        class WebResponse : public Object
        {
        protected:
            WebResponse(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

        public:
            virtual int64_t get_ContentLength(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            virtual void set_ContentLength(int64_t value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            virtual String get_ContentType(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            virtual void set_ContentType(String value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            virtual SharedPtr<WebHeaderCollection> get_Headers(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            virtual bool get_IsFromCache(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            virtual bool get_IsMutuallyAuthenticated(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            virtual SharedPtr<Uri> get_ResponseUri(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            virtual void Close(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            virtual SharedPtr<System::IO::Stream> GetResponseStream(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
        };

        class HttpWebResponse : public WebResponse
        {
        public:
            HttpStatusCode get_StatusCode() { throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
        };

        class WebRequest : public Object
        {
        public:
            static SharedPtr<WebRequest> Create(String requestUriString){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            static SharedPtr<WebRequest> Create(SharedPtr<Uri> requestUri){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

            virtual int64_t   get_ContentLength(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            virtual void        set_ContentLength(int64_t value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            virtual String  get_ContentType(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            virtual void    set_ContentType(String value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            virtual SharedPtr<ICredentials> get_Credentials(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            virtual void set_Credentials(SharedPtr<ICredentials> credentials){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

            virtual SharedPtr<WebHeaderCollection> get_Headers(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            virtual void set_Headers(SharedPtr<WebHeaderCollection> headers){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            virtual String  get_Method(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            virtual void    set_Method(String value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            virtual int get_Timeout(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            virtual void set_Timeout(int timeout){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

            virtual SharedPtr<System::IO::Stream> GetRequestStream(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            virtual SharedPtr<WebResponse> GetResponse(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
        };

        class HttpWebRequest : public WebRequest
        {
        public:

            virtual int64_t   get_ContentLength(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            virtual void        set_ContentLength(int64_t value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            virtual String  get_ContentType(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            virtual void    set_ContentType(String value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            virtual SharedPtr<WebHeaderCollection> get_Headers(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            virtual void set_Headers(SharedPtr<WebHeaderCollection> headers){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            virtual String  get_Method(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            virtual void    set_Method(String value){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            String  get_Accept()
            {
                throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
            }
            void    set_Accept(String)
            {
                throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
            }

            SharedPtr<Uri> get_Address(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

            String  get_UserAgent()
            {
                throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
            }
            void    set_UserAgent(String)
            {
                throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
            }

            virtual SharedPtr<System::IO::Stream> GetRequestStream(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
            virtual SharedPtr<WebResponse> GetResponse(){ throw NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

        };
    }
}

#endif
