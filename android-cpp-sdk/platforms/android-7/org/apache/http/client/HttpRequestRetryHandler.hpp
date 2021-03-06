/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.HttpRequestRetryHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPREQUESTRETRYHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPREQUESTRETRYHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }


#include <java/io/IOException.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client {

	class HttpRequestRetryHandler;
	class HttpRequestRetryHandler
		: public object<HttpRequestRetryHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit HttpRequestRetryHandler(jobject jobj)
		: object<HttpRequestRetryHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean retryRequest(local_ref< java::io::IOException >  const&, jint, local_ref< org::apache::http::protocol::HttpContext >  const&);
	}; //class HttpRequestRetryHandler

} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPREQUESTRETRYHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPREQUESTRETRYHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPREQUESTRETRYHANDLER_HPP_IMPL

namespace j2cpp {



org::apache::http::client::HttpRequestRetryHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean org::apache::http::client::HttpRequestRetryHandler::retryRequest(local_ref< java::io::IOException > const &a0, jint a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return call_method<
		org::apache::http::client::HttpRequestRetryHandler::J2CPP_CLASS_NAME,
		org::apache::http::client::HttpRequestRetryHandler::J2CPP_METHOD_NAME(0),
		org::apache::http::client::HttpRequestRetryHandler::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::HttpRequestRetryHandler,"org/apache/http/client/HttpRequestRetryHandler")
J2CPP_DEFINE_METHOD(org::apache::http::client::HttpRequestRetryHandler,0,"retryRequest","(Ljava/io/IOException;ILorg/apache/http/protocol/HttpContext;)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPREQUESTRETRYHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
