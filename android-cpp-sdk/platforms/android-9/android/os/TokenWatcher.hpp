/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.TokenWatcher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_TOKENWATCHER_HPP_DECL
#define J2CPP_ANDROID_OS_TOKENWATCHER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace os { class IBinder; } } }
namespace j2cpp { namespace android { namespace os { class Handler; } } }


#include <android/os/Handler.hpp>
#include <android/os/IBinder.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class TokenWatcher;
	class TokenWatcher
		: public object<TokenWatcher>
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

		explicit TokenWatcher(jobject jobj)
		: object<TokenWatcher>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		TokenWatcher(local_ref< android::os::Handler > const&, local_ref< java::lang::String > const&);
		void acquired();
		void released();
		void acquire(local_ref< android::os::IBinder >  const&, local_ref< java::lang::String >  const&);
		void cleanup(local_ref< android::os::IBinder >  const&, jboolean);
		void release(local_ref< android::os::IBinder >  const&);
		jboolean isAcquired();
		void dump();
	}; //class TokenWatcher

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_TOKENWATCHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_TOKENWATCHER_HPP_IMPL
#define J2CPP_ANDROID_OS_TOKENWATCHER_HPP_IMPL

namespace j2cpp {



android::os::TokenWatcher::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::os::TokenWatcher::TokenWatcher(local_ref< android::os::Handler > const &a0, local_ref< java::lang::String > const &a1)
: object<android::os::TokenWatcher>(
	call_new_object<
		android::os::TokenWatcher::J2CPP_CLASS_NAME,
		android::os::TokenWatcher::J2CPP_METHOD_NAME(0),
		android::os::TokenWatcher::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


void android::os::TokenWatcher::acquired()
{
	return call_method<
		android::os::TokenWatcher::J2CPP_CLASS_NAME,
		android::os::TokenWatcher::J2CPP_METHOD_NAME(1),
		android::os::TokenWatcher::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

void android::os::TokenWatcher::released()
{
	return call_method<
		android::os::TokenWatcher::J2CPP_CLASS_NAME,
		android::os::TokenWatcher::J2CPP_METHOD_NAME(2),
		android::os::TokenWatcher::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject());
}

void android::os::TokenWatcher::acquire(local_ref< android::os::IBinder > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::os::TokenWatcher::J2CPP_CLASS_NAME,
		android::os::TokenWatcher::J2CPP_METHOD_NAME(3),
		android::os::TokenWatcher::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}

void android::os::TokenWatcher::cleanup(local_ref< android::os::IBinder > const &a0, jboolean a1)
{
	return call_method<
		android::os::TokenWatcher::J2CPP_CLASS_NAME,
		android::os::TokenWatcher::J2CPP_METHOD_NAME(4),
		android::os::TokenWatcher::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

void android::os::TokenWatcher::release(local_ref< android::os::IBinder > const &a0)
{
	return call_method<
		android::os::TokenWatcher::J2CPP_CLASS_NAME,
		android::os::TokenWatcher::J2CPP_METHOD_NAME(5),
		android::os::TokenWatcher::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

jboolean android::os::TokenWatcher::isAcquired()
{
	return call_method<
		android::os::TokenWatcher::J2CPP_CLASS_NAME,
		android::os::TokenWatcher::J2CPP_METHOD_NAME(6),
		android::os::TokenWatcher::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject());
}

void android::os::TokenWatcher::dump()
{
	return call_method<
		android::os::TokenWatcher::J2CPP_CLASS_NAME,
		android::os::TokenWatcher::J2CPP_METHOD_NAME(7),
		android::os::TokenWatcher::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::os::TokenWatcher,"android/os/TokenWatcher")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,0,"<init>","(Landroid/os/Handler;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,1,"acquired","()V")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,2,"released","()V")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,3,"acquire","(Landroid/os/IBinder;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,4,"cleanup","(Landroid/os/IBinder;Z)V")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,5,"release","(Landroid/os/IBinder;)V")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,6,"isAcquired","()Z")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,7,"dump","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_TOKENWATCHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
