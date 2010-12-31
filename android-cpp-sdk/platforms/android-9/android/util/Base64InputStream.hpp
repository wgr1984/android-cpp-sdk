/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.util.Base64InputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_BASE64INPUTSTREAM_HPP_DECL
#define J2CPP_ANDROID_UTIL_BASE64INPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class FilterInputStream; } } }


#include <java/io/FilterInputStream.hpp>
#include <java/io/InputStream.hpp>


namespace j2cpp {

namespace android { namespace util {

	class Base64InputStream;
	class Base64InputStream
		: public object<Base64InputStream>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)

		explicit Base64InputStream(jobject jobj)
		: object<Base64InputStream>(jobj)
		{
		}

		operator local_ref<java::io::FilterInputStream>() const;


		Base64InputStream(local_ref< java::io::InputStream > const&, jint);
		jboolean markSupported();
		void mark(jint);
		void reset();
		void close();
		jint available();
		jlong skip(jlong);
		jint read();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
	}; //class Base64InputStream

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_BASE64INPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_BASE64INPUTSTREAM_HPP_IMPL
#define J2CPP_ANDROID_UTIL_BASE64INPUTSTREAM_HPP_IMPL

namespace j2cpp {



android::util::Base64InputStream::operator local_ref<java::io::FilterInputStream>() const
{
	return local_ref<java::io::FilterInputStream>(get_jobject());
}


android::util::Base64InputStream::Base64InputStream(local_ref< java::io::InputStream > const &a0, jint a1)
: object<android::util::Base64InputStream>(
	call_new_object<
		android::util::Base64InputStream::J2CPP_CLASS_NAME,
		android::util::Base64InputStream::J2CPP_METHOD_NAME(0),
		android::util::Base64InputStream::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


jboolean android::util::Base64InputStream::markSupported()
{
	return call_method<
		android::util::Base64InputStream::J2CPP_CLASS_NAME,
		android::util::Base64InputStream::J2CPP_METHOD_NAME(1),
		android::util::Base64InputStream::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject());
}

void android::util::Base64InputStream::mark(jint a0)
{
	return call_method<
		android::util::Base64InputStream::J2CPP_CLASS_NAME,
		android::util::Base64InputStream::J2CPP_METHOD_NAME(2),
		android::util::Base64InputStream::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

void android::util::Base64InputStream::reset()
{
	return call_method<
		android::util::Base64InputStream::J2CPP_CLASS_NAME,
		android::util::Base64InputStream::J2CPP_METHOD_NAME(3),
		android::util::Base64InputStream::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject());
}

void android::util::Base64InputStream::close()
{
	return call_method<
		android::util::Base64InputStream::J2CPP_CLASS_NAME,
		android::util::Base64InputStream::J2CPP_METHOD_NAME(4),
		android::util::Base64InputStream::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

jint android::util::Base64InputStream::available()
{
	return call_method<
		android::util::Base64InputStream::J2CPP_CLASS_NAME,
		android::util::Base64InputStream::J2CPP_METHOD_NAME(5),
		android::util::Base64InputStream::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

jlong android::util::Base64InputStream::skip(jlong a0)
{
	return call_method<
		android::util::Base64InputStream::J2CPP_CLASS_NAME,
		android::util::Base64InputStream::J2CPP_METHOD_NAME(6),
		android::util::Base64InputStream::J2CPP_METHOD_SIGNATURE(6), 
		jlong >
	(get_jobject(), a0);
}

jint android::util::Base64InputStream::read()
{
	return call_method<
		android::util::Base64InputStream::J2CPP_CLASS_NAME,
		android::util::Base64InputStream::J2CPP_METHOD_NAME(7),
		android::util::Base64InputStream::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject());
}

jint android::util::Base64InputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		android::util::Base64InputStream::J2CPP_CLASS_NAME,
		android::util::Base64InputStream::J2CPP_METHOD_NAME(8),
		android::util::Base64InputStream::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::util::Base64InputStream,"android/util/Base64InputStream")
J2CPP_DEFINE_METHOD(android::util::Base64InputStream,0,"<init>","(Ljava/io/InputStream;I)V")
J2CPP_DEFINE_METHOD(android::util::Base64InputStream,1,"markSupported","()Z")
J2CPP_DEFINE_METHOD(android::util::Base64InputStream,2,"mark","(I)V")
J2CPP_DEFINE_METHOD(android::util::Base64InputStream,3,"reset","()V")
J2CPP_DEFINE_METHOD(android::util::Base64InputStream,4,"close","()V")
J2CPP_DEFINE_METHOD(android::util::Base64InputStream,5,"available","()I")
J2CPP_DEFINE_METHOD(android::util::Base64InputStream,6,"skip","(J)J")
J2CPP_DEFINE_METHOD(android::util::Base64InputStream,7,"read","()I")
J2CPP_DEFINE_METHOD(android::util::Base64InputStream,8,"read","([BII)I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_BASE64INPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
