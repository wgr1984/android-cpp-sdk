/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.spec.InvalidParameterSpecException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_INVALIDPARAMETERSPECEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_INVALIDPARAMETERSPECEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class GeneralSecurityException; } } }


#include <java/lang/String.hpp>
#include <java/security/GeneralSecurityException.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class InvalidParameterSpecException;
	class InvalidParameterSpecException
		: public object<InvalidParameterSpecException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit InvalidParameterSpecException(jobject jobj)
		: object<InvalidParameterSpecException>(jobj)
		{
		}

		operator local_ref<java::security::GeneralSecurityException>() const;


		InvalidParameterSpecException(local_ref< java::lang::String > const&);
		InvalidParameterSpecException();
	}; //class InvalidParameterSpecException

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_INVALIDPARAMETERSPECEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_INVALIDPARAMETERSPECEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_INVALIDPARAMETERSPECEXCEPTION_HPP_IMPL

namespace j2cpp {



java::security::spec::InvalidParameterSpecException::operator local_ref<java::security::GeneralSecurityException>() const
{
	return local_ref<java::security::GeneralSecurityException>(get_jobject());
}


java::security::spec::InvalidParameterSpecException::InvalidParameterSpecException(local_ref< java::lang::String > const &a0)
: object<java::security::spec::InvalidParameterSpecException>(
	call_new_object<
		java::security::spec::InvalidParameterSpecException::J2CPP_CLASS_NAME,
		java::security::spec::InvalidParameterSpecException::J2CPP_METHOD_NAME(0),
		java::security::spec::InvalidParameterSpecException::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::security::spec::InvalidParameterSpecException::InvalidParameterSpecException()
: object<java::security::spec::InvalidParameterSpecException>(
	call_new_object<
		java::security::spec::InvalidParameterSpecException::J2CPP_CLASS_NAME,
		java::security::spec::InvalidParameterSpecException::J2CPP_METHOD_NAME(1),
		java::security::spec::InvalidParameterSpecException::J2CPP_METHOD_SIGNATURE(1)>
	()
)
{
}



J2CPP_DEFINE_CLASS(java::security::spec::InvalidParameterSpecException,"java/security/spec/InvalidParameterSpecException")
J2CPP_DEFINE_METHOD(java::security::spec::InvalidParameterSpecException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::spec::InvalidParameterSpecException,1,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_INVALIDPARAMETERSPECEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
