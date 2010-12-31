/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.io.ContentLengthOutputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionOutputBuffer; } } } } }


#include <java/io/OutputStream.hpp>
#include <org/apache/http/io/SessionOutputBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace io {

	class ContentLengthOutputStream;
	class ContentLengthOutputStream
		: public object<ContentLengthOutputStream>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit ContentLengthOutputStream(jobject jobj)
		: object<ContentLengthOutputStream>(jobj)
		{
		}

		operator local_ref<java::io::OutputStream>() const;


		ContentLengthOutputStream(local_ref< org::apache::http::io::SessionOutputBuffer > const&, jlong);
		void close();
		void flush();
		void write(local_ref< array<jbyte,1> >  const&, jint, jint);
		void write(local_ref< array<jbyte,1> >  const&);
		void write(jint);
	}; //class ContentLengthOutputStream

} //namespace io
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::io::ContentLengthOutputStream::operator local_ref<java::io::OutputStream>() const
{
	return local_ref<java::io::OutputStream>(get_jobject());
}


org::apache::http::impl::io::ContentLengthOutputStream::ContentLengthOutputStream(local_ref< org::apache::http::io::SessionOutputBuffer > const &a0, jlong a1)
: object<org::apache::http::impl::io::ContentLengthOutputStream>(
	call_new_object<
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


void org::apache::http::impl::io::ContentLengthOutputStream::close()
{
	return call_method<
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

void org::apache::http::impl::io::ContentLengthOutputStream::flush()
{
	return call_method<
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject());
}

void org::apache::http::impl::io::ContentLengthOutputStream::write(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1, a2);
}

void org::apache::http::impl::io::ContentLengthOutputStream::write(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::impl::io::ContentLengthOutputStream::write(jint a0)
{
	return call_method<
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::io::ContentLengthOutputStream::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::io::ContentLengthOutputStream,"org/apache/http/impl/io/ContentLengthOutputStream")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ContentLengthOutputStream,0,"<init>","(Lorg/apache/http/io/SessionOutputBuffer;J)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ContentLengthOutputStream,1,"close","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ContentLengthOutputStream,2,"flush","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ContentLengthOutputStream,3,"write","([BII)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ContentLengthOutputStream,4,"write","([B)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ContentLengthOutputStream,5,"write","(I)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_CONTENTLENGTHOUTPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
