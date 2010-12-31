/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.gesture.Gesture
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTURE_HPP_DECL
#define J2CPP_ANDROID_GESTURE_GESTURE_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace gesture { class GestureStroke; } } }
namespace j2cpp { namespace android { namespace graphics { class RectF; } } }
namespace j2cpp { namespace android { namespace graphics { class Path; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class ArrayList; } } }


#include <android/gesture/GestureStroke.hpp>
#include <android/graphics/Bitmap.hpp>
#include <android/graphics/Path.hpp>
#include <android/graphics/RectF.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>


namespace j2cpp {

namespace android { namespace gesture {

	class Gesture;
	class Gesture
		: public object<Gesture>
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
		J2CPP_DECLARE_FIELD(0)

		explicit Gesture(jobject jobj)
		: object<Gesture>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		Gesture();
		local_ref< java::lang::Object > clone();
		local_ref< java::util::ArrayList > getStrokes();
		jint getStrokesCount();
		void addStroke(local_ref< android::gesture::GestureStroke >  const&);
		jfloat getLength();
		local_ref< android::graphics::RectF > getBoundingBox();
		local_ref< android::graphics::Path > toPath();
		local_ref< android::graphics::Path > toPath(local_ref< android::graphics::Path >  const&);
		local_ref< android::graphics::Path > toPath(jint, jint, jint, jint);
		local_ref< android::graphics::Path > toPath(local_ref< android::graphics::Path >  const&, jint, jint, jint, jint);
		jlong getID();
		local_ref< android::graphics::Bitmap > toBitmap(jint, jint, jint, jint, jint);
		local_ref< android::graphics::Bitmap > toBitmap(jint, jint, jint, jint);
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		jint describeContents();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class Gesture

} //namespace gesture
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTURE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTURE_HPP_IMPL
#define J2CPP_ANDROID_GESTURE_GESTURE_HPP_IMPL

namespace j2cpp {



android::gesture::Gesture::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::gesture::Gesture::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::gesture::Gesture::Gesture()
: object<android::gesture::Gesture>(
	call_new_object<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(0),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< java::lang::Object > android::gesture::Gesture::clone()
{
	return call_method<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(1),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::util::ArrayList > android::gesture::Gesture::getStrokes()
{
	return call_method<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(2),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::ArrayList > >
	(get_jobject());
}

jint android::gesture::Gesture::getStrokesCount()
{
	return call_method<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(3),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

void android::gesture::Gesture::addStroke(local_ref< android::gesture::GestureStroke > const &a0)
{
	return call_method<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(4),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

jfloat android::gesture::Gesture::getLength()
{
	return call_method<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(5),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(5), 
		jfloat >
	(get_jobject());
}

local_ref< android::graphics::RectF > android::gesture::Gesture::getBoundingBox()
{
	return call_method<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(6),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::graphics::RectF > >
	(get_jobject());
}

local_ref< android::graphics::Path > android::gesture::Gesture::toPath()
{
	return call_method<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(7),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::graphics::Path > >
	(get_jobject());
}

local_ref< android::graphics::Path > android::gesture::Gesture::toPath(local_ref< android::graphics::Path > const &a0)
{
	return call_method<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(8),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::graphics::Path > >
	(get_jobject(), a0);
}

local_ref< android::graphics::Path > android::gesture::Gesture::toPath(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(9),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::graphics::Path > >
	(get_jobject(), a0, a1, a2, a3);
}

local_ref< android::graphics::Path > android::gesture::Gesture::toPath(local_ref< android::graphics::Path > const &a0, jint a1, jint a2, jint a3, jint a4)
{
	return call_method<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(10),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::graphics::Path > >
	(get_jobject(), a0, a1, a2, a3, a4);
}

jlong android::gesture::Gesture::getID()
{
	return call_method<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(11),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(11), 
		jlong >
	(get_jobject());
}

local_ref< android::graphics::Bitmap > android::gesture::Gesture::toBitmap(jint a0, jint a1, jint a2, jint a3, jint a4)
{
	return call_method<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(12),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< android::graphics::Bitmap > >
	(get_jobject(), a0, a1, a2, a3, a4);
}

local_ref< android::graphics::Bitmap > android::gesture::Gesture::toBitmap(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(13),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< android::graphics::Bitmap > >
	(get_jobject(), a0, a1, a2, a3);
}

void android::gesture::Gesture::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(14),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0, a1);
}

jint android::gesture::Gesture::describeContents()
{
	return call_method<
		android::gesture::Gesture::J2CPP_CLASS_NAME,
		android::gesture::Gesture::J2CPP_METHOD_NAME(15),
		android::gesture::Gesture::J2CPP_METHOD_SIGNATURE(15), 
		jint >
	(get_jobject());
}



static_field<
	android::gesture::Gesture::J2CPP_CLASS_NAME,
	android::gesture::Gesture::J2CPP_FIELD_NAME(0),
	android::gesture::Gesture::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::gesture::Gesture::CREATOR;


J2CPP_DEFINE_CLASS(android::gesture::Gesture,"android/gesture/Gesture")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,1,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,2,"getStrokes","()Ljava/util/ArrayList;")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,3,"getStrokesCount","()I")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,4,"addStroke","(Landroid/gesture/GestureStroke;)V")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,5,"getLength","()F")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,6,"getBoundingBox","()Landroid/graphics/RectF;")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,7,"toPath","()Landroid/graphics/Path;")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,8,"toPath","(Landroid/graphics/Path;)Landroid/graphics/Path;")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,9,"toPath","(IIII)Landroid/graphics/Path;")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,10,"toPath","(Landroid/graphics/Path;IIII)Landroid/graphics/Path;")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,11,"getID","()J")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,12,"toBitmap","(IIIII)Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,13,"toBitmap","(IIII)Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,14,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,15,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::gesture::Gesture,16,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::gesture::Gesture,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTURE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
