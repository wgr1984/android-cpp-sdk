/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.util.Log
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_LOG_HPP_DECL
#define J2CPP_ANDROID_UTIL_LOG_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace android { namespace util {

	class Log;
	class Log
		: public object<Log>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		explicit Log(jobject jobj)
		: object<Log>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static jint v(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static jint v(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::Throwable >  const&);
		static jint d(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static jint d(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::Throwable >  const&);
		static jint i(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static jint i(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::Throwable >  const&);
		static jint w(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static jint w(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::Throwable >  const&);
		static jboolean isLoggable(local_ref< java::lang::String >  const&, jint);
		static jint w(local_ref< java::lang::String >  const&, local_ref< java::lang::Throwable >  const&);
		static jint e(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static jint e(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::Throwable >  const&);
		static jint wtf(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static jint wtf(local_ref< java::lang::String >  const&, local_ref< java::lang::Throwable >  const&);
		static jint wtf(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::Throwable >  const&);
		static local_ref< java::lang::String > getStackTraceString(local_ref< java::lang::Throwable >  const&);
		static jint println(jint, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > VERBOSE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > DEBUG;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > INFO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > WARN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > ASSERT;
	}; //class Log

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_LOG_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_LOG_HPP_IMPL
#define J2CPP_ANDROID_UTIL_LOG_HPP_IMPL

namespace j2cpp {



android::util::Log::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jint android::util::Log::v(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(1),
		android::util::Log::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(a0, a1);
}

jint android::util::Log::v(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::Throwable > const &a2)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(2),
		android::util::Log::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(a0, a1, a2);
}

jint android::util::Log::d(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(3),
		android::util::Log::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(a0, a1);
}

jint android::util::Log::d(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::Throwable > const &a2)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(4),
		android::util::Log::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(a0, a1, a2);
}

jint android::util::Log::i(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(5),
		android::util::Log::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(a0, a1);
}

jint android::util::Log::i(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::Throwable > const &a2)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(6),
		android::util::Log::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(a0, a1, a2);
}

jint android::util::Log::w(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(7),
		android::util::Log::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(a0, a1);
}

jint android::util::Log::w(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::Throwable > const &a2)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(8),
		android::util::Log::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(a0, a1, a2);
}

jboolean android::util::Log::isLoggable(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(9),
		android::util::Log::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(a0, a1);
}

jint android::util::Log::w(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(10),
		android::util::Log::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(a0, a1);
}

jint android::util::Log::e(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(11),
		android::util::Log::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(a0, a1);
}

jint android::util::Log::e(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::Throwable > const &a2)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(12),
		android::util::Log::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(a0, a1, a2);
}

jint android::util::Log::wtf(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(13),
		android::util::Log::J2CPP_METHOD_SIGNATURE(13), 
		jint >
	(a0, a1);
}

jint android::util::Log::wtf(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(14),
		android::util::Log::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(a0, a1);
}

jint android::util::Log::wtf(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::Throwable > const &a2)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(15),
		android::util::Log::J2CPP_METHOD_SIGNATURE(15), 
		jint >
	(a0, a1, a2);
}

local_ref< java::lang::String > android::util::Log::getStackTraceString(local_ref< java::lang::Throwable > const &a0)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(16),
		android::util::Log::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::String > >
	(a0);
}

jint android::util::Log::println(jint a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_static_method<
		android::util::Log::J2CPP_CLASS_NAME,
		android::util::Log::J2CPP_METHOD_NAME(17),
		android::util::Log::J2CPP_METHOD_SIGNATURE(17), 
		jint >
	(a0, a1, a2);
}


static_field<
	android::util::Log::J2CPP_CLASS_NAME,
	android::util::Log::J2CPP_FIELD_NAME(0),
	android::util::Log::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::util::Log::VERBOSE;

static_field<
	android::util::Log::J2CPP_CLASS_NAME,
	android::util::Log::J2CPP_FIELD_NAME(1),
	android::util::Log::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::util::Log::DEBUG;

static_field<
	android::util::Log::J2CPP_CLASS_NAME,
	android::util::Log::J2CPP_FIELD_NAME(2),
	android::util::Log::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::util::Log::INFO;

static_field<
	android::util::Log::J2CPP_CLASS_NAME,
	android::util::Log::J2CPP_FIELD_NAME(3),
	android::util::Log::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::util::Log::WARN;

static_field<
	android::util::Log::J2CPP_CLASS_NAME,
	android::util::Log::J2CPP_FIELD_NAME(4),
	android::util::Log::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::util::Log::ERROR;

static_field<
	android::util::Log::J2CPP_CLASS_NAME,
	android::util::Log::J2CPP_FIELD_NAME(5),
	android::util::Log::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::util::Log::ASSERT;


J2CPP_DEFINE_CLASS(android::util::Log,"android/util/Log")
J2CPP_DEFINE_METHOD(android::util::Log,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::util::Log,1,"v","(Ljava/lang/String;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::util::Log,2,"v","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I")
J2CPP_DEFINE_METHOD(android::util::Log,3,"d","(Ljava/lang/String;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::util::Log,4,"d","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I")
J2CPP_DEFINE_METHOD(android::util::Log,5,"i","(Ljava/lang/String;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::util::Log,6,"i","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I")
J2CPP_DEFINE_METHOD(android::util::Log,7,"w","(Ljava/lang/String;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::util::Log,8,"w","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I")
J2CPP_DEFINE_METHOD(android::util::Log,9,"isLoggable","(Ljava/lang/String;I)Z")
J2CPP_DEFINE_METHOD(android::util::Log,10,"w","(Ljava/lang/String;Ljava/lang/Throwable;)I")
J2CPP_DEFINE_METHOD(android::util::Log,11,"e","(Ljava/lang/String;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::util::Log,12,"e","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I")
J2CPP_DEFINE_METHOD(android::util::Log,13,"wtf","(Ljava/lang/String;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::util::Log,14,"wtf","(Ljava/lang/String;Ljava/lang/Throwable;)I")
J2CPP_DEFINE_METHOD(android::util::Log,15,"wtf","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I")
J2CPP_DEFINE_METHOD(android::util::Log,16,"getStackTraceString","(Ljava/lang/Throwable;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::util::Log,17,"println","(ILjava/lang/String;Ljava/lang/String;)I")
J2CPP_DEFINE_FIELD(android::util::Log,0,"VERBOSE","I")
J2CPP_DEFINE_FIELD(android::util::Log,1,"DEBUG","I")
J2CPP_DEFINE_FIELD(android::util::Log,2,"INFO","I")
J2CPP_DEFINE_FIELD(android::util::Log,3,"WARN","I")
J2CPP_DEFINE_FIELD(android::util::Log,4,"ERROR","I")
J2CPP_DEFINE_FIELD(android::util::Log,5,"ASSERT","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_LOG_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
