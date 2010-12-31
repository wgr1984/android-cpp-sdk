/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.protocol.HttpExpectationVerifier
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPEXPECTATIONVERIFIER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPEXPECTATIONVERIFIER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace protocol {

	class HttpExpectationVerifier;
	class HttpExpectationVerifier
		: public object<HttpExpectationVerifier>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit HttpExpectationVerifier(jobject jobj)
		: object<HttpExpectationVerifier>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void verify(local_ref< org::apache::http::HttpRequest >  const&, local_ref< org::apache::http::HttpResponse >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
	}; //class HttpExpectationVerifier

} //namespace protocol
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPEXPECTATIONVERIFIER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPEXPECTATIONVERIFIER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPEXPECTATIONVERIFIER_HPP_IMPL

namespace j2cpp {



org::apache::http::protocol::HttpExpectationVerifier::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void org::apache::http::protocol::HttpExpectationVerifier::verify(local_ref< org::apache::http::HttpRequest > const &a0, local_ref< org::apache::http::HttpResponse > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return call_method<
		org::apache::http::protocol::HttpExpectationVerifier::J2CPP_CLASS_NAME,
		org::apache::http::protocol::HttpExpectationVerifier::J2CPP_METHOD_NAME(0),
		org::apache::http::protocol::HttpExpectationVerifier::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(org::apache::http::protocol::HttpExpectationVerifier,"org/apache/http/protocol/HttpExpectationVerifier")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpExpectationVerifier,0,"verify","(Lorg/apache/http/HttpRequest;Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPEXPECTATIONVERIFIER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
