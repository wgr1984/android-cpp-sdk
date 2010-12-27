/*================================================================================
  code generated by: java2cpp
  class: java.net.MulticastSocket
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_MULTICASTSOCKET_HPP_DECL
#define J2CPP_JAVA_NET_MULTICASTSOCKET_HPP_DECL


namespace j2cpp { namespace java { namespace net { class SocketAddress; } } }
namespace j2cpp { namespace java { namespace net { class NetworkInterface; } } }
namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace net { class DatagramPacket; } } }


#include <java/net/DatagramPacket.hpp>
#include <java/net/InetAddress.hpp>
#include <java/net/NetworkInterface.hpp>
#include <java/net/SocketAddress.hpp>


namespace j2cpp {

namespace java { namespace net {

	class MulticastSocket;
	class MulticastSocket
		: public cpp_object<MulticastSocket>
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

		MulticastSocket(jobject jobj)
		: cpp_object<MulticastSocket>(jobj)
		{
		}

		local_ref< java::net::InetAddress > getInterface();
		local_ref< java::net::NetworkInterface > getNetworkInterface();
		cpp_int getTimeToLive();
		cpp_byte getTTL();
		void joinGroup(local_ref< java::net::InetAddress > const&);
		void joinGroup(local_ref< java::net::SocketAddress > const&, local_ref< java::net::NetworkInterface > const&);
		void leaveGroup(local_ref< java::net::InetAddress > const&);
		void leaveGroup(local_ref< java::net::SocketAddress > const&, local_ref< java::net::NetworkInterface > const&);
		void send(local_ref< java::net::DatagramPacket > const&, cpp_byte const&);
		void setInterface(local_ref< java::net::InetAddress > const&);
		void setNetworkInterface(local_ref< java::net::NetworkInterface > const&);
		void setTimeToLive(cpp_int const&);
		void setTTL(cpp_byte const&);
		cpp_boolean getLoopbackMode();
		void setLoopbackMode(cpp_boolean const&);
	}; //class MulticastSocket

} //namespace net
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NET_MULTICASTSOCKET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_MULTICASTSOCKET_HPP_IMPL
#define J2CPP_JAVA_NET_MULTICASTSOCKET_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::net::MulticastSocket > create< java::net::MulticastSocket>()
{
	return local_ref< java::net::MulticastSocket >(
		environment::get().get_jenv()->NewObject(
			get_class<java::net::MulticastSocket::J2CPP_CLASS_NAME>(),
			get_method_id<java::net::MulticastSocket::J2CPP_CLASS_NAME, java::net::MulticastSocket::J2CPP_METHOD_NAME(0), java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::net::MulticastSocket > create< java::net::MulticastSocket>(cpp_int const &a0)
{
	return local_ref< java::net::MulticastSocket >(
		environment::get().get_jenv()->NewObject(
			get_class<java::net::MulticastSocket::J2CPP_CLASS_NAME>(),
			get_method_id<java::net::MulticastSocket::J2CPP_CLASS_NAME, java::net::MulticastSocket::J2CPP_METHOD_NAME(1), java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::net::MulticastSocket > create< java::net::MulticastSocket>(local_ref< java::net::SocketAddress > const &a0)
{
	return local_ref< java::net::MulticastSocket >(
		environment::get().get_jenv()->NewObject(
			get_class<java::net::MulticastSocket::J2CPP_CLASS_NAME>(),
			get_method_id<java::net::MulticastSocket::J2CPP_CLASS_NAME, java::net::MulticastSocket::J2CPP_METHOD_NAME(2), java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::net::InetAddress > java::net::MulticastSocket::getInterface()
{
	return local_ref< java::net::InetAddress >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::net::NetworkInterface > java::net::MulticastSocket::getNetworkInterface()
{
	return local_ref< java::net::NetworkInterface >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int java::net::MulticastSocket::getTimeToLive()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_byte java::net::MulticastSocket::getTTL()
{
	return cpp_byte(
		environment::get().get_jenv()->CallByteMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void java::net::MulticastSocket::joinGroup(local_ref< java::net::InetAddress > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void java::net::MulticastSocket::joinGroup(local_ref< java::net::SocketAddress > const &a0, local_ref< java::net::NetworkInterface > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::net::MulticastSocket::leaveGroup(local_ref< java::net::InetAddress > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void java::net::MulticastSocket::leaveGroup(local_ref< java::net::SocketAddress > const &a0, local_ref< java::net::NetworkInterface > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::net::MulticastSocket::send(local_ref< java::net::DatagramPacket > const &a0, cpp_byte const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::net::MulticastSocket::setInterface(local_ref< java::net::InetAddress > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void java::net::MulticastSocket::setNetworkInterface(local_ref< java::net::NetworkInterface > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

void java::net::MulticastSocket::setTimeToLive(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void java::net::MulticastSocket::setTTL(cpp_byte const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::net::MulticastSocket::getLoopbackMode()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

void java::net::MulticastSocket::setLoopbackMode(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::net::MulticastSocket,"java/net/MulticastSocket")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,2,"<init>","(Ljava/net/SocketAddress;)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,3,"getInterface","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,4,"getNetworkInterface","()Ljava/net/NetworkInterface;")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,5,"getTimeToLive","()I")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,6,"getTTL","()B")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,7,"joinGroup","(Ljava/net/InetAddress;)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,8,"joinGroup","(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,9,"leaveGroup","(Ljava/net/InetAddress;)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,10,"leaveGroup","(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,11,"send","(Ljava/net/DatagramPacket;B)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,12,"setInterface","(Ljava/net/InetAddress;)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,13,"setNetworkInterface","(Ljava/net/NetworkInterface;)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,14,"setTimeToLive","(I)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,15,"setTTL","(B)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,16,"getLoopbackMode","()Z")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,17,"setLoopbackMode","(Z)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_MULTICASTSOCKET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION