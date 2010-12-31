/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.FormatterClosedException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_FORMATTERCLOSEDEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_FORMATTERCLOSEDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class IllegalStateException; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/IllegalStateException.hpp>


namespace j2cpp {

namespace java { namespace util {

	class FormatterClosedException;
	class FormatterClosedException
		: public object<FormatterClosedException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit FormatterClosedException(jobject jobj)
		: object<FormatterClosedException>(jobj)
		{
		}

		operator local_ref<java::lang::IllegalStateException>() const;
		operator local_ref<java::io::Serializable>() const;


		FormatterClosedException();
	}; //class FormatterClosedException

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_FORMATTERCLOSEDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_FORMATTERCLOSEDEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_FORMATTERCLOSEDEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::FormatterClosedException::operator local_ref<java::lang::IllegalStateException>() const
{
	return local_ref<java::lang::IllegalStateException>(get_jobject());
}

java::util::FormatterClosedException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::FormatterClosedException::FormatterClosedException()
: object<java::util::FormatterClosedException>(
	call_new_object<
		java::util::FormatterClosedException::J2CPP_CLASS_NAME,
		java::util::FormatterClosedException::J2CPP_METHOD_NAME(0),
		java::util::FormatterClosedException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



J2CPP_DEFINE_CLASS(java::util::FormatterClosedException,"java/util/FormatterClosedException")
J2CPP_DEFINE_METHOD(java::util::FormatterClosedException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_FORMATTERCLOSEDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
