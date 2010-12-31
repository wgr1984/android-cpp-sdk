/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.Authenticator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_AUTHENTICATOR_HPP_DECL
#define J2CPP_JAVA_NET_AUTHENTICATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace net { namespace Authenticator_ { class RequestorType; } } } }
namespace j2cpp { namespace java { namespace net { class PasswordAuthentication; } } }
namespace j2cpp { namespace java { namespace net { class URL; } } }
namespace j2cpp { namespace java { namespace net { class InetAddress; } } }


#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/Authenticator.hpp>
#include <java/net/InetAddress.hpp>
#include <java/net/PasswordAuthentication.hpp>
#include <java/net/URL.hpp>


namespace j2cpp {

namespace java { namespace net {

	class Authenticator;
	namespace Authenticator_ {

		class RequestorType;
		class RequestorType
			: public object<RequestorType>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			explicit RequestorType(jobject jobj)
			: object<RequestorType>(jobj)
			{
			}

			operator local_ref<java::lang::Enum>() const;


			static local_ref< array< local_ref< java::net::Authenticator_::RequestorType >, 1> > values();
			static local_ref< java::net::Authenticator_::RequestorType > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::net::Authenticator_::RequestorType > > PROXY;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::net::Authenticator_::RequestorType > > SERVER;
		}; //class RequestorType

	} //namespace Authenticator_

	class Authenticator
		: public object<Authenticator>
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

		typedef Authenticator_::RequestorType RequestorType;

