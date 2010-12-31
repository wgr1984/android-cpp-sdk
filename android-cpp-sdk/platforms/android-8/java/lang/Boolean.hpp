/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.Boolean
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_BOOLEAN_HPP_DECL
#define J2CPP_JAVA_LANG_BOOLEAN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Boolean;
	class Boolean
		: public object<Boolean>
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
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit Boolean(jobject jobj)
		: object<Boolean>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Comparable>() const;


		Boolean(local_ref< java::lang::String > const&);
		Boolean(jboolean);
		jboolean booleanValue();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint compareTo(local_ref< java::lang::Boolean >  const&);
		jint hashCode();
		local_ref< java::lang::String > toString();
		static jboolean getBoolean(local_ref< java::lang::String >  const&);
		static jboolean parseBoolean(local_ref< java::lang::String >  const&);
		static local_ref< java::lang::String > toString(jboolean);
		static local_ref< java::lang::Boolean > valueOf(local_ref< java::lang::String >  const&);
		static local_ref< java::lang::Boolean > valueOf(jboolean);
		jint compareTo(local_ref< java::lang::Object >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::Class > > TYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::Boolean > > TRUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::Boolean > > FALSE;
	}; //class Boolean

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_BOOLEAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_BOOLEAN_HPP_IMPL
#define J2CPP_JAVA_LANG_BOOLEAN_HPP_IMPL

namespace j2cpp {



java::lang::Boolean::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::Boolean::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::lang::Boolean::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}


java::lang::Boolean::Boolean(local_ref< java::lang::String > const &a0)
: object<java::lang::Boolean>(
	call_new_object<
		java::lang::Boolean::J2CPP_CLASS_NAME,
		java::lang::Boolean::J2CPP_METHOD_NAME(0),
		java::lang::Boolean::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::lang::Boolean::Boolean(jboolean a0)
: object<java::lang::Boolean>(
	call_new_object<
		java::lang::Boolean::J2CPP_CLASS_NAME,
		java::lang::Boolean::J2CPP_METHOD_NAME(1),
		java::lang::Boolean::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


jboolean java::lang::Boolean::booleanValue()
{
	return call_method<
		java::lang::Boolean::J2CPP_CLASS_NAME,
		java::lang::Boolean::J2CPP_METHOD_NAME(2),
		java::lang::Boolean::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject());
}

jboolean java::lang::Boolean::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::Boolean::J2CPP_CLASS_NAME,
		java::lang::Boolean::J2CPP_METHOD_NAME(3),
		java::lang::Boolean::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0);
}

jint java::lang::Boolean::compareTo(local_ref< java::lang::Boolean > const &a0)
{
	return call_method<
		java::lang::Boolean::J2CPP_CLASS_NAME,
		java::lang::Boolean::J2CPP_METHOD_NAME(4),
		java::lang::Boolean::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject(), a0);
}

jint java::lang::Boolean::hashCode()
{
	return call_method<
		java::lang::Boolean::J2CPP_CLASS_NAME,
		java::lang::Boolean::J2CPP_METHOD_NAME(5),
		java::lang::Boolean::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > java::lang::Boolean::toString()
{
	return call_method<
		java::lang::Boolean::J2CPP_CLASS_NAME,
		java::lang::Boolean::J2CPP_METHOD_NAME(6),
		java::lang::Boolean::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jboolean java::lang::Boolean::getBoolean(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::lang::Boolean::J2CPP_CLASS_NAME,
		java::lang::Boolean::J2CPP_METHOD_NAME(7),
		java::lang::Boolean::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(a0);
}

jboolean java::lang::Boolean::parseBoolean(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::lang::Boolean::J2CPP_CLASS_NAME,
		java::lang::Boolean::J2CPP_METHOD_NAME(8),
		java::lang::Boolean::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(a0);
}

local_ref< java::lang::String > java::lang::Boolean::toString(jboolean a0)
{
	return call_static_method<
		java::lang::Boolean::J2CPP_CLASS_NAME,
		java::lang::Boolean::J2CPP_METHOD_NAME(9),
		java::lang::Boolean::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String > >
	(a0);
}

local_ref< java::lang::Boolean > java::lang::Boolean::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::lang::Boolean::J2CPP_CLASS_NAME,
		java::lang::Boolean::J2CPP_METHOD_NAME(10),
		java::lang::Boolean::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::Boolean > >
	(a0);
}

local_ref< java::lang::Boolean > java::lang::Boolean::valueOf(jboolean a0)
{
	return call_static_method<
		java::lang::Boolean::J2CPP_CLASS_NAME,
		java::lang::Boolean::J2CPP_METHOD_NAME(11),
		java::lang::Boolean::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Boolean > >
	(a0);
}

jint java::lang::Boolean::compareTo(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::Boolean::J2CPP_CLASS_NAME,
		java::lang::Boolean::J2CPP_METHOD_NAME(12),
		java::lang::Boolean::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject(), a0);
}



static_field<
	java::lang::Boolean::J2CPP_CLASS_NAME,
	java::lang::Boolean::J2CPP_FIELD_NAME(0),
	java::lang::Boolean::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::Class >
> java::lang::Boolean::TYPE;

static_field<
	java::lang::Boolean::J2CPP_CLASS_NAME,
	java::lang::Boolean::J2CPP_FIELD_NAME(1),
	java::lang::Boolean::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::Boolean >
> java::lang::Boolean::TRUE;

static_field<
	java::lang::Boolean::J2CPP_CLASS_NAME,
	java::lang::Boolean::J2CPP_FIELD_NAME(2),
	java::lang::Boolean::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::Boolean >
> java::lang::Boolean::FALSE;


J2CPP_DEFINE_CLASS(java::lang::Boolean,"java/lang/Boolean")
J2CPP_DEFINE_METHOD(java::lang::Boolean,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::Boolean,1,"<init>","(Z)V")
J2CPP_DEFINE_METHOD(java::lang::Boolean,2,"booleanValue","()Z")
J2CPP_DEFINE_METHOD(java::lang::Boolean,3,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::lang::Boolean,4,"compareTo","(Ljava/lang/Boolean;)I")
J2CPP_DEFINE_METHOD(java::lang::Boolean,5,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::lang::Boolean,6,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Boolean,7,"getBoolean","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::lang::Boolean,8,"parseBoolean","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::lang::Boolean,9,"toString","(Z)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Boolean,10,"valueOf","(Ljava/lang/String;)Ljava/lang/Boolean;")
J2CPP_DEFINE_METHOD(java::lang::Boolean,11,"valueOf","(Z)Ljava/lang/Boolean;")
J2CPP_DEFINE_METHOD(java::lang::Boolean,12,"compareTo","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::lang::Boolean,13,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::lang::Boolean,0,"TYPE","Ljava/lang/Class;")
J2CPP_DEFINE_FIELD(java::lang::Boolean,1,"TRUE","Ljava/lang/Boolean;")
J2CPP_DEFINE_FIELD(java::lang::Boolean,2,"FALSE","Ljava/lang/Boolean;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_BOOLEAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
