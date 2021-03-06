/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.HashSet
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_HASHSET_HPP_DECL
#define J2CPP_JAVA_UTIL_HASHSET_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class AbstractCollection; } } }
namespace j2cpp { namespace java { namespace util { class AbstractSet; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractCollection.hpp>
#include <java/util/AbstractSet.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace util {

	class HashSet;
	class HashSet
		: public object<HashSet>
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

		explicit HashSet(jobject jobj)
		: object<HashSet>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Iterable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::Collection>() const;
		operator local_ref<java::util::AbstractCollection>() const;
		operator local_ref<java::util::AbstractSet>() const;
		operator local_ref<java::util::Set>() const;
		operator local_ref<java::io::Serializable>() const;


		HashSet();
		HashSet(jint);
		HashSet(jint, jfloat);
		HashSet(local_ref< java::util::Collection > const&);
		jboolean add(local_ref< java::lang::Object >  const&);
		void clear();
		local_ref< java::lang::Object > clone();
		jboolean contains(local_ref< java::lang::Object >  const&);
		jboolean isEmpty();
		local_ref< java::util::Iterator > iterator();
		jboolean remove(local_ref< java::lang::Object >  const&);
		jint size();
	}; //class HashSet

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_HASHSET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_HASHSET_HPP_IMPL
#define J2CPP_JAVA_UTIL_HASHSET_HPP_IMPL

namespace j2cpp {



java::util::HashSet::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::util::HashSet::operator local_ref<java::lang::Iterable>() const
{
	return local_ref<java::lang::Iterable>(get_jobject());
}

java::util::HashSet::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::HashSet::operator local_ref<java::util::Collection>() const
{
	return local_ref<java::util::Collection>(get_jobject());
}

java::util::HashSet::operator local_ref<java::util::AbstractCollection>() const
{
	return local_ref<java::util::AbstractCollection>(get_jobject());
}

java::util::HashSet::operator local_ref<java::util::AbstractSet>() const
{
	return local_ref<java::util::AbstractSet>(get_jobject());
}

java::util::HashSet::operator local_ref<java::util::Set>() const
{
	return local_ref<java::util::Set>(get_jobject());
}

java::util::HashSet::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::HashSet::HashSet()
: object<java::util::HashSet>(
	call_new_object<
		java::util::HashSet::J2CPP_CLASS_NAME,
		java::util::HashSet::J2CPP_METHOD_NAME(0),
		java::util::HashSet::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::util::HashSet::HashSet(jint a0)
: object<java::util::HashSet>(
	call_new_object<
		java::util::HashSet::J2CPP_CLASS_NAME,
		java::util::HashSet::J2CPP_METHOD_NAME(1),
		java::util::HashSet::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::util::HashSet::HashSet(jint a0, jfloat a1)
: object<java::util::HashSet>(
	call_new_object<
		java::util::HashSet::J2CPP_CLASS_NAME,
		java::util::HashSet::J2CPP_METHOD_NAME(2),
		java::util::HashSet::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



java::util::HashSet::HashSet(local_ref< java::util::Collection > const &a0)
: object<java::util::HashSet>(
	call_new_object<
		java::util::HashSet::J2CPP_CLASS_NAME,
		java::util::HashSet::J2CPP_METHOD_NAME(3),
		java::util::HashSet::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}


jboolean java::util::HashSet::add(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::HashSet::J2CPP_CLASS_NAME,
		java::util::HashSet::J2CPP_METHOD_NAME(4),
		java::util::HashSet::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

void java::util::HashSet::clear()
{
	return call_method<
		java::util::HashSet::J2CPP_CLASS_NAME,
		java::util::HashSet::J2CPP_METHOD_NAME(5),
		java::util::HashSet::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::HashSet::clone()
{
	return call_method<
		java::util::HashSet::J2CPP_CLASS_NAME,
		java::util::HashSet::J2CPP_METHOD_NAME(6),
		java::util::HashSet::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jboolean java::util::HashSet::contains(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::HashSet::J2CPP_CLASS_NAME,
		java::util::HashSet::J2CPP_METHOD_NAME(7),
		java::util::HashSet::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::HashSet::isEmpty()
{
	return call_method<
		java::util::HashSet::J2CPP_CLASS_NAME,
		java::util::HashSet::J2CPP_METHOD_NAME(8),
		java::util::HashSet::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject());
}

local_ref< java::util::Iterator > java::util::HashSet::iterator()
{
	return call_method<
		java::util::HashSet::J2CPP_CLASS_NAME,
		java::util::HashSet::J2CPP_METHOD_NAME(9),
		java::util::HashSet::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::Iterator >
	>(get_jobject());
}

jboolean java::util::HashSet::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::HashSet::J2CPP_CLASS_NAME,
		java::util::HashSet::J2CPP_METHOD_NAME(10),
		java::util::HashSet::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0);
}

jint java::util::HashSet::size()
{
	return call_method<
		java::util::HashSet::J2CPP_CLASS_NAME,
		java::util::HashSet::J2CPP_METHOD_NAME(11),
		java::util::HashSet::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::HashSet,"java/util/HashSet")
J2CPP_DEFINE_METHOD(java::util::HashSet,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::HashSet,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::HashSet,2,"<init>","(IF)V")
J2CPP_DEFINE_METHOD(java::util::HashSet,3,"<init>","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::util::HashSet,4,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::HashSet,5,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::HashSet,6,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::HashSet,7,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::HashSet,8,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::HashSet,9,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::HashSet,10,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::HashSet,11,"size","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_HASHSET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
