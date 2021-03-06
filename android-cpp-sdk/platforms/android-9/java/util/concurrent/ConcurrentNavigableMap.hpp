/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.ConcurrentNavigableMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTNAVIGABLEMAP_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTNAVIGABLEMAP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class NavigableSet; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class NavigableMap; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class ConcurrentMap; } } } }
namespace j2cpp { namespace java { namespace util { class SortedMap; } } }


#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>
#include <java/util/NavigableMap.hpp>
#include <java/util/NavigableSet.hpp>
#include <java/util/SortedMap.hpp>
#include <java/util/concurrent/ConcurrentMap.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class ConcurrentNavigableMap;
	class ConcurrentNavigableMap
		: public object<ConcurrentNavigableMap>
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

		explicit ConcurrentNavigableMap(jobject jobj)
		: object<ConcurrentNavigableMap>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::Map>() const;
		operator local_ref<java::util::NavigableMap>() const;
		operator local_ref<java::util::concurrent::ConcurrentMap>() const;
		operator local_ref<java::util::SortedMap>() const;


		local_ref< java::util::concurrent::ConcurrentNavigableMap > subMap(local_ref< java::lang::Object >  const&, jboolean, local_ref< java::lang::Object >  const&, jboolean);
		local_ref< java::util::concurrent::ConcurrentNavigableMap > headMap(local_ref< java::lang::Object >  const&, jboolean);
		local_ref< java::util::concurrent::ConcurrentNavigableMap > tailMap(local_ref< java::lang::Object >  const&, jboolean);
		local_ref< java::util::concurrent::ConcurrentNavigableMap > subMap(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::util::concurrent::ConcurrentNavigableMap > headMap(local_ref< java::lang::Object >  const&);
		local_ref< java::util::concurrent::ConcurrentNavigableMap > tailMap(local_ref< java::lang::Object >  const&);
		local_ref< java::util::concurrent::ConcurrentNavigableMap > descendingMap();
		local_ref< java::util::NavigableSet > navigableKeySet();
		local_ref< java::util::NavigableSet > keySet();
		local_ref< java::util::NavigableSet > descendingKeySet();
	}; //class ConcurrentNavigableMap

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTNAVIGABLEMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTNAVIGABLEMAP_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTNAVIGABLEMAP_HPP_IMPL

namespace j2cpp {



java::util::concurrent::ConcurrentNavigableMap::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::ConcurrentNavigableMap::operator local_ref<java::util::Map>() const
{
	return local_ref<java::util::Map>(get_jobject());
}

java::util::concurrent::ConcurrentNavigableMap::operator local_ref<java::util::NavigableMap>() const
{
	return local_ref<java::util::NavigableMap>(get_jobject());
}

java::util::concurrent::ConcurrentNavigableMap::operator local_ref<java::util::concurrent::ConcurrentMap>() const
{
	return local_ref<java::util::concurrent::ConcurrentMap>(get_jobject());
}

java::util::concurrent::ConcurrentNavigableMap::operator local_ref<java::util::SortedMap>() const
{
	return local_ref<java::util::SortedMap>(get_jobject());
}

local_ref< java::util::concurrent::ConcurrentNavigableMap > java::util::concurrent::ConcurrentNavigableMap::subMap(local_ref< java::lang::Object > const &a0, jboolean a1, local_ref< java::lang::Object > const &a2, jboolean a3)
{
	return call_method<
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_NAME(0),
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::util::concurrent::ConcurrentNavigableMap >
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< java::util::concurrent::ConcurrentNavigableMap > java::util::concurrent::ConcurrentNavigableMap::headMap(local_ref< java::lang::Object > const &a0, jboolean a1)
{
	return call_method<
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_NAME(1),
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::concurrent::ConcurrentNavigableMap >
	>(get_jobject(), a0, a1);
}

local_ref< java::util::concurrent::ConcurrentNavigableMap > java::util::concurrent::ConcurrentNavigableMap::tailMap(local_ref< java::lang::Object > const &a0, jboolean a1)
{
	return call_method<
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_NAME(2),
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::concurrent::ConcurrentNavigableMap >
	>(get_jobject(), a0, a1);
}

local_ref< java::util::concurrent::ConcurrentNavigableMap > java::util::concurrent::ConcurrentNavigableMap::subMap(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_NAME(3),
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::concurrent::ConcurrentNavigableMap >
	>(get_jobject(), a0, a1);
}

local_ref< java::util::concurrent::ConcurrentNavigableMap > java::util::concurrent::ConcurrentNavigableMap::headMap(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_NAME(4),
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::concurrent::ConcurrentNavigableMap >
	>(get_jobject(), a0);
}

local_ref< java::util::concurrent::ConcurrentNavigableMap > java::util::concurrent::ConcurrentNavigableMap::tailMap(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_NAME(5),
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::concurrent::ConcurrentNavigableMap >
	>(get_jobject(), a0);
}

local_ref< java::util::concurrent::ConcurrentNavigableMap > java::util::concurrent::ConcurrentNavigableMap::descendingMap()
{
	return call_method<
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_NAME(6),
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::concurrent::ConcurrentNavigableMap >
	>(get_jobject());
}

local_ref< java::util::NavigableSet > java::util::concurrent::ConcurrentNavigableMap::navigableKeySet()
{
	return call_method<
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_NAME(7),
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::util::NavigableSet >
	>(get_jobject());
}

local_ref< java::util::NavigableSet > java::util::concurrent::ConcurrentNavigableMap::keySet()
{
	return call_method<
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_NAME(8),
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::util::NavigableSet >
	>(get_jobject());
}

local_ref< java::util::NavigableSet > java::util::concurrent::ConcurrentNavigableMap::descendingKeySet()
{
	return call_method<
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_NAME(9),
		java::util::concurrent::ConcurrentNavigableMap::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::NavigableSet >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::ConcurrentNavigableMap,"java/util/concurrent/ConcurrentNavigableMap")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentNavigableMap,0,"subMap","(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentNavigableMap,1,"headMap","(Ljava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentNavigableMap,2,"tailMap","(Ljava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentNavigableMap,3,"subMap","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentNavigableMap,4,"headMap","(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentNavigableMap,5,"tailMap","(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentNavigableMap,6,"descendingMap","()Ljava/util/concurrent/ConcurrentNavigableMap;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentNavigableMap,7,"navigableKeySet","()Ljava/util/NavigableSet;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentNavigableMap,8,"keySet","()Ljava/util/NavigableSet;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentNavigableMap,9,"descendingKeySet","()Ljava/util/NavigableSet;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTNAVIGABLEMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
