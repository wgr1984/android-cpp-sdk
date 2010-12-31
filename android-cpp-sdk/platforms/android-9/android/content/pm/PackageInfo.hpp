/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.pm.PackageInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PACKAGEINFO_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_PACKAGEINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ActivityInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class InstrumentationInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ApplicationInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ProviderInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ServiceInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class Signature; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ConfigurationInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class FeatureInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PermissionInfo; } } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/content/pm/ActivityInfo.hpp>
#include <android/content/pm/ApplicationInfo.hpp>
#include <android/content/pm/ConfigurationInfo.hpp>
#include <android/content/pm/FeatureInfo.hpp>
#include <android/content/pm/InstrumentationInfo.hpp>
#include <android/content/pm/PermissionInfo.hpp>
#include <android/content/pm/ProviderInfo.hpp>
#include <android/content/pm/ServiceInfo.hpp>
#include <android/content/pm/Signature.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class PackageInfo;
	class PackageInfo
		: public object<PackageInfo>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
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

		explicit PackageInfo(jobject jobj)
		: object<PackageInfo>(jobj)
		, packageName(jobj)
		, versionCode(jobj)
		, versionName(jobj)
		, sharedUserId(jobj)
		, sharedUserLabel(jobj)
		, applicationInfo(jobj)
		, firstInstallTime(jobj)
		, lastUpdateTime(jobj)
		, gids(jobj)
		, activities(jobj)
		, receivers(jobj)
		, services(jobj)
		, providers(jobj)
		, instrumentation(jobj)
		, permissions(jobj)
		, requestedPermissions(jobj)
		, signatures(jobj)
		, configPreferences(jobj)
		, reqFeatures(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		PackageInfo();
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > packageName;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > versionCode;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > versionName;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > sharedUserId;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > sharedUserLabel;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< android::content::pm::ApplicationInfo > > applicationInfo;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jlong > firstInstallTime;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jlong > lastUpdateTime;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< array<jint,1> > > gids;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< array< local_ref< android::content::pm::ActivityInfo >, 1> > > activities;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< array< local_ref< android::content::pm::ActivityInfo >, 1> > > receivers;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< array< local_ref< android::content::pm::ServiceInfo >, 1> > > services;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< array< local_ref< android::content::pm::ProviderInfo >, 1> > > providers;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), local_ref< array< local_ref< android::content::pm::InstrumentationInfo >, 1> > > instrumentation;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), local_ref< array< local_ref< android::content::pm::PermissionInfo >, 1> > > permissions;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), local_ref< array< local_ref< java::lang::String >, 1> > > requestedPermissions;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), local_ref< array< local_ref< android::content::pm::Signature >, 1> > > signatures;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), local_ref< array< local_ref< android::content::pm::ConfigurationInfo >, 1> > > configPreferences;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), local_ref< array< local_ref< android::content::pm::FeatureInfo >, 1> > > reqFeatures;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class PackageInfo

} //namespace pm
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PACKAGEINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PACKAGEINFO_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_PACKAGEINFO_HPP_IMPL

namespace j2cpp {



android::content::pm::PackageInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::content::pm::PackageInfo::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::content::pm::PackageInfo::PackageInfo()
: object<android::content::pm::PackageInfo>(
	call_new_object<
		android::content::pm::PackageInfo::J2CPP_CLASS_NAME,
		android::content::pm::PackageInfo::J2CPP_METHOD_NAME(0),
		android::content::pm::PackageInfo::J2CPP_METHOD_SIGNATURE(0)>
	()
)
, packageName(get_jobject())
, versionCode(get_jobject())
, versionName(get_jobject())
, sharedUserId(get_jobject())
, sharedUserLabel(get_jobject())
, applicationInfo(get_jobject())
, firstInstallTime(get_jobject())
, lastUpdateTime(get_jobject())
, gids(get_jobject())
, activities(get_jobject())
, receivers(get_jobject())
, services(get_jobject())
, providers(get_jobject())
, instrumentation(get_jobject())
, permissions(get_jobject())
, requestedPermissions(get_jobject())
, signatures(get_jobject())
, configPreferences(get_jobject())
, reqFeatures(get_jobject())
{
}


local_ref< java::lang::String > android::content::pm::PackageInfo::toString()
{
	return call_method<
		android::content::pm::PackageInfo::J2CPP_CLASS_NAME,
		android::content::pm::PackageInfo::J2CPP_METHOD_NAME(1),
		android::content::pm::PackageInfo::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::content::pm::PackageInfo::describeContents()
{
	return call_method<
		android::content::pm::PackageInfo::J2CPP_CLASS_NAME,
		android::content::pm::PackageInfo::J2CPP_METHOD_NAME(2),
		android::content::pm::PackageInfo::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

void android::content::pm::PackageInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::content::pm::PackageInfo::J2CPP_CLASS_NAME,
		android::content::pm::PackageInfo::J2CPP_METHOD_NAME(3),
		android::content::pm::PackageInfo::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}



static_field<
	android::content::pm::PackageInfo::J2CPP_CLASS_NAME,
	android::content::pm::PackageInfo::J2CPP_FIELD_NAME(19),
	android::content::pm::PackageInfo::J2CPP_FIELD_SIGNATURE(19),
	local_ref< android::os::Parcelable_::Creator >
> android::content::pm::PackageInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::content::pm::PackageInfo,"android/content/pm/PackageInfo")
J2CPP_DEFINE_METHOD(android::content::pm::PackageInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::pm::PackageInfo,1,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::PackageInfo,2,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::pm::PackageInfo,3,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::PackageInfo,4,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,0,"packageName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,1,"versionCode","I")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,2,"versionName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,3,"sharedUserId","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,4,"sharedUserLabel","I")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,5,"applicationInfo","Landroid/content/pm/ApplicationInfo;")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,6,"firstInstallTime","J")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,7,"lastUpdateTime","J")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,8,"gids","[I")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,9,"activities","[android.content.pm.ActivityInfo")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,10,"receivers","[android.content.pm.ActivityInfo")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,11,"services","[android.content.pm.ServiceInfo")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,12,"providers","[android.content.pm.ProviderInfo")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,13,"instrumentation","[android.content.pm.InstrumentationInfo")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,14,"permissions","[android.content.pm.PermissionInfo")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,15,"requestedPermissions","[java.lang.String")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,16,"signatures","[android.content.pm.Signature")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,17,"configPreferences","[android.content.pm.ConfigurationInfo")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,18,"reqFeatures","[android.content.pm.FeatureInfo")
J2CPP_DEFINE_FIELD(android::content::pm::PackageInfo,19,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PACKAGEINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
