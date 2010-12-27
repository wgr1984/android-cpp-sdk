/*================================================================================
  code generated by: java2cpp
  class: java.util.zip.ZipEntry
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_ZIPENTRY_HPP_DECL
#define J2CPP_JAVA_UTIL_ZIP_ZIPENTRY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util { namespace zip {

	class ZipEntry;
	class ZipEntry
		: public cpp_object<ZipEntry>
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
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		ZipEntry(jobject jobj)
		: cpp_object<ZipEntry>(jobj)
		{
		}

		local_ref< java::lang::String > getComment();
		cpp_long getCompressedSize();
		cpp_long getCrc();
		local_ref< cpp_byte_array<1> > getExtra();
		cpp_int getMethod();
		local_ref< java::lang::String > getName();
		cpp_long getSize();
		cpp_long getTime();
		cpp_boolean isDirectory();
		void setComment(local_ref< java::lang::String > const&);
		void setCompressedSize(cpp_long const&);
		void setCrc(cpp_long const&);
		void setExtra(local_ref< cpp_byte_array<1> > const&);
		void setMethod(cpp_int const&);
		void setSize(cpp_long const&);
		void setTime(cpp_long const&);
		local_ref< java::lang::String > toString();
		local_ref< java::lang::Object > clone();
		cpp_int hashCode();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > DEFLATED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > STORED;
	}; //class ZipEntry

} //namespace zip
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_ZIPENTRY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_ZIPENTRY_HPP_IMPL
#define J2CPP_JAVA_UTIL_ZIP_ZIPENTRY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::zip::ZipEntry > create< java::util::zip::ZipEntry>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::util::zip::ZipEntry >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::zip::ZipEntry::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::zip::ZipEntry::J2CPP_CLASS_NAME, java::util::zip::ZipEntry::J2CPP_METHOD_NAME(0), java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::zip::ZipEntry > create< java::util::zip::ZipEntry>(local_ref< java::util::zip::ZipEntry > const &a0)
{
	return local_ref< java::util::zip::ZipEntry >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::zip::ZipEntry::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::zip::ZipEntry::J2CPP_CLASS_NAME, java::util::zip::ZipEntry::J2CPP_METHOD_NAME(1), java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::zip::ZipEntry::getComment()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_long java::util::zip::ZipEntry::getCompressedSize()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_long java::util::zip::ZipEntry::getCrc()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< cpp_byte_array<1> > java::util::zip::ZipEntry::getExtra()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int java::util::zip::ZipEntry::getMethod()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::String > java::util::zip::ZipEntry::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_long java::util::zip::ZipEntry::getSize()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_long java::util::zip::ZipEntry::getTime()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_boolean java::util::zip::ZipEntry::isDirectory()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void java::util::zip::ZipEntry::setComment(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::zip::ZipEntry::setCompressedSize(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::zip::ZipEntry::setCrc(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::zip::ZipEntry::setExtra(local_ref< cpp_byte_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::zip::ZipEntry::setMethod(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::zip::ZipEntry::setSize(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::zip::ZipEntry::setTime(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::zip::ZipEntry::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::zip::ZipEntry::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_int java::util::zip::ZipEntry::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}


static_field<
	java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
	java::util::zip::ZipEntry::J2CPP_FIELD_NAME(0),
	java::util::zip::ZipEntry::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> java::util::zip::ZipEntry::DEFLATED;

static_field<
	java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
	java::util::zip::ZipEntry::J2CPP_FIELD_NAME(1),
	java::util::zip::ZipEntry::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> java::util::zip::ZipEntry::STORED;


J2CPP_DEFINE_CLASS(java::util::zip::ZipEntry,"java/util/zip/ZipEntry")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,1,"<init>","(Ljava/util/zip/ZipEntry;)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,2,"getComment","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,3,"getCompressedSize","()J")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,4,"getCrc","()J")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,5,"getExtra","()[B")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,6,"getMethod","()I")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,7,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,8,"getSize","()J")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,9,"getTime","()J")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,10,"isDirectory","()Z")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,11,"setComment","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,12,"setCompressedSize","(J)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,13,"setCrc","(J)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,14,"setExtra","([B)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,15,"setMethod","(I)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,16,"setSize","(J)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,17,"setTime","(J)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,18,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,19,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,20,"hashCode","()I")
J2CPP_DEFINE_FIELD(java::util::zip::ZipEntry,0,"DEFLATED","I")
J2CPP_DEFINE_FIELD(java::util::zip::ZipEntry,1,"STORED","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_ZIPENTRY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION