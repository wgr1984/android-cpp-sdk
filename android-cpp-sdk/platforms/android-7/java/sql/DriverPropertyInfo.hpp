/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.DriverPropertyInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_DRIVERPROPERTYINFO_HPP_DECL
#define J2CPP_JAVA_SQL_DRIVERPROPERTYINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class DriverPropertyInfo;
	class DriverPropertyInfo
		: public object<DriverPropertyInfo>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		explicit DriverPropertyInfo(jobject jobj)
		: object<DriverPropertyInfo>(jobj)
		, choices(jobj)
		, description(jobj)
		, name(jobj)
		, required(jobj)
		, value(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		DriverPropertyInfo(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< array< local_ref< java::lang::String >, 1> > > choices;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > description;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > name;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jboolean > required;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > value;
	}; //class DriverPropertyInfo

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_DRIVERPROPERTYINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_DRIVERPROPERTYINFO_HPP_IMPL
#define J2CPP_JAVA_SQL_DRIVERPROPERTYINFO_HPP_IMPL

namespace j2cpp {



java::sql::DriverPropertyInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::sql::DriverPropertyInfo::DriverPropertyInfo(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::sql::DriverPropertyInfo>(
	call_new_object<
		java::sql::DriverPropertyInfo::J2CPP_CLASS_NAME,
		java::sql::DriverPropertyInfo::J2CPP_METHOD_NAME(0),
		java::sql::DriverPropertyInfo::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
, choices(get_jobject())
, description(get_jobject())
, name(get_jobject())
, required(get_jobject())
, value(get_jobject())
{
}




J2CPP_DEFINE_CLASS(java::sql::DriverPropertyInfo,"java/sql/DriverPropertyInfo")
J2CPP_DEFINE_METHOD(java::sql::DriverPropertyInfo,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_FIELD(java::sql::DriverPropertyInfo,0,"choices","[java.lang.String")
J2CPP_DEFINE_FIELD(java::sql::DriverPropertyInfo,1,"description","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::sql::DriverPropertyInfo,2,"name","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::sql::DriverPropertyInfo,3,"required","Z")
J2CPP_DEFINE_FIELD(java::sql::DriverPropertyInfo,4,"value","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_DRIVERPROPERTYINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
