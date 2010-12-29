/*================================================================================
  code generated by: java2cpp
  class: java.sql.Clob
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_CLOB_HPP_DECL
#define J2CPP_JAVA_SQL_CLOB_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class Writer; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace io { class Reader; } } }


#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/Reader.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class Clob;
	class Clob
		: public cpp_object<Clob>
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

		Clob(jobject jobj)
		: cpp_object<Clob>(jobj)
		{
		}

		local_ref< java::io::InputStream > getAsciiStream();
		local_ref< java::io::Reader > getCharacterStream();
		local_ref< java::lang::String > getSubString(cpp_long const&, cpp_int const&);
		cpp_long length();
		cpp_long position(local_ref< java::sql::Clob > const&, cpp_long const&);
		cpp_long position(local_ref< java::lang::String > const&, cpp_long const&);
		local_ref< java::io::OutputStream > setAsciiStream(cpp_long const&);
		local_ref< java::io::Writer > setCharacterStream(cpp_long const&);
		cpp_int setString(cpp_long const&, local_ref< java::lang::String > const&);
		cpp_int setString(cpp_long const&, local_ref< java::lang::String > const&, cpp_int const&, cpp_int const&);
		void truncate(cpp_long const&);
	}; //class Clob

} //namespace sql
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_CLOB_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_CLOB_HPP_IMPL
#define J2CPP_JAVA_SQL_CLOB_HPP_IMPL

namespace j2cpp {


local_ref< java::io::InputStream > java::sql::Clob::getAsciiStream()
{
	return local_ref< java::io::InputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::io::Reader > java::sql::Clob::getCharacterStream()
{
	return local_ref< java::io::Reader >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > java::sql::Clob::getSubString(cpp_long const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_long java::sql::Clob::length()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_long java::sql::Clob::position(local_ref< java::sql::Clob > const &a0, cpp_long const &a1)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_long java::sql::Clob::position(local_ref< java::lang::String > const &a0, cpp_long const &a1)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::io::OutputStream > java::sql::Clob::setAsciiStream(cpp_long const &a0)
{
	return local_ref< java::io::OutputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::Writer > java::sql::Clob::setCharacterStream(cpp_long const &a0)
{
	return local_ref< java::io::Writer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::sql::Clob::setString(cpp_long const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int java::sql::Clob::setString(cpp_long const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void java::sql::Clob::truncate(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::sql::Clob,"java/sql/Clob")
J2CPP_DEFINE_METHOD(java::sql::Clob,0,"getAsciiStream","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(java::sql::Clob,1,"getCharacterStream","()Ljava/io/Reader;")
J2CPP_DEFINE_METHOD(java::sql::Clob,2,"getSubString","(JI)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::Clob,3,"length","()J")
J2CPP_DEFINE_METHOD(java::sql::Clob,4,"position","(Ljava/sql/Clob;J)J")
J2CPP_DEFINE_METHOD(java::sql::Clob,5,"position","(Ljava/lang/String;J)J")
J2CPP_DEFINE_METHOD(java::sql::Clob,6,"setAsciiStream","(J)Ljava/io/OutputStream;")
J2CPP_DEFINE_METHOD(java::sql::Clob,7,"setCharacterStream","(J)Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(java::sql::Clob,8,"setString","(JLjava/lang/String;)I")
J2CPP_DEFINE_METHOD(java::sql::Clob,9,"setString","(JLjava/lang/String;II)I")
J2CPP_DEFINE_METHOD(java::sql::Clob,10,"truncate","(J)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_CLOB_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION