/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.CircularRedirectException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_CIRCULARREDIRECTEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_CIRCULARREDIRECTEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { class RedirectException; } } } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <org/apache/http/client/RedirectException.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client {

	class CircularRedirectException;
	class CircularRedirectException
		: public object<CircularRedirectException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit CircularRedirectException(jobject jobj)
		: object<CircularRedirectException>(jobj)
		{
		}

		operator local_ref<org::apache::http::client::RedirectException>() const;


		CircularRedirectException();
		CircularRedirectException(local_ref< java::lang::String > const&);
		CircularRedirectException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
	}; //class CircularRedirectException

} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_CIRCULARREDIRECTEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_CIRCULARREDIRECTEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_CIRCULARREDIRECTEXCEPTION_HPP_IMPL

namespace j2cpp {



org::apache::http::client::CircularRedirectException::operator local_ref<org::apache::http::client::RedirectException>() const
{
	return local_ref<org::apache::http::client::RedirectException>(get_jobject());
}


org::apache::http::client::CircularRedirectException::CircularRedirectException()
: object<org::apache::http::client::CircularRedirectException>(
	call_new_object<
		org::apache::http::client::CircularRedirectException::J2CPP_CLASS_NAME,
		org::apache::http::client::CircularRedirectException::J2CPP_METHOD_NAME(0),
		org::apache::http::client::CircularRedirectException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



org::apache::http::client::CircularRedirectException::CircularRedirectException(local_ref< java::lang::String > const &a0)
: object<org::apache::http::client::CircularRedirectException>(
	call_new_object<
		org::apache::http::client::CircularRedirectException::J2CPP_CLASS_NAME,
		org::apache::http::client::CircularRedirectException::J2CPP_METHOD_NAME(1),
		org::apache::http::client::CircularRedirectException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



org::apache::http::client::CircularRedirectException::CircularRedirectException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<org::apache::http::client::CircularRedirectException>(
	call_new_object<
		org::apache::http::client::CircularRedirectException::J2CPP_CLASS_NAME,
		org::apache::http::client::CircularRedirectException::J2CPP_METHOD_NAME(2),
		org::apache::http::client::CircularRedirectException::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}



J2CPP_DEFINE_CLASS(org::apache::http::client::CircularRedirectException,"org/apache/http/client/CircularRedirectException")
J2CPP_DEFINE_METHOD(org::apache::http::client::CircularRedirectException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::client::CircularRedirectException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::CircularRedirectException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_CIRCULARREDIRECTEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
