/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.atomic.AtomicReference
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCE_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent { namespace atomic {

	class AtomicReference;
	class AtomicReference
		: public object<AtomicReference>
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

		explicit AtomicReference(jobject jobj)
		: object<AtomicReference>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		AtomicReference(local_ref< java::lang::Object > const&);
		AtomicReference();
		local_ref< java::lang::Object > get();
		void set(local_ref< java::lang::Object >  const&);
		void lazySet(local_ref< java::lang::Object >  const&);
		jboolean compareAndSet(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		jboolean weakCompareAndSet(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > getAndSet(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::String > toString();
	}; //class AtomicReference

} //namespace atomic
} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCE_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCE_HPP_IMPL

namespace j2cpp {



java::util::concurrent::atomic::AtomicReference::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::atomic::AtomicReference::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::concurrent::atomic::AtomicReference::AtomicReference(local_ref< java::lang::Object > const &a0)
: object<java::util::concurrent::atomic::AtomicReference>(
	call_new_object<
		java::util::concurrent::atomic::AtomicReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_NAME(0),
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::util::concurrent::atomic::AtomicReference::AtomicReference()
: object<java::util::concurrent::atomic::AtomicReference>(
	call_new_object<
		java::util::concurrent::atomic::AtomicReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_NAME(1),
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_SIGNATURE(1)>
	()
)
{
}


local_ref< java::lang::Object > java::util::concurrent::atomic::AtomicReference::get()
{
	return call_method<
		java::util::concurrent::atomic::AtomicReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_NAME(2),
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

void java::util::concurrent::atomic::AtomicReference::set(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_NAME(3),
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void java::util::concurrent::atomic::AtomicReference::lazySet(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_NAME(4),
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::atomic::AtomicReference::compareAndSet(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_NAME(5),
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean java::util::concurrent::atomic::AtomicReference::weakCompareAndSet(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_NAME(6),
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > java::util::concurrent::atomic::AtomicReference::getAndSet(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_NAME(7),
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::concurrent::atomic::AtomicReference::toString()
{
	return call_method<
		java::util::concurrent::atomic::AtomicReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_NAME(8),
		java::util::concurrent::atomic::AtomicReference::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::atomic::AtomicReference,"java/util/concurrent/atomic/AtomicReference")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReference,0,"<init>","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReference,1,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReference,2,"get","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReference,3,"set","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReference,4,"lazySet","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReference,5,"compareAndSet","(Ljava/lang/Object;Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReference,6,"weakCompareAndSet","(Ljava/lang/Object;Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReference,7,"getAndSet","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReference,8,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
