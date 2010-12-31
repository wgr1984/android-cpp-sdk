/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.pm.LabeledIntent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_LABELEDINTENT_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_LABELEDINTENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PackageManager; } } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }


#include <android/content/Intent.hpp>
#include <android/content/pm/PackageManager.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class LabeledIntent;
	class LabeledIntent
		: public object<LabeledIntent>
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
		J2CPP_DECLARE_FIELD(0)

		explicit LabeledIntent(jobject jobj)
		: object<LabeledIntent>(jobj)
		{
		}

		operator local_ref<android::content::Intent>() const;


		LabeledIntent(local_ref< android::content::Intent > const&, local_ref< java::lang::String > const&, jint, jint);
		LabeledIntent(local_ref< android::content::Intent > const&, local_ref< java::lang::String > const&, local_ref< java::lang::CharSequence > const&, jint);
		LabeledIntent(local_ref< java::lang::String > const&, jint, jint);
		LabeledIntent(local_ref< java::lang::String > const&, local_ref< java::lang::CharSequence > const&, jint);
		local_ref< java::lang::String > getSourcePackage();
		jint getLabelResource();
		local_ref< java::lang::CharSequence > getNonLocalizedLabel();
		jint getIconResource();
		local_ref< java::lang::CharSequence > loadLabel(local_ref< android::content::pm::PackageManager >  const&);
		local_ref< android::graphics::drawable::Drawable > loadIcon(local_ref< android::content::pm::PackageManager >  const&);
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		void readFromParcel(local_ref< android::os::Parcel >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class LabeledIntent

} //namespace pm
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_LABELEDINTENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_LABELEDINTENT_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_LABELEDINTENT_HPP_IMPL

namespace j2cpp {



android::content::pm::LabeledIntent::operator local_ref<android::content::Intent>() const
{
	return local_ref<android::content::Intent>(get_jobject());
}


android::content::pm::LabeledIntent::LabeledIntent(local_ref< android::content::Intent > const &a0, local_ref< java::lang::String > const &a1, jint a2, jint a3)
: object<android::content::pm::LabeledIntent>(
	call_new_object<
		android::content::pm::LabeledIntent::J2CPP_CLASS_NAME,
		android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(0),
		android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3)
)
{
}



android::content::pm::LabeledIntent::LabeledIntent(local_ref< android::content::Intent > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::CharSequence > const &a2, jint a3)
: object<android::content::pm::LabeledIntent>(
	call_new_object<
		android::content::pm::LabeledIntent::J2CPP_CLASS_NAME,
		android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(1),
		android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2, a3)
)
{
}



android::content::pm::LabeledIntent::LabeledIntent(local_ref< java::lang::String > const &a0, jint a1, jint a2)
: object<android::content::pm::LabeledIntent>(
	call_new_object<
		android::content::pm::LabeledIntent::J2CPP_CLASS_NAME,
		android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(2),
		android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}



android::content::pm::LabeledIntent::LabeledIntent(local_ref< java::lang::String > const &a0, local_ref< java::lang::CharSequence > const &a1, jint a2)
: object<android::content::pm::LabeledIntent>(
	call_new_object<
		android::content::pm::LabeledIntent::J2CPP_CLASS_NAME,
		android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(3),
		android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(3)>
	(a0, a1, a2)
)
{
}


local_ref< java::lang::String > android::content::pm::LabeledIntent::getSourcePackage()
{
	return call_method<
		android::content::pm::LabeledIntent::J2CPP_CLASS_NAME,
		android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(4),
		android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::content::pm::LabeledIntent::getLabelResource()
{
	return call_method<
		android::content::pm::LabeledIntent::J2CPP_CLASS_NAME,
		android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(5),
		android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

local_ref< java::lang::CharSequence > android::content::pm::LabeledIntent::getNonLocalizedLabel()
{
	return call_method<
		android::content::pm::LabeledIntent::J2CPP_CLASS_NAME,
		android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(6),
		android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::CharSequence > >
	(get_jobject());
}

jint android::content::pm::LabeledIntent::getIconResource()
{
	return call_method<
		android::content::pm::LabeledIntent::J2CPP_CLASS_NAME,
		android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(7),
		android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject());
}

local_ref< java::lang::CharSequence > android::content::pm::LabeledIntent::loadLabel(local_ref< android::content::pm::PackageManager > const &a0)
{
	return call_method<
		android::content::pm::LabeledIntent::J2CPP_CLASS_NAME,
		android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(8),
		android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::CharSequence > >
	(get_jobject(), a0);
}

local_ref< android::graphics::drawable::Drawable > android::content::pm::LabeledIntent::loadIcon(local_ref< android::content::pm::PackageManager > const &a0)
{
	return call_method<
		android::content::pm::LabeledIntent::J2CPP_CLASS_NAME,
		android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(9),
		android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject(), a0);
}

void android::content::pm::LabeledIntent::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::content::pm::LabeledIntent::J2CPP_CLASS_NAME,
		android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(10),
		android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0, a1);
}

void android::content::pm::LabeledIntent::readFromParcel(local_ref< android::os::Parcel > const &a0)
{
	return call_method<
		android::content::pm::LabeledIntent::J2CPP_CLASS_NAME,
		android::content::pm::LabeledIntent::J2CPP_METHOD_NAME(11),
		android::content::pm::LabeledIntent::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}



static_field<
	android::content::pm::LabeledIntent::J2CPP_CLASS_NAME,
	android::content::pm::LabeledIntent::J2CPP_FIELD_NAME(0),
	android::content::pm::LabeledIntent::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::content::pm::LabeledIntent::CREATOR;


J2CPP_DEFINE_CLASS(android::content::pm::LabeledIntent,"android/content/pm/LabeledIntent")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,0,"<init>","(Landroid/content/Intent;Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,1,"<init>","(Landroid/content/Intent;Ljava/lang/String;Ljava/lang/CharSequence;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,2,"<init>","(Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,3,"<init>","(Ljava/lang/String;Ljava/lang/CharSequence;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,4,"getSourcePackage","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,5,"getLabelResource","()I")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,6,"getNonLocalizedLabel","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,7,"getIconResource","()I")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,8,"loadLabel","(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,9,"loadIcon","(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,10,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,11,"readFromParcel","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::content::pm::LabeledIntent,12,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::pm::LabeledIntent,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_LABELEDINTENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
