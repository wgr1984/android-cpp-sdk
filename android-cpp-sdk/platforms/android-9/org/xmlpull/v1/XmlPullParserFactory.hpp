/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xmlpull.v1.XmlPullParserFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_HPP_DECL
#define J2CPP_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }
namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlSerializer; } } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>
#include <org/xmlpull/v1/XmlSerializer.hpp>


namespace j2cpp {

namespace org { namespace xmlpull { namespace v1 {

	class XmlPullParserFactory;
	class XmlPullParserFactory
		: public object<XmlPullParserFactory>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		explicit XmlPullParserFactory(jobject jobj)
		: object<XmlPullParserFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void setFeature(local_ref< java::lang::String >  const&, jboolean);
		jboolean getFeature(local_ref< java::lang::String >  const&);
		void setNamespaceAware(jboolean);
		jboolean isNamespaceAware();
		void setValidating(jboolean);
		jboolean isValidating();
		local_ref< org::xmlpull::v1::XmlPullParser > newPullParser();
		local_ref< org::xmlpull::v1::XmlSerializer > newSerializer();
		static local_ref< org::xmlpull::v1::XmlPullParserFactory > newInstance();
		static local_ref< org::xmlpull::v1::XmlPullParserFactory > newInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::Class >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > PROPERTY_NAME;
	}; //class XmlPullParserFactory

} //namespace v1
} //namespace xmlpull
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_HPP_IMPL
#define J2CPP_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_HPP_IMPL

namespace j2cpp {



org::xmlpull::v1::XmlPullParserFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void org::xmlpull::v1::XmlPullParserFactory::setFeature(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_NAME(1),
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}

jboolean org::xmlpull::v1::XmlPullParserFactory::getFeature(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_NAME(2),
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0);
}

void org::xmlpull::v1::XmlPullParserFactory::setNamespaceAware(jboolean a0)
{
	return call_method<
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_NAME(3),
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

jboolean org::xmlpull::v1::XmlPullParserFactory::isNamespaceAware()
{
	return call_method<
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_NAME(4),
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject());
}

void org::xmlpull::v1::XmlPullParserFactory::setValidating(jboolean a0)
{
	return call_method<
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_NAME(5),
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

jboolean org::xmlpull::v1::XmlPullParserFactory::isValidating()
{
	return call_method<
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_NAME(6),
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject());
}

local_ref< org::xmlpull::v1::XmlPullParser > org::xmlpull::v1::XmlPullParserFactory::newPullParser()
{
	return call_method<
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_NAME(7),
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< org::xmlpull::v1::XmlPullParser > >
	(get_jobject());
}

local_ref< org::xmlpull::v1::XmlSerializer > org::xmlpull::v1::XmlPullParserFactory::newSerializer()
{
	return call_method<
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_NAME(8),
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::xmlpull::v1::XmlSerializer > >
	(get_jobject());
}

local_ref< org::xmlpull::v1::XmlPullParserFactory > org::xmlpull::v1::XmlPullParserFactory::newInstance()
{
	return call_static_method<
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_NAME(9),
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< org::xmlpull::v1::XmlPullParserFactory > >
	();
}

local_ref< org::xmlpull::v1::XmlPullParserFactory > org::xmlpull::v1::XmlPullParserFactory::newInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::Class > const &a1)
{
	return call_static_method<
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_NAME(10),
		org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< org::xmlpull::v1::XmlPullParserFactory > >
	(a0, a1);
}


static_field<
	org::xmlpull::v1::XmlPullParserFactory::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParserFactory::J2CPP_FIELD_NAME(0),
	org::xmlpull::v1::XmlPullParserFactory::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::xmlpull::v1::XmlPullParserFactory::PROPERTY_NAME;


J2CPP_DEFINE_CLASS(org::xmlpull::v1::XmlPullParserFactory,"org/xmlpull/v1/XmlPullParserFactory")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,1,"setFeature","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,2,"getFeature","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,3,"setNamespaceAware","(Z)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,4,"isNamespaceAware","()Z")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,5,"setValidating","(Z)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,6,"isValidating","()Z")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,7,"newPullParser","()Lorg/xmlpull/v1/XmlPullParser;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,8,"newSerializer","()Lorg/xmlpull/v1/XmlSerializer;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,9,"newInstance","()Lorg/xmlpull/v1/XmlPullParserFactory;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,10,"newInstance","(Ljava/lang/String;Ljava/lang/Class;)Lorg/xmlpull/v1/XmlPullParserFactory;")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParserFactory,0,"PROPERTY_NAME","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParserFactory,1,"parserClasses","Ljava/util/ArrayList;")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParserFactory,2,"classNamesLocation","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParserFactory,3,"serializerClasses","Ljava/util/ArrayList;")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParserFactory,4,"features","Ljava/util/HashMap;")

} //namespace j2cpp

#endif //J2CPP_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
