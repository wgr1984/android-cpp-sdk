/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.cookie.CookieIdentityComparator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIEIDENTITYCOMPARATOR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIEIDENTITYCOMPARATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Comparator; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>
#include <org/apache/http/cookie/Cookie.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace cookie {

	class CookieIdentityComparator;
	class CookieIdentityComparator
		: public object<CookieIdentityComparator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit CookieIdentityComparator(jobject jobj)
		: object<CookieIdentityComparator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::util::Comparator>() const;


		CookieIdentityComparator();
		jint compare(local_ref< org::apache::http::cookie::Cookie >  const&, local_ref< org::apache::http::cookie::Cookie >  const&);
		jint compare(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
	}; //class CookieIdentityComparator

} //namespace cookie
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIEIDENTITYCOMPARATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIEIDENTITYCOMPARATOR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIEIDENTITYCOMPARATOR_HPP_IMPL

namespace j2cpp {



org::apache::http::cookie::CookieIdentityComparator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::cookie::CookieIdentityComparator::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

org::apache::http::cookie::CookieIdentityComparator::operator local_ref<java::util::Comparator>() const
{
	return local_ref<java::util::Comparator>(get_jobject());
}


org::apache::http::cookie::CookieIdentityComparator::CookieIdentityComparator()
: object<org::apache::http::cookie::CookieIdentityComparator>(
	call_new_object<
		org::apache::http::cookie::CookieIdentityComparator::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieIdentityComparator::J2CPP_METHOD_NAME(0),
		org::apache::http::cookie::CookieIdentityComparator::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


jint org::apache::http::cookie::CookieIdentityComparator::compare(local_ref< org::apache::http::cookie::Cookie > const &a0, local_ref< org::apache::http::cookie::Cookie > const &a1)
{
	return call_method<
		org::apache::http::cookie::CookieIdentityComparator::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieIdentityComparator::J2CPP_METHOD_NAME(1),
		org::apache::http::cookie::CookieIdentityComparator::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject(), a0, a1);
}

jint org::apache::http::cookie::CookieIdentityComparator::compare(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::apache::http::cookie::CookieIdentityComparator::J2CPP_CLASS_NAME,
		org::apache::http::cookie::CookieIdentityComparator::J2CPP_METHOD_NAME(2),
		org::apache::http::cookie::CookieIdentityComparator::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::cookie::CookieIdentityComparator,"org/apache/http/cookie/CookieIdentityComparator")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieIdentityComparator,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieIdentityComparator,1,"compare","(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/Cookie;)I")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::CookieIdentityComparator,2,"compare","(Ljava/lang/Object;Ljava/lang/Object;)I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_COOKIEIDENTITYCOMPARATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
