/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.client.DefaultHttpRequestRetryHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTHTTPREQUESTRETRYHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTHTTPREQUESTRETRYHANDLER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { class HttpRequestRetryHandler; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class IOException; } } }


#include <java/io/IOException.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/http/client/HttpRequestRetryHandler.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class DefaultHttpRequestRetryHandler;
	class DefaultHttpRequestRetryHandler
		: public object<DefaultHttpRequestRetryHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit DefaultHttpRequestRetryHandler(jobject jobj)
		: object<DefaultHttpRequestRetryHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::client::HttpRequestRetryHandler>() const;


		DefaultHttpRequestRetryHandler(jint, jboolean);
		DefaultHttpRequestRetryHandler();
		jboolean retryRequest(local_ref< java::io::IOException >  const&, jint, local_ref< org::apache::http::protocol::HttpContext >  const&);
		jboolean isRequestSentRetryEnabled();
		jint getRetryCount();
	}; //class DefaultHttpRequestRetryHandler

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTHTTPREQUESTRETRYHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTHTTPREQUESTRETRYHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTHTTPREQUESTRETRYHANDLER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::client::DefaultHttpRequestRetryHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::client::DefaultHttpRequestRetryHandler::operator local_ref<org::apache::http::client::HttpRequestRetryHandler>() const
{
	return local_ref<org::apache::http::client::HttpRequestRetryHandler>(get_jobject());
}


org::apache::http::impl::client::DefaultHttpRequestRetryHandler::DefaultHttpRequestRetryHandler(jint a0, jboolean a1)
: object<org::apache::http::impl::client::DefaultHttpRequestRetryHandler>(
	call_new_object<
		org::apache::http::impl::client::DefaultHttpRequestRetryHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultHttpRequestRetryHandler::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::client::DefaultHttpRequestRetryHandler::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



org::apache::http::impl::client::DefaultHttpRequestRetryHandler::DefaultHttpRequestRetryHandler()
: object<org::apache::http::impl::client::DefaultHttpRequestRetryHandler>(
	call_new_object<
		org::apache::http::impl::client::DefaultHttpRequestRetryHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultHttpRequestRetryHandler::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::client::DefaultHttpRequestRetryHandler::J2CPP_METHOD_SIGNATURE(1)>
	()
)
{
}


jboolean org::apache::http::impl::client::DefaultHttpRequestRetryHandler::retryRequest(local_ref< java::io::IOException > const &a0, jint a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return call_method<
		org::apache::http::impl::client::DefaultHttpRequestRetryHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultHttpRequestRetryHandler::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::client::DefaultHttpRequestRetryHandler::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

jboolean org::apache::http::impl::client::DefaultHttpRequestRetryHandler::isRequestSentRetryEnabled()
{
	return call_method<
		org::apache::http::impl::client::DefaultHttpRequestRetryHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultHttpRequestRetryHandler::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::client::DefaultHttpRequestRetryHandler::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject());
}

jint org::apache::http::impl::client::DefaultHttpRequestRetryHandler::getRetryCount()
{
	return call_method<
		org::apache::http::impl::client::DefaultHttpRequestRetryHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultHttpRequestRetryHandler::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::client::DefaultHttpRequestRetryHandler::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::client::DefaultHttpRequestRetryHandler,"org/apache/http/impl/client/DefaultHttpRequestRetryHandler")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpRequestRetryHandler,0,"<init>","(IZ)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpRequestRetryHandler,1,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpRequestRetryHandler,2,"retryRequest","(Ljava/io/IOException;ILorg/apache/http/protocol/HttpContext;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpRequestRetryHandler,3,"isRequestSentRetryEnabled","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpRequestRetryHandler,4,"getRetryCount","()I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTHTTPREQUESTRETRYHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
