/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.NetworkInterface
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_NETWORKINTERFACE_HPP_DECL
#define J2CPP_JAVA_NET_NETWORKINTERFACE_HPP_DECL


namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/InetAddress.hpp>
#include <java/util/Enumeration.hpp>


namespace j2cpp {

namespace java { namespace net {

	class NetworkInterface;
	class NetworkInterface
		: public object<NetworkInterface>
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

		explicit NetworkInterface(jobject jobj)
		: object<NetworkInterface>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getName();
		local_ref< java::util::Enumeration > getInetAddresses();
		local_ref< java::lang::String > getDisplayName();
		static local_ref< java::net::NetworkInterface > getByName(local_ref< java::lang::String >  const&);
		static local_ref< java::net::NetworkInterface > getByInetAddress(local_ref< java::net::InetAddress >  const&);
		static local_ref< java::util::Enumeration > getNetworkInterfaces();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		local_ref< java::lang::String > toString();
	}; //class NetworkInterface

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_NETWORKINTERFACE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_NETWORKINTERFACE_HPP_IMPL
#define J2CPP_JAVA_NET_NETWORKINTERFACE_HPP_IMPL

namespace j2cpp {



java::net::NetworkInterface::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > java::net::NetworkInterface::getName()
{
	return call_method<
		java::net::NetworkInterface::J2CPP_CLASS_NAME,
		java::net::NetworkInterface::J2CPP_METHOD_NAME(1),
		java::net::NetworkInterface::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::util::Enumeration > java::net::NetworkInterface::getInetAddresses()
{
	return call_method<
		java::net::NetworkInterface::J2CPP_CLASS_NAME,
		java::net::NetworkInterface::J2CPP_METHOD_NAME(2),
		java::net::NetworkInterface::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::Enumeration > >
	(get_jobject());
}

local_ref< java::lang::String > java::net::NetworkInterface::getDisplayName()
{
	return call_method<
		java::net::NetworkInterface::J2CPP_CLASS_NAME,
		java::net::NetworkInterface::J2CPP_METHOD_NAME(3),
		java::net::NetworkInterface::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::net::NetworkInterface > java::net::NetworkInterface::getByName(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::net::NetworkInterface::J2CPP_CLASS_NAME,
		java::net::NetworkInterface::J2CPP_METHOD_NAME(4),
		java::net::NetworkInterface::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::net::NetworkInterface > >
	(a0);
}

local_ref< java::net::NetworkInterface > java::net::NetworkInterface::getByInetAddress(local_ref< java::net::InetAddress > const &a0)
{
	return call_static_method<
		java::net::NetworkInterface::J2CPP_CLASS_NAME,
		java::net::NetworkInterface::J2CPP_METHOD_NAME(5),
		java::net::NetworkInterface::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::net::NetworkInterface > >
	(a0);
}

local_ref< java::util::Enumeration > java::net::NetworkInterface::getNetworkInterfaces()
{
	return call_static_method<
		java::net::NetworkInterface::J2CPP_CLASS_NAME,
		java::net::NetworkInterface::J2CPP_METHOD_NAME(6),
		java::net::NetworkInterface::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::Enumeration > >
	();
}

jboolean java::net::NetworkInterface::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::net::NetworkInterface::J2CPP_CLASS_NAME,
		java::net::NetworkInterface::J2CPP_METHOD_NAME(7),
		java::net::NetworkInterface::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject(), a0);
}

jint java::net::NetworkInterface::hashCode()
{
	return call_method<
		java::net::NetworkInterface::J2CPP_CLASS_NAME,
		java::net::NetworkInterface::J2CPP_METHOD_NAME(8),
		java::net::NetworkInterface::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > java::net::NetworkInterface::toString()
{
	return call_method<
		java::net::NetworkInterface::J2CPP_CLASS_NAME,
		java::net::NetworkInterface::J2CPP_METHOD_NAME(9),
		java::net::NetworkInterface::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::net::NetworkInterface,"java/net/NetworkInterface")
J2CPP_DEFINE_METHOD(java::net::NetworkInterface,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::NetworkInterface,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::NetworkInterface,2,"getInetAddresses","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::net::NetworkInterface,3,"getDisplayName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::NetworkInterface,4,"getByName","(Ljava/lang/String;)Ljava/net/NetworkInterface;")
J2CPP_DEFINE_METHOD(java::net::NetworkInterface,5,"getByInetAddress","(Ljava/net/InetAddress;)Ljava/net/NetworkInterface;")
J2CPP_DEFINE_METHOD(java::net::NetworkInterface,6,"getNetworkInterfaces","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::net::NetworkInterface,7,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::net::NetworkInterface,8,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::net::NetworkInterface,9,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_NETWORKINTERFACE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION