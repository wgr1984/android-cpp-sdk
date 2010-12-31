/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.net.ssl.X509TrustManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_X509TRUSTMANAGER_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_X509TRUSTMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class X509Certificate; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class TrustManager; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/cert/X509Certificate.hpp>
#include <javax/net/ssl/TrustManager.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class X509TrustManager;
	class X509TrustManager
		: public object<X509TrustManager>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit X509TrustManager(jobject jobj)
		: object<X509TrustManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<javax::net::ssl::TrustManager>() const;


		void checkClientTrusted(local_ref< array< local_ref< java::security::cert::X509Certificate >, 1> >  const&, local_ref< java::lang::String >  const&);
		void checkServerTrusted(local_ref< array< local_ref< java::security::cert::X509Certificate >, 1> >  const&, local_ref< java::lang::String >  const&);
		local_ref< array< local_ref< java::security::cert::X509Certificate >, 1> > getAcceptedIssuers();
	}; //class X509TrustManager

} //namespace ssl
} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_X509TRUSTMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_X509TRUSTMANAGER_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_X509TRUSTMANAGER_HPP_IMPL

namespace j2cpp {



javax::net::ssl::X509TrustManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::net::ssl::X509TrustManager::operator local_ref<javax::net::ssl::TrustManager>() const
{
	return local_ref<javax::net::ssl::TrustManager>(get_jobject());
}

void javax::net::ssl::X509TrustManager::checkClientTrusted(local_ref< array< local_ref< java::security::cert::X509Certificate >, 1> > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		javax::net::ssl::X509TrustManager::J2CPP_CLASS_NAME,
		javax::net::ssl::X509TrustManager::J2CPP_METHOD_NAME(0),
		javax::net::ssl::X509TrustManager::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1);
}

void javax::net::ssl::X509TrustManager::checkServerTrusted(local_ref< array< local_ref< java::security::cert::X509Certificate >, 1> > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		javax::net::ssl::X509TrustManager::J2CPP_CLASS_NAME,
		javax::net::ssl::X509TrustManager::J2CPP_METHOD_NAME(1),
		javax::net::ssl::X509TrustManager::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< array< local_ref< java::security::cert::X509Certificate >, 1> > javax::net::ssl::X509TrustManager::getAcceptedIssuers()
{
	return call_method<
		javax::net::ssl::X509TrustManager::J2CPP_CLASS_NAME,
		javax::net::ssl::X509TrustManager::J2CPP_METHOD_NAME(2),
		javax::net::ssl::X509TrustManager::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array< local_ref< java::security::cert::X509Certificate >, 1> > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::net::ssl::X509TrustManager,"javax/net/ssl/X509TrustManager")
J2CPP_DEFINE_METHOD(javax::net::ssl::X509TrustManager,0,"checkClientTrusted","([java.security.cert.X509CertificateLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::X509TrustManager,1,"checkServerTrusted","([java.security.cert.X509CertificateLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::X509TrustManager,2,"getAcceptedIssuers","()[java.security.cert.X509Certificate")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_X509TRUSTMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
