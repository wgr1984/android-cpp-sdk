/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.gesture.GestureUtils
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTUREUTILS_HPP_DECL
#define J2CPP_ANDROID_GESTURE_GESTUREUTILS_HPP_DECL


namespace j2cpp { namespace android { namespace gesture { class OrientedBoundingBox; } } }
namespace j2cpp { namespace android { namespace gesture { class Gesture; } } }
namespace j2cpp { namespace android { namespace gesture { class GestureStroke; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class ArrayList; } } }


#include <android/gesture/Gesture.hpp>
#include <android/gesture/GestureStroke.hpp>
#include <android/gesture/OrientedBoundingBox.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>


namespace j2cpp {

namespace android { namespace gesture {

	class GestureUtils;
	class GestureUtils
		: public object<GestureUtils>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit GestureUtils(jobject jobj)
		: object<GestureUtils>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< array<jfloat,1> > spatialSampling(local_ref< android::gesture::Gesture >  const&, jint);
		static local_ref< array<jfloat,1> > spatialSampling(local_ref< android::gesture::Gesture >  const&, jint, jboolean);
		static local_ref< array<jfloat,1> > temporalSampling(local_ref< android::gesture::GestureStroke >  const&, jint);
		static local_ref< android::gesture::OrientedBoundingBox > computeOrientedBoundingBox(local_ref< java::util::ArrayList >  const&);
		static local_ref< android::gesture::OrientedBoundingBox > computeOrientedBoundingBox(local_ref< array<jfloat,1> >  const&);
	}; //class GestureUtils

} //namespace gesture
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTUREUTILS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTUREUTILS_HPP_IMPL
#define J2CPP_ANDROID_GESTURE_GESTUREUTILS_HPP_IMPL

namespace j2cpp {



android::gesture::GestureUtils::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< array<jfloat,1> > android::gesture::GestureUtils::spatialSampling(local_ref< android::gesture::Gesture > const &a0, jint a1)
{
	return call_static_method<
		android::gesture::GestureUtils::J2CPP_CLASS_NAME,
		android::gesture::GestureUtils::J2CPP_METHOD_NAME(1),
		android::gesture::GestureUtils::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array<jfloat,1> > >
	(a0, a1);
}

local_ref< array<jfloat,1> > android::gesture::GestureUtils::spatialSampling(local_ref< android::gesture::Gesture > const &a0, jint a1, jboolean a2)
{
	return call_static_method<
		android::gesture::GestureUtils::J2CPP_CLASS_NAME,
		android::gesture::GestureUtils::J2CPP_METHOD_NAME(2),
		android::gesture::GestureUtils::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array<jfloat,1> > >
	(a0, a1, a2);
}

local_ref< array<jfloat,1> > android::gesture::GestureUtils::temporalSampling(local_ref< android::gesture::GestureStroke > const &a0, jint a1)
{
	return call_static_method<
		android::gesture::GestureUtils::J2CPP_CLASS_NAME,
		android::gesture::GestureUtils::J2CPP_METHOD_NAME(3),
		android::gesture::GestureUtils::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array<jfloat,1> > >
	(a0, a1);
}

local_ref< android::gesture::OrientedBoundingBox > android::gesture::GestureUtils::computeOrientedBoundingBox(local_ref< java::util::ArrayList > const &a0)
{
	return call_static_method<
		android::gesture::GestureUtils::J2CPP_CLASS_NAME,
		android::gesture::GestureUtils::J2CPP_METHOD_NAME(4),
		android::gesture::GestureUtils::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::gesture::OrientedBoundingBox > >
	(a0);
}

local_ref< android::gesture::OrientedBoundingBox > android::gesture::GestureUtils::computeOrientedBoundingBox(local_ref< array<jfloat,1> > const &a0)
{
	return call_static_method<
		android::gesture::GestureUtils::J2CPP_CLASS_NAME,
		android::gesture::GestureUtils::J2CPP_METHOD_NAME(5),
		android::gesture::GestureUtils::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::gesture::OrientedBoundingBox > >
	(a0);
}


J2CPP_DEFINE_CLASS(android::gesture::GestureUtils,"android/gesture/GestureUtils")
J2CPP_DEFINE_METHOD(android::gesture::GestureUtils,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureUtils,1,"spatialSampling","(Landroid/gesture/Gesture;I)[F")
J2CPP_DEFINE_METHOD(android::gesture::GestureUtils,2,"spatialSampling","(Landroid/gesture/Gesture;IZ)[F")
J2CPP_DEFINE_METHOD(android::gesture::GestureUtils,3,"temporalSampling","(Landroid/gesture/GestureStroke;I)[F")
J2CPP_DEFINE_METHOD(android::gesture::GestureUtils,4,"computeOrientedBoundingBox","(Ljava/util/ArrayList;)Landroid/gesture/OrientedBoundingBox;")
J2CPP_DEFINE_METHOD(android::gesture::GestureUtils,5,"computeOrientedBoundingBox","([F)Landroid/gesture/OrientedBoundingBox;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTUREUTILS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