		explicit Authenticator(jobject jobj)
		: object<Authenticator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Authenticator();
		static local_ref< java::net::PasswordAuthentication > requestPasswordAuthentication(local_ref< java::net::InetAddress >  const&, jint, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static void setDefault(local_ref< java::net::Authenticator >  const&);
		static local_ref< java::net::PasswordAuthentication > requestPasswordAuthentication(local_ref< java::lang::String >  const&, local_ref< java::net::InetAddress >  const&, jint, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< java::net::PasswordAuthentication > requestPasswordAuthentication(local_ref< java::lang::String >  const&, local_ref< java::net::InetAddress >  const&, jint, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::net::URL >  const&, local_ref< java::net::Authenticator_::RequestorType >  const&);
	}; //class Authenticator

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_AUTHENTICATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_AUTHENTICATOR_HPP_IMPL
#define J2CPP_JAVA_NET_AUTHENTICATOR_HPP_IMPL

namespace j2cpp {




java::net::Authenticator_::RequestorType::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

local_ref< array< local_ref< java::net::Authenticator_::RequestorType >, 1> > java::net::Authenticator_::RequestorType::values()
{
	return call_static_method<
		java::net::Authenticator_::RequestorType::J2CPP_CLASS_NAME,
		java::net::Authenticator_::RequestorType::J2CPP_METHOD_NAME(0),
		java::net::Authenticator_::RequestorType::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< java::net::Authenticator_::RequestorType >, 1> > >
	();
}

local_ref< java::net::Authenticator_::RequestorType > java::net::Authenticator_::RequestorType::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::net::Authenticator_::RequestorType::J2CPP_CLASS_NAME,
		java::net::Authenticator_::RequestorType::J2CPP_METHOD_NAME(1),
		java::net::Authenticator_::RequestorType::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::net::Authenticator_::RequestorType > >
	(a0);
}




static_field<
	java::net::Authenticator_::RequestorType::J2CPP_CLASS_NAME,
	java::net::Authenticator_::RequestorType::J2CPP_FIELD_NAME(0),
	java::net::Authenticator_::RequestorType::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::net::Authenticator_::RequestorType >
> java::net::Authenticator_::RequestorType::PROXY;

static_field<
	java::net::Authenticator_::RequestorType::J2CPP_CLASS_NAME,
	java::net::Authenticator_::RequestorType::J2CPP_FIELD_NAME(1),
	java::net::Authenticator_::RequestorType::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::net::Authenticator_::RequestorType >
> java::net::Authenticator_::RequestorType::SERVER;


J2CPP_DEFINE_CLASS(java::net::Authenticator_::RequestorType,"java/net/Authenticator$RequestorType")
J2CPP_DEFINE_METHOD(java::net::Authenticator_::RequestorType,0,"values","()[java.net.Authenticator.RequestorType")
J2CPP_DEFINE_METHOD(java::net::Authenticator_::RequestorType,1,"valueOf","(Ljava/lang/String;)Ljava/net/Authenticator$RequestorType;")
J2CPP_DEFINE_METHOD(java::net::Authenticator_::RequestorType,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::net::Authenticator_::RequestorType,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::net::Authenticator_::RequestorType,0,"PROXY","Ljava/net/Authenticator$RequestorType;")
J2CPP_DEFINE_FIELD(java::net::Authenticator_::RequestorType,1,"SERVER","Ljava/net/Authenticator$RequestorType;")
J2CPP_DEFINE_FIELD(java::net::Authenticator_::RequestorType,2,"$VALUES","[java.net.Authenticator.RequestorType")



java::net::Authenticator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::net::Authenticator::Authenticator()
: object<java::net::Authenticator>(
	call_new_object<
		java::net::Authenticator::J2CPP_CLASS_NAME,
		java::net::Authenticator::J2CPP_METHOD_NAME(0),
		java::net::Authenticator::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}








local_ref< java::net::PasswordAuthentication > java::net::Authenticator::requestPasswordAuthentication(local_ref< java::net::InetAddress > const &a0, jint a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3, local_ref< java::lang::String > const &a4)
{
	return call_static_method<
		java::net::Authenticator::J2CPP_CLASS_NAME,
		java::net::Authenticator::J2CPP_METHOD_NAME(7),
		java::net::Authenticator::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::net::PasswordAuthentication > >
	(a0, a1, a2, a3, a4);
}

void java::net::Authenticator::setDefault(local_ref< java::net::Authenticator > const &a0)
{
	return call_static_method<
		java::net::Authenticator::J2CPP_CLASS_NAME,
		java::net::Authenticator::J2CPP_METHOD_NAME(8),
		java::net::Authenticator::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(a0);
}

local_ref< java::net::PasswordAuthentication > java::net::Authenticator::requestPasswordAuthentication(local_ref< java::lang::String > const &a0, local_ref< java::net::InetAddress > const &a1, jint a2, local_ref< java::lang::String > const &a3, local_ref< java::lang::String > const &a4, local_ref< java::lang::String > const &a5)
{
	return call_static_method<
		java::net::Authenticator::J2CPP_CLASS_NAME,
		java::net::Authenticator::J2CPP_METHOD_NAME(9),
		java::net::Authenticator::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::net::PasswordAuthentication > >
	(a0, a1, a2, a3, a4, a5);
}


local_ref< java::net::PasswordAuthentication > java::net::Authenticator::requestPasswordAuthentication(local_ref< java::lang::String > const &a0, local_ref< java::net::InetAddress > const &a1, jint a2, local_ref< java::lang::String > const &a3, local_ref< java::lang::String > const &a4, local_ref< java::lang::String > const &a5, local_ref< java::net::URL > const &a6, local_ref< java::net::Authenticator_::RequestorType > const &a7)
{
	return call_static_method<
		java::net::Authenticator::J2CPP_CLASS_NAME,
		java::net::Authenticator::J2CPP_METHOD_NAME(11),
		java::net::Authenticator::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::net::PasswordAuthentication > >
	(a0, a1, a2, a3, a4, a5, a6, a7);
}




J2CPP_DEFINE_CLASS(java::net::Authenticator,"java/net/Authenticator")
J2CPP_DEFINE_METHOD(java::net::Authenticator,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::Authenticator,1,"getPasswordAuthentication","()Ljava/net/PasswordAuthentication;")
J2CPP_DEFINE_METHOD(java::net::Authenticator,2,"getRequestingPort","()I")
J2CPP_DEFINE_METHOD(java::net::Authenticator,3,"getRequestingSite","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(java::net::Authenticator,4,"getRequestingPrompt","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::Authenticator,5,"getRequestingProtocol","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::Authenticator,6,"getRequestingScheme","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::Authenticator,7,"requestPasswordAuthentication","(Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;")
J2CPP_DEFINE_METHOD(java::net::Authenticator,8,"setDefault","(Ljava/net/Authenticator;)V")
J2CPP_DEFINE_METHOD(java::net::Authenticator,9,"requestPasswordAuthentication","(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;")
J2CPP_DEFINE_METHOD(java::net::Authenticator,10,"getRequestingHost","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::Authenticator,11,"requestPasswordAuthentication","(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;")
J2CPP_DEFINE_METHOD(java::net::Authenticator,12,"getRequestingURL","()Ljava/net/URL;")
J2CPP_DEFINE_METHOD(java::net::Authenticator,13,"getRequestorType","()Ljava/net/Authenticator$RequestorType;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_AUTHENTICATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
