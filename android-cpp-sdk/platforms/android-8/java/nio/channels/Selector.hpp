/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.Selector
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SELECTOR_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_SELECTOR_HPP_DECL


namespace j2cpp { namespace java { namespace nio { namespace channels { namespace spi { class SelectorProvider; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }


#include <java/lang/Object.hpp>
#include <java/nio/channels/spi/SelectorProvider.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class Selector;
	class Selector
		: public object<Selector>
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

		explicit Selector(jobject jobj)
		: object<Selector>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::nio::channels::Selector > open();
		void close();
		jboolean isOpen();
		local_ref< java::util::Set > keys();
		local_ref< java::nio::channels::spi::SelectorProvider > provider();
		jint select();
		jint select(jlong);
		local_ref< java::util::Set > selectedKeys();
		jint selectNow();
		local_ref< java::nio::channels::Selector > wakeup();
	}; //class Selector

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SELECTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SELECTOR_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_SELECTOR_HPP_IMPL

namespace j2cpp {



java::nio::channels::Selector::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::nio::channels::Selector > java::nio::channels::Selector::open()
{
	return call_static_method<
		java::nio::channels::Selector::J2CPP_CLASS_NAME,
		java::nio::channels::Selector::J2CPP_METHOD_NAME(1),
		java::nio::channels::Selector::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::nio::channels::Selector > >
	();
}

void java::nio::channels::Selector::close()
{
	return call_method<
		java::nio::channels::Selector::J2CPP_CLASS_NAME,
		java::nio::channels::Selector::J2CPP_METHOD_NAME(2),
		java::nio::channels::Selector::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject());
}

jboolean java::nio::channels::Selector::isOpen()
{
	return call_method<
		java::nio::channels::Selector::J2CPP_CLASS_NAME,
		java::nio::channels::Selector::J2CPP_METHOD_NAME(3),
		java::nio::channels::Selector::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject());
}

local_ref< java::util::Set > java::nio::channels::Selector::keys()
{
	return call_method<
		java::nio::channels::Selector::J2CPP_CLASS_NAME,
		java::nio::channels::Selector::J2CPP_METHOD_NAME(4),
		java::nio::channels::Selector::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::Set > >
	(get_jobject());
}

local_ref< java::nio::channels::spi::SelectorProvider > java::nio::channels::Selector::provider()
{
	return call_method<
		java::nio::channels::Selector::J2CPP_CLASS_NAME,
		java::nio::channels::Selector::J2CPP_METHOD_NAME(5),
		java::nio::channels::Selector::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::nio::channels::spi::SelectorProvider > >
	(get_jobject());
}

jint java::nio::channels::Selector::select()
{
	return call_method<
		java::nio::channels::Selector::J2CPP_CLASS_NAME,
		java::nio::channels::Selector::J2CPP_METHOD_NAME(6),
		java::nio::channels::Selector::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

jint java::nio::channels::Selector::select(jlong a0)
{
	return call_method<
		java::nio::channels::Selector::J2CPP_CLASS_NAME,
		java::nio::channels::Selector::J2CPP_METHOD_NAME(7),
		java::nio::channels::Selector::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject(), a0);
}

local_ref< java::util::Set > java::nio::channels::Selector::selectedKeys()
{
	return call_method<
		java::nio::channels::Selector::J2CPP_CLASS_NAME,
		java::nio::channels::Selector::J2CPP_METHOD_NAME(8),
		java::nio::channels::Selector::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::util::Set > >
	(get_jobject());
}

jint java::nio::channels::Selector::selectNow()
{
	return call_method<
		java::nio::channels::Selector::J2CPP_CLASS_NAME,
		java::nio::channels::Selector::J2CPP_METHOD_NAME(9),
		java::nio::channels::Selector::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject());
}

local_ref< java::nio::channels::Selector > java::nio::channels::Selector::wakeup()
{
	return call_method<
		java::nio::channels::Selector::J2CPP_CLASS_NAME,
		java::nio::channels::Selector::J2CPP_METHOD_NAME(10),
		java::nio::channels::Selector::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::nio::channels::Selector > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::nio::channels::Selector,"java/nio/channels/Selector")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,1,"open","()Ljava/nio/channels/Selector;")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,2,"close","()V")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,3,"isOpen","()Z")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,4,"keys","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,5,"provider","()Ljava/nio/channels/spi/SelectorProvider;")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,6,"select","()I")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,7,"select","(J)I")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,8,"selectedKeys","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,9,"selectNow","()I")
J2CPP_DEFINE_METHOD(java::nio::channels::Selector,10,"wakeup","()Ljava/nio/channels/Selector;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SELECTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
