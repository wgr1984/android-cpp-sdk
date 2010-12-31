/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.OrientationListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ORIENTATIONLISTENER_HPP_DECL
#define J2CPP_ANDROID_VIEW_ORIENTATIONLISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace hardware { class SensorListener; } } }


#include <android/content/Context.hpp>
#include <android/hardware/SensorListener.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view {

	class OrientationListener;
	class OrientationListener
		: public object<OrientationListener>
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

		explicit OrientationListener(jobject jobj)
		: object<OrientationListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::hardware::SensorListener>() const;


		OrientationListener(local_ref< android::content::Context > const&);
		OrientationListener(local_ref< android::content::Context > const&, jint);
		void enable();
		void disable();
		void onAccuracyChanged(jint, jint);
		void onSensorChanged(jint, local_ref< array<jfloat,1> >  const&);
		void onOrientationChanged(jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > ORIENTATION_UNKNOWN;
	}; //class OrientationListener

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ORIENTATIONLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ORIENTATIONLISTENER_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ORIENTATIONLISTENER_HPP_IMPL

namespace j2cpp {



android::view::OrientationListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::view::OrientationListener::operator local_ref<android::hardware::SensorListener>() const
{
	return local_ref<android::hardware::SensorListener>(get_jobject());
}


android::view::OrientationListener::OrientationListener(local_ref< android::content::Context > const &a0)
: object<android::view::OrientationListener>(
	call_new_object<
		android::view::OrientationListener::J2CPP_CLASS_NAME,
		android::view::OrientationListener::J2CPP_METHOD_NAME(0),
		android::view::OrientationListener::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



android::view::OrientationListener::OrientationListener(local_ref< android::content::Context > const &a0, jint a1)
: object<android::view::OrientationListener>(
	call_new_object<
		android::view::OrientationListener::J2CPP_CLASS_NAME,
		android::view::OrientationListener::J2CPP_METHOD_NAME(1),
		android::view::OrientationListener::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}


void android::view::OrientationListener::enable()
{
	return call_method<
		android::view::OrientationListener::J2CPP_CLASS_NAME,
		android::view::OrientationListener::J2CPP_METHOD_NAME(2),
		android::view::OrientationListener::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject());
}

void android::view::OrientationListener::disable()
{
	return call_method<
		android::view::OrientationListener::J2CPP_CLASS_NAME,
		android::view::OrientationListener::J2CPP_METHOD_NAME(3),
		android::view::OrientationListener::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject());
}

void android::view::OrientationListener::onAccuracyChanged(jint a0, jint a1)
{
	return call_method<
		android::view::OrientationListener::J2CPP_CLASS_NAME,
		android::view::OrientationListener::J2CPP_METHOD_NAME(4),
		android::view::OrientationListener::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

void android::view::OrientationListener::onSensorChanged(jint a0, local_ref< array<jfloat,1> > const &a1)
{
	return call_method<
		android::view::OrientationListener::J2CPP_CLASS_NAME,
		android::view::OrientationListener::J2CPP_METHOD_NAME(5),
		android::view::OrientationListener::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}

void android::view::OrientationListener::onOrientationChanged(jint a0)
{
	return call_method<
		android::view::OrientationListener::J2CPP_CLASS_NAME,
		android::view::OrientationListener::J2CPP_METHOD_NAME(6),
		android::view::OrientationListener::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}


static_field<
	android::view::OrientationListener::J2CPP_CLASS_NAME,
	android::view::OrientationListener::J2CPP_FIELD_NAME(0),
	android::view::OrientationListener::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::view::OrientationListener::ORIENTATION_UNKNOWN;


J2CPP_DEFINE_CLASS(android::view::OrientationListener,"android/view/OrientationListener")
J2CPP_DEFINE_METHOD(android::view::OrientationListener,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::view::OrientationListener,1,"<init>","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::view::OrientationListener,2,"enable","()V")
J2CPP_DEFINE_METHOD(android::view::OrientationListener,3,"disable","()V")
J2CPP_DEFINE_METHOD(android::view::OrientationListener,4,"onAccuracyChanged","(II)V")
J2CPP_DEFINE_METHOD(android::view::OrientationListener,5,"onSensorChanged","(I[F)V")
J2CPP_DEFINE_METHOD(android::view::OrientationListener,6,"onOrientationChanged","(I)V")
J2CPP_DEFINE_FIELD(android::view::OrientationListener,0,"ORIENTATION_UNKNOWN","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ORIENTATIONLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
