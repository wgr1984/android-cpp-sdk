/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.BlockingQueue
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_BLOCKINGQUEUE_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_BLOCKINGQUEUE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Queue; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }


#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Queue.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class BlockingQueue;
	class BlockingQueue
		: public object<BlockingQueue>
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

		explicit BlockingQueue(jobject jobj)
		: object<BlockingQueue>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::Queue>() const;


		jboolean add(local_ref< java::lang::Object >  const&);
		jboolean offer(local_ref< java::lang::Object >  const&);
		void put(local_ref< java::lang::Object >  const&);
		jboolean offer(local_ref< java::lang::Object >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::lang::Object > take();
		local_ref< java::lang::Object > poll(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		jint remainingCapacity();
		jboolean remove(local_ref< java::lang::Object >  const&);
		jboolean contains(local_ref< java::lang::Object >  const&);
		jint drainTo(local_ref< java::util::Collection >  const&);
		jint drainTo(local_ref< java::util::Collection >  const&, jint);
	}; //class BlockingQueue

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_BLOCKINGQUEUE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_BLOCKINGQUEUE_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_BLOCKINGQUEUE_HPP_IMPL

namespace j2cpp {



java::util::concurrent::BlockingQueue::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::BlockingQueue::operator local_ref<java::util::Queue>() const
{
	return local_ref<java::util::Queue>(get_jobject());
}

jboolean java::util::concurrent::BlockingQueue::add(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::BlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_NAME(0),
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::BlockingQueue::offer(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::BlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_NAME(1),
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject(), a0);
}

void java::util::concurrent::BlockingQueue::put(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::BlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_NAME(2),
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::BlockingQueue::offer(local_ref< java::lang::Object > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::BlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_NAME(3),
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Object > java::util::concurrent::BlockingQueue::take()
{
	return call_method<
		java::util::concurrent::BlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_NAME(4),
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::BlockingQueue::poll(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		java::util::concurrent::BlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_NAME(5),
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}

jint java::util::concurrent::BlockingQueue::remainingCapacity()
{
	return call_method<
		java::util::concurrent::BlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_NAME(6),
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

jboolean java::util::concurrent::BlockingQueue::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::BlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_NAME(7),
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::BlockingQueue::contains(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::BlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_NAME(8),
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject(), a0);
}

jint java::util::concurrent::BlockingQueue::drainTo(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::BlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_NAME(9),
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject(), a0);
}

jint java::util::concurrent::BlockingQueue::drainTo(local_ref< java::util::Collection > const &a0, jint a1)
{
	return call_method<
		java::util::concurrent::BlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_NAME(10),
		java::util::concurrent::BlockingQueue::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::BlockingQueue,"java/util/concurrent/BlockingQueue")
J2CPP_DEFINE_METHOD(java::util::concurrent::BlockingQueue,0,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::BlockingQueue,1,"offer","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::BlockingQueue,2,"put","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::BlockingQueue,3,"offer","(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::BlockingQueue,4,"take","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::BlockingQueue,5,"poll","(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::BlockingQueue,6,"remainingCapacity","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::BlockingQueue,7,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::BlockingQueue,8,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::BlockingQueue,9,"drainTo","(Ljava/util/Collection;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::BlockingQueue,10,"drainTo","(Ljava/util/Collection;I)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_BLOCKINGQUEUE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
