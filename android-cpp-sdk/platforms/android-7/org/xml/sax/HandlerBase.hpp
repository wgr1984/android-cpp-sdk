/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.HandlerBase
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HANDLERBASE_HPP_DECL
#define J2CPP_ORG_XML_SAX_HANDLERBASE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class AttributeList; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class EntityResolver; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class ErrorHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class InputSource; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class DocumentHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class SAXParseException; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class DTDHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Locator; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xml/sax/AttributeList.hpp>
#include <org/xml/sax/DTDHandler.hpp>
#include <org/xml/sax/DocumentHandler.hpp>
#include <org/xml/sax/EntityResolver.hpp>
#include <org/xml/sax/ErrorHandler.hpp>
#include <org/xml/sax/InputSource.hpp>
#include <org/xml/sax/Locator.hpp>
#include <org/xml/sax/SAXParseException.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax {

	class HandlerBase;
	class HandlerBase
		: public object<HandlerBase>
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
		J2CPP_DECLARE_METHOD(14)

		explicit HandlerBase(jobject jobj)
		: object<HandlerBase>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::xml::sax::EntityResolver>() const;
		operator local_ref<org::xml::sax::ErrorHandler>() const;
		operator local_ref<org::xml::sax::DocumentHandler>() const;
		operator local_ref<org::xml::sax::DTDHandler>() const;


		HandlerBase();
		local_ref< org::xml::sax::InputSource > resolveEntity(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void notationDecl(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void unparsedEntityDecl(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void setDocumentLocator(local_ref< org::xml::sax::Locator >  const&);
		void startDocument();
		void endDocument();
		void startElement(local_ref< java::lang::String >  const&, local_ref< org::xml::sax::AttributeList >  const&);
		void endElement(local_ref< java::lang::String >  const&);
		void characters(local_ref< array<jchar,1> >  const&, jint, jint);
		void ignorableWhitespace(local_ref< array<jchar,1> >  const&, jint, jint);
		void processingInstruction(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void warning(local_ref< org::xml::sax::SAXParseException >  const&);
		void error(local_ref< org::xml::sax::SAXParseException >  const&);
		void fatalError(local_ref< org::xml::sax::SAXParseException >  const&);
	}; //class HandlerBase

} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HANDLERBASE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HANDLERBASE_HPP_IMPL
#define J2CPP_ORG_XML_SAX_HANDLERBASE_HPP_IMPL

namespace j2cpp {



org::xml::sax::HandlerBase::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::xml::sax::HandlerBase::operator local_ref<org::xml::sax::EntityResolver>() const
{
	return local_ref<org::xml::sax::EntityResolver>(get_jobject());
}

org::xml::sax::HandlerBase::operator local_ref<org::xml::sax::ErrorHandler>() const
{
	return local_ref<org::xml::sax::ErrorHandler>(get_jobject());
}

org::xml::sax::HandlerBase::operator local_ref<org::xml::sax::DocumentHandler>() const
{
	return local_ref<org::xml::sax::DocumentHandler>(get_jobject());
}

org::xml::sax::HandlerBase::operator local_ref<org::xml::sax::DTDHandler>() const
{
	return local_ref<org::xml::sax::DTDHandler>(get_jobject());
}


org::xml::sax::HandlerBase::HandlerBase()
: object<org::xml::sax::HandlerBase>(
	call_new_object<
		org::xml::sax::HandlerBase::J2CPP_CLASS_NAME,
		org::xml::sax::HandlerBase::J2CPP_METHOD_NAME(0),
		org::xml::sax::HandlerBase::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< org::xml::sax::InputSource > org::xml::sax::HandlerBase::resolveEntity(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::HandlerBase::J2CPP_CLASS_NAME,
		org::xml::sax::HandlerBase::J2CPP_METHOD_NAME(1),
		org::xml::sax::HandlerBase::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::xml::sax::InputSource >
	>(get_jobject(), a0, a1);
}

void org::xml::sax::HandlerBase::notationDecl(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		org::xml::sax::HandlerBase::J2CPP_CLASS_NAME,
		org::xml::sax::HandlerBase::J2CPP_METHOD_NAME(2),
		org::xml::sax::HandlerBase::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::xml::sax::HandlerBase::unparsedEntityDecl(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
{
	return call_method<
		org::xml::sax::HandlerBase::J2CPP_CLASS_NAME,
		org::xml::sax::HandlerBase::J2CPP_METHOD_NAME(3),
		org::xml::sax::HandlerBase::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void org::xml::sax::HandlerBase::setDocumentLocator(local_ref< org::xml::sax::Locator > const &a0)
{
	return call_method<
		org::xml::sax::HandlerBase::J2CPP_CLASS_NAME,
		org::xml::sax::HandlerBase::J2CPP_METHOD_NAME(4),
		org::xml::sax::HandlerBase::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::HandlerBase::startDocument()
{
	return call_method<
		org::xml::sax::HandlerBase::J2CPP_CLASS_NAME,
		org::xml::sax::HandlerBase::J2CPP_METHOD_NAME(5),
		org::xml::sax::HandlerBase::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

void org::xml::sax::HandlerBase::endDocument()
{
	return call_method<
		org::xml::sax::HandlerBase::J2CPP_CLASS_NAME,
		org::xml::sax::HandlerBase::J2CPP_METHOD_NAME(6),
		org::xml::sax::HandlerBase::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject());
}

void org::xml::sax::HandlerBase::startElement(local_ref< java::lang::String > const &a0, local_ref< org::xml::sax::AttributeList > const &a1)
{
	return call_method<
		org::xml::sax::HandlerBase::J2CPP_CLASS_NAME,
		org::xml::sax::HandlerBase::J2CPP_METHOD_NAME(7),
		org::xml::sax::HandlerBase::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1);
}

void org::xml::sax::HandlerBase::endElement(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::HandlerBase::J2CPP_CLASS_NAME,
		org::xml::sax::HandlerBase::J2CPP_METHOD_NAME(8),
		org::xml::sax::HandlerBase::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::HandlerBase::characters(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::xml::sax::HandlerBase::J2CPP_CLASS_NAME,
		org::xml::sax::HandlerBase::J2CPP_METHOD_NAME(9),
		org::xml::sax::HandlerBase::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::xml::sax::HandlerBase::ignorableWhitespace(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::xml::sax::HandlerBase::J2CPP_CLASS_NAME,
		org::xml::sax::HandlerBase::J2CPP_METHOD_NAME(10),
		org::xml::sax::HandlerBase::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::xml::sax::HandlerBase::processingInstruction(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::HandlerBase::J2CPP_CLASS_NAME,
		org::xml::sax::HandlerBase::J2CPP_METHOD_NAME(11),
		org::xml::sax::HandlerBase::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0, a1);
}

void org::xml::sax::HandlerBase::warning(local_ref< org::xml::sax::SAXParseException > const &a0)
{
	return call_method<
		org::xml::sax::HandlerBase::J2CPP_CLASS_NAME,
		org::xml::sax::HandlerBase::J2CPP_METHOD_NAME(12),
		org::xml::sax::HandlerBase::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::HandlerBase::error(local_ref< org::xml::sax::SAXParseException > const &a0)
{
	return call_method<
		org::xml::sax::HandlerBase::J2CPP_CLASS_NAME,
		org::xml::sax::HandlerBase::J2CPP_METHOD_NAME(13),
		org::xml::sax::HandlerBase::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::HandlerBase::fatalError(local_ref< org::xml::sax::SAXParseException > const &a0)
{
	return call_method<
		org::xml::sax::HandlerBase::J2CPP_CLASS_NAME,
		org::xml::sax::HandlerBase::J2CPP_METHOD_NAME(14),
		org::xml::sax::HandlerBase::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::xml::sax::HandlerBase,"org/xml/sax/HandlerBase")
J2CPP_DEFINE_METHOD(org::xml::sax::HandlerBase,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::HandlerBase,1,"resolveEntity","(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;")
J2CPP_DEFINE_METHOD(org::xml::sax::HandlerBase,2,"notationDecl","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::HandlerBase,3,"unparsedEntityDecl","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::HandlerBase,4,"setDocumentLocator","(Lorg/xml/sax/Locator;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::HandlerBase,5,"startDocument","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::HandlerBase,6,"endDocument","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::HandlerBase,7,"startElement","(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::HandlerBase,8,"endElement","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::HandlerBase,9,"characters","([CII)V")
J2CPP_DEFINE_METHOD(org::xml::sax::HandlerBase,10,"ignorableWhitespace","([CII)V")
J2CPP_DEFINE_METHOD(org::xml::sax::HandlerBase,11,"processingInstruction","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::HandlerBase,12,"warning","(Lorg/xml/sax/SAXParseException;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::HandlerBase,13,"error","(Lorg/xml/sax/SAXParseException;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::HandlerBase,14,"fatalError","(Lorg/xml/sax/SAXParseException;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HANDLERBASE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION