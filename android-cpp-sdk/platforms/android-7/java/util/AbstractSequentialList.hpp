/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.AbstractSequentialList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ABSTRACTSEQUENTIALLIST_HPP_DECL
#define J2CPP_JAVA_UTIL_ABSTRACTSEQUENTIALLIST_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }
namespace j2cpp { namespace java { namespace util { class AbstractList; } } }
namespace j2cpp { namespace java { namespace util { class AbstractCollection; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class ListIterator; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractCollection.hpp>
#include <java/util/AbstractList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/ListIterator.hpp>


namespace j2cpp {

namespace java { namespace util {

	class AbstractSequentialList;
	class AbstractSequentialList
		: public object<AbstractSequentialList>
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

		explicit AbstractSequentialList(jobject jobj)
		: object<AbstractSequentialList>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Iterable>() const;
		operator local_ref<java::util::AbstractList>() const;
		operator local_ref<java::util::AbstractCollection>() const;
		operator local_ref<java::util::Collection>() const;
		operator local_ref<java::util::List>() const;


		void add(jint, local_ref< java::lang::Object >  const&);
		jboolean addAll(jint, local_ref< java::util::Collection >  const&);
		local_ref< java::lang::Object > get(jint);
		local_ref< java::util::Iterator > iterator();
		local_ref< java::util::ListIterator > listIterator(jint);
		local_ref< java::lang::Object > remove(jint);
		local_ref< java::lang::Object > set(jint, local_ref< java::lang::Object >  const&);
	}; //class AbstractSequentialList

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ABSTRACTSEQUENTIALLIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ABSTRACTSEQUENTIALLIST_HPP_IMPL
#define J2CPP_JAVA_UTIL_ABSTRACTSEQUENTIALLIST_HPP_IMPL

namespace j2cpp {



java::util::AbstractSequentialList::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::AbstractSequentialList::operator local_ref<java::lang::Iterable>() const
{
	return local_ref<java::lang::Iterable>(get_jobject());
}

java::util::AbstractSequentialList::operator local_ref<java::util::AbstractList>() const
{
	return local_ref<java::util::AbstractList>(get_jobject());
}

java::util::AbstractSequentialList::operator local_ref<java::util::AbstractCollection>() const
{
	return local_ref<java::util::AbstractCollection>(get_jobject());
}

java::util::AbstractSequentialList::operator local_ref<java::util::Collection>() const
{
	return local_ref<java::util::Collection>(get_jobject());
}

java::util::AbstractSequentialList::operator local_ref<java::util::List>() const
{
	return local_ref<java::util::List>(get_jobject());
}


void java::util::AbstractSequentialList::add(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::AbstractSequentialList::J2CPP_CLASS_NAME,
		java::util::AbstractSequentialList::J2CPP_METHOD_NAME(1),
		java::util::AbstractSequentialList::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}

jboolean java::util::AbstractSequentialList::addAll(jint a0, local_ref< java::util::Collection > const &a1)
{
	return call_method<
		java::util::AbstractSequentialList::J2CPP_CLASS_NAME,
		java::util::AbstractSequentialList::J2CPP_METHOD_NAME(2),
		java::util::AbstractSequentialList::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > java::util::AbstractSequentialList::get(jint a0)
{
	return call_method<
		java::util::AbstractSequentialList::J2CPP_CLASS_NAME,
		java::util::AbstractSequentialList::J2CPP_METHOD_NAME(3),
		java::util::AbstractSequentialList::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::util::Iterator > java::util::AbstractSequentialList::iterator()
{
	return call_method<
		java::util::AbstractSequentialList::J2CPP_CLASS_NAME,
		java::util::AbstractSequentialList::J2CPP_METHOD_NAME(4),
		java::util::AbstractSequentialList::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::Iterator >
	>(get_jobject());
}

local_ref< java::util::ListIterator > java::util::AbstractSequentialList::listIterator(jint a0)
{
	return call_method<
		java::util::AbstractSequentialList::J2CPP_CLASS_NAME,
		java::util::AbstractSequentialList::J2CPP_METHOD_NAME(5),
		java::util::AbstractSequentialList::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::ListIterator >
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::AbstractSequentialList::remove(jint a0)
{
	return call_method<
		java::util::AbstractSequentialList::J2CPP_CLASS_NAME,
		java::util::AbstractSequentialList::J2CPP_METHOD_NAME(6),
		java::util::AbstractSequentialList::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::AbstractSequentialList::set(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::AbstractSequentialList::J2CPP_CLASS_NAME,
		java::util::AbstractSequentialList::J2CPP_METHOD_NAME(7),
		java::util::AbstractSequentialList::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::util::AbstractSequentialList,"java/util/AbstractSequentialList")
J2CPP_DEFINE_METHOD(java::util::AbstractSequentialList,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::AbstractSequentialList,1,"add","(ILjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::AbstractSequentialList,2,"addAll","(ILjava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::AbstractSequentialList,3,"get","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::AbstractSequentialList,4,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::AbstractSequentialList,5,"listIterator","(I)Ljava/util/ListIterator;")
J2CPP_DEFINE_METHOD(java::util::AbstractSequentialList,6,"remove","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::AbstractSequentialList,7,"set","(ILjava/lang/Object;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ABSTRACTSEQUENTIALLIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
