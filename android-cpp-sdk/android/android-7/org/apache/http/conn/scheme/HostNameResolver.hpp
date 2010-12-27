/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.conn.scheme.HostNameResolver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_HOSTNAMERESOLVER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_HOSTNAMERESOLVER_HPP_DECL


namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <java/net/InetAddress.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace scheme {

	class HostNameResolver;
	class HostNameResolver
		: public cpp_object<HostNameResolver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		HostNameResolver(jobject jobj)
		: cpp_object<HostNameResolver>(jobj)
		{
		}

		local_ref< java::net::InetAddress > resolve(local_ref< java::lang::String > const&);
	}; //class HostNameResolver

} //namespace scheme
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_HOSTNAMERESOLVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_HOSTNAMERESOLVER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_HOSTNAMERESOLVER_HPP_IMPL

namespace j2cpp {


local_ref< java::net::InetAddress > org::apache::http::conn::scheme::HostNameResolver::resolve(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::net::InetAddress >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::scheme::HostNameResolver,"org/apache/http/conn/scheme/HostNameResolver")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::HostNameResolver,0,"resolve","(Ljava/lang/String;)Ljava/net/InetAddress;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_HOSTNAMERESOLVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION