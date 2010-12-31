/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.ConnectionClosedException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace io { class IOException; } } }


#include <java/io/IOException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class ConnectionClosedException;
	class ConnectionClosedException
		: public object<ConnectionClosedException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit ConnectionClosedException(jobject jobj)
		: object<ConnectionClosedException>(jobj)
		{
		}

		operator local_ref<java::io::IOException>() const;


		ConnectionClosedException(local_ref< java::lang::String > const&);
	}; //class ConnectionClosedException

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION_HPP_IMPL

namespace j2cpp {



org::apache::http::ConnectionClosedException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}


org::apache::http::ConnectionClosedException::ConnectionClosedException(local_ref< java::lang::String > const &a0)
: object<org::apache::http::ConnectionClosedException>(
	call_new_object<
		org::apache::http::ConnectionClosedException::J2CPP_CLASS_NAME,
		org::apache::http::ConnectionClosedException::J2CPP_METHOD_NAME(0),
		org::apache::http::ConnectionClosedException::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(org::apache::http::ConnectionClosedException,"org/apache/http/ConnectionClosedException")
J2CPP_DEFINE_METHOD(org::apache::http::ConnectionClosedException,0,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
