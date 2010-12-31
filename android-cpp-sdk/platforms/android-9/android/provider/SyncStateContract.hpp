/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.provider.SyncStateContract
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PROVIDER_SYNCSTATECONTRACT_HPP_DECL
#define J2CPP_ANDROID_PROVIDER_SYNCSTATECONTRACT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class ContentProviderClient; } } }
namespace j2cpp { namespace android { namespace content { class ContentProviderOperation; } } }
namespace j2cpp { namespace android { namespace util { class Pair; } } }
namespace j2cpp { namespace android { namespace accounts { class Account; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace provider { class BaseColumns; } } }
namespace j2cpp { namespace android { namespace provider { namespace SyncStateContract_ { class Columns; } } } }


#include <android/accounts/Account.hpp>
#include <android/content/ContentProviderClient.hpp>
#include <android/content/ContentProviderOperation.hpp>
#include <android/net/Uri.hpp>
#include <android/provider/BaseColumns.hpp>
#include <android/provider/SyncStateContract.hpp>
#include <android/util/Pair.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace provider {

	class SyncStateContract;
	namespace SyncStateContract_ {

		class Helpers;
		class Helpers
			: public object<Helpers>
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

			explicit Helpers(jobject jobj)
			: object<Helpers>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			Helpers();
			static local_ref< array<jbyte,1> > get(local_ref< android::content::ContentProviderClient >  const&, local_ref< android::net::Uri >  const&, local_ref< android::accounts::Account >  const&);
			static void set(local_ref< android::content::ContentProviderClient >  const&, local_ref< android::net::Uri >  const&, local_ref< android::accounts::Account >  const&, local_ref< array<jbyte,1> >  const&);
			static local_ref< android::net::Uri > insert(local_ref< android::content::ContentProviderClient >  const&, local_ref< android::net::Uri >  const&, local_ref< android::accounts::Account >  const&, local_ref< array<jbyte,1> >  const&);
			static void update(local_ref< android::content::ContentProviderClient >  const&, local_ref< android::net::Uri >  const&, local_ref< array<jbyte,1> >  const&);
			static local_ref< android::util::Pair > getWithUri(local_ref< android::content::ContentProviderClient >  const&, local_ref< android::net::Uri >  const&, local_ref< android::accounts::Account >  const&);
			static local_ref< android::content::ContentProviderOperation > newSetOperation(local_ref< android::net::Uri >  const&, local_ref< android::accounts::Account >  const&, local_ref< array<jbyte,1> >  const&);
			static local_ref< android::content::ContentProviderOperation > newUpdateOperation(local_ref< android::net::Uri >  const&, local_ref< array<jbyte,1> >  const&);
		}; //class Helpers

		class Constants;
		class Constants
			: public object<Constants>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)

			explicit Constants(jobject jobj)
			: object<Constants>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<android::provider::SyncStateContract_::Columns>() const;


			Constants();

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > CONTENT_DIRECTORY;
		}; //class Constants

		class Columns;
		class Columns
			: public object<Columns>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			explicit Columns(jobject jobj)
			: object<Columns>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<android::provider::BaseColumns>() const;


			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > ACCOUNT_NAME;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > ACCOUNT_TYPE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > DATA;
		}; //class Columns

	} //namespace SyncStateContract_

	class SyncStateContract
		: public object<SyncStateContract>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		typedef SyncStateContract_::Helpers Helpers;
		typedef SyncStateContract_::Constants Constants;
		typedef SyncStateContract_::Columns Columns;

		explicit SyncStateContract(jobject jobj)
		: object<SyncStateContract>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		SyncStateContract();
	}; //class SyncStateContract

} //namespace provider
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_PROVIDER_SYNCSTATECONTRACT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PROVIDER_SYNCSTATECONTRACT_HPP_IMPL
#define J2CPP_ANDROID_PROVIDER_SYNCSTATECONTRACT_HPP_IMPL

