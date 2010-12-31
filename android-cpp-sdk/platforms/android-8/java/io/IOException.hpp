/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.IOException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_IOEXCEPTION_HPP_DECL
#define J2CPP_JAVA_IO_IOEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/lang/Exception.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class IOException;
	class IOException
		: public object<IOException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit IOException(jobject jobj)
		: object<IOException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;


		IOException();
		IOException(local_ref< java::lang::String > const&);
	}; //class IOException

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_IOEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_IOEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_IO_IOEXCEPTION_HPP_IMPL

namespace j2cpp {



java::io::IOException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


java::io::IOException::IOException()
: object<java::io::IOException>(
	call_new_object<
		java::io::IOException::J2CPP_CLASS_NAME,
		java::io::IOException::J2CPP_METHOD_NAME(0),
		java::io::IOException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::io::IOException::IOException(local_ref< java::lang::String > const &a0)
: object<java::io::IOException>(
	call_new_object<
		java::io::IOException::J2CPP_CLASS_NAME,
		java::io::IOException::J2CPP_METHOD_NAME(1),
		java::io::IOException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::io::IOException,"java/io/IOException")
J2CPP_DEFINE_METHOD(java::io::IOException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::IOException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_IOEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
