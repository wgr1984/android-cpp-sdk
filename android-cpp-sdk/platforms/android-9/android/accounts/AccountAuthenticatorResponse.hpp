/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.accounts.AccountAuthenticatorResponse
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_ACCOUNTAUTHENTICATORRESPONSE_HPP_DECL
#define J2CPP_ANDROID_ACCOUNTS_ACCOUNTAUTHENTICATORRESPONSE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Bundle.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace accounts {

	class AccountAuthenticatorResponse;
	class AccountAuthenticatorResponse
		: public object<AccountAuthenticatorResponse>
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
		J2CPP_DECLARE_FIELD(0)

		explicit AccountAuthenticatorResponse(jobject jobj)
		: object<AccountAuthenticatorResponse>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		AccountAuthenticatorResponse(local_ref< android::os::Parcel > const&);
		void onResult(local_ref< android::os::Bundle >  const&);
		void onRequestContinued();
		void onError(jint, local_ref< java::lang::String >  const&);
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class AccountAuthenticatorResponse

} //namespace accounts
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_ACCOUNTAUTHENTICATORRESPONSE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_ACCOUNTAUTHENTICATORRESPONSE_HPP_IMPL
#define J2CPP_ANDROID_ACCOUNTS_ACCOUNTAUTHENTICATORRESPONSE_HPP_IMPL

namespace j2cpp {



android::accounts::AccountAuthenticatorResponse::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::accounts::AccountAuthenticatorResponse::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::accounts::AccountAuthenticatorResponse::AccountAuthenticatorResponse(local_ref< android::os::Parcel > const &a0)
: object<android::accounts::AccountAuthenticatorResponse>(
	call_new_object<
		android::accounts::AccountAuthenticatorResponse::J2CPP_CLASS_NAME,
		android::accounts::AccountAuthenticatorResponse::J2CPP_METHOD_NAME(0),
		android::accounts::AccountAuthenticatorResponse::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


void android::accounts::AccountAuthenticatorResponse::onResult(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		android::accounts::AccountAuthenticatorResponse::J2CPP_CLASS_NAME,
		android::accounts::AccountAuthenticatorResponse::J2CPP_METHOD_NAME(1),
		android::accounts::AccountAuthenticatorResponse::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

void android::accounts::AccountAuthenticatorResponse::onRequestContinued()
{
	return call_method<
		android::accounts::AccountAuthenticatorResponse::J2CPP_CLASS_NAME,
		android::accounts::AccountAuthenticatorResponse::J2CPP_METHOD_NAME(2),
		android::accounts::AccountAuthenticatorResponse::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject());
}

void android::accounts::AccountAuthenticatorResponse::onError(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::accounts::AccountAuthenticatorResponse::J2CPP_CLASS_NAME,
		android::accounts::AccountAuthenticatorResponse::J2CPP_METHOD_NAME(3),
		android::accounts::AccountAuthenticatorResponse::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}

jint android::accounts::AccountAuthenticatorResponse::describeContents()
{
	return call_method<
		android::accounts::AccountAuthenticatorResponse::J2CPP_CLASS_NAME,
		android::accounts::AccountAuthenticatorResponse::J2CPP_METHOD_NAME(4),
		android::accounts::AccountAuthenticatorResponse::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

void android::accounts::AccountAuthenticatorResponse::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::accounts::AccountAuthenticatorResponse::J2CPP_CLASS_NAME,
		android::accounts::AccountAuthenticatorResponse::J2CPP_METHOD_NAME(5),
		android::accounts::AccountAuthenticatorResponse::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}



static_field<
	android::accounts::AccountAuthenticatorResponse::J2CPP_CLASS_NAME,
	android::accounts::AccountAuthenticatorResponse::J2CPP_FIELD_NAME(0),
	android::accounts::AccountAuthenticatorResponse::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::accounts::AccountAuthenticatorResponse::CREATOR;


J2CPP_DEFINE_CLASS(android::accounts::AccountAuthenticatorResponse,"android/accounts/AccountAuthenticatorResponse")
J2CPP_DEFINE_METHOD(android::accounts::AccountAuthenticatorResponse,0,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::accounts::AccountAuthenticatorResponse,1,"onResult","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::accounts::AccountAuthenticatorResponse,2,"onRequestContinued","()V")
J2CPP_DEFINE_METHOD(android::accounts::AccountAuthenticatorResponse,3,"onError","(ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::accounts::AccountAuthenticatorResponse,4,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::accounts::AccountAuthenticatorResponse,5,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::accounts::AccountAuthenticatorResponse,6,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::accounts::AccountAuthenticatorResponse,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_ACCOUNTAUTHENTICATORRESPONSE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
