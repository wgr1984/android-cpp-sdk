/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.TouchDelegate
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_TOUCHDELEGATE_HPP_DECL
#define J2CPP_ANDROID_VIEW_TOUCHDELEGATE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }


#include <android/graphics/Rect.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/View.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view {

	class TouchDelegate;
	class TouchDelegate
		: public object<TouchDelegate>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit TouchDelegate(jobject jobj)
		: object<TouchDelegate>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		TouchDelegate(local_ref< android::graphics::Rect > const&, local_ref< android::view::View > const&);
		jboolean onTouchEvent(local_ref< android::view::MotionEvent >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > ABOVE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > BELOW;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > TO_LEFT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > TO_RIGHT;
	}; //class TouchDelegate

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_TOUCHDELEGATE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_TOUCHDELEGATE_HPP_IMPL
#define J2CPP_ANDROID_VIEW_TOUCHDELEGATE_HPP_IMPL

namespace j2cpp {



android::view::TouchDelegate::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::view::TouchDelegate::TouchDelegate(local_ref< android::graphics::Rect > const &a0, local_ref< android::view::View > const &a1)
: object<android::view::TouchDelegate>(
	call_new_object<
		android::view::TouchDelegate::J2CPP_CLASS_NAME,
		android::view::TouchDelegate::J2CPP_METHOD_NAME(0),
		android::view::TouchDelegate::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


jboolean android::view::TouchDelegate::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::view::TouchDelegate::J2CPP_CLASS_NAME,
		android::view::TouchDelegate::J2CPP_METHOD_NAME(1),
		android::view::TouchDelegate::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject(), a0);
}


static_field<
	android::view::TouchDelegate::J2CPP_CLASS_NAME,
	android::view::TouchDelegate::J2CPP_FIELD_NAME(0),
	android::view::TouchDelegate::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::view::TouchDelegate::ABOVE;

static_field<
	android::view::TouchDelegate::J2CPP_CLASS_NAME,
	android::view::TouchDelegate::J2CPP_FIELD_NAME(1),
	android::view::TouchDelegate::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::view::TouchDelegate::BELOW;

static_field<
	android::view::TouchDelegate::J2CPP_CLASS_NAME,
	android::view::TouchDelegate::J2CPP_FIELD_NAME(2),
	android::view::TouchDelegate::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::view::TouchDelegate::TO_LEFT;

static_field<
	android::view::TouchDelegate::J2CPP_CLASS_NAME,
	android::view::TouchDelegate::J2CPP_FIELD_NAME(3),
	android::view::TouchDelegate::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::view::TouchDelegate::TO_RIGHT;


J2CPP_DEFINE_CLASS(android::view::TouchDelegate,"android/view/TouchDelegate")
J2CPP_DEFINE_METHOD(android::view::TouchDelegate,0,"<init>","(Landroid/graphics/Rect;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::view::TouchDelegate,1,"onTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_FIELD(android::view::TouchDelegate,0,"ABOVE","I")
J2CPP_DEFINE_FIELD(android::view::TouchDelegate,1,"BELOW","I")
J2CPP_DEFINE_FIELD(android::view::TouchDelegate,2,"TO_LEFT","I")
J2CPP_DEFINE_FIELD(android::view::TouchDelegate,3,"TO_RIGHT","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_TOUCHDELEGATE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
