/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.io.SessionOutputBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IO_SESSIONOUTPUTBUFFER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IO_SESSIONOUTPUTBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class HttpTransportMetrics; } } } } }


#include <java/lang/String.hpp>
#include <org/apache/http/io/HttpTransportMetrics.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace io {

	class SessionOutputBuffer;
	class SessionOutputBuffer
		: public cpp_object<SessionOutputBuffer>
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

		SessionOutputBuffer(jobject jobj)
		: cpp_object<SessionOutputBuffer>(jobj)
		{
		}

		void write(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		void write(local_ref< cpp_byte_array<1> > const&);
		void write(cpp_int const&);
		void writeLine(local_ref< java::lang::String > const&);
		void writeLine(local_ref< org::apache::http::util::CharArrayBuffer > const&);
		void flush();
		local_ref< org::apache::http::io::HttpTransportMetrics > getMetrics();
	}; //class SessionOutputBuffer

} //namespace io
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IO_SESSIONOUTPUTBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IO_SESSIONOUTPUTBUFFER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IO_SESSIONOUTPUTBUFFER_HPP_IMPL

namespace j2cpp {


void org::apache::http::io::SessionOutputBuffer::write(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::apache::http::io::SessionOutputBuffer::write(local_ref< cpp_byte_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::io::SessionOutputBuffer::write(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::io::SessionOutputBuffer::writeLine(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::io::SessionOutputBuffer::writeLine(local_ref< org::apache::http::util::CharArrayBuffer > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::io::SessionOutputBuffer::flush()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< org::apache::http::io::HttpTransportMetrics > org::apache::http::io::SessionOutputBuffer::getMetrics()
{
	return local_ref< org::apache::http::io::HttpTransportMetrics >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::io::SessionOutputBuffer,"org/apache/http/io/SessionOutputBuffer")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionOutputBuffer,0,"write","([BII)V")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionOutputBuffer,1,"write","([B)V")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionOutputBuffer,2,"write","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionOutputBuffer,3,"writeLine","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionOutputBuffer,4,"writeLine","(Lorg/apache/http/util/CharArrayBuffer;)V")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionOutputBuffer,5,"flush","()V")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionOutputBuffer,6,"getMetrics","()Lorg/apache/http/io/HttpTransportMetrics;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IO_SESSIONOUTPUTBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION