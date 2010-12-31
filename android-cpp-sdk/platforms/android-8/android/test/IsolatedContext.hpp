/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.IsolatedContext
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_ISOLATEDCONTEXT_HPP_DECL
#define J2CPP_ANDROID_TEST_ISOLATEDCONTEXT_HPP_DECL


namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace content { class IntentFilter; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class ServiceConnection; } } }
namespace j2cpp { namespace android { namespace content { class ContentResolver; } } }
namespace j2cpp { namespace android { namespace content { class ContextWrapper; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { class BroadcastReceiver; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }


#include <android/content/BroadcastReceiver.hpp>
#include <android/content/ContentResolver.hpp>
#include <android/content/Context.hpp>
#include <android/content/ContextWrapper.hpp>
#include <android/content/Intent.hpp>
#include <android/content/IntentFilter.hpp>
#include <android/content/ServiceConnection.hpp>
#include <android/net/Uri.hpp>
#include <java/io/File.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace android { namespace test {

	class IsolatedContext;
	class IsolatedContext
		: public object<IsolatedContext>
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

		explicit IsolatedContext(jobject jobj)
		: object<IsolatedContext>(jobj)
		{
		}

		operator local_ref<android::content::ContextWrapper>() const;


		IsolatedContext(local_ref< android::content::ContentResolver > const&, local_ref< android::content::Context > const&);
		local_ref< java::util::List > getAndClearBroadcastIntents();
		local_ref< android::content::ContentResolver > getContentResolver();
		jboolean bindService(local_ref< android::content::Intent >  const&, local_ref< android::content::ServiceConnection >  const&, jint);
		local_ref< android::content::Intent > registerReceiver(local_ref< android::content::BroadcastReceiver >  const&, local_ref< android::content::IntentFilter >  const&);
		void sendBroadcast(local_ref< android::content::Intent >  const&);
		void sendOrderedBroadcast(local_ref< android::content::Intent >  const&, local_ref< java::lang::String >  const&);
		jint checkUriPermission(local_ref< android::net::Uri >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, jint, jint, jint);
		jint checkUriPermission(local_ref< android::net::Uri >  const&, jint, jint, jint);
		local_ref< java::lang::Object > getSystemService(local_ref< java::lang::String >  const&);
		local_ref< java::io::File > getFilesDir();
	}; //class IsolatedContext

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_ISOLATEDCONTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_ISOLATEDCONTEXT_HPP_IMPL
#define J2CPP_ANDROID_TEST_ISOLATEDCONTEXT_HPP_IMPL

namespace j2cpp {



android::test::IsolatedContext::operator local_ref<android::content::ContextWrapper>() const
{
	return local_ref<android::content::ContextWrapper>(get_jobject());
}


android::test::IsolatedContext::IsolatedContext(local_ref< android::content::ContentResolver > const &a0, local_ref< android::content::Context > const &a1)
: object<android::test::IsolatedContext>(
	call_new_object<
		android::test::IsolatedContext::J2CPP_CLASS_NAME,
		android::test::IsolatedContext::J2CPP_METHOD_NAME(0),
		android::test::IsolatedContext::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


local_ref< java::util::List > android::test::IsolatedContext::getAndClearBroadcastIntents()
{
	return call_method<
		android::test::IsolatedContext::J2CPP_CLASS_NAME,
		android::test::IsolatedContext::J2CPP_METHOD_NAME(1),
		android::test::IsolatedContext::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::List > >
	(get_jobject());
}

local_ref< android::content::ContentResolver > android::test::IsolatedContext::getContentResolver()
{
	return call_method<
		android::test::IsolatedContext::J2CPP_CLASS_NAME,
		android::test::IsolatedContext::J2CPP_METHOD_NAME(2),
		android::test::IsolatedContext::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::content::ContentResolver > >
	(get_jobject());
}

jboolean android::test::IsolatedContext::bindService(local_ref< android::content::Intent > const &a0, local_ref< android::content::ServiceConnection > const &a1, jint a2)
{
	return call_method<
		android::test::IsolatedContext::J2CPP_CLASS_NAME,
		android::test::IsolatedContext::J2CPP_METHOD_NAME(3),
		android::test::IsolatedContext::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

local_ref< android::content::Intent > android::test::IsolatedContext::registerReceiver(local_ref< android::content::BroadcastReceiver > const &a0, local_ref< android::content::IntentFilter > const &a1)
{
	return call_method<
		android::test::IsolatedContext::J2CPP_CLASS_NAME,
		android::test::IsolatedContext::J2CPP_METHOD_NAME(4),
		android::test::IsolatedContext::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::content::Intent > >
	(get_jobject(), a0, a1);
}

void android::test::IsolatedContext::sendBroadcast(local_ref< android::content::Intent > const &a0)
{
	return call_method<
		android::test::IsolatedContext::J2CPP_CLASS_NAME,
		android::test::IsolatedContext::J2CPP_METHOD_NAME(5),
		android::test::IsolatedContext::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

void android::test::IsolatedContext::sendOrderedBroadcast(local_ref< android::content::Intent > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::test::IsolatedContext::J2CPP_CLASS_NAME,
		android::test::IsolatedContext::J2CPP_METHOD_NAME(6),
		android::test::IsolatedContext::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1);
}

jint android::test::IsolatedContext::checkUriPermission(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, jint a3, jint a4, jint a5)
{
	return call_method<
		android::test::IsolatedContext::J2CPP_CLASS_NAME,
		android::test::IsolatedContext::J2CPP_METHOD_NAME(7),
		android::test::IsolatedContext::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject(), a0, a1, a2, a3, a4, a5);
}

jint android::test::IsolatedContext::checkUriPermission(local_ref< android::net::Uri > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::test::IsolatedContext::J2CPP_CLASS_NAME,
		android::test::IsolatedContext::J2CPP_METHOD_NAME(8),
		android::test::IsolatedContext::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject(), a0, a1, a2, a3);
}

local_ref< java::lang::Object > android::test::IsolatedContext::getSystemService(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::test::IsolatedContext::J2CPP_CLASS_NAME,
		android::test::IsolatedContext::J2CPP_METHOD_NAME(9),
		android::test::IsolatedContext::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

local_ref< java::io::File > android::test::IsolatedContext::getFilesDir()
{
	return call_method<
		android::test::IsolatedContext::J2CPP_CLASS_NAME,
		android::test::IsolatedContext::J2CPP_METHOD_NAME(10),
		android::test::IsolatedContext::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::io::File > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::test::IsolatedContext,"android/test/IsolatedContext")
J2CPP_DEFINE_METHOD(android::test::IsolatedContext,0,"<init>","(Landroid/content/ContentResolver;Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::test::IsolatedContext,1,"getAndClearBroadcastIntents","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::test::IsolatedContext,2,"getContentResolver","()Landroid/content/ContentResolver;")
J2CPP_DEFINE_METHOD(android::test::IsolatedContext,3,"bindService","(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z")
J2CPP_DEFINE_METHOD(android::test::IsolatedContext,4,"registerReceiver","(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;")
J2CPP_DEFINE_METHOD(android::test::IsolatedContext,5,"sendBroadcast","(Landroid/content/Intent;)V")
J2CPP_DEFINE_METHOD(android::test::IsolatedContext,6,"sendOrderedBroadcast","(Landroid/content/Intent;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::test::IsolatedContext,7,"checkUriPermission","(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;III)I")
J2CPP_DEFINE_METHOD(android::test::IsolatedContext,8,"checkUriPermission","(Landroid/net/Uri;III)I")
J2CPP_DEFINE_METHOD(android::test::IsolatedContext,9,"getSystemService","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::test::IsolatedContext,10,"getFilesDir","()Ljava/io/File;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_ISOLATEDCONTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
