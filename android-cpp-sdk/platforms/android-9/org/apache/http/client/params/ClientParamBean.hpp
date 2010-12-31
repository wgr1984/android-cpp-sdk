/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.params.ClientParamBean
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPARAMBEAN_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPARAMBEAN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionManagerFactory; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpAbstractParamBean; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/String.hpp>
#include <java/util/Collection.hpp>
#include <org/apache/http/HttpHost.hpp>
#include <org/apache/http/conn/ClientConnectionManagerFactory.hpp>
#include <org/apache/http/params/HttpAbstractParamBean.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace params {

	class ClientParamBean;
	class ClientParamBean
		: public object<ClientParamBean>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)

		explicit ClientParamBean(jobject jobj)
		: object<ClientParamBean>(jobj)
		{
		}

		operator local_ref<org::apache::http::params::HttpAbstractParamBean>() const;


		ClientParamBean(local_ref< org::apache::http::params::HttpParams > const&);
		void setConnectionManagerFactoryClassName(local_ref< java::lang::String >  const&);
		void setConnectionManagerFactory(local_ref< org::apache::http::conn::ClientConnectionManagerFactory >  const&);
		void setHandleRedirects(jboolean);
		void setRejectRelativeRedirect(jboolean);
		void setMaxRedirects(jint);
		void setAllowCircularRedirects(jboolean);
		void setHandleAuthentication(jboolean);
		void setCookiePolicy(local_ref< java::lang::String >  const&);
		void setVirtualHost(local_ref< org::apache::http::HttpHost >  const&);
		void setDefaultHeaders(local_ref< java::util::Collection >  const&);
		void setDefaultHost(local_ref< org::apache::http::HttpHost >  const&);
	}; //class ClientParamBean

} //namespace params
} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPARAMBEAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPARAMBEAN_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPARAMBEAN_HPP_IMPL

namespace j2cpp {



org::apache::http::client::params::ClientParamBean::operator local_ref<org::apache::http::params::HttpAbstractParamBean>() const
{
	return local_ref<org::apache::http::params::HttpAbstractParamBean>(get_jobject());
}


org::apache::http::client::params::ClientParamBean::ClientParamBean(local_ref< org::apache::http::params::HttpParams > const &a0)
: object<org::apache::http::client::params::ClientParamBean>(
	call_new_object<
		org::apache::http::client::params::ClientParamBean::J2CPP_CLASS_NAME,
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_NAME(0),
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


void org::apache::http::client::params::ClientParamBean::setConnectionManagerFactoryClassName(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::client::params::ClientParamBean::J2CPP_CLASS_NAME,
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_NAME(1),
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::client::params::ClientParamBean::setConnectionManagerFactory(local_ref< org::apache::http::conn::ClientConnectionManagerFactory > const &a0)
{
	return call_method<
		org::apache::http::client::params::ClientParamBean::J2CPP_CLASS_NAME,
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_NAME(2),
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::client::params::ClientParamBean::setHandleRedirects(jboolean a0)
{
	return call_method<
		org::apache::http::client::params::ClientParamBean::J2CPP_CLASS_NAME,
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_NAME(3),
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::client::params::ClientParamBean::setRejectRelativeRedirect(jboolean a0)
{
	return call_method<
		org::apache::http::client::params::ClientParamBean::J2CPP_CLASS_NAME,
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_NAME(4),
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::client::params::ClientParamBean::setMaxRedirects(jint a0)
{
	return call_method<
		org::apache::http::client::params::ClientParamBean::J2CPP_CLASS_NAME,
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_NAME(5),
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::client::params::ClientParamBean::setAllowCircularRedirects(jboolean a0)
{
	return call_method<
		org::apache::http::client::params::ClientParamBean::J2CPP_CLASS_NAME,
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_NAME(6),
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::client::params::ClientParamBean::setHandleAuthentication(jboolean a0)
{
	return call_method<
		org::apache::http::client::params::ClientParamBean::J2CPP_CLASS_NAME,
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_NAME(7),
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::client::params::ClientParamBean::setCookiePolicy(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::client::params::ClientParamBean::J2CPP_CLASS_NAME,
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_NAME(8),
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::client::params::ClientParamBean::setVirtualHost(local_ref< org::apache::http::HttpHost > const &a0)
{
	return call_method<
		org::apache::http::client::params::ClientParamBean::J2CPP_CLASS_NAME,
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_NAME(9),
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::client::params::ClientParamBean::setDefaultHeaders(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		org::apache::http::client::params::ClientParamBean::J2CPP_CLASS_NAME,
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_NAME(10),
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::client::params::ClientParamBean::setDefaultHost(local_ref< org::apache::http::HttpHost > const &a0)
{
	return call_method<
		org::apache::http::client::params::ClientParamBean::J2CPP_CLASS_NAME,
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_NAME(11),
		org::apache::http::client::params::ClientParamBean::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::params::ClientParamBean,"org/apache/http/client/params/ClientParamBean")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::ClientParamBean,0,"<init>","(Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::ClientParamBean,1,"setConnectionManagerFactoryClassName","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::ClientParamBean,2,"setConnectionManagerFactory","(Lorg/apache/http/conn/ClientConnectionManagerFactory;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::ClientParamBean,3,"setHandleRedirects","(Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::ClientParamBean,4,"setRejectRelativeRedirect","(Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::ClientParamBean,5,"setMaxRedirects","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::ClientParamBean,6,"setAllowCircularRedirects","(Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::ClientParamBean,7,"setHandleAuthentication","(Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::ClientParamBean,8,"setCookiePolicy","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::ClientParamBean,9,"setVirtualHost","(Lorg/apache/http/HttpHost;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::ClientParamBean,10,"setDefaultHeaders","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::ClientParamBean,11,"setDefaultHost","(Lorg/apache/http/HttpHost;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPARAMBEAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
