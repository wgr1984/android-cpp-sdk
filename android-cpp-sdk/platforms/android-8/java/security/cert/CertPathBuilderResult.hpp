/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.cert.CertPathBuilderResult
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERRESULT_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERRESULT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertPath; } } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/security/cert/CertPath.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class CertPathBuilderResult;
	class CertPathBuilderResult
		: public object<CertPathBuilderResult>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit CertPathBuilderResult(jobject jobj)
		: object<CertPathBuilderResult>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Cloneable>() const;


		local_ref< java::lang::Object > clone();
		local_ref< java::security::cert::CertPath > getCertPath();
	}; //class CertPathBuilderResult

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERRESULT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERRESULT_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERRESULT_HPP_IMPL

namespace j2cpp {



java::security::cert::CertPathBuilderResult::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::cert::CertPathBuilderResult::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

local_ref< java::lang::Object > java::security::cert::CertPathBuilderResult::clone()
{
	return call_method<
		java::security::cert::CertPathBuilderResult::J2CPP_CLASS_NAME,
		java::security::cert::CertPathBuilderResult::J2CPP_METHOD_NAME(0),
		java::security::cert::CertPathBuilderResult::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::security::cert::CertPath > java::security::cert::CertPathBuilderResult::getCertPath()
{
	return call_method<
		java::security::cert::CertPathBuilderResult::J2CPP_CLASS_NAME,
		java::security::cert::CertPathBuilderResult::J2CPP_METHOD_NAME(1),
		java::security::cert::CertPathBuilderResult::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::security::cert::CertPath > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::cert::CertPathBuilderResult,"java/security/cert/CertPathBuilderResult")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathBuilderResult,0,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathBuilderResult,1,"getCertPath","()Ljava/security/cert/CertPath;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERRESULT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
