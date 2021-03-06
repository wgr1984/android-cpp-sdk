/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.net.ssl.HostnameVerifier
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_HOSTNAMEVERIFIER_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_HOSTNAMEVERIFIER_HPP_DECL


namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSession; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/net/ssl/SSLSession.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class HostnameVerifier;
	class HostnameVerifier
		: public object<HostnameVerifier>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit HostnameVerifier(jobject jobj)
		: object<HostnameVerifier>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean verify(local_ref< java::lang::String >  const&, local_ref< javax::net::ssl::SSLSession >  const&);
	}; //class HostnameVerifier

} //namespace ssl
} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_HOSTNAMEVERIFIER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_HOSTNAMEVERIFIER_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_HOSTNAMEVERIFIER_HPP_IMPL

namespace j2cpp {



javax::net::ssl::HostnameVerifier::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean javax::net::ssl::HostnameVerifier::verify(local_ref< java::lang::String > const &a0, local_ref< javax::net::ssl::SSLSession > const &a1)
{
	return call_method<
		javax::net::ssl::HostnameVerifier::J2CPP_CLASS_NAME,
		javax::net::ssl::HostnameVerifier::J2CPP_METHOD_NAME(0),
		javax::net::ssl::HostnameVerifier::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(javax::net::ssl::HostnameVerifier,"javax/net/ssl/HostnameVerifier")
J2CPP_DEFINE_METHOD(javax::net::ssl::HostnameVerifier,0,"verify","(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_HOSTNAMEVERIFIER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
