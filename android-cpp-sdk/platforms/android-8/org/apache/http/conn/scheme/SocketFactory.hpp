/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.scheme.SocketFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SOCKETFACTORY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SOCKETFACTORY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace net { class Socket; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/InetAddress.hpp>
#include <java/net/Socket.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace scheme {

	class SocketFactory;
	class SocketFactory
		: public object<SocketFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit SocketFactory(jobject jobj)
		: object<SocketFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::net::Socket > createSocket();
		local_ref< java::net::Socket > connectSocket(local_ref< java::net::Socket >  const&, local_ref< java::lang::String >  const&, jint, local_ref< java::net::InetAddress >  const&, jint, local_ref< org::apache::http::params::HttpParams >  const&);
		jboolean isSecure(local_ref< java::net::Socket >  const&);
	}; //class SocketFactory

} //namespace scheme
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SOCKETFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SOCKETFACTORY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SOCKETFACTORY_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::scheme::SocketFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::net::Socket > org::apache::http::conn::scheme::SocketFactory::createSocket()
{
	return call_method<
		org::apache::http::conn::scheme::SocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::SocketFactory::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::scheme::SocketFactory::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::net::Socket > >
	(get_jobject());
}

local_ref< java::net::Socket > org::apache::http::conn::scheme::SocketFactory::connectSocket(local_ref< java::net::Socket > const &a0, local_ref< java::lang::String > const &a1, jint a2, local_ref< java::net::InetAddress > const &a3, jint a4, local_ref< org::apache::http::params::HttpParams > const &a5)
{
	return call_method<
		org::apache::http::conn::scheme::SocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::SocketFactory::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::scheme::SocketFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::net::Socket > >
	(get_jobject(), a0, a1, a2, a3, a4, a5);
}

jboolean org::apache::http::conn::scheme::SocketFactory::isSecure(local_ref< java::net::Socket > const &a0)
{
	return call_method<
		org::apache::http::conn::scheme::SocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::SocketFactory::J2CPP_METHOD_NAME(2),
		org::apache::http::conn::scheme::SocketFactory::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::scheme::SocketFactory,"org/apache/http/conn/scheme/SocketFactory")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::SocketFactory,0,"createSocket","()Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::SocketFactory,1,"connectSocket","(Ljava/net/Socket;Ljava/lang/String;ILjava/net/InetAddress;ILorg/apache/http/params/HttpParams;)Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::SocketFactory,2,"isSecure","(Ljava/net/Socket;)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SOCKETFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
