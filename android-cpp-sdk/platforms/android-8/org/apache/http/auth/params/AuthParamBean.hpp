/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.auth.params.AuthParamBean
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_PARAMS_AUTHPARAMBEAN_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_AUTH_PARAMS_AUTHPARAMBEAN_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpAbstractParamBean; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <org/apache/http/params/HttpAbstractParamBean.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace auth { namespace params {

	class AuthParamBean;
	class AuthParamBean
		: public object<AuthParamBean>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit AuthParamBean(jobject jobj)
		: object<AuthParamBean>(jobj)
		{
		}

		operator local_ref<org::apache::http::params::HttpAbstractParamBean>() const;


		AuthParamBean(local_ref< org::apache::http::params::HttpParams > const&);
		void setCredentialCharset(local_ref< java::lang::String >  const&);
	}; //class AuthParamBean

} //namespace params
} //namespace auth
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_PARAMS_AUTHPARAMBEAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_PARAMS_AUTHPARAMBEAN_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_AUTH_PARAMS_AUTHPARAMBEAN_HPP_IMPL

namespace j2cpp {



org::apache::http::auth::params::AuthParamBean::operator local_ref<org::apache::http::params::HttpAbstractParamBean>() const
{
	return local_ref<org::apache::http::params::HttpAbstractParamBean>(get_jobject());
}


org::apache::http::auth::params::AuthParamBean::AuthParamBean(local_ref< org::apache::http::params::HttpParams > const &a0)
: object<org::apache::http::auth::params::AuthParamBean>(
	call_new_object<
		org::apache::http::auth::params::AuthParamBean::J2CPP_CLASS_NAME,
		org::apache::http::auth::params::AuthParamBean::J2CPP_METHOD_NAME(0),
		org::apache::http::auth::params::AuthParamBean::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


void org::apache::http::auth::params::AuthParamBean::setCredentialCharset(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::auth::params::AuthParamBean::J2CPP_CLASS_NAME,
		org::apache::http::auth::params::AuthParamBean::J2CPP_METHOD_NAME(1),
		org::apache::http::auth::params::AuthParamBean::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::auth::params::AuthParamBean,"org/apache/http/auth/params/AuthParamBean")
J2CPP_DEFINE_METHOD(org::apache::http::auth::params::AuthParamBean,0,"<init>","(Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::params::AuthParamBean,1,"setCredentialCharset","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_PARAMS_AUTHPARAMBEAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
