/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.client.DefaultRedirectHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTREDIRECTHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTREDIRECTHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace net { class URI; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { class RedirectHandler; } } } } }


#include <java/lang/Object.hpp>
#include <java/net/URI.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/client/RedirectHandler.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class DefaultRedirectHandler;
	class DefaultRedirectHandler
		: public object<DefaultRedirectHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit DefaultRedirectHandler(jobject jobj)
		: object<DefaultRedirectHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::client::RedirectHandler>() const;


		DefaultRedirectHandler();
		jboolean isRedirectRequested(local_ref< org::apache::http::HttpResponse >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
		local_ref< java::net::URI > getLocationURI(local_ref< org::apache::http::HttpResponse >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
	}; //class DefaultRedirectHandler

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTREDIRECTHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTREDIRECTHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTREDIRECTHANDLER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::client::DefaultRedirectHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::client::DefaultRedirectHandler::operator local_ref<org::apache::http::client::RedirectHandler>() const
{
	return local_ref<org::apache::http::client::RedirectHandler>(get_jobject());
}


org::apache::http::impl::client::DefaultRedirectHandler::DefaultRedirectHandler()
: object<org::apache::http::impl::client::DefaultRedirectHandler>(
	call_new_object<
		org::apache::http::impl::client::DefaultRedirectHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultRedirectHandler::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::client::DefaultRedirectHandler::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


jboolean org::apache::http::impl::client::DefaultRedirectHandler::isRedirectRequested(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return call_method<
		org::apache::http::impl::client::DefaultRedirectHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultRedirectHandler::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::client::DefaultRedirectHandler::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject(), a0, a1);
}

local_ref< java::net::URI > org::apache::http::impl::client::DefaultRedirectHandler::getLocationURI(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return call_method<
		org::apache::http::impl::client::DefaultRedirectHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultRedirectHandler::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::client::DefaultRedirectHandler::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::net::URI > >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::client::DefaultRedirectHandler,"org/apache/http/impl/client/DefaultRedirectHandler")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultRedirectHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultRedirectHandler,1,"isRedirectRequested","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultRedirectHandler,2,"getLocationURI","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Ljava/net/URI;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTREDIRECTHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION