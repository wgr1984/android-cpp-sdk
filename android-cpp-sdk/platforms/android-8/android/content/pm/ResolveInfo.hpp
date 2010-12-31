/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.pm.ResolveInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_RESOLVEINFO_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_RESOLVEINFO_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace content { class IntentFilter; } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PackageManager; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ActivityInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ServiceInfo; } } } }
namespace j2cpp { namespace android { namespace util { class Printer; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Comparator; } } }


#include <android/content/IntentFilter.hpp>
#include <android/content/pm/ActivityInfo.hpp>
#include <android/content/pm/PackageManager.hpp>
#include <android/content/pm/ServiceInfo.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/util/Printer.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Comparator.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class ResolveInfo;
	namespace ResolveInfo_ {

		class DisplayNameComparator;
		class DisplayNameComparator
			: public object<DisplayNameComparator>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			explicit DisplayNameComparator(jobject jobj)
			: object<DisplayNameComparator>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::util::Comparator>() const;


			DisplayNameComparator(local_ref< android::content::pm::PackageManager > const&);
			jint compare(local_ref< android::content::pm::ResolveInfo >  const&, local_ref< android::content::pm::ResolveInfo >  const&);
			jint compare(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		}; //class DisplayNameComparator

	} //namespace ResolveInfo_

	class ResolveInfo
		: public object<ResolveInfo>
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

		typedef ResolveInfo_::DisplayNameComparator DisplayNameComparator;

		explicit ResolveInfo(jobject jobj)
		: object<ResolveInfo>(jobj)
		, activityInfo(jobj)
		, serviceInfo(jobj)
		, filter(jobj)
		, priority(jobj)
		, preferredOrder(jobj)
		, match(jobj)
		, specificIndex(jobj)
		, isDefault(jobj)
		, labelRes(jobj)
		, nonLocalizedLabel(jobj)
		, icon(jobj)
		, resolvePackageName(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		ResolveInfo();
		local_ref< java::lang::CharSequence > loadLabel(local_ref< android::content::pm::PackageManager >  const&);
		local_ref< android::graphics::drawable::Drawable > loadIcon(local_ref< android::content::pm::PackageManager >  const&);
		jint getIconResource();
		void dump(local_ref< android::util::Printer >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::content::pm::ActivityInfo > > activityInfo;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::content::pm::ServiceInfo > > serviceInfo;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::content::IntentFilter > > filter;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > priority;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > preferredOrder;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > match;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > specificIndex;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jboolean > isDefault;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > labelRes;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::CharSequence > > nonLocalizedLabel;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > icon;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::lang::String > > resolvePackageName;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class ResolveInfo

} //namespace pm
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_RESOLVEINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_RESOLVEINFO_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_RESOLVEINFO_HPP_IMPL

namespace j2cpp {




android::content::pm::ResolveInfo_::DisplayNameComparator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::content::pm::ResolveInfo_::DisplayNameComparator::operator local_ref<java::util::Comparator>() const
{
	return local_ref<java::util::Comparator>(get_jobject());
}


android::content::pm::ResolveInfo_::DisplayNameComparator::DisplayNameComparator(local_ref< android::content::pm::PackageManager > const &a0)
: object<android::content::pm::ResolveInfo_::DisplayNameComparator>(
	call_new_object<
		android::content::pm::ResolveInfo_::DisplayNameComparator::J2CPP_CLASS_NAME,
		android::content::pm::ResolveInfo_::DisplayNameComparator::J2CPP_METHOD_NAME(0),
		android::content::pm::ResolveInfo_::DisplayNameComparator::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


jint android::content::pm::ResolveInfo_::DisplayNameComparator::compare(local_ref< android::content::pm::ResolveInfo > const &a0, local_ref< android::content::pm::ResolveInfo > const &a1)
{
	return call_method<
		android::content::pm::ResolveInfo_::DisplayNameComparator::J2CPP_CLASS_NAME,
		android::content::pm::ResolveInfo_::DisplayNameComparator::J2CPP_METHOD_NAME(1),
		android::content::pm::ResolveInfo_::DisplayNameComparator::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject(), a0, a1);
}

jint android::content::pm::ResolveInfo_::DisplayNameComparator::compare(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		android::content::pm::ResolveInfo_::DisplayNameComparator::J2CPP_CLASS_NAME,
		android::content::pm::ResolveInfo_::DisplayNameComparator::J2CPP_METHOD_NAME(2),
		android::content::pm::ResolveInfo_::DisplayNameComparator::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::content::pm::ResolveInfo_::DisplayNameComparator,"android/content/pm/ResolveInfo$DisplayNameComparator")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo_::DisplayNameComparator,0,"<init>","(Landroid/content/pm/PackageManager;)V")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo_::DisplayNameComparator,1,"compare","(Landroid/content/pm/ResolveInfo;Landroid/content/pm/ResolveInfo;)I")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo_::DisplayNameComparator,2,"compare","(Ljava/lang/Object;Ljava/lang/Object;)I")



android::content::pm::ResolveInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::content::pm::ResolveInfo::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::content::pm::ResolveInfo::ResolveInfo()
: object<android::content::pm::ResolveInfo>(
	call_new_object<
		android::content::pm::ResolveInfo::J2CPP_CLASS_NAME,
		android::content::pm::ResolveInfo::J2CPP_METHOD_NAME(0),
		android::content::pm::ResolveInfo::J2CPP_METHOD_SIGNATURE(0)>
	()
)
, activityInfo(get_jobject())
, serviceInfo(get_jobject())
, filter(get_jobject())
, priority(get_jobject())
, preferredOrder(get_jobject())
, match(get_jobject())
, specificIndex(get_jobject())
, isDefault(get_jobject())
, labelRes(get_jobject())
, nonLocalizedLabel(get_jobject())
, icon(get_jobject())
, resolvePackageName(get_jobject())
{
}


local_ref< java::lang::CharSequence > android::content::pm::ResolveInfo::loadLabel(local_ref< android::content::pm::PackageManager > const &a0)
{
	return call_method<
		android::content::pm::ResolveInfo::J2CPP_CLASS_NAME,
		android::content::pm::ResolveInfo::J2CPP_METHOD_NAME(1),
		android::content::pm::ResolveInfo::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::CharSequence > >
	(get_jobject(), a0);
}

local_ref< android::graphics::drawable::Drawable > android::content::pm::ResolveInfo::loadIcon(local_ref< android::content::pm::PackageManager > const &a0)
{
	return call_method<
		android::content::pm::ResolveInfo::J2CPP_CLASS_NAME,
		android::content::pm::ResolveInfo::J2CPP_METHOD_NAME(2),
		android::content::pm::ResolveInfo::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject(), a0);
}

jint android::content::pm::ResolveInfo::getIconResource()
{
	return call_method<
		android::content::pm::ResolveInfo::J2CPP_CLASS_NAME,
		android::content::pm::ResolveInfo::J2CPP_METHOD_NAME(3),
		android::content::pm::ResolveInfo::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

void android::content::pm::ResolveInfo::dump(local_ref< android::util::Printer > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::content::pm::ResolveInfo::J2CPP_CLASS_NAME,
		android::content::pm::ResolveInfo::J2CPP_METHOD_NAME(4),
		android::content::pm::ResolveInfo::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::content::pm::ResolveInfo::toString()
{
	return call_method<
		android::content::pm::ResolveInfo::J2CPP_CLASS_NAME,
		android::content::pm::ResolveInfo::J2CPP_METHOD_NAME(5),
		android::content::pm::ResolveInfo::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::content::pm::ResolveInfo::describeContents()
{
	return call_method<
		android::content::pm::ResolveInfo::J2CPP_CLASS_NAME,
		android::content::pm::ResolveInfo::J2CPP_METHOD_NAME(6),
		android::content::pm::ResolveInfo::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

void android::content::pm::ResolveInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::content::pm::ResolveInfo::J2CPP_CLASS_NAME,
		android::content::pm::ResolveInfo::J2CPP_METHOD_NAME(7),
		android::content::pm::ResolveInfo::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1);
}



static_field<
	android::content::pm::ResolveInfo::J2CPP_CLASS_NAME,
	android::content::pm::ResolveInfo::J2CPP_FIELD_NAME(12),
	android::content::pm::ResolveInfo::J2CPP_FIELD_SIGNATURE(12),
	local_ref< android::os::Parcelable_::Creator >
> android::content::pm::ResolveInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::content::pm::ResolveInfo,"android/content/pm/ResolveInfo")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,1,"loadLabel","(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,2,"loadIcon","(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,3,"getIconResource","()I")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,4,"dump","(Landroid/util/Printer;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,5,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,6,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,7,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,8,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,0,"activityInfo","Landroid/content/pm/ActivityInfo;")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,1,"serviceInfo","Landroid/content/pm/ServiceInfo;")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,2,"filter","Landroid/content/IntentFilter;")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,3,"priority","I")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,4,"preferredOrder","I")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,5,"match","I")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,6,"specificIndex","I")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,7,"isDefault","Z")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,8,"labelRes","I")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,9,"nonLocalizedLabel","Ljava/lang/CharSequence;")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,10,"icon","I")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,11,"resolvePackageName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,12,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_RESOLVEINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
