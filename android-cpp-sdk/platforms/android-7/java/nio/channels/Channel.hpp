/*================================================================================
  code generated by: java2cpp
  class: java.nio.channels.Channel
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_CHANNEL_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_CHANNEL_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Closeable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class Channel;
	class Channel
		: public cpp_object<Channel>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit Channel(jobject jobj)
		: cpp_object<Channel>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Closeable>() const;


		cpp_boolean isOpen();
		void close();
	}; //class Channel

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_CHANNEL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_CHANNEL_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_CHANNEL_HPP_IMPL

namespace j2cpp {



java::nio::channels::Channel::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

java::nio::channels::Channel::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jtype());
}

cpp_boolean java::nio::channels::Channel::isOpen()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void java::nio::channels::Channel::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::nio::channels::Channel,"java/nio/channels/Channel")
J2CPP_DEFINE_METHOD(java::nio::channels::Channel,0,"isOpen","()Z")
J2CPP_DEFINE_METHOD(java::nio::channels::Channel,1,"close","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_CHANNEL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION