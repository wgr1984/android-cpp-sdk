/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.acl.AclEntry
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ACL_ACLENTRY_HPP_DECL
#define J2CPP_JAVA_SECURITY_ACL_ACLENTRY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace security { class Principal; } } }
namespace j2cpp { namespace java { namespace security { namespace acl { class Permission; } } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Principal.hpp>
#include <java/security/acl/Permission.hpp>
#include <java/util/Enumeration.hpp>


namespace j2cpp {

namespace java { namespace security { namespace acl {

	class AclEntry;
	class AclEntry
		: public object<AclEntry>
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

		explicit AclEntry(jobject jobj)
		: object<AclEntry>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Cloneable>() const;


		jboolean setPrincipal(local_ref< java::security::Principal >  const&);
		local_ref< java::security::Principal > getPrincipal();
		void setNegativePermissions();
		jboolean isNegative();
		jboolean addPermission(local_ref< java::security::acl::Permission >  const&);
		jboolean removePermission(local_ref< java::security::acl::Permission >  const&);
		jboolean checkPermission(local_ref< java::security::acl::Permission >  const&);
		local_ref< java::util::Enumeration > permissions();
		local_ref< java::lang::String > toString();
		local_ref< java::lang::Object > clone();
	}; //class AclEntry

} //namespace acl
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ACL_ACLENTRY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ACL_ACLENTRY_HPP_IMPL
#define J2CPP_JAVA_SECURITY_ACL_ACLENTRY_HPP_IMPL

namespace j2cpp {



java::security::acl::AclEntry::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::acl::AclEntry::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

jboolean java::security::acl::AclEntry::setPrincipal(local_ref< java::security::Principal > const &a0)
{
	return call_method<
		java::security::acl::AclEntry::J2CPP_CLASS_NAME,
		java::security::acl::AclEntry::J2CPP_METHOD_NAME(0),
		java::security::acl::AclEntry::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::security::Principal > java::security::acl::AclEntry::getPrincipal()
{
	return call_method<
		java::security::acl::AclEntry::J2CPP_CLASS_NAME,
		java::security::acl::AclEntry::J2CPP_METHOD_NAME(1),
		java::security::acl::AclEntry::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::security::Principal > >
	(get_jobject());
}

void java::security::acl::AclEntry::setNegativePermissions()
{
	return call_method<
		java::security::acl::AclEntry::J2CPP_CLASS_NAME,
		java::security::acl::AclEntry::J2CPP_METHOD_NAME(2),
		java::security::acl::AclEntry::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject());
}

jboolean java::security::acl::AclEntry::isNegative()
{
	return call_method<
		java::security::acl::AclEntry::J2CPP_CLASS_NAME,
		java::security::acl::AclEntry::J2CPP_METHOD_NAME(3),
		java::security::acl::AclEntry::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject());
}

jboolean java::security::acl::AclEntry::addPermission(local_ref< java::security::acl::Permission > const &a0)
{
	return call_method<
		java::security::acl::AclEntry::J2CPP_CLASS_NAME,
		java::security::acl::AclEntry::J2CPP_METHOD_NAME(4),
		java::security::acl::AclEntry::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::security::acl::AclEntry::removePermission(local_ref< java::security::acl::Permission > const &a0)
{
	return call_method<
		java::security::acl::AclEntry::J2CPP_CLASS_NAME,
		java::security::acl::AclEntry::J2CPP_METHOD_NAME(5),
		java::security::acl::AclEntry::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::security::acl::AclEntry::checkPermission(local_ref< java::security::acl::Permission > const &a0)
{
	return call_method<
		java::security::acl::AclEntry::J2CPP_CLASS_NAME,
		java::security::acl::AclEntry::J2CPP_METHOD_NAME(6),
		java::security::acl::AclEntry::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::util::Enumeration > java::security::acl::AclEntry::permissions()
{
	return call_method<
		java::security::acl::AclEntry::J2CPP_CLASS_NAME,
		java::security::acl::AclEntry::J2CPP_METHOD_NAME(7),
		java::security::acl::AclEntry::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::util::Enumeration > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::acl::AclEntry::toString()
{
	return call_method<
		java::security::acl::AclEntry::J2CPP_CLASS_NAME,
		java::security::acl::AclEntry::J2CPP_METHOD_NAME(8),
		java::security::acl::AclEntry::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::Object > java::security::acl::AclEntry::clone()
{
	return call_method<
		java::security::acl::AclEntry::J2CPP_CLASS_NAME,
		java::security::acl::AclEntry::J2CPP_METHOD_NAME(9),
		java::security::acl::AclEntry::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::Object > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::acl::AclEntry,"java/security/acl/AclEntry")
J2CPP_DEFINE_METHOD(java::security::acl::AclEntry,0,"setPrincipal","(Ljava/security/Principal;)Z")
J2CPP_DEFINE_METHOD(java::security::acl::AclEntry,1,"getPrincipal","()Ljava/security/Principal;")
J2CPP_DEFINE_METHOD(java::security::acl::AclEntry,2,"setNegativePermissions","()V")
J2CPP_DEFINE_METHOD(java::security::acl::AclEntry,3,"isNegative","()Z")
J2CPP_DEFINE_METHOD(java::security::acl::AclEntry,4,"addPermission","(Ljava/security/acl/Permission;)Z")
J2CPP_DEFINE_METHOD(java::security::acl::AclEntry,5,"removePermission","(Ljava/security/acl/Permission;)Z")
J2CPP_DEFINE_METHOD(java::security::acl::AclEntry,6,"checkPermission","(Ljava/security/acl/Permission;)Z")
J2CPP_DEFINE_METHOD(java::security::acl::AclEntry,7,"permissions","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::security::acl::AclEntry,8,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::acl::AclEntry,9,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ACL_ACLENTRY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
