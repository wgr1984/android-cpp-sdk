/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.jar.JarEntry
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_JAR_JARENTRY_HPP_DECL
#define J2CPP_JAVA_UTIL_JAR_JARENTRY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }
namespace j2cpp { namespace java { namespace security { class CodeSigner; } } }
namespace j2cpp { namespace java { namespace util { namespace jar { class Attributes; } } } }
namespace j2cpp { namespace java { namespace util { namespace zip { class ZipEntry; } } } }


#include <java/lang/String.hpp>
#include <java/security/CodeSigner.hpp>
#include <java/security/cert/Certificate.hpp>
#include <java/util/jar/Attributes.hpp>
#include <java/util/zip/ZipEntry.hpp>


namespace j2cpp {

namespace java { namespace util { namespace jar {

	class JarEntry;
	class JarEntry
		: public object<JarEntry>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit JarEntry(jobject jobj)
		: object<JarEntry>(jobj)
		{
		}

		operator local_ref<java::util::zip::ZipEntry>() const;


		JarEntry(local_ref< java::lang::String > const&);
		JarEntry(local_ref< java::util::zip::ZipEntry > const&);
		JarEntry(local_ref< java::util::jar::JarEntry > const&);
		local_ref< java::util::jar::Attributes > getAttributes();
		local_ref< array< local_ref< java::security::cert::Certificate >, 1> > getCertificates();
		local_ref< array< local_ref< java::security::CodeSigner >, 1> > getCodeSigners();
	}; //class JarEntry

} //namespace jar
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_JAR_JARENTRY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_JAR_JARENTRY_HPP_IMPL
#define J2CPP_JAVA_UTIL_JAR_JARENTRY_HPP_IMPL

namespace j2cpp {



java::util::jar::JarEntry::operator local_ref<java::util::zip::ZipEntry>() const
{
	return local_ref<java::util::zip::ZipEntry>(get_jobject());
}


java::util::jar::JarEntry::JarEntry(local_ref< java::lang::String > const &a0)
: object<java::util::jar::JarEntry>(
	call_new_object<
		java::util::jar::JarEntry::J2CPP_CLASS_NAME,
		java::util::jar::JarEntry::J2CPP_METHOD_NAME(0),
		java::util::jar::JarEntry::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::util::jar::JarEntry::JarEntry(local_ref< java::util::zip::ZipEntry > const &a0)
: object<java::util::jar::JarEntry>(
	call_new_object<
		java::util::jar::JarEntry::J2CPP_CLASS_NAME,
		java::util::jar::JarEntry::J2CPP_METHOD_NAME(1),
		java::util::jar::JarEntry::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



java::util::jar::JarEntry::JarEntry(local_ref< java::util::jar::JarEntry > const &a0)
: object<java::util::jar::JarEntry>(
	call_new_object<
		java::util::jar::JarEntry::J2CPP_CLASS_NAME,
		java::util::jar::JarEntry::J2CPP_METHOD_NAME(2),
		java::util::jar::JarEntry::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}


local_ref< java::util::jar::Attributes > java::util::jar::JarEntry::getAttributes()
{
	return call_method<
		java::util::jar::JarEntry::J2CPP_CLASS_NAME,
		java::util::jar::JarEntry::J2CPP_METHOD_NAME(3),
		java::util::jar::JarEntry::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::jar::Attributes > >
	(get_jobject());
}

local_ref< array< local_ref< java::security::cert::Certificate >, 1> > java::util::jar::JarEntry::getCertificates()
{
	return call_method<
		java::util::jar::JarEntry::J2CPP_CLASS_NAME,
		java::util::jar::JarEntry::J2CPP_METHOD_NAME(4),
		java::util::jar::JarEntry::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array< local_ref< java::security::cert::Certificate >, 1> > >
	(get_jobject());
}

local_ref< array< local_ref< java::security::CodeSigner >, 1> > java::util::jar::JarEntry::getCodeSigners()
{
	return call_method<
		java::util::jar::JarEntry::J2CPP_CLASS_NAME,
		java::util::jar::JarEntry::J2CPP_METHOD_NAME(5),
		java::util::jar::JarEntry::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array< local_ref< java::security::CodeSigner >, 1> > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::jar::JarEntry,"java/util/jar/JarEntry")
J2CPP_DEFINE_METHOD(java::util::jar::JarEntry,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::jar::JarEntry,1,"<init>","(Ljava/util/zip/ZipEntry;)V")
J2CPP_DEFINE_METHOD(java::util::jar::JarEntry,2,"<init>","(Ljava/util/jar/JarEntry;)V")
J2CPP_DEFINE_METHOD(java::util::jar::JarEntry,3,"getAttributes","()Ljava/util/jar/Attributes;")
J2CPP_DEFINE_METHOD(java::util::jar::JarEntry,4,"getCertificates","()[java.security.cert.Certificate")
J2CPP_DEFINE_METHOD(java::util::jar::JarEntry,5,"getCodeSigners","()[java.security.CodeSigner")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_JAR_JARENTRY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
