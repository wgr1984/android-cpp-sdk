/*================================================================================
  code generated by: java2cpp
  class: java.util.MissingResourceException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_MISSINGRESOURCEEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_MISSINGRESOURCEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util {

	class MissingResourceException;
	class MissingResourceException
		: public cpp_object<MissingResourceException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit MissingResourceException(jobject jobj)
		: cpp_object<MissingResourceException>(jobj)
		{
		}

		operator local_ref<java::lang::RuntimeException>() const;


		MissingResourceException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getClassName();
		local_ref< java::lang::String > getKey();
	}; //class MissingResourceException

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_MISSINGRESOURCEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_MISSINGRESOURCEEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_MISSINGRESOURCEEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::MissingResourceException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jtype());
}


java::util::MissingResourceException::MissingResourceException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
: cpp_object<java::util::MissingResourceException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::MissingResourceException::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::MissingResourceException::J2CPP_CLASS_NAME, java::util::MissingResourceException::J2CPP_METHOD_NAME(0), java::util::MissingResourceException::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}


local_ref< java::lang::String > java::util::MissingResourceException::getClassName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > java::util::MissingResourceException::getKey()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::MissingResourceException,"java/util/MissingResourceException")
J2CPP_DEFINE_METHOD(java::util::MissingResourceException,0,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::MissingResourceException,1,"getClassName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::MissingResourceException,2,"getKey","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_MISSINGRESOURCEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION