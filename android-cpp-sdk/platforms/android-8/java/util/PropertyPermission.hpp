/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.PropertyPermission
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_PROPERTYPERMISSION_HPP_DECL
#define J2CPP_JAVA_UTIL_PROPERTYPERMISSION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class Permission; } } }
namespace j2cpp { namespace java { namespace security { class BasicPermission; } } }
namespace j2cpp { namespace java { namespace security { class PermissionCollection; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/BasicPermission.hpp>
#include <java/security/Permission.hpp>
#include <java/security/PermissionCollection.hpp>


namespace j2cpp {

namespace java { namespace util {

	class PropertyPermission;
	class PropertyPermission
		: public object<PropertyPermission>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit PropertyPermission(jobject jobj)
		: object<PropertyPermission>(jobj)
		{
		}

		operator local_ref<java::security::BasicPermission>() const;


		PropertyPermission(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::String > getActions();
		jint hashCode();
		jboolean implies(local_ref< java::security::Permission >  const&);
		local_ref< java::security::PermissionCollection > newPermissionCollection();
	}; //class PropertyPermission

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_PROPERTYPERMISSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_PROPERTYPERMISSION_HPP_IMPL
#define J2CPP_JAVA_UTIL_PROPERTYPERMISSION_HPP_IMPL

namespace j2cpp {



java::util::PropertyPermission::operator local_ref<java::security::BasicPermission>() const
{
	return local_ref<java::security::BasicPermission>(get_jobject());
}


java::util::PropertyPermission::PropertyPermission(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::util::PropertyPermission>(
	call_new_object<
		java::util::PropertyPermission::J2CPP_CLASS_NAME,
		java::util::PropertyPermission::J2CPP_METHOD_NAME(0),
		java::util::PropertyPermission::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


jboolean java::util::PropertyPermission::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::PropertyPermission::J2CPP_CLASS_NAME,
		java::util::PropertyPermission::J2CPP_METHOD_NAME(1),
		java::util::PropertyPermission::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::PropertyPermission::getActions()
{
	return call_method<
		java::util::PropertyPermission::J2CPP_CLASS_NAME,
		java::util::PropertyPermission::J2CPP_METHOD_NAME(2),
		java::util::PropertyPermission::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint java::util::PropertyPermission::hashCode()
{
	return call_method<
		java::util::PropertyPermission::J2CPP_CLASS_NAME,
		java::util::PropertyPermission::J2CPP_METHOD_NAME(3),
		java::util::PropertyPermission::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

jboolean java::util::PropertyPermission::implies(local_ref< java::security::Permission > const &a0)
{
	return call_method<
		java::util::PropertyPermission::J2CPP_CLASS_NAME,
		java::util::PropertyPermission::J2CPP_METHOD_NAME(4),
		java::util::PropertyPermission::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::security::PermissionCollection > java::util::PropertyPermission::newPermissionCollection()
{
	return call_method<
		java::util::PropertyPermission::J2CPP_CLASS_NAME,
		java::util::PropertyPermission::J2CPP_METHOD_NAME(5),
		java::util::PropertyPermission::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::security::PermissionCollection > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::PropertyPermission,"java/util/PropertyPermission")
J2CPP_DEFINE_METHOD(java::util::PropertyPermission,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::PropertyPermission,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::PropertyPermission,2,"getActions","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::PropertyPermission,3,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::PropertyPermission,4,"implies","(Ljava/security/Permission;)Z")
J2CPP_DEFINE_METHOD(java::util::PropertyPermission,5,"newPermissionCollection","()Ljava/security/PermissionCollection;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_PROPERTYPERMISSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
