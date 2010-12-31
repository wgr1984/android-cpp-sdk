/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.Gallery
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_GALLERY_HPP_DECL
#define J2CPP_ANDROID_WIDGET_GALLERY_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace GestureDetector_ { class OnGestureListener; } } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace widget { class AbsSpinner; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/GestureDetector.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/widget/AbsSpinner.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class Gallery;
	namespace Gallery_ {

		class LayoutParams;
		class LayoutParams
			: public object<LayoutParams>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			explicit LayoutParams(jobject jobj)
			: object<LayoutParams>(jobj)
			{
			}

			operator local_ref<android::view::ViewGroup_::LayoutParams>() const;


			LayoutParams(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
			LayoutParams(jint, jint);
			LayoutParams(local_ref< android::view::ViewGroup_::LayoutParams > const&);
		}; //class LayoutParams

	} //namespace Gallery_

	class Gallery
		: public object<Gallery>
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
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)

		typedef Gallery_::LayoutParams LayoutParams;

		explicit Gallery(jobject jobj)
		: object<Gallery>(jobj)
		{
		}

		operator local_ref<android::widget::AbsSpinner>() const;
		operator local_ref<android::view::GestureDetector_::OnGestureListener>() const;


		Gallery(local_ref< android::content::Context > const&);
		Gallery(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		Gallery(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		void setCallbackDuringFling(jboolean);
		void setAnimationDuration(jint);
		void setSpacing(jint);
		void setUnselectedAlpha(jfloat);
		local_ref< android::view::ViewGroup_::LayoutParams > generateLayoutParams(local_ref< android::util::AttributeSet >  const&);
		jboolean onTouchEvent(local_ref< android::view::MotionEvent >  const&);
		jboolean onSingleTapUp(local_ref< android::view::MotionEvent >  const&);
		jboolean onFling(local_ref< android::view::MotionEvent >  const&, local_ref< android::view::MotionEvent >  const&, jfloat, jfloat);
		jboolean onScroll(local_ref< android::view::MotionEvent >  const&, local_ref< android::view::MotionEvent >  const&, jfloat, jfloat);
		jboolean onDown(local_ref< android::view::MotionEvent >  const&);
		void onLongPress(local_ref< android::view::MotionEvent >  const&);
		void onShowPress(local_ref< android::view::MotionEvent >  const&);
		void dispatchSetSelected(jboolean);
		jboolean showContextMenuForChild(local_ref< android::view::View >  const&);
		jboolean showContextMenu();
		jboolean dispatchKeyEvent(local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyDown(jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyUp(jint, local_ref< android::view::KeyEvent >  const&);
		void setGravity(jint);
	}; //class Gallery

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_GALLERY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_GALLERY_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_GALLERY_HPP_IMPL

namespace j2cpp {




android::widget::Gallery_::LayoutParams::operator local_ref<android::view::ViewGroup_::LayoutParams>() const
{
	return local_ref<android::view::ViewGroup_::LayoutParams>(get_jobject());
}


android::widget::Gallery_::LayoutParams::LayoutParams(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::Gallery_::LayoutParams>(
	call_new_object<
		android::widget::Gallery_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::Gallery_::LayoutParams::J2CPP_METHOD_NAME(0),
		android::widget::Gallery_::LayoutParams::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



android::widget::Gallery_::LayoutParams::LayoutParams(jint a0, jint a1)
: object<android::widget::Gallery_::LayoutParams>(
	call_new_object<
		android::widget::Gallery_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::Gallery_::LayoutParams::J2CPP_METHOD_NAME(1),
		android::widget::Gallery_::LayoutParams::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



android::widget::Gallery_::LayoutParams::LayoutParams(local_ref< android::view::ViewGroup_::LayoutParams > const &a0)
: object<android::widget::Gallery_::LayoutParams>(
	call_new_object<
		android::widget::Gallery_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::Gallery_::LayoutParams::J2CPP_METHOD_NAME(2),
		android::widget::Gallery_::LayoutParams::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(android::widget::Gallery_::LayoutParams,"android/widget/Gallery$LayoutParams")
J2CPP_DEFINE_METHOD(android::widget::Gallery_::LayoutParams,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::Gallery_::LayoutParams,1,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::widget::Gallery_::LayoutParams,2,"<init>","(Landroid/view/ViewGroup$LayoutParams;)V")



android::widget::Gallery::operator local_ref<android::widget::AbsSpinner>() const
{
	return local_ref<android::widget::AbsSpinner>(get_jobject());
}

android::widget::Gallery::operator local_ref<android::view::GestureDetector_::OnGestureListener>() const
{
	return local_ref<android::view::GestureDetector_::OnGestureListener>(get_jobject());
}


android::widget::Gallery::Gallery(local_ref< android::content::Context > const &a0)
: object<android::widget::Gallery>(
	call_new_object<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(0),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



android::widget::Gallery::Gallery(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::Gallery>(
	call_new_object<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(1),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



android::widget::Gallery::Gallery(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::Gallery>(
	call_new_object<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(2),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}


void android::widget::Gallery::setCallbackDuringFling(jboolean a0)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(3),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void android::widget::Gallery::setAnimationDuration(jint a0)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(4),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

void android::widget::Gallery::setSpacing(jint a0)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(5),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

void android::widget::Gallery::setUnselectedAlpha(jfloat a0)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(6),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}







local_ref< android::view::ViewGroup_::LayoutParams > android::widget::Gallery::generateLayoutParams(local_ref< android::util::AttributeSet > const &a0)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(13),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< android::view::ViewGroup_::LayoutParams > >
	(get_jobject(), a0);
}



jboolean android::widget::Gallery::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(16),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(16), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::widget::Gallery::onSingleTapUp(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(17),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(17), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::widget::Gallery::onFling(local_ref< android::view::MotionEvent > const &a0, local_ref< android::view::MotionEvent > const &a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(18),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(18), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::widget::Gallery::onScroll(local_ref< android::view::MotionEvent > const &a0, local_ref< android::view::MotionEvent > const &a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(19),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(19), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::widget::Gallery::onDown(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(20),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(20), 
		jboolean >
	(get_jobject(), a0);
}

void android::widget::Gallery::onLongPress(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(21),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0);
}

void android::widget::Gallery::onShowPress(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(22),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject(), a0);
}

void android::widget::Gallery::dispatchSetSelected(jboolean a0)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(23),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(23), 
		void >
	(get_jobject(), a0);
}



jboolean android::widget::Gallery::showContextMenuForChild(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(26),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(26), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::widget::Gallery::showContextMenu()
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(27),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(27), 
		jboolean >
	(get_jobject());
}

jboolean android::widget::Gallery::dispatchKeyEvent(local_ref< android::view::KeyEvent > const &a0)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(28),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(28), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::widget::Gallery::onKeyDown(jint a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(29),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(29), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::widget::Gallery::onKeyUp(jint a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(30),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(30), 
		jboolean >
	(get_jobject(), a0, a1);
}

void android::widget::Gallery::setGravity(jint a0)
{
	return call_method<
		android::widget::Gallery::J2CPP_CLASS_NAME,
		android::widget::Gallery::J2CPP_METHOD_NAME(31),
		android::widget::Gallery::J2CPP_METHOD_SIGNATURE(31), 
		void >
	(get_jobject(), a0);
}




J2CPP_DEFINE_CLASS(android::widget::Gallery,"android/widget/Gallery")
J2CPP_DEFINE_METHOD(android::widget::Gallery,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::Gallery,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::Gallery,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::Gallery,3,"setCallbackDuringFling","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::Gallery,4,"setAnimationDuration","(I)V")
J2CPP_DEFINE_METHOD(android::widget::Gallery,5,"setSpacing","(I)V")
J2CPP_DEFINE_METHOD(android::widget::Gallery,6,"setUnselectedAlpha","(F)V")
J2CPP_DEFINE_METHOD(android::widget::Gallery,7,"getChildStaticTransformation","(Landroid/view/View;Landroid/view/animation/Transformation;)Z")
J2CPP_DEFINE_METHOD(android::widget::Gallery,8,"computeHorizontalScrollExtent","()I")
J2CPP_DEFINE_METHOD(android::widget::Gallery,9,"computeHorizontalScrollOffset","()I")
J2CPP_DEFINE_METHOD(android::widget::Gallery,10,"computeHorizontalScrollRange","()I")
J2CPP_DEFINE_METHOD(android::widget::Gallery,11,"checkLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Z")
J2CPP_DEFINE_METHOD(android::widget::Gallery,12,"generateLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::Gallery,13,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::Gallery,14,"generateDefaultLayoutParams","()Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::Gallery,15,"onLayout","(ZIIII)V")
J2CPP_DEFINE_METHOD(android::widget::Gallery,16,"onTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::Gallery,17,"onSingleTapUp","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::Gallery,18,"onFling","(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z")
J2CPP_DEFINE_METHOD(android::widget::Gallery,19,"onScroll","(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z")
J2CPP_DEFINE_METHOD(android::widget::Gallery,20,"onDown","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::Gallery,21,"onLongPress","(Landroid/view/MotionEvent;)V")
J2CPP_DEFINE_METHOD(android::widget::Gallery,22,"onShowPress","(Landroid/view/MotionEvent;)V")
J2CPP_DEFINE_METHOD(android::widget::Gallery,23,"dispatchSetSelected","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::Gallery,24,"dispatchSetPressed","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::Gallery,25,"getContextMenuInfo","()Landroid/view/ContextMenu$ContextMenuInfo;")
J2CPP_DEFINE_METHOD(android::widget::Gallery,26,"showContextMenuForChild","(Landroid/view/View;)Z")
J2CPP_DEFINE_METHOD(android::widget::Gallery,27,"showContextMenu","()Z")
J2CPP_DEFINE_METHOD(android::widget::Gallery,28,"dispatchKeyEvent","(Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::Gallery,29,"onKeyDown","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::Gallery,30,"onKeyUp","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::Gallery,31,"setGravity","(I)V")
J2CPP_DEFINE_METHOD(android::widget::Gallery,32,"getChildDrawingOrder","(II)I")
J2CPP_DEFINE_METHOD(android::widget::Gallery,33,"onFocusChanged","(ZILandroid/graphics/Rect;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_GALLERY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
