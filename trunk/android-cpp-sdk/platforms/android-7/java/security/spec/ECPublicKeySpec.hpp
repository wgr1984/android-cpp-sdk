/*================================================================================
  code generated by: java2cpp
  class: java.security.spec.ECPublicKeySpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECPUBLICKEYSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_ECPUBLICKEYSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class ECParameterSpec; } } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class KeySpec; } } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class ECPoint; } } } }


#include <java/lang/Object.hpp>
#include <java/security/spec/ECParameterSpec.hpp>
#include <java/security/spec/ECPoint.hpp>
#include <java/security/spec/KeySpec.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class ECPublicKeySpec;
	class ECPublicKeySpec
		: public cpp_object<ECPublicKeySpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit ECPublicKeySpec(jobject jobj)
		: cpp_object<ECPublicKeySpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::spec::KeySpec>() const;


		ECPublicKeySpec(local_ref< java::security::spec::ECPoint > const&, local_ref< java::security::spec::ECParameterSpec > const&);
		local_ref< java::security::spec::ECParameterSpec > getParams();
		local_ref< java::security::spec::ECPoint > getW();
	}; //class ECPublicKeySpec

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECPUBLICKEYSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECPUBLICKEYSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_ECPUBLICKEYSPEC_HPP_IMPL

namespace j2cpp {



java::security::spec::ECPublicKeySpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

java::security::spec::ECPublicKeySpec::operator local_ref<java::security::spec::KeySpec>() const
{
	return local_ref<java::security::spec::KeySpec>(get_jtype());
}


java::security::spec::ECPublicKeySpec::ECPublicKeySpec(local_ref< java::security::spec::ECPoint > const &a0, local_ref< java::security::spec::ECParameterSpec > const &a1)
: cpp_object<java::security::spec::ECPublicKeySpec>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::spec::ECPublicKeySpec::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::spec::ECPublicKeySpec::J2CPP_CLASS_NAME, java::security::spec::ECPublicKeySpec::J2CPP_METHOD_NAME(0), java::security::spec::ECPublicKeySpec::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


local_ref< java::security::spec::ECParameterSpec > java::security::spec::ECPublicKeySpec::getParams()
{
	return local_ref< java::security::spec::ECParameterSpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::security::spec::ECPoint > java::security::spec::ECPublicKeySpec::getW()
{
	return local_ref< java::security::spec::ECPoint >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::spec::ECPublicKeySpec,"java/security/spec/ECPublicKeySpec")
J2CPP_DEFINE_METHOD(java::security::spec::ECPublicKeySpec,0,"<init>","(Ljava/security/spec/ECPoint;Ljava/security/spec/ECParameterSpec;)V")
J2CPP_DEFINE_METHOD(java::security::spec::ECPublicKeySpec,1,"getParams","()Ljava/security/spec/ECParameterSpec;")
J2CPP_DEFINE_METHOD(java::security::spec::ECPublicKeySpec,2,"getW","()Ljava/security/spec/ECPoint;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECPUBLICKEYSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION