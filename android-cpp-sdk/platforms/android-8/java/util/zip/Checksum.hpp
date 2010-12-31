/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.zip.Checksum
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_CHECKSUM_HPP_DECL
#define J2CPP_JAVA_UTIL_ZIP_CHECKSUM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace util { namespace zip {

	class Checksum;
	class Checksum
		: public object<Checksum>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit Checksum(jobject jobj)
		: object<Checksum>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jlong getValue();
		void reset();
		void update(local_ref< array<jbyte,1> >  const&, jint, jint);
		void update(jint);
	}; //class Checksum

} //namespace zip
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_CHECKSUM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_CHECKSUM_HPP_IMPL
#define J2CPP_JAVA_UTIL_ZIP_CHECKSUM_HPP_IMPL

namespace j2cpp {



java::util::zip::Checksum::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jlong java::util::zip::Checksum::getValue()
{
	return call_method<
		java::util::zip::Checksum::J2CPP_CLASS_NAME,
		java::util::zip::Checksum::J2CPP_METHOD_NAME(0),
		java::util::zip::Checksum::J2CPP_METHOD_SIGNATURE(0), 
		jlong >
	(get_jobject());
}

void java::util::zip::Checksum::reset()
{
	return call_method<
		java::util::zip::Checksum::J2CPP_CLASS_NAME,
		java::util::zip::Checksum::J2CPP_METHOD_NAME(1),
		java::util::zip::Checksum::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

void java::util::zip::Checksum::update(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::util::zip::Checksum::J2CPP_CLASS_NAME,
		java::util::zip::Checksum::J2CPP_METHOD_NAME(2),
		java::util::zip::Checksum::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1, a2);
}

void java::util::zip::Checksum::update(jint a0)
{
	return call_method<
		java::util::zip::Checksum::J2CPP_CLASS_NAME,
		java::util::zip::Checksum::J2CPP_METHOD_NAME(3),
		java::util::zip::Checksum::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::zip::Checksum,"java/util/zip/Checksum")
J2CPP_DEFINE_METHOD(java::util::zip::Checksum,0,"getValue","()J")
J2CPP_DEFINE_METHOD(java::util::zip::Checksum,1,"reset","()V")
J2CPP_DEFINE_METHOD(java::util::zip::Checksum,2,"update","([BII)V")
J2CPP_DEFINE_METHOD(java::util::zip::Checksum,3,"update","(I)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_CHECKSUM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
