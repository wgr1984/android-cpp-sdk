/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.ContentProviderClient
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTPROVIDERCLIENT_HPP_DECL
#define J2CPP_ANDROID_CONTENT_CONTENTPROVIDERCLIENT_HPP_DECL


namespace j2cpp { namespace android { namespace os { class ParcelFileDescriptor; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace content { class ContentProvider; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class AssetFileDescriptor; } } } }
namespace j2cpp { namespace android { namespace content { class ContentProviderResult; } } }
namespace j2cpp { namespace android { namespace content { class ContentValues; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class ArrayList; } } }


#include <android/content/ContentProvider.hpp>
#include <android/content/ContentProviderResult.hpp>
#include <android/content/ContentValues.hpp>
#include <android/content/res/AssetFileDescriptor.hpp>
#include <android/database/Cursor.hpp>
#include <android/net/Uri.hpp>
#include <android/os/ParcelFileDescriptor.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>


namespace j2cpp {

namespace android { namespace content {

	class ContentProviderClient;
	class ContentProviderClient
		: public object<ContentProviderClient>
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

		explicit ContentProviderClient(jobject jobj)
		: object<ContentProviderClient>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< android::database::Cursor > query(local_ref< android::net::Uri >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getType(local_ref< android::net::Uri >  const&);
		local_ref< android::net::Uri > insert(local_ref< android::net::Uri >  const&, local_ref< android::content::ContentValues >  const&);
		jint bulkInsert(local_ref< android::net::Uri >  const&, local_ref< array< local_ref< android::content::ContentValues >, 1> >  const&);
		jint delete_(local_ref< android::net::Uri >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		jint update(local_ref< android::net::Uri >  const&, local_ref< android::content::ContentValues >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		local_ref< android::os::ParcelFileDescriptor > openFile(local_ref< android::net::Uri >  const&, local_ref< java::lang::String >  const&);
		local_ref< android::content::res::AssetFileDescriptor > openAssetFile(local_ref< android::net::Uri >  const&, local_ref< java::lang::String >  const&);
		local_ref< array< local_ref< android::content::ContentProviderResult >, 1> > applyBatch(local_ref< java::util::ArrayList >  const&);
		jboolean release();
		local_ref< android::content::ContentProvider > getLocalContentProvider();
	}; //class ContentProviderClient

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTPROVIDERCLIENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTPROVIDERCLIENT_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_CONTENTPROVIDERCLIENT_HPP_IMPL

namespace j2cpp {



android::content::ContentProviderClient::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< android::database::Cursor > android::content::ContentProviderClient::query(local_ref< android::net::Uri > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1, local_ref< java::lang::String > const &a2, local_ref< array< local_ref< java::lang::String >, 1> > const &a3, local_ref< java::lang::String > const &a4)
{
	return call_method<
		android::content::ContentProviderClient::J2CPP_CLASS_NAME,
		android::content::ContentProviderClient::J2CPP_METHOD_NAME(1),
		android::content::ContentProviderClient::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::database::Cursor > >
	(get_jobject(), a0, a1, a2, a3, a4);
}

local_ref< java::lang::String > android::content::ContentProviderClient::getType(local_ref< android::net::Uri > const &a0)
{
	return call_method<
		android::content::ContentProviderClient::J2CPP_CLASS_NAME,
		android::content::ContentProviderClient::J2CPP_METHOD_NAME(2),
		android::content::ContentProviderClient::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

local_ref< android::net::Uri > android::content::ContentProviderClient::insert(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1)
{
	return call_method<
		android::content::ContentProviderClient::J2CPP_CLASS_NAME,
		android::content::ContentProviderClient::J2CPP_METHOD_NAME(3),
		android::content::ContentProviderClient::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::net::Uri > >
	(get_jobject(), a0, a1);
}

jint android::content::ContentProviderClient::bulkInsert(local_ref< android::net::Uri > const &a0, local_ref< array< local_ref< android::content::ContentValues >, 1> > const &a1)
{
	return call_method<
		android::content::ContentProviderClient::J2CPP_CLASS_NAME,
		android::content::ContentProviderClient::J2CPP_METHOD_NAME(4),
		android::content::ContentProviderClient::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject(), a0, a1);
}

jint android::content::ContentProviderClient::delete_(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::String >, 1> > const &a2)
{
	return call_method<
		android::content::ContentProviderClient::J2CPP_CLASS_NAME,
		android::content::ContentProviderClient::J2CPP_METHOD_NAME(5),
		android::content::ContentProviderClient::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject(), a0, a1, a2);
}

jint android::content::ContentProviderClient::update(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1, local_ref< java::lang::String > const &a2, local_ref< array< local_ref< java::lang::String >, 1> > const &a3)
{
	return call_method<
		android::content::ContentProviderClient::J2CPP_CLASS_NAME,
		android::content::ContentProviderClient::J2CPP_METHOD_NAME(6),
		android::content::ContentProviderClient::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject(), a0, a1, a2, a3);
}

local_ref< android::os::ParcelFileDescriptor > android::content::ContentProviderClient::openFile(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::content::ContentProviderClient::J2CPP_CLASS_NAME,
		android::content::ContentProviderClient::J2CPP_METHOD_NAME(7),
		android::content::ContentProviderClient::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::os::ParcelFileDescriptor > >
	(get_jobject(), a0, a1);
}

local_ref< android::content::res::AssetFileDescriptor > android::content::ContentProviderClient::openAssetFile(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::content::ContentProviderClient::J2CPP_CLASS_NAME,
		android::content::ContentProviderClient::J2CPP_METHOD_NAME(8),
		android::content::ContentProviderClient::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::content::res::AssetFileDescriptor > >
	(get_jobject(), a0, a1);
}

local_ref< array< local_ref< android::content::ContentProviderResult >, 1> > android::content::ContentProviderClient::applyBatch(local_ref< java::util::ArrayList > const &a0)
{
	return call_method<
		android::content::ContentProviderClient::J2CPP_CLASS_NAME,
		android::content::ContentProviderClient::J2CPP_METHOD_NAME(9),
		android::content::ContentProviderClient::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< array< local_ref< android::content::ContentProviderResult >, 1> > >
	(get_jobject(), a0);
}

jboolean android::content::ContentProviderClient::release()
{
	return call_method<
		android::content::ContentProviderClient::J2CPP_CLASS_NAME,
		android::content::ContentProviderClient::J2CPP_METHOD_NAME(10),
		android::content::ContentProviderClient::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(get_jobject());
}

local_ref< android::content::ContentProvider > android::content::ContentProviderClient::getLocalContentProvider()
{
	return call_method<
		android::content::ContentProviderClient::J2CPP_CLASS_NAME,
		android::content::ContentProviderClient::J2CPP_METHOD_NAME(11),
		android::content::ContentProviderClient::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::content::ContentProvider > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::content::ContentProviderClient,"android/content/ContentProviderClient")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,1,"query","(Landroid/net/Uri;[java.lang.StringLjava/lang/String;[java.lang.StringLjava/lang/String;)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,2,"getType","(Landroid/net/Uri;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,3,"insert","(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,4,"bulkInsert","(Landroid/net/Uri;[android.content.ContentValues)I")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,5,"delete","(Landroid/net/Uri;Ljava/lang/String;[java.lang.String)I")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,6,"update","(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[java.lang.String)I")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,7,"openFile","(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,8,"openAssetFile","(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,9,"applyBatch","(Ljava/util/ArrayList;)[android.content.ContentProviderResult")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,10,"release","()Z")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,11,"getLocalContentProvider","()Landroid/content/ContentProvider;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTPROVIDERCLIENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
