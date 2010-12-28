/*================================================================================
  code generated by: java2cpp
  class: android.content.SyncContext
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_SYNCCONTEXT_HPP_DECL
#define J2CPP_ANDROID_CONTENT_SYNCCONTEXT_HPP_DECL


namespace j2cpp { namespace android { namespace content { class SyncResult; } } }
namespace j2cpp { namespace android { namespace os { class IBinder; } } }


#include <android/content/SyncResult.hpp>
#include <android/os/IBinder.hpp>


namespace j2cpp {

namespace android { namespace content {

	class SyncContext;
	class SyncContext
		: public cpp_object<SyncContext>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		SyncContext(jobject jobj)
		: cpp_object<SyncContext>(jobj)
		{
		}

		void onFinished(local_ref< android::content::SyncResult > const&);
		local_ref< android::os::IBinder > getSyncContextBinder();
	}; //class SyncContext

} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_SYNCCONTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_SYNCCONTEXT_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_SYNCCONTEXT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::content::SyncContext > create< android::content::SyncContext>()
{
	return local_ref< android::content::SyncContext >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::SyncContext::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::SyncContext::J2CPP_CLASS_NAME, android::content::SyncContext::J2CPP_METHOD_NAME(0), android::content::SyncContext::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::content::SyncContext::onFinished(local_ref< android::content::SyncResult > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::os::IBinder > android::content::SyncContext::getSyncContextBinder()
{
	return local_ref< android::os::IBinder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::SyncContext,"android/content/SyncContext")
J2CPP_DEFINE_METHOD(android::content::SyncContext,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::SyncContext,1,"onFinished","(Landroid/content/SyncResult;)V")
J2CPP_DEFINE_METHOD(android::content::SyncContext,2,"getSyncContextBinder","()Landroid/os/IBinder;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_SYNCCONTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION