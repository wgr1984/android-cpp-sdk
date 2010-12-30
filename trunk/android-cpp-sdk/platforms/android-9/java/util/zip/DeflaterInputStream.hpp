/*================================================================================
  code generated by: java2cpp
  class: java.util.zip.DeflaterInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_DEFLATERINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_UTIL_ZIP_DEFLATERINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace util { namespace zip { class Deflater; } } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }


#include <java/io/InputStream.hpp>
#include <java/util/zip/Deflater.hpp>


namespace j2cpp {

namespace java { namespace util { namespace zip {

	class DeflaterInputStream;
	class DeflaterInputStream
		: public cpp_object<DeflaterInputStream>
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
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		DeflaterInputStream(jobject jobj)
		: cpp_object<DeflaterInputStream>(jobj)
		{
		}

		void close();
		cpp_int read();
		cpp_int read(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_long skip(cpp_long const&);
		cpp_int available();
		cpp_boolean markSupported();
		void mark(cpp_int const&);
		void reset();

	}; //class DeflaterInputStream

} //namespace zip
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_DEFLATERINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_DEFLATERINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_UTIL_ZIP_DEFLATERINPUTSTREAM_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::zip::DeflaterInputStream > create< java::util::zip::DeflaterInputStream>(local_ref< java::io::InputStream > const &a0)
{
	return local_ref< java::util::zip::DeflaterInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::zip::DeflaterInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::zip::DeflaterInputStream::J2CPP_CLASS_NAME, java::util::zip::DeflaterInputStream::J2CPP_METHOD_NAME(0), java::util::zip::DeflaterInputStream::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::zip::DeflaterInputStream > create< java::util::zip::DeflaterInputStream>(local_ref< java::io::InputStream > const &a0, local_ref< java::util::zip::Deflater > const &a1)
{
	return local_ref< java::util::zip::DeflaterInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::zip::DeflaterInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::zip::DeflaterInputStream::J2CPP_CLASS_NAME, java::util::zip::DeflaterInputStream::J2CPP_METHOD_NAME(1), java::util::zip::DeflaterInputStream::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::util::zip::DeflaterInputStream > create< java::util::zip::DeflaterInputStream>(local_ref< java::io::InputStream > const &a0, local_ref< java::util::zip::Deflater > const &a1, cpp_int const &a2)
{
	return local_ref< java::util::zip::DeflaterInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::zip::DeflaterInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::zip::DeflaterInputStream::J2CPP_CLASS_NAME, java::util::zip::DeflaterInputStream::J2CPP_METHOD_NAME(2), java::util::zip::DeflaterInputStream::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::util::zip::DeflaterInputStream::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int java::util::zip::DeflaterInputStream::read()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int java::util::zip::DeflaterInputStream::read(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_long java::util::zip::DeflaterInputStream::skip(cpp_long const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::zip::DeflaterInputStream::available()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_boolean java::util::zip::DeflaterInputStream::markSupported()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void java::util::zip::DeflaterInputStream::mark(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::zip::DeflaterInputStream::reset()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(java::util::zip::DeflaterInputStream,"java/util/zip/DeflaterInputStream")
J2CPP_DEFINE_METHOD(java::util::zip::DeflaterInputStream,0,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::util::zip::DeflaterInputStream,1,"<init>","(Ljava/io/InputStream;Ljava/util/zip/Deflater;)V")
J2CPP_DEFINE_METHOD(java::util::zip::DeflaterInputStream,2,"<init>","(Ljava/io/InputStream;Ljava/util/zip/Deflater;I)V")
J2CPP_DEFINE_METHOD(java::util::zip::DeflaterInputStream,3,"close","()V")
J2CPP_DEFINE_METHOD(java::util::zip::DeflaterInputStream,4,"read","()I")
J2CPP_DEFINE_METHOD(java::util::zip::DeflaterInputStream,5,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::util::zip::DeflaterInputStream,6,"skip","(J)J")
J2CPP_DEFINE_METHOD(java::util::zip::DeflaterInputStream,7,"available","()I")
J2CPP_DEFINE_METHOD(java::util::zip::DeflaterInputStream,8,"markSupported","()Z")
J2CPP_DEFINE_METHOD(java::util::zip::DeflaterInputStream,9,"mark","(I)V")
J2CPP_DEFINE_METHOD(java::util::zip::DeflaterInputStream,10,"reset","()V")
J2CPP_DEFINE_FIELD(java::util::zip::DeflaterInputStream,0,"def","Ljava/util/zip/Deflater;")
J2CPP_DEFINE_FIELD(java::util::zip::DeflaterInputStream,1,"buf","[B")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_DEFLATERINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION