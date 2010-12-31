/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.NoSuchMethodError
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_NOSUCHMETHODERROR_HPP_DECL
#define J2CPP_JAVA_LANG_NOSUCHMETHODERROR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class IncompatibleClassChangeError; } } }


#include <java/lang/IncompatibleClassChangeError.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class NoSuchMethodError;
	class NoSuchMethodError
		: public object<NoSuchMethodError>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit NoSuchMethodError(jobject jobj)
		: object<NoSuchMethodError>(jobj)
		{
		}

		operator local_ref<java::lang::IncompatibleClassChangeError>() const;


		NoSuchMethodError();
		NoSuchMethodError(local_ref< java::lang::String > const&);
	}; //class NoSuchMethodError

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_NOSUCHMETHODERROR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_NOSUCHMETHODERROR_HPP_IMPL
#define J2CPP_JAVA_LANG_NOSUCHMETHODERROR_HPP_IMPL

namespace j2cpp {



java::lang::NoSuchMethodError::operator local_ref<java::lang::IncompatibleClassChangeError>() const
{
	return local_ref<java::lang::IncompatibleClassChangeError>(get_jobject());
}


java::lang::NoSuchMethodError::NoSuchMethodError()
: object<java::lang::NoSuchMethodError>(
	call_new_object<
		java::lang::NoSuchMethodError::J2CPP_CLASS_NAME,
		java::lang::NoSuchMethodError::J2CPP_METHOD_NAME(0),
		java::lang::NoSuchMethodError::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::lang::NoSuchMethodError::NoSuchMethodError(local_ref< java::lang::String > const &a0)
: object<java::lang::NoSuchMethodError>(
	call_new_object<
		java::lang::NoSuchMethodError::J2CPP_CLASS_NAME,
		java::lang::NoSuchMethodError::J2CPP_METHOD_NAME(1),
		java::lang::NoSuchMethodError::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::NoSuchMethodError,"java/lang/NoSuchMethodError")
J2CPP_DEFINE_METHOD(java::lang::NoSuchMethodError,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::NoSuchMethodError,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_NOSUCHMETHODERROR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
