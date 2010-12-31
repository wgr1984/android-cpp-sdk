/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.NativeActivity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_NATIVEACTIVITY_HPP_DECL
#define J2CPP_ANDROID_APP_NATIVEACTIVITY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Configuration; } } } }
namespace j2cpp { namespace android { namespace app { class Activity; } } }
namespace j2cpp { namespace android { namespace view { class InputQueue; } } }
namespace j2cpp { namespace android { namespace view { namespace InputQueue_ { class Callback; } } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { class SurfaceHolder; } } }
namespace j2cpp { namespace android { namespace view { namespace SurfaceHolder_ { class Callback2; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnGlobalLayoutListener; } } } }


#include <android/app/Activity.hpp>
#include <android/content/res/Configuration.hpp>
#include <android/view/InputQueue.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/SurfaceHolder.hpp>
#include <android/view/ViewTreeObserver.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app {

	class NativeActivity;
	class NativeActivity
		: public object<NativeActivity>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit NativeActivity(jobject jobj)
		: object<NativeActivity>(jobj)
		{
		}

		operator local_ref<android::app::Activity>() const;
		operator local_ref<android::view::SurfaceHolder_::Callback2>() const;
		operator local_ref<android::view::InputQueue_::Callback>() const;
		operator local_ref<android::view::ViewTreeObserver_::OnGlobalLayoutListener>() const;


		NativeActivity();
		void onConfigurationChanged(local_ref< android::content::res::Configuration >  const&);
		void onLowMemory();
		void onWindowFocusChanged(jboolean);
		jboolean dispatchKeyEvent(local_ref< android::view::KeyEvent >  const&);
		void surfaceCreated(local_ref< android::view::SurfaceHolder >  const&);
		void surfaceChanged(local_ref< android::view::SurfaceHolder >  const&, jint, jint, jint);
		void surfaceRedrawNeeded(local_ref< android::view::SurfaceHolder >  const&);
		void surfaceDestroyed(local_ref< android::view::SurfaceHolder >  const&);
		void onInputQueueCreated(local_ref< android::view::InputQueue >  const&);
		void onInputQueueDestroyed(local_ref< android::view::InputQueue >  const&);
		void onGlobalLayout();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > META_DATA_LIB_NAME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > META_DATA_FUNC_NAME;
	}; //class NativeActivity

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_NATIVEACTIVITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_NATIVEACTIVITY_HPP_IMPL
#define J2CPP_ANDROID_APP_NATIVEACTIVITY_HPP_IMPL

namespace j2cpp {



android::app::NativeActivity::operator local_ref<android::app::Activity>() const
{
	return local_ref<android::app::Activity>(get_jobject());
}

android::app::NativeActivity::operator local_ref<android::view::SurfaceHolder_::Callback2>() const
{
	return local_ref<android::view::SurfaceHolder_::Callback2>(get_jobject());
}

android::app::NativeActivity::operator local_ref<android::view::InputQueue_::Callback>() const
{
	return local_ref<android::view::InputQueue_::Callback>(get_jobject());
}

android::app::NativeActivity::operator local_ref<android::view::ViewTreeObserver_::OnGlobalLayoutListener>() const
{
	return local_ref<android::view::ViewTreeObserver_::OnGlobalLayoutListener>(get_jobject());
}


android::app::NativeActivity::NativeActivity()
: object<android::app::NativeActivity>(
	call_new_object<
		android::app::NativeActivity::J2CPP_CLASS_NAME,
		android::app::NativeActivity::J2CPP_METHOD_NAME(0),
		android::app::NativeActivity::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}









void android::app::NativeActivity::onConfigurationChanged(local_ref< android::content::res::Configuration > const &a0)
{
	return call_method<
		android::app::NativeActivity::J2CPP_CLASS_NAME,
		android::app::NativeActivity::J2CPP_METHOD_NAME(8),
		android::app::NativeActivity::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void android::app::NativeActivity::onLowMemory()
{
	return call_method<
		android::app::NativeActivity::J2CPP_CLASS_NAME,
		android::app::NativeActivity::J2CPP_METHOD_NAME(9),
		android::app::NativeActivity::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject());
}

void android::app::NativeActivity::onWindowFocusChanged(jboolean a0)
{
	return call_method<
		android::app::NativeActivity::J2CPP_CLASS_NAME,
		android::app::NativeActivity::J2CPP_METHOD_NAME(10),
		android::app::NativeActivity::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

jboolean android::app::NativeActivity::dispatchKeyEvent(local_ref< android::view::KeyEvent > const &a0)
{
	return call_method<
		android::app::NativeActivity::J2CPP_CLASS_NAME,
		android::app::NativeActivity::J2CPP_METHOD_NAME(11),
		android::app::NativeActivity::J2CPP_METHOD_SIGNATURE(11), 
		jboolean >
	(get_jobject(), a0);
}

void android::app::NativeActivity::surfaceCreated(local_ref< android::view::SurfaceHolder > const &a0)
{
	return call_method<
		android::app::NativeActivity::J2CPP_CLASS_NAME,
		android::app::NativeActivity::J2CPP_METHOD_NAME(12),
		android::app::NativeActivity::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

void android::app::NativeActivity::surfaceChanged(local_ref< android::view::SurfaceHolder > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::app::NativeActivity::J2CPP_CLASS_NAME,
		android::app::NativeActivity::J2CPP_METHOD_NAME(13),
		android::app::NativeActivity::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::app::NativeActivity::surfaceRedrawNeeded(local_ref< android::view::SurfaceHolder > const &a0)
{
	return call_method<
		android::app::NativeActivity::J2CPP_CLASS_NAME,
		android::app::NativeActivity::J2CPP_METHOD_NAME(14),
		android::app::NativeActivity::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0);
}

void android::app::NativeActivity::surfaceDestroyed(local_ref< android::view::SurfaceHolder > const &a0)
{
	return call_method<
		android::app::NativeActivity::J2CPP_CLASS_NAME,
		android::app::NativeActivity::J2CPP_METHOD_NAME(15),
		android::app::NativeActivity::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

void android::app::NativeActivity::onInputQueueCreated(local_ref< android::view::InputQueue > const &a0)
{
	return call_method<
		android::app::NativeActivity::J2CPP_CLASS_NAME,
		android::app::NativeActivity::J2CPP_METHOD_NAME(16),
		android::app::NativeActivity::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

void android::app::NativeActivity::onInputQueueDestroyed(local_ref< android::view::InputQueue > const &a0)
{
	return call_method<
		android::app::NativeActivity::J2CPP_CLASS_NAME,
		android::app::NativeActivity::J2CPP_METHOD_NAME(17),
		android::app::NativeActivity::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

void android::app::NativeActivity::onGlobalLayout()
{
	return call_method<
		android::app::NativeActivity::J2CPP_CLASS_NAME,
		android::app::NativeActivity::J2CPP_METHOD_NAME(18),
		android::app::NativeActivity::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject());
}


static_field<
	android::app::NativeActivity::J2CPP_CLASS_NAME,
	android::app::NativeActivity::J2CPP_FIELD_NAME(0),
	android::app::NativeActivity::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::app::NativeActivity::META_DATA_LIB_NAME;

static_field<
	android::app::NativeActivity::J2CPP_CLASS_NAME,
	android::app::NativeActivity::J2CPP_FIELD_NAME(1),
	android::app::NativeActivity::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::app::NativeActivity::META_DATA_FUNC_NAME;


J2CPP_DEFINE_CLASS(android::app::NativeActivity,"android/app/NativeActivity")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,1,"onCreate","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,2,"onDestroy","()V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,3,"onPause","()V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,4,"onResume","()V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,5,"onSaveInstanceState","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,6,"onStart","()V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,7,"onStop","()V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,8,"onConfigurationChanged","(Landroid/content/res/Configuration;)V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,9,"onLowMemory","()V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,10,"onWindowFocusChanged","(Z)V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,11,"dispatchKeyEvent","(Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,12,"surfaceCreated","(Landroid/view/SurfaceHolder;)V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,13,"surfaceChanged","(Landroid/view/SurfaceHolder;III)V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,14,"surfaceRedrawNeeded","(Landroid/view/SurfaceHolder;)V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,15,"surfaceDestroyed","(Landroid/view/SurfaceHolder;)V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,16,"onInputQueueCreated","(Landroid/view/InputQueue;)V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,17,"onInputQueueDestroyed","(Landroid/view/InputQueue;)V")
J2CPP_DEFINE_METHOD(android::app::NativeActivity,18,"onGlobalLayout","()V")
J2CPP_DEFINE_FIELD(android::app::NativeActivity,0,"META_DATA_LIB_NAME","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::NativeActivity,1,"META_DATA_FUNC_NAME","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_NATIVEACTIVITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
