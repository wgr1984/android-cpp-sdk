/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.DefaultHttpRequestFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPREQUESTFACTORY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPREQUESTFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequestFactory; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class RequestLine; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/HttpRequestFactory.hpp>
#include <org/apache/http/RequestLine.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl {

	class DefaultHttpRequestFactory;
	class DefaultHttpRequestFactory
		: public object<DefaultHttpRequestFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit DefaultHttpRequestFactory(jobject jobj)
		: object<DefaultHttpRequestFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HttpRequestFactory>() const;


		DefaultHttpRequestFactory();
		local_ref< org::apache::http::HttpRequest > newHttpRequest(local_ref< org::apache::http::RequestLine >  const&);
		local_ref< org::apache::http::HttpRequest > newHttpRequest(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
	}; //class DefaultHttpRequestFactory

} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPREQUESTFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPREQUESTFACTORY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPREQUESTFACTORY_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::DefaultHttpRequestFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::DefaultHttpRequestFactory::operator local_ref<org::apache::http::HttpRequestFactory>() const
{
	return local_ref<org::apache::http::HttpRequestFactory>(get_jobject());
}


org::apache::http::impl::DefaultHttpRequestFactory::DefaultHttpRequestFactory()
: object<org::apache::http::impl::DefaultHttpRequestFactory>(
	call_new_object<
		org::apache::http::impl::DefaultHttpRequestFactory::J2CPP_CLASS_NAME,
		org::apache::http::impl::DefaultHttpRequestFactory::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::DefaultHttpRequestFactory::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< org::apache::http::HttpRequest > org::apache::http::impl::DefaultHttpRequestFactory::newHttpRequest(local_ref< org::apache::http::RequestLine > const &a0)
{
	return call_method<
		org::apache::http::impl::DefaultHttpRequestFactory::J2CPP_CLASS_NAME,
		org::apache::http::impl::DefaultHttpRequestFactory::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::DefaultHttpRequestFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::HttpRequest > >
	(get_jobject(), a0);
}

local_ref< org::apache::http::HttpRequest > org::apache::http::impl::DefaultHttpRequestFactory::newHttpRequest(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::apache::http::impl::DefaultHttpRequestFactory::J2CPP_CLASS_NAME,
		org::apache::http::impl::DefaultHttpRequestFactory::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::DefaultHttpRequestFactory::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::apache::http::HttpRequest > >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::DefaultHttpRequestFactory,"org/apache/http/impl/DefaultHttpRequestFactory")
J2CPP_DEFINE_METHOD(org::apache::http::impl::DefaultHttpRequestFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::DefaultHttpRequestFactory,1,"newHttpRequest","(Lorg/apache/http/RequestLine;)Lorg/apache/http/HttpRequest;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::DefaultHttpRequestFactory,2,"newHttpRequest","(Ljava/lang/String;Ljava/lang/String;)Lorg/apache/http/HttpRequest;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPREQUESTFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
