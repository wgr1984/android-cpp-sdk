/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.Attr
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_ATTR_HPP_DECL
#define J2CPP_ORG_W3C_DOM_ATTR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Node; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class TypeInfo; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Element; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/w3c/dom/Element.hpp>
#include <org/w3c/dom/Node.hpp>
#include <org/w3c/dom/TypeInfo.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class Attr;
	class Attr
		: public object<Attr>
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

		explicit Attr(jobject jobj)
		: object<Attr>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::w3c::dom::Node>() const;


		local_ref< java::lang::String > getName();
		jboolean getSpecified();
		local_ref< java::lang::String > getValue();
		void setValue(local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Element > getOwnerElement();
		local_ref< org::w3c::dom::TypeInfo > getSchemaTypeInfo();
		jboolean isId();
	}; //class Attr

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_ATTR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_ATTR_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_ATTR_HPP_IMPL

namespace j2cpp {



org::w3c::dom::Attr::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::w3c::dom::Attr::operator local_ref<org::w3c::dom::Node>() const
{
	return local_ref<org::w3c::dom::Node>(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::Attr::getName()
{
	return call_method<
		org::w3c::dom::Attr::J2CPP_CLASS_NAME,
		org::w3c::dom::Attr::J2CPP_METHOD_NAME(0),
		org::w3c::dom::Attr::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jboolean org::w3c::dom::Attr::getSpecified()
{
	return call_method<
		org::w3c::dom::Attr::J2CPP_CLASS_NAME,
		org::w3c::dom::Attr::J2CPP_METHOD_NAME(1),
		org::w3c::dom::Attr::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::Attr::getValue()
{
	return call_method<
		org::w3c::dom::Attr::J2CPP_CLASS_NAME,
		org::w3c::dom::Attr::J2CPP_METHOD_NAME(2),
		org::w3c::dom::Attr::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void org::w3c::dom::Attr::setValue(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Attr::J2CPP_CLASS_NAME,
		org::w3c::dom::Attr::J2CPP_METHOD_NAME(3),
		org::w3c::dom::Attr::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::Element > org::w3c::dom::Attr::getOwnerElement()
{
	return call_method<
		org::w3c::dom::Attr::J2CPP_CLASS_NAME,
		org::w3c::dom::Attr::J2CPP_METHOD_NAME(4),
		org::w3c::dom::Attr::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::w3c::dom::Element > >
	(get_jobject());
}

local_ref< org::w3c::dom::TypeInfo > org::w3c::dom::Attr::getSchemaTypeInfo()
{
	return call_method<
		org::w3c::dom::Attr::J2CPP_CLASS_NAME,
		org::w3c::dom::Attr::J2CPP_METHOD_NAME(5),
		org::w3c::dom::Attr::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::w3c::dom::TypeInfo > >
	(get_jobject());
}

jboolean org::w3c::dom::Attr::isId()
{
	return call_method<
		org::w3c::dom::Attr::J2CPP_CLASS_NAME,
		org::w3c::dom::Attr::J2CPP_METHOD_NAME(6),
		org::w3c::dom::Attr::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::w3c::dom::Attr,"org/w3c/dom/Attr")
J2CPP_DEFINE_METHOD(org::w3c::dom::Attr,0,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Attr,1,"getSpecified","()Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::Attr,2,"getValue","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Attr,3,"setValue","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Attr,4,"getOwnerElement","()Lorg/w3c/dom/Element;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Attr,5,"getSchemaTypeInfo","()Lorg/w3c/dom/TypeInfo;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Attr,6,"isId","()Z")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_ATTR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
