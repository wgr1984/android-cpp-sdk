/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.animation.LayoutAnimationController
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER_HPP_DECL
#define J2CPP_ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace animation { class Animation; } } } }
namespace j2cpp { namespace android { namespace view { namespace animation { class Interpolator; } } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/animation/Animation.hpp>
#include <android/view/animation/Interpolator.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view { namespace animation {

	class LayoutAnimationController;
	namespace LayoutAnimationController_ {

		class AnimationParameters;
		class AnimationParameters
			: public object<AnimationParameters>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)

			explicit AnimationParameters(jobject jobj)
			: object<AnimationParameters>(jobj)
			, count(jobj)
			, index(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			AnimationParameters();

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > count;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > index;
		}; //class AnimationParameters

	} //namespace LayoutAnimationController_

	class LayoutAnimationController
		: public object<LayoutAnimationController>
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
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		typedef LayoutAnimationController_::AnimationParameters AnimationParameters;

		explicit LayoutAnimationController(jobject jobj)
		: object<LayoutAnimationController>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		LayoutAnimationController(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		LayoutAnimationController(local_ref< android::view::animation::Animation > const&);
		LayoutAnimationController(local_ref< android::view::animation::Animation > const&, jfloat);
		jint getOrder();
		void setOrder(jint);
		void setAnimation(local_ref< android::content::Context >  const&, jint);
		void setAnimation(local_ref< android::view::animation::Animation >  const&);
		local_ref< android::view::animation::Animation > getAnimation();
		void setInterpolator(local_ref< android::content::Context >  const&, jint);
		void setInterpolator(local_ref< android::view::animation::Interpolator >  const&);
		local_ref< android::view::animation::Interpolator > getInterpolator();
		jfloat getDelay();
		void setDelay(jfloat);
		jboolean willOverlap();
		void start();
		local_ref< android::view::animation::Animation > getAnimationForView(local_ref< android::view::View >  const&);
		jboolean isDone();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > ORDER_NORMAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > ORDER_REVERSE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > ORDER_RANDOM;
	}; //class LayoutAnimationController

} //namespace animation
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER_HPP_IMPL

namespace j2cpp {




android::view::animation::LayoutAnimationController_::AnimationParameters::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::view::animation::LayoutAnimationController_::AnimationParameters::AnimationParameters()
: object<android::view::animation::LayoutAnimationController_::AnimationParameters>(
	call_new_object<
		android::view::animation::LayoutAnimationController_::AnimationParameters::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController_::AnimationParameters::J2CPP_METHOD_NAME(0),
		android::view::animation::LayoutAnimationController_::AnimationParameters::J2CPP_METHOD_SIGNATURE(0)>
	()
)
, count(get_jobject())
, index(get_jobject())
{
}




J2CPP_DEFINE_CLASS(android::view::animation::LayoutAnimationController_::AnimationParameters,"android/view/animation/LayoutAnimationController$AnimationParameters")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController_::AnimationParameters,0,"<init>","()V")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController_::AnimationParameters,0,"count","I")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController_::AnimationParameters,1,"index","I")



android::view::animation::LayoutAnimationController::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::view::animation::LayoutAnimationController::LayoutAnimationController(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::view::animation::LayoutAnimationController>(
	call_new_object<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(0),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



android::view::animation::LayoutAnimationController::LayoutAnimationController(local_ref< android::view::animation::Animation > const &a0)
: object<android::view::animation::LayoutAnimationController>(
	call_new_object<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(1),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



android::view::animation::LayoutAnimationController::LayoutAnimationController(local_ref< android::view::animation::Animation > const &a0, jfloat a1)
: object<android::view::animation::LayoutAnimationController>(
	call_new_object<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(2),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}


jint android::view::animation::LayoutAnimationController::getOrder()
{
	return call_method<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(3),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

void android::view::animation::LayoutAnimationController::setOrder(jint a0)
{
	return call_method<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(4),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

void android::view::animation::LayoutAnimationController::setAnimation(local_ref< android::content::Context > const &a0, jint a1)
{
	return call_method<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(5),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}

void android::view::animation::LayoutAnimationController::setAnimation(local_ref< android::view::animation::Animation > const &a0)
{
	return call_method<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(6),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

local_ref< android::view::animation::Animation > android::view::animation::LayoutAnimationController::getAnimation()
{
	return call_method<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(7),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::view::animation::Animation > >
	(get_jobject());
}

void android::view::animation::LayoutAnimationController::setInterpolator(local_ref< android::content::Context > const &a0, jint a1)
{
	return call_method<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(8),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1);
}

void android::view::animation::LayoutAnimationController::setInterpolator(local_ref< android::view::animation::Interpolator > const &a0)
{
	return call_method<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(9),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

local_ref< android::view::animation::Interpolator > android::view::animation::LayoutAnimationController::getInterpolator()
{
	return call_method<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(10),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::view::animation::Interpolator > >
	(get_jobject());
}

jfloat android::view::animation::LayoutAnimationController::getDelay()
{
	return call_method<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(11),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(11), 
		jfloat >
	(get_jobject());
}

void android::view::animation::LayoutAnimationController::setDelay(jfloat a0)
{
	return call_method<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(12),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

jboolean android::view::animation::LayoutAnimationController::willOverlap()
{
	return call_method<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(13),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(13), 
		jboolean >
	(get_jobject());
}

void android::view::animation::LayoutAnimationController::start()
{
	return call_method<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(14),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject());
}

local_ref< android::view::animation::Animation > android::view::animation::LayoutAnimationController::getAnimationForView(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(15),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< android::view::animation::Animation > >
	(get_jobject(), a0);
}

jboolean android::view::animation::LayoutAnimationController::isDone()
{
	return call_method<
		android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(16),
		android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(16), 
		jboolean >
	(get_jobject());
}




static_field<
	android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
	android::view::animation::LayoutAnimationController::J2CPP_FIELD_NAME(0),
	android::view::animation::LayoutAnimationController::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::view::animation::LayoutAnimationController::ORDER_NORMAL;

static_field<
	android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
	android::view::animation::LayoutAnimationController::J2CPP_FIELD_NAME(1),
	android::view::animation::LayoutAnimationController::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::view::animation::LayoutAnimationController::ORDER_REVERSE;

static_field<
	android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
	android::view::animation::LayoutAnimationController::J2CPP_FIELD_NAME(2),
	android::view::animation::LayoutAnimationController::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::view::animation::LayoutAnimationController::ORDER_RANDOM;


J2CPP_DEFINE_CLASS(android::view::animation::LayoutAnimationController,"android/view/animation/LayoutAnimationController")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,1,"<init>","(Landroid/view/animation/Animation;)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,2,"<init>","(Landroid/view/animation/Animation;F)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,3,"getOrder","()I")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,4,"setOrder","(I)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,5,"setAnimation","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,6,"setAnimation","(Landroid/view/animation/Animation;)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,7,"getAnimation","()Landroid/view/animation/Animation;")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,8,"setInterpolator","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,9,"setInterpolator","(Landroid/view/animation/Interpolator;)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,10,"getInterpolator","()Landroid/view/animation/Interpolator;")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,11,"getDelay","()F")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,12,"setDelay","(F)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,13,"willOverlap","()Z")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,14,"start","()V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,15,"getAnimationForView","(Landroid/view/View;)Landroid/view/animation/Animation;")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,16,"isDone","()Z")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,17,"getDelayForView","(Landroid/view/View;)J")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,18,"getTransformedIndex","(Landroid/view/animation/LayoutAnimationController$AnimationParameters;)I")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController,0,"ORDER_NORMAL","I")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController,1,"ORDER_REVERSE","I")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController,2,"ORDER_RANDOM","I")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController,3,"mAnimation","Landroid/view/animation/Animation;")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController,4,"mRandomizer","Ljava/util/Random;")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController,5,"mInterpolator","Landroid/view/animation/Interpolator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
