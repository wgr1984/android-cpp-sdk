/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.cookie.params.CookieSpecParamBean
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPARAMBEAN_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPARAMBEAN_HPP_DECL


namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpAbstractParamBean; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/util/Collection.hpp>
#include <org/apache/http/params/HttpAbstractParamBean.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace cookie { namespace params {

	class CookieSpecParamBean;
	class CookieSpecParamBean
		: public object<CookieSpecParamBean>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit CookieSpecParamBean(jobject jobj)
		: object<CookieSpecParamBean>(jobj)
		{
		}

		operator local_ref<org::apache::http::params::HttpAbstractParamBean>() const;


		CookieSpecParamBean(local_ref< org::apache::http::params::HttpParams > const&);
		void setDatePatterns(local_ref< java::util::Collection >  const&);
		void setSingleHeader(jboolean);
	}; //class CookieSpecParamBean

} //namespace params
} //namespace cookie
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPARAMBEAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPARAMBEAN_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPARAMBEAN_HPP_IMPL

namespace j2cpp {



org::apache::http::cookie::params::CookieSpecParamBean::operator local_ref<org::apache::http::params::HttpAbstractParamBean>() const
{
	return local_ref<org::apache::http::params::HttpAbstractParamBean>(get_jobject());
}


org::apache::http::cookie::params::CookieSpecParamBean::CookieSpecParamBean(local_ref< org::apache::http::params::HttpParams > const &a0)
: object<org::apache::http::cookie::params::CookieSpecParamBean>(
	call_new_object<
		org::apache::http::cookie::params::CookieSpecParamBean::J2CPP_CLASS_NAME,
		org::apache::http::cookie::params::CookieSpecParamBean::J2CPP_METHOD_NAME(0),
		org::apache::http::cookie::params::CookieSpecParamBean::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


void org::apache::http::cookie::params::CookieSpecParamBean::setDatePatterns(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		org::apache::http::cookie::params::CookieSpecParamBean::J2CPP_CLASS_NAME,
		org::apache::http::cookie::params::CookieSpecParamBean::J2CPP_METHOD_NAME(1),
		org::apache::http::cookie::params::CookieSpecParamBean::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::cookie::params::CookieSpecParamBean::setSingleHeader(jboolean a0)
{
	return call_method<
		org::apache::http::cookie::params::CookieSpecParamBean::J2CPP_CLASS_NAME,
		org::apache::http::cookie::params::CookieSpecParamBean::J2CPP_METHOD_NAME(2),
		org::apache::http::cookie::params::CookieSpecParamBean::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::cookie::params::CookieSpecParamBean,"org/apache/http/cookie/params/CookieSpecParamBean")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::params::CookieSpecParamBean,0,"<init>","(Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::params::CookieSpecParamBean,1,"setDatePatterns","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::params::CookieSpecParamBean,2,"setSingleHeader","(Z)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPARAMBEAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
