/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.ContentProvider
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTPROVIDER_HPP_DECL
#define J2CPP_ANDROID_CONTENT_CONTENTPROVIDER_HPP_DECL


namespace j2cpp { namespace android { namespace os { class ParcelFileDescriptor; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Configuration; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class AssetFileDescriptor; } } } }
namespace j2cpp { namespace android { namespace content { class ComponentCallbacks; } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ProviderInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PathPermission; } } } }
namespace j2cpp { namespace android { namespace content { class ContentProviderResult; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { class ContentValues; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class ArrayList; } } }


#include <android/content/ComponentCallbacks.hpp>
#include <android/content/ContentProviderResult.hpp>
#include <android/content/ContentValues.hpp>
#include <android/content/Context.hpp>
#include <android/content/pm/PathPermission.hpp>
#include <android/content/pm/ProviderInfo.hpp>
#include <android/content/res/AssetFileDescriptor.hpp>
#include <android/content/res/Configuration.hpp>
#include <android/database/Cursor.hpp>
#include <android/net/Uri.hpp>
#include <android/os/ParcelFileDescriptor.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>


namespace j2cpp {

namespace android { namespace content {

	class ContentProvider;
	class ContentProvider
		: public object<ContentProvider>
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

		explicit ContentProvider(jobject jobj)
		: object<ContentProvider>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::content::ComponentCallbacks>() const;


		ContentProvider();
		local_ref< android::content::Context > getContext();
		local_ref< java::lang::String > getReadPermission();
		local_ref< java::lang::String > getWritePermission();
		local_ref< array< local_ref< android::content::pm::PathPermission >, 1> > getPathPermissions();
		jboolean onCreate();
		void onConfigurationChanged(local_ref< android::content::res::Configuration >  const&);
		void onLowMemory();
		local_ref< android::database::Cursor > query(local_ref< android::net::Uri >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getType(local_ref< android::net::Uri >  const&);
		local_ref< android::net::Uri > insert(local_ref< android::net::Uri >  const&, local_ref< android::content::ContentValues >  const&);
		jint bulkInsert(local_ref< android::net::Uri >  const&, local_ref< array< local_ref< android::content::ContentValues >, 1> >  const&);
		jint delete_(local_ref< android::net::Uri >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		jint update(local_ref< android::net::Uri >  const&, local_ref< android::content::ContentValues >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		local_ref< android::os::ParcelFileDescriptor > openFile(local_ref< android::net::Uri >  const&, local_ref< java::lang::String >  const&);
		local_ref< android::content::res::AssetFileDescriptor > openAssetFile(local_ref< android::net::Uri >  const&, local_ref< java::lang::String >  const&);
		void attachInfo(local_ref< android::content::Context >  const&, local_ref< android::content::pm::ProviderInfo >  const&);
		local_ref< array< local_ref< android::content::ContentProviderResult >, 1> > applyBatch(local_ref< java::util::ArrayList >  const&);
	}; //class ContentProvider

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTPROVIDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTPROVIDER_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_CONTENTPROVIDER_HPP_IMPL

namespace j2cpp {



android::content::ContentProvider::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::content::ContentProvider::operator local_ref<android::content::ComponentCallbacks>() const
{
	return local_ref<android::content::ComponentCallbacks>(get_jobject());
}


android::content::ContentProvider::ContentProvider()
: object<android::content::ContentProvider>(
	call_new_object<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(0),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< android::content::Context > android::content::ContentProvider::getContext()
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(1),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::content::Context > >
	(get_jobject());
}


local_ref< java::lang::String > android::content::ContentProvider::getReadPermission()
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(3),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}


local_ref< java::lang::String > android::content::ContentProvider::getWritePermission()
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(5),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String > >
	(get_jobject());
}


local_ref< array< local_ref< android::content::pm::PathPermission >, 1> > android::content::ContentProvider::getPathPermissions()
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(7),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< array< local_ref< android::content::pm::PathPermission >, 1> > >
	(get_jobject());
}

jboolean android::content::ContentProvider::onCreate()
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(8),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject());
}

void android::content::ContentProvider::onConfigurationChanged(local_ref< android::content::res::Configuration > const &a0)
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(9),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

void android::content::ContentProvider::onLowMemory()
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(10),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject());
}

local_ref< android::database::Cursor > android::content::ContentProvider::query(local_ref< android::net::Uri > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1, local_ref< java::lang::String > const &a2, local_ref< array< local_ref< java::lang::String >, 1> > const &a3, local_ref< java::lang::String > const &a4)
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(11),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::database::Cursor > >
	(get_jobject(), a0, a1, a2, a3, a4);
}

local_ref< java::lang::String > android::content::ContentProvider::getType(local_ref< android::net::Uri > const &a0)
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(12),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

local_ref< android::net::Uri > android::content::ContentProvider::insert(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1)
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(13),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< android::net::Uri > >
	(get_jobject(), a0, a1);
}

jint android::content::ContentProvider::bulkInsert(local_ref< android::net::Uri > const &a0, local_ref< array< local_ref< android::content::ContentValues >, 1> > const &a1)
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(14),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(get_jobject(), a0, a1);
}

jint android::content::ContentProvider::delete_(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::String >, 1> > const &a2)
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(15),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(15), 
		jint >
	(get_jobject(), a0, a1, a2);
}

jint android::content::ContentProvider::update(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1, local_ref< java::lang::String > const &a2, local_ref< array< local_ref< java::lang::String >, 1> > const &a3)
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(16),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(16), 
		jint >
	(get_jobject(), a0, a1, a2, a3);
}

local_ref< android::os::ParcelFileDescriptor > android::content::ContentProvider::openFile(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(17),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< android::os::ParcelFileDescriptor > >
	(get_jobject(), a0, a1);
}

local_ref< android::content::res::AssetFileDescriptor > android::content::ContentProvider::openAssetFile(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(18),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< android::content::res::AssetFileDescriptor > >
	(get_jobject(), a0, a1);
}



void android::content::ContentProvider::attachInfo(local_ref< android::content::Context > const &a0, local_ref< android::content::pm::ProviderInfo > const &a1)
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(21),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< array< local_ref< android::content::ContentProviderResult >, 1> > android::content::ContentProvider::applyBatch(local_ref< java::util::ArrayList > const &a0)
{
	return call_method<
		android::content::ContentProvider::J2CPP_CLASS_NAME,
		android::content::ContentProvider::J2CPP_METHOD_NAME(22),
		android::content::ContentProvider::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< array< local_ref< android::content::ContentProviderResult >, 1> > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::content::ContentProvider,"android/content/ContentProvider")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,1,"getContext","()Landroid/content/Context;")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,2,"setReadPermission","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,3,"getReadPermission","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,4,"setWritePermission","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,5,"getWritePermission","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,6,"setPathPermissions","([android.content.pm.PathPermission)V")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,7,"getPathPermissions","()[android.content.pm.PathPermission")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,8,"onCreate","()Z")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,9,"onConfigurationChanged","(Landroid/content/res/Configuration;)V")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,10,"onLowMemory","()V")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,11,"query","(Landroid/net/Uri;[java.lang.StringLjava/lang/String;[java.lang.StringLjava/lang/String;)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,12,"getType","(Landroid/net/Uri;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,13,"insert","(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,14,"bulkInsert","(Landroid/net/Uri;[android.content.ContentValues)I")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,15,"delete","(Landroid/net/Uri;Ljava/lang/String;[java.lang.String)I")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,16,"update","(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[java.lang.String)I")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,17,"openFile","(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,18,"openAssetFile","(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,19,"openFileHelper","(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,20,"isTemporary","()Z")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,21,"attachInfo","(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V")
J2CPP_DEFINE_METHOD(android::content::ContentProvider,22,"applyBatch","(Ljava/util/ArrayList;)[android.content.ContentProviderResult")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTPROVIDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
