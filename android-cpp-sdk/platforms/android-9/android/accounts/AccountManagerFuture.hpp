/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.accounts.AccountManagerFuture
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_ACCOUNTMANAGERFUTURE_HPP_DECL
#define J2CPP_ANDROID_ACCOUNTS_ACCOUNTMANAGERFUTURE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }


#include <java/lang/Object.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace android { namespace accounts {

	class AccountManagerFuture;
	class AccountManagerFuture
		: public object<AccountManagerFuture>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit AccountManagerFuture(jobject jobj)
		: object<AccountManagerFuture>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean cancel(jboolean);
		jboolean isCancelled();
		jboolean isDone();
		local_ref< java::lang::Object > getResult();
		local_ref< java::lang::Object > getResult(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
	}; //class AccountManagerFuture

} //namespace accounts
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_ACCOUNTMANAGERFUTURE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_ACCOUNTMANAGERFUTURE_HPP_IMPL
#define J2CPP_ANDROID_ACCOUNTS_ACCOUNTMANAGERFUTURE_HPP_IMPL

namespace j2cpp {



android::accounts::AccountManagerFuture::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::accounts::AccountManagerFuture::cancel(jboolean a0)
{
	return call_method<
		android::accounts::AccountManagerFuture::J2CPP_CLASS_NAME,
		android::accounts::AccountManagerFuture::J2CPP_METHOD_NAME(0),
		android::accounts::AccountManagerFuture::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::accounts::AccountManagerFuture::isCancelled()
{
	return call_method<
		android::accounts::AccountManagerFuture::J2CPP_CLASS_NAME,
		android::accounts::AccountManagerFuture::J2CPP_METHOD_NAME(1),
		android::accounts::AccountManagerFuture::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject());
}

jboolean android::accounts::AccountManagerFuture::isDone()
{
	return call_method<
		android::accounts::AccountManagerFuture::J2CPP_CLASS_NAME,
		android::accounts::AccountManagerFuture::J2CPP_METHOD_NAME(2),
		android::accounts::AccountManagerFuture::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject());
}

local_ref< java::lang::Object > android::accounts::AccountManagerFuture::getResult()
{
	return call_method<
		android::accounts::AccountManagerFuture::J2CPP_CLASS_NAME,
		android::accounts::AccountManagerFuture::J2CPP_METHOD_NAME(3),
		android::accounts::AccountManagerFuture::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::lang::Object > android::accounts::AccountManagerFuture::getResult(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		android::accounts::AccountManagerFuture::J2CPP_CLASS_NAME,
		android::accounts::AccountManagerFuture::J2CPP_METHOD_NAME(4),
		android::accounts::AccountManagerFuture::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::accounts::AccountManagerFuture,"android/accounts/AccountManagerFuture")
J2CPP_DEFINE_METHOD(android::accounts::AccountManagerFuture,0,"cancel","(Z)Z")
J2CPP_DEFINE_METHOD(android::accounts::AccountManagerFuture,1,"isCancelled","()Z")
J2CPP_DEFINE_METHOD(android::accounts::AccountManagerFuture,2,"isDone","()Z")
J2CPP_DEFINE_METHOD(android::accounts::AccountManagerFuture,3,"getResult","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::accounts::AccountManagerFuture,4,"getResult","(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_ACCOUNTMANAGERFUTURE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
