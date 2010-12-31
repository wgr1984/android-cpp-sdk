/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.Document
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOCUMENT_HPP_DECL
#define J2CPP_ORG_W3C_DOM_DOCUMENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class ProcessingInstruction; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class DocumentType; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class DOMImplementation; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Comment; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Node; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class DOMConfiguration; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class EntityReference; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class NodeList; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class DocumentFragment; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Element; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Attr; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Text; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class CDATASection; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/w3c/dom/Attr.hpp>
#include <org/w3c/dom/CDATASection.hpp>
#include <org/w3c/dom/Comment.hpp>
#include <org/w3c/dom/DOMConfiguration.hpp>
#include <org/w3c/dom/DOMImplementation.hpp>
#include <org/w3c/dom/DocumentFragment.hpp>
#include <org/w3c/dom/DocumentType.hpp>
#include <org/w3c/dom/Element.hpp>
#include <org/w3c/dom/EntityReference.hpp>
#include <org/w3c/dom/Node.hpp>
#include <org/w3c/dom/NodeList.hpp>
#include <org/w3c/dom/ProcessingInstruction.hpp>
#include <org/w3c/dom/Text.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class Document;
	class Document
		: public object<Document>
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
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)

		explicit Document(jobject jobj)
		: object<Document>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::w3c::dom::Node>() const;


		local_ref< org::w3c::dom::DocumentType > getDoctype();
		local_ref< org::w3c::dom::DOMImplementation > getImplementation();
		local_ref< org::w3c::dom::Element > getDocumentElement();
		local_ref< org::w3c::dom::Element > createElement(local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::DocumentFragment > createDocumentFragment();
		local_ref< org::w3c::dom::Text > createTextNode(local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Comment > createComment(local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::CDATASection > createCDATASection(local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::ProcessingInstruction > createProcessingInstruction(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Attr > createAttribute(local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::EntityReference > createEntityReference(local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::NodeList > getElementsByTagName(local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Node > importNode(local_ref< org::w3c::dom::Node >  const&, jboolean);
		local_ref< org::w3c::dom::Element > createElementNS(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Attr > createAttributeNS(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::NodeList > getElementsByTagNameNS(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Element > getElementById(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getInputEncoding();
		local_ref< java::lang::String > getXmlEncoding();
		jboolean getXmlStandalone();
		void setXmlStandalone(jboolean);
		local_ref< java::lang::String > getXmlVersion();
		void setXmlVersion(local_ref< java::lang::String >  const&);
		jboolean getStrictErrorChecking();
		void setStrictErrorChecking(jboolean);
		local_ref< java::lang::String > getDocumentURI();
		void setDocumentURI(local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Node > adoptNode(local_ref< org::w3c::dom::Node >  const&);
		local_ref< org::w3c::dom::DOMConfiguration > getDomConfig();
		void normalizeDocument();
		local_ref< org::w3c::dom::Node > renameNode(local_ref< org::w3c::dom::Node >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
	}; //class Document

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOCUMENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOCUMENT_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_DOCUMENT_HPP_IMPL

namespace j2cpp {



org::w3c::dom::Document::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::w3c::dom::Document::operator local_ref<org::w3c::dom::Node>() const
{
	return local_ref<org::w3c::dom::Node>(get_jobject());
}

local_ref< org::w3c::dom::DocumentType > org::w3c::dom::Document::getDoctype()
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(0),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::w3c::dom::DocumentType > >
	(get_jobject());
}

local_ref< org::w3c::dom::DOMImplementation > org::w3c::dom::Document::getImplementation()
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(1),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::w3c::dom::DOMImplementation > >
	(get_jobject());
}

local_ref< org::w3c::dom::Element > org::w3c::dom::Document::getDocumentElement()
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(2),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::w3c::dom::Element > >
	(get_jobject());
}

local_ref< org::w3c::dom::Element > org::w3c::dom::Document::createElement(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(3),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::w3c::dom::Element > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::DocumentFragment > org::w3c::dom::Document::createDocumentFragment()
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(4),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::w3c::dom::DocumentFragment > >
	(get_jobject());
}

local_ref< org::w3c::dom::Text > org::w3c::dom::Document::createTextNode(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(5),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::w3c::dom::Text > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::Comment > org::w3c::dom::Document::createComment(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(6),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::w3c::dom::Comment > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::CDATASection > org::w3c::dom::Document::createCDATASection(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(7),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< org::w3c::dom::CDATASection > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::ProcessingInstruction > org::w3c::dom::Document::createProcessingInstruction(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(8),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::w3c::dom::ProcessingInstruction > >
	(get_jobject(), a0, a1);
}

local_ref< org::w3c::dom::Attr > org::w3c::dom::Document::createAttribute(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(9),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< org::w3c::dom::Attr > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::EntityReference > org::w3c::dom::Document::createEntityReference(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(10),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< org::w3c::dom::EntityReference > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::NodeList > org::w3c::dom::Document::getElementsByTagName(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(11),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< org::w3c::dom::NodeList > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Document::importNode(local_ref< org::w3c::dom::Node > const &a0, jboolean a1)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(12),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< org::w3c::dom::Node > >
	(get_jobject(), a0, a1);
}

local_ref< org::w3c::dom::Element > org::w3c::dom::Document::createElementNS(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(13),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< org::w3c::dom::Element > >
	(get_jobject(), a0, a1);
}

local_ref< org::w3c::dom::Attr > org::w3c::dom::Document::createAttributeNS(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(14),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< org::w3c::dom::Attr > >
	(get_jobject(), a0, a1);
}

local_ref< org::w3c::dom::NodeList > org::w3c::dom::Document::getElementsByTagNameNS(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(15),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< org::w3c::dom::NodeList > >
	(get_jobject(), a0, a1);
}

local_ref< org::w3c::dom::Element > org::w3c::dom::Document::getElementById(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(16),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< org::w3c::dom::Element > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > org::w3c::dom::Document::getInputEncoding()
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(17),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::Document::getXmlEncoding()
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(18),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jboolean org::w3c::dom::Document::getXmlStandalone()
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(19),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(19), 
		jboolean >
	(get_jobject());
}

void org::w3c::dom::Document::setXmlStandalone(jboolean a0)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(20),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > org::w3c::dom::Document::getXmlVersion()
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(21),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void org::w3c::dom::Document::setXmlVersion(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(22),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject(), a0);
}

jboolean org::w3c::dom::Document::getStrictErrorChecking()
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(23),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(23), 
		jboolean >
	(get_jobject());
}

void org::w3c::dom::Document::setStrictErrorChecking(jboolean a0)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(24),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(24), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > org::w3c::dom::Document::getDocumentURI()
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(25),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void org::w3c::dom::Document::setDocumentURI(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(26),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(26), 
		void >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Document::adoptNode(local_ref< org::w3c::dom::Node > const &a0)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(27),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(27), 
		local_ref< org::w3c::dom::Node > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::DOMConfiguration > org::w3c::dom::Document::getDomConfig()
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(28),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(28), 
		local_ref< org::w3c::dom::DOMConfiguration > >
	(get_jobject());
}

void org::w3c::dom::Document::normalizeDocument()
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(29),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(29), 
		void >
	(get_jobject());
}

local_ref< org::w3c::dom::Node > org::w3c::dom::Document::renameNode(local_ref< org::w3c::dom::Node > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		org::w3c::dom::Document::J2CPP_CLASS_NAME,
		org::w3c::dom::Document::J2CPP_METHOD_NAME(30),
		org::w3c::dom::Document::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< org::w3c::dom::Node > >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(org::w3c::dom::Document,"org/w3c/dom/Document")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,0,"getDoctype","()Lorg/w3c/dom/DocumentType;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,1,"getImplementation","()Lorg/w3c/dom/DOMImplementation;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,2,"getDocumentElement","()Lorg/w3c/dom/Element;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,3,"createElement","(Ljava/lang/String;)Lorg/w3c/dom/Element;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,4,"createDocumentFragment","()Lorg/w3c/dom/DocumentFragment;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,5,"createTextNode","(Ljava/lang/String;)Lorg/w3c/dom/Text;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,6,"createComment","(Ljava/lang/String;)Lorg/w3c/dom/Comment;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,7,"createCDATASection","(Ljava/lang/String;)Lorg/w3c/dom/CDATASection;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,8,"createProcessingInstruction","(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/ProcessingInstruction;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,9,"createAttribute","(Ljava/lang/String;)Lorg/w3c/dom/Attr;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,10,"createEntityReference","(Ljava/lang/String;)Lorg/w3c/dom/EntityReference;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,11,"getElementsByTagName","(Ljava/lang/String;)Lorg/w3c/dom/NodeList;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,12,"importNode","(Lorg/w3c/dom/Node;Z)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,13,"createElementNS","(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,14,"createAttributeNS","(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,15,"getElementsByTagNameNS","(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,16,"getElementById","(Ljava/lang/String;)Lorg/w3c/dom/Element;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,17,"getInputEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,18,"getXmlEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,19,"getXmlStandalone","()Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,20,"setXmlStandalone","(Z)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,21,"getXmlVersion","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,22,"setXmlVersion","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,23,"getStrictErrorChecking","()Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,24,"setStrictErrorChecking","(Z)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,25,"getDocumentURI","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,26,"setDocumentURI","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,27,"adoptNode","(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,28,"getDomConfig","()Lorg/w3c/dom/DOMConfiguration;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,29,"normalizeDocument","()V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Document,30,"renameNode","(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOCUMENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
