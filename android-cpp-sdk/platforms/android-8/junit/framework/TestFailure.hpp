/*================================================================================
  code generated by: java2cpp
  class: junit.framework.TestFailure
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_TESTFAILURE_HPP_DECL
#define J2CPP_JUNIT_FRAMEWORK_TESTFAILURE_HPP_DECL


namespace j2cpp { namespace junit { namespace framework { class Test; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <junit/framework/Test.hpp>


namespace j2cpp {

namespace junit { namespace framework {

	class TestFailure;
	class TestFailure
		: public cpp_object<TestFailure>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		TestFailure(jobject jobj)
		: cpp_object<TestFailure>(jobj)
		{
		}

		local_ref< junit::framework::Test > failedTest();
		local_ref< java::lang::Throwable > thrownException();
		local_ref< java::lang::String > toString();
		local_ref< java::lang::String > trace();
		local_ref< java::lang::String > exceptionMessage();
		cpp_boolean isFailure();

	}; //class TestFailure

} //namespace framework
} //namespace junit


} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_TESTFAILURE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_TESTFAILURE_HPP_IMPL
#define J2CPP_JUNIT_FRAMEWORK_TESTFAILURE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< junit::framework::TestFailure > create< junit::framework::TestFailure>(local_ref< junit::framework::Test > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return local_ref< junit::framework::TestFailure >(
		environment::get().get_jenv()->NewObject(
			get_class<junit::framework::TestFailure::J2CPP_CLASS_NAME>(),
			get_method_id<junit::framework::TestFailure::J2CPP_CLASS_NAME, junit::framework::TestFailure::J2CPP_METHOD_NAME(0), junit::framework::TestFailure::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< junit::framework::Test > junit::framework::TestFailure::failedTest()
{
	return local_ref< junit::framework::Test >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::Throwable > junit::framework::TestFailure::thrownException()
{
	return local_ref< java::lang::Throwable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > junit::framework::TestFailure::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::lang::String > junit::framework::TestFailure::trace()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::String > junit::framework::TestFailure::exceptionMessage()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean junit::framework::TestFailure::isFailure()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(junit::framework::TestFailure,"junit/framework/TestFailure")
J2CPP_DEFINE_METHOD(junit::framework::TestFailure,0,"<init>","(Ljunit/framework/Test;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestFailure,1,"failedTest","()Ljunit/framework/Test;")
J2CPP_DEFINE_METHOD(junit::framework::TestFailure,2,"thrownException","()Ljava/lang/Throwable;")
J2CPP_DEFINE_METHOD(junit::framework::TestFailure,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(junit::framework::TestFailure,4,"trace","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(junit::framework::TestFailure,5,"exceptionMessage","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(junit::framework::TestFailure,6,"isFailure","()Z")
J2CPP_DEFINE_FIELD(junit::framework::TestFailure,0,"fFailedTest","Ljunit/framework/Test;")
J2CPP_DEFINE_FIELD(junit::framework::TestFailure,1,"fThrownException","Ljava/lang/Throwable;")

} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_TESTFAILURE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION