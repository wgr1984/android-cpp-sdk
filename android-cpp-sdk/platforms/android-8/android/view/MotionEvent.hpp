/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.MotionEvent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_MOTIONEVENT_HPP_DECL
#define J2CPP_ANDROID_VIEW_MOTIONEVENT_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace view {

	class MotionEvent;
	class MotionEvent
		: public object<MotionEvent>
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
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)

		explicit MotionEvent(jobject jobj)
		: object<MotionEvent>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		static local_ref< android::view::MotionEvent > obtain(jlong, jlong, jint, jfloat, jfloat, jfloat, jfloat, jint, jfloat, jfloat, jint, jint);
		static local_ref< android::view::MotionEvent > obtain(jlong, jlong, jint, jint, jfloat, jfloat, jfloat, jfloat, jint, jfloat, jfloat, jint, jint);
		static local_ref< android::view::MotionEvent > obtain(jlong, jlong, jint, jfloat, jfloat, jint);
		static local_ref< android::view::MotionEvent > obtain(local_ref< android::view::MotionEvent >  const&);
		static local_ref< android::view::MotionEvent > obtainNoHistory(local_ref< android::view::MotionEvent >  const&);
		void recycle();
		jint getAction();
		jint getActionMasked();
		jint getActionIndex();
		jlong getDownTime();
		jlong getEventTime();
		jfloat getX();
		jfloat getY();
		jfloat getPressure();
		jfloat getSize();
		jint getPointerCount();
		jint getPointerId(jint);
		jint findPointerIndex(jint);
		jfloat getX(jint);
		jfloat getY(jint);
		jfloat getPressure(jint);
		jfloat getSize(jint);
		jint getMetaState();
		jfloat getRawX();
		jfloat getRawY();
		jfloat getXPrecision();
		jfloat getYPrecision();
		jint getHistorySize();
		jlong getHistoricalEventTime(jint);
		jfloat getHistoricalX(jint);
		jfloat getHistoricalY(jint);
		jfloat getHistoricalPressure(jint);
		jfloat getHistoricalSize(jint);
		jfloat getHistoricalX(jint, jint);
		jfloat getHistoricalY(jint, jint);
		jfloat getHistoricalPressure(jint, jint);
		jfloat getHistoricalSize(jint, jint);
		jint getDeviceId();
		jint getEdgeFlags();
		void setEdgeFlags(jint);
		void setAction(jint);
		void offsetLocation(jfloat, jfloat);
		void setLocation(jfloat, jfloat);
		void addBatch(jlong, jfloat, jfloat, jfloat, jfloat, jint);
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > ACTION_MASK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > ACTION_DOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > ACTION_UP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > ACTION_MOVE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > ACTION_CANCEL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > ACTION_OUTSIDE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > ACTION_POINTER_DOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > ACTION_POINTER_UP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > ACTION_POINTER_INDEX_MASK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > ACTION_POINTER_INDEX_SHIFT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > ACTION_POINTER_1_DOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > ACTION_POINTER_2_DOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > ACTION_POINTER_3_DOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > ACTION_POINTER_1_UP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > ACTION_POINTER_2_UP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > ACTION_POINTER_3_UP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > ACTION_POINTER_ID_MASK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > ACTION_POINTER_ID_SHIFT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jint > EDGE_TOP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), jint > EDGE_BOTTOM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), jint > EDGE_LEFT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), jint > EDGE_RIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class MotionEvent

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_MOTIONEVENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_MOTIONEVENT_HPP_IMPL
#define J2CPP_ANDROID_VIEW_MOTIONEVENT_HPP_IMPL

namespace j2cpp {



android::view::MotionEvent::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::view::MotionEvent::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


local_ref< android::view::MotionEvent > android::view::MotionEvent::obtain(jlong a0, jlong a1, jint a2, jfloat a3, jfloat a4, jfloat a5, jfloat a6, jint a7, jfloat a8, jfloat a9, jint a10, jint a11)
{
	return call_static_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(1),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::view::MotionEvent > >
	(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

local_ref< android::view::MotionEvent > android::view::MotionEvent::obtain(jlong a0, jlong a1, jint a2, jint a3, jfloat a4, jfloat a5, jfloat a6, jfloat a7, jint a8, jfloat a9, jfloat a10, jint a11, jint a12)
{
	return call_static_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(2),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::view::MotionEvent > >
	(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}

local_ref< android::view::MotionEvent > android::view::MotionEvent::obtain(jlong a0, jlong a1, jint a2, jfloat a3, jfloat a4, jint a5)
{
	return call_static_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(3),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::view::MotionEvent > >
	(a0, a1, a2, a3, a4, a5);
}

local_ref< android::view::MotionEvent > android::view::MotionEvent::obtain(local_ref< android::view::MotionEvent > const &a0)
{
	return call_static_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(4),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::view::MotionEvent > >
	(a0);
}

local_ref< android::view::MotionEvent > android::view::MotionEvent::obtainNoHistory(local_ref< android::view::MotionEvent > const &a0)
{
	return call_static_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(5),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::view::MotionEvent > >
	(a0);
}

void android::view::MotionEvent::recycle()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(6),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject());
}

jint android::view::MotionEvent::getAction()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(7),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject());
}

jint android::view::MotionEvent::getActionMasked()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(8),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject());
}

jint android::view::MotionEvent::getActionIndex()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(9),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject());
}

jlong android::view::MotionEvent::getDownTime()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(10),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(10), 
		jlong >
	(get_jobject());
}

jlong android::view::MotionEvent::getEventTime()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(11),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(11), 
		jlong >
	(get_jobject());
}

jfloat android::view::MotionEvent::getX()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(12),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(12), 
		jfloat >
	(get_jobject());
}

jfloat android::view::MotionEvent::getY()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(13),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(13), 
		jfloat >
	(get_jobject());
}

jfloat android::view::MotionEvent::getPressure()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(14),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(14), 
		jfloat >
	(get_jobject());
}

jfloat android::view::MotionEvent::getSize()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(15),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(15), 
		jfloat >
	(get_jobject());
}

jint android::view::MotionEvent::getPointerCount()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(16),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(16), 
		jint >
	(get_jobject());
}

jint android::view::MotionEvent::getPointerId(jint a0)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(17),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(17), 
		jint >
	(get_jobject(), a0);
}

jint android::view::MotionEvent::findPointerIndex(jint a0)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(18),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(18), 
		jint >
	(get_jobject(), a0);
}

jfloat android::view::MotionEvent::getX(jint a0)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(19),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(19), 
		jfloat >
	(get_jobject(), a0);
}

jfloat android::view::MotionEvent::getY(jint a0)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(20),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(20), 
		jfloat >
	(get_jobject(), a0);
}

jfloat android::view::MotionEvent::getPressure(jint a0)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(21),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(21), 
		jfloat >
	(get_jobject(), a0);
}

jfloat android::view::MotionEvent::getSize(jint a0)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(22),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(22), 
		jfloat >
	(get_jobject(), a0);
}

jint android::view::MotionEvent::getMetaState()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(23),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(23), 
		jint >
	(get_jobject());
}

jfloat android::view::MotionEvent::getRawX()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(24),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(24), 
		jfloat >
	(get_jobject());
}

jfloat android::view::MotionEvent::getRawY()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(25),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(25), 
		jfloat >
	(get_jobject());
}

jfloat android::view::MotionEvent::getXPrecision()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(26),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(26), 
		jfloat >
	(get_jobject());
}

jfloat android::view::MotionEvent::getYPrecision()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(27),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(27), 
		jfloat >
	(get_jobject());
}

jint android::view::MotionEvent::getHistorySize()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(28),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(28), 
		jint >
	(get_jobject());
}

jlong android::view::MotionEvent::getHistoricalEventTime(jint a0)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(29),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(29), 
		jlong >
	(get_jobject(), a0);
}

jfloat android::view::MotionEvent::getHistoricalX(jint a0)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(30),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(30), 
		jfloat >
	(get_jobject(), a0);
}

jfloat android::view::MotionEvent::getHistoricalY(jint a0)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(31),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(31), 
		jfloat >
	(get_jobject(), a0);
}

jfloat android::view::MotionEvent::getHistoricalPressure(jint a0)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(32),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(32), 
		jfloat >
	(get_jobject(), a0);
}

jfloat android::view::MotionEvent::getHistoricalSize(jint a0)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(33),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(33), 
		jfloat >
	(get_jobject(), a0);
}

jfloat android::view::MotionEvent::getHistoricalX(jint a0, jint a1)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(34),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(34), 
		jfloat >
	(get_jobject(), a0, a1);
}

jfloat android::view::MotionEvent::getHistoricalY(jint a0, jint a1)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(35),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(35), 
		jfloat >
	(get_jobject(), a0, a1);
}

jfloat android::view::MotionEvent::getHistoricalPressure(jint a0, jint a1)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(36),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(36), 
		jfloat >
	(get_jobject(), a0, a1);
}

jfloat android::view::MotionEvent::getHistoricalSize(jint a0, jint a1)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(37),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(37), 
		jfloat >
	(get_jobject(), a0, a1);
}

jint android::view::MotionEvent::getDeviceId()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(38),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(38), 
		jint >
	(get_jobject());
}

jint android::view::MotionEvent::getEdgeFlags()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(39),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(39), 
		jint >
	(get_jobject());
}

void android::view::MotionEvent::setEdgeFlags(jint a0)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(40),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(40), 
		void >
	(get_jobject(), a0);
}

void android::view::MotionEvent::setAction(jint a0)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(41),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(41), 
		void >
	(get_jobject(), a0);
}

void android::view::MotionEvent::offsetLocation(jfloat a0, jfloat a1)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(42),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(42), 
		void >
	(get_jobject(), a0, a1);
}

void android::view::MotionEvent::setLocation(jfloat a0, jfloat a1)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(43),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(43), 
		void >
	(get_jobject(), a0, a1);
}

void android::view::MotionEvent::addBatch(jlong a0, jfloat a1, jfloat a2, jfloat a3, jfloat a4, jint a5)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(44),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(44), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4, a5);
}

local_ref< java::lang::String > android::view::MotionEvent::toString()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(45),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(45), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::view::MotionEvent::describeContents()
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(46),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(46), 
		jint >
	(get_jobject());
}

void android::view::MotionEvent::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::view::MotionEvent::J2CPP_CLASS_NAME,
		android::view::MotionEvent::J2CPP_METHOD_NAME(47),
		android::view::MotionEvent::J2CPP_METHOD_SIGNATURE(47), 
		void >
	(get_jobject(), a0, a1);
}



static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(0),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::view::MotionEvent::ACTION_MASK;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(1),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::view::MotionEvent::ACTION_DOWN;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(2),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::view::MotionEvent::ACTION_UP;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(3),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::view::MotionEvent::ACTION_MOVE;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(4),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::view::MotionEvent::ACTION_CANCEL;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(5),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::view::MotionEvent::ACTION_OUTSIDE;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(6),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::view::MotionEvent::ACTION_POINTER_DOWN;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(7),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::view::MotionEvent::ACTION_POINTER_UP;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(8),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::view::MotionEvent::ACTION_POINTER_INDEX_MASK;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(9),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::view::MotionEvent::ACTION_POINTER_INDEX_SHIFT;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(10),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::view::MotionEvent::ACTION_POINTER_1_DOWN;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(11),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(11),
	jint
> android::view::MotionEvent::ACTION_POINTER_2_DOWN;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(12),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(12),
	jint
> android::view::MotionEvent::ACTION_POINTER_3_DOWN;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(13),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(13),
	jint
> android::view::MotionEvent::ACTION_POINTER_1_UP;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(14),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(14),
	jint
> android::view::MotionEvent::ACTION_POINTER_2_UP;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(15),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(15),
	jint
> android::view::MotionEvent::ACTION_POINTER_3_UP;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(16),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(16),
	jint
> android::view::MotionEvent::ACTION_POINTER_ID_MASK;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(17),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(17),
	jint
> android::view::MotionEvent::ACTION_POINTER_ID_SHIFT;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(18),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(18),
	jint
> android::view::MotionEvent::EDGE_TOP;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(19),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(19),
	jint
> android::view::MotionEvent::EDGE_BOTTOM;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(20),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(20),
	jint
> android::view::MotionEvent::EDGE_LEFT;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(21),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(21),
	jint
> android::view::MotionEvent::EDGE_RIGHT;

static_field<
	android::view::MotionEvent::J2CPP_CLASS_NAME,
	android::view::MotionEvent::J2CPP_FIELD_NAME(22),
	android::view::MotionEvent::J2CPP_FIELD_SIGNATURE(22),
	local_ref< android::os::Parcelable_::Creator >
> android::view::MotionEvent::CREATOR;


J2CPP_DEFINE_CLASS(android::view::MotionEvent,"android/view/MotionEvent")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,1,"obtain","(JJIFFFFIFFII)Landroid/view/MotionEvent;")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,2,"obtain","(JJIIFFFFIFFII)Landroid/view/MotionEvent;")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,3,"obtain","(JJIFFI)Landroid/view/MotionEvent;")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,4,"obtain","(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,5,"obtainNoHistory","(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,6,"recycle","()V")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,7,"getAction","()I")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,8,"getActionMasked","()I")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,9,"getActionIndex","()I")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,10,"getDownTime","()J")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,11,"getEventTime","()J")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,12,"getX","()F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,13,"getY","()F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,14,"getPressure","()F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,15,"getSize","()F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,16,"getPointerCount","()I")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,17,"getPointerId","(I)I")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,18,"findPointerIndex","(I)I")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,19,"getX","(I)F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,20,"getY","(I)F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,21,"getPressure","(I)F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,22,"getSize","(I)F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,23,"getMetaState","()I")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,24,"getRawX","()F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,25,"getRawY","()F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,26,"getXPrecision","()F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,27,"getYPrecision","()F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,28,"getHistorySize","()I")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,29,"getHistoricalEventTime","(I)J")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,30,"getHistoricalX","(I)F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,31,"getHistoricalY","(I)F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,32,"getHistoricalPressure","(I)F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,33,"getHistoricalSize","(I)F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,34,"getHistoricalX","(II)F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,35,"getHistoricalY","(II)F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,36,"getHistoricalPressure","(II)F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,37,"getHistoricalSize","(II)F")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,38,"getDeviceId","()I")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,39,"getEdgeFlags","()I")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,40,"setEdgeFlags","(I)V")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,41,"setAction","(I)V")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,42,"offsetLocation","(FF)V")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,43,"setLocation","(FF)V")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,44,"addBatch","(JFFFFI)V")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,45,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,46,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,47,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::view::MotionEvent,48,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,0,"ACTION_MASK","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,1,"ACTION_DOWN","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,2,"ACTION_UP","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,3,"ACTION_MOVE","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,4,"ACTION_CANCEL","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,5,"ACTION_OUTSIDE","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,6,"ACTION_POINTER_DOWN","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,7,"ACTION_POINTER_UP","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,8,"ACTION_POINTER_INDEX_MASK","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,9,"ACTION_POINTER_INDEX_SHIFT","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,10,"ACTION_POINTER_1_DOWN","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,11,"ACTION_POINTER_2_DOWN","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,12,"ACTION_POINTER_3_DOWN","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,13,"ACTION_POINTER_1_UP","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,14,"ACTION_POINTER_2_UP","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,15,"ACTION_POINTER_3_UP","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,16,"ACTION_POINTER_ID_MASK","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,17,"ACTION_POINTER_ID_SHIFT","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,18,"EDGE_TOP","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,19,"EDGE_BOTTOM","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,20,"EDGE_LEFT","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,21,"EDGE_RIGHT","I")
J2CPP_DEFINE_FIELD(android::view::MotionEvent,22,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_MOTIONEVENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