namespace j2cpp {




android::provider::SyncStateContract_::Helpers::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::provider::SyncStateContract_::Helpers::Helpers()
: object<android::provider::SyncStateContract_::Helpers>(
	call_new_object<
		android::provider::SyncStateContract_::Helpers::J2CPP_CLASS_NAME,
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_NAME(0),
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< array<jbyte,1> > android::provider::SyncStateContract_::Helpers::get(local_ref< android::content::ContentProviderClient > const &a0, local_ref< android::net::Uri > const &a1, local_ref< android::accounts::Account > const &a2)
{
	return call_static_method<
		android::provider::SyncStateContract_::Helpers::J2CPP_CLASS_NAME,
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_NAME(1),
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array<jbyte,1> > >
	(a0, a1, a2);
}

void android::provider::SyncStateContract_::Helpers::set(local_ref< android::content::ContentProviderClient > const &a0, local_ref< android::net::Uri > const &a1, local_ref< android::accounts::Account > const &a2, local_ref< array<jbyte,1> > const &a3)
{
	return call_static_method<
		android::provider::SyncStateContract_::Helpers::J2CPP_CLASS_NAME,
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_NAME(2),
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(a0, a1, a2, a3);
}

local_ref< android::net::Uri > android::provider::SyncStateContract_::Helpers::insert(local_ref< android::content::ContentProviderClient > const &a0, local_ref< android::net::Uri > const &a1, local_ref< android::accounts::Account > const &a2, local_ref< array<jbyte,1> > const &a3)
{
	return call_static_method<
		android::provider::SyncStateContract_::Helpers::J2CPP_CLASS_NAME,
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_NAME(3),
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::net::Uri > >
	(a0, a1, a2, a3);
}

void android::provider::SyncStateContract_::Helpers::update(local_ref< android::content::ContentProviderClient > const &a0, local_ref< android::net::Uri > const &a1, local_ref< array<jbyte,1> > const &a2)
{
	return call_static_method<
		android::provider::SyncStateContract_::Helpers::J2CPP_CLASS_NAME,
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_NAME(4),
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(a0, a1, a2);
}

local_ref< android::util::Pair > android::provider::SyncStateContract_::Helpers::getWithUri(local_ref< android::content::ContentProviderClient > const &a0, local_ref< android::net::Uri > const &a1, local_ref< android::accounts::Account > const &a2)
{
	return call_static_method<
		android::provider::SyncStateContract_::Helpers::J2CPP_CLASS_NAME,
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_NAME(5),
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::util::Pair > >
	(a0, a1, a2);
}

local_ref< android::content::ContentProviderOperation > android::provider::SyncStateContract_::Helpers::newSetOperation(local_ref< android::net::Uri > const &a0, local_ref< android::accounts::Account > const &a1, local_ref< array<jbyte,1> > const &a2)
{
	return call_static_method<
		android::provider::SyncStateContract_::Helpers::J2CPP_CLASS_NAME,
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_NAME(6),
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::content::ContentProviderOperation > >
	(a0, a1, a2);
}

local_ref< android::content::ContentProviderOperation > android::provider::SyncStateContract_::Helpers::newUpdateOperation(local_ref< android::net::Uri > const &a0, local_ref< array<jbyte,1> > const &a1)
{
	return call_static_method<
		android::provider::SyncStateContract_::Helpers::J2CPP_CLASS_NAME,
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_NAME(7),
		android::provider::SyncStateContract_::Helpers::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::content::ContentProviderOperation > >
	(a0, a1);
}


J2CPP_DEFINE_CLASS(android::provider::SyncStateContract_::Helpers,"android/provider/SyncStateContract$Helpers")
J2CPP_DEFINE_METHOD(android::provider::SyncStateContract_::Helpers,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::provider::SyncStateContract_::Helpers,1,"get","(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;)[B")
J2CPP_DEFINE_METHOD(android::provider::SyncStateContract_::Helpers,2,"set","(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;[B)V")
J2CPP_DEFINE_METHOD(android::provider::SyncStateContract_::Helpers,3,"insert","(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;[B)Landroid/net/Uri;")
J2CPP_DEFINE_METHOD(android::provider::SyncStateContract_::Helpers,4,"update","(Landroid/content/ContentProviderClient;Landroid/net/Uri;[B)V")
J2CPP_DEFINE_METHOD(android::provider::SyncStateContract_::Helpers,5,"getWithUri","(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;)Landroid/util/Pair;")
J2CPP_DEFINE_METHOD(android::provider::SyncStateContract_::Helpers,6,"newSetOperation","(Landroid/net/Uri;Landroid/accounts/Account;[B)Landroid/content/ContentProviderOperation;")
J2CPP_DEFINE_METHOD(android::provider::SyncStateContract_::Helpers,7,"newUpdateOperation","(Landroid/net/Uri;[B)Landroid/content/ContentProviderOperation;")


android::provider::SyncStateContract_::Constants::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::provider::SyncStateContract_::Constants::operator local_ref<android::provider::SyncStateContract_::Columns>() const
{
	return local_ref<android::provider::SyncStateContract_::Columns>(get_jobject());
}


android::provider::SyncStateContract_::Constants::Constants()
: object<android::provider::SyncStateContract_::Constants>(
	call_new_object<
		android::provider::SyncStateContract_::Constants::J2CPP_CLASS_NAME,
		android::provider::SyncStateContract_::Constants::J2CPP_METHOD_NAME(0),
		android::provider::SyncStateContract_::Constants::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



static_field<
	android::provider::SyncStateContract_::Constants::J2CPP_CLASS_NAME,
	android::provider::SyncStateContract_::Constants::J2CPP_FIELD_NAME(0),
	android::provider::SyncStateContract_::Constants::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::provider::SyncStateContract_::Constants::CONTENT_DIRECTORY;


J2CPP_DEFINE_CLASS(android::provider::SyncStateContract_::Constants,"android/provider/SyncStateContract$Constants")
J2CPP_DEFINE_METHOD(android::provider::SyncStateContract_::Constants,0,"<init>","()V")
J2CPP_DEFINE_FIELD(android::provider::SyncStateContract_::Constants,0,"CONTENT_DIRECTORY","Ljava/lang/String;")


android::provider::SyncStateContract_::Columns::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::provider::SyncStateContract_::Columns::operator local_ref<android::provider::BaseColumns>() const
{
	return local_ref<android::provider::BaseColumns>(get_jobject());
}

static_field<
	android::provider::SyncStateContract_::Columns::J2CPP_CLASS_NAME,
	android::provider::SyncStateContract_::Columns::J2CPP_FIELD_NAME(0),
	android::provider::SyncStateContract_::Columns::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::provider::SyncStateContract_::Columns::ACCOUNT_NAME;

static_field<
	android::provider::SyncStateContract_::Columns::J2CPP_CLASS_NAME,
	android::provider::SyncStateContract_::Columns::J2CPP_FIELD_NAME(1),
	android::provider::SyncStateContract_::Columns::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::provider::SyncStateContract_::Columns::ACCOUNT_TYPE;

static_field<
	android::provider::SyncStateContract_::Columns::J2CPP_CLASS_NAME,
	android::provider::SyncStateContract_::Columns::J2CPP_FIELD_NAME(2),
	android::provider::SyncStateContract_::Columns::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::provider::SyncStateContract_::Columns::DATA;


J2CPP_DEFINE_CLASS(android::provider::SyncStateContract_::Columns,"android/provider/SyncStateContract$Columns")
J2CPP_DEFINE_FIELD(android::provider::SyncStateContract_::Columns,0,"ACCOUNT_NAME","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::SyncStateContract_::Columns,1,"ACCOUNT_TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::SyncStateContract_::Columns,2,"DATA","Ljava/lang/String;")



android::provider::SyncStateContract::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::provider::SyncStateContract::SyncStateContract()
: object<android::provider::SyncStateContract>(
	call_new_object<
		android::provider::SyncStateContract::J2CPP_CLASS_NAME,
		android::provider::SyncStateContract::J2CPP_METHOD_NAME(0),
		android::provider::SyncStateContract::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



J2CPP_DEFINE_CLASS(android::provider::SyncStateContract,"android/provider/SyncStateContract")
J2CPP_DEFINE_METHOD(android::provider::SyncStateContract,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_PROVIDER_SYNCSTATECONTRACT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
