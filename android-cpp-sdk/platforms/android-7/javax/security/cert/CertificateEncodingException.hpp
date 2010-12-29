/*================================================================================
  code generated by: java2cpp
  class: javax.security.cert.CertificateEncodingException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION_HPP_DECL
#define J2CPP_JAVAX_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION_HPP_DECL


namespace j2cpp { namespace javax { namespace security { namespace cert { class CertificateException; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <javax/security/cert/CertificateException.hpp>


namespace j2cpp {

namespace javax { namespace security { namespace cert {

	class CertificateEncodingException;
	class CertificateEncodingException
		: public cpp_object<CertificateEncodingException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit CertificateEncodingException(jobject jobj)
		: cpp_object<CertificateEncodingException>(jobj)
		{
		}

		operator local_ref<javax::security::cert::CertificateException>() const;


		CertificateEncodingException(local_ref< java::lang::String > const&);
		CertificateEncodingException();
	}; //class CertificateEncodingException

} //namespace cert
} //namespace security
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION_HPP_IMPL
#define J2CPP_JAVAX_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION_HPP_IMPL

namespace j2cpp {



javax::security::cert::CertificateEncodingException::operator local_ref<javax::security::cert::CertificateException>() const
{
	return local_ref<javax::security::cert::CertificateException>(get_jtype());
}


javax::security::cert::CertificateEncodingException::CertificateEncodingException(local_ref< java::lang::String > const &a0)
: cpp_object<javax::security::cert::CertificateEncodingException>(
	environment::get().get_jenv()->NewObject(
		get_class<javax::security::cert::CertificateEncodingException::J2CPP_CLASS_NAME>(),
		get_method_id<javax::security::cert::CertificateEncodingException::J2CPP_CLASS_NAME, javax::security::cert::CertificateEncodingException::J2CPP_METHOD_NAME(0), javax::security::cert::CertificateEncodingException::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



javax::security::cert::CertificateEncodingException::CertificateEncodingException()
: cpp_object<javax::security::cert::CertificateEncodingException>(
	environment::get().get_jenv()->NewObject(
		get_class<javax::security::cert::CertificateEncodingException::J2CPP_CLASS_NAME>(),
		get_method_id<javax::security::cert::CertificateEncodingException::J2CPP_CLASS_NAME, javax::security::cert::CertificateEncodingException::J2CPP_METHOD_NAME(1), javax::security::cert::CertificateEncodingException::J2CPP_METHOD_SIGNATURE(1), false>()
	)
)
{
}



J2CPP_DEFINE_CLASS(javax::security::cert::CertificateEncodingException,"javax/security/cert/CertificateEncodingException")
J2CPP_DEFINE_METHOD(javax::security::cert::CertificateEncodingException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::security::cert::CertificateEncodingException,1,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION