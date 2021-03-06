/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.XMLReader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_XMLREADER_HPP_DECL
#define J2CPP_ORG_XML_SAX_XMLREADER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class DTDHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class EntityResolver; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class InputSource; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class ContentHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class ErrorHandler; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xml/sax/ContentHandler.hpp>
#include <org/xml/sax/DTDHandler.hpp>
#include <org/xml/sax/EntityResolver.hpp>
#include <org/xml/sax/ErrorHandler.hpp>
#include <org/xml/sax/InputSource.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax {

	class XMLReader;
	class XMLReader
		: public object<XMLReader>
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

		explicit XMLReader(jobject jobj)
		: object<XMLReader>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean getFeature(local_ref< java::lang::String >  const&);
		void setFeature(local_ref< java::lang::String >  const&, jboolean);
		local_ref< java::lang::Object > getProperty(local_ref< java::lang::String >  const&);
		void setProperty(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		void setEntityResolver(local_ref< org::xml::sax::EntityResolver >  const&);
		local_ref< org::xml::sax::EntityResolver > getEntityResolver();
		void setDTDHandler(local_ref< org::xml::sax::DTDHandler >  const&);
		local_ref< org::xml::sax::DTDHandler > getDTDHandler();
		void setContentHandler(local_ref< org::xml::sax::ContentHandler >  const&);
		local_ref< org::xml::sax::ContentHandler > getContentHandler();
		void setErrorHandler(local_ref< org::xml::sax::ErrorHandler >  const&);
		local_ref< org::xml::sax::ErrorHandler > getErrorHandler();
		void parse(local_ref< org::xml::sax::InputSource >  const&);
		void parse(local_ref< java::lang::String >  const&);
	}; //class XMLReader

} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_XMLREADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_XMLREADER_HPP_IMPL
#define J2CPP_ORG_XML_SAX_XMLREADER_HPP_IMPL

namespace j2cpp {



org::xml::sax::XMLReader::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean org::xml::sax::XMLReader::getFeature(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::XMLReader::J2CPP_CLASS_NAME,
		org::xml::sax::XMLReader::J2CPP_METHOD_NAME(0),
		org::xml::sax::XMLReader::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0);
}

void org::xml::sax::XMLReader::setFeature(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		org::xml::sax::XMLReader::J2CPP_CLASS_NAME,
		org::xml::sax::XMLReader::J2CPP_METHOD_NAME(1),
		org::xml::sax::XMLReader::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > org::xml::sax::XMLReader::getProperty(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::XMLReader::J2CPP_CLASS_NAME,
		org::xml::sax::XMLReader::J2CPP_METHOD_NAME(2),
		org::xml::sax::XMLReader::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

void org::xml::sax::XMLReader::setProperty(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::xml::sax::XMLReader::J2CPP_CLASS_NAME,
		org::xml::sax::XMLReader::J2CPP_METHOD_NAME(3),
		org::xml::sax::XMLReader::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}

void org::xml::sax::XMLReader::setEntityResolver(local_ref< org::xml::sax::EntityResolver > const &a0)
{
	return call_method<
		org::xml::sax::XMLReader::J2CPP_CLASS_NAME,
		org::xml::sax::XMLReader::J2CPP_METHOD_NAME(4),
		org::xml::sax::XMLReader::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

local_ref< org::xml::sax::EntityResolver > org::xml::sax::XMLReader::getEntityResolver()
{
	return call_method<
		org::xml::sax::XMLReader::J2CPP_CLASS_NAME,
		org::xml::sax::XMLReader::J2CPP_METHOD_NAME(5),
		org::xml::sax::XMLReader::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::xml::sax::EntityResolver >
	>(get_jobject());
}

void org::xml::sax::XMLReader::setDTDHandler(local_ref< org::xml::sax::DTDHandler > const &a0)
{
	return call_method<
		org::xml::sax::XMLReader::J2CPP_CLASS_NAME,
		org::xml::sax::XMLReader::J2CPP_METHOD_NAME(6),
		org::xml::sax::XMLReader::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

local_ref< org::xml::sax::DTDHandler > org::xml::sax::XMLReader::getDTDHandler()
{
	return call_method<
		org::xml::sax::XMLReader::J2CPP_CLASS_NAME,
		org::xml::sax::XMLReader::J2CPP_METHOD_NAME(7),
		org::xml::sax::XMLReader::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< org::xml::sax::DTDHandler >
	>(get_jobject());
}

void org::xml::sax::XMLReader::setContentHandler(local_ref< org::xml::sax::ContentHandler > const &a0)
{
	return call_method<
		org::xml::sax::XMLReader::J2CPP_CLASS_NAME,
		org::xml::sax::XMLReader::J2CPP_METHOD_NAME(8),
		org::xml::sax::XMLReader::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

local_ref< org::xml::sax::ContentHandler > org::xml::sax::XMLReader::getContentHandler()
{
	return call_method<
		org::xml::sax::XMLReader::J2CPP_CLASS_NAME,
		org::xml::sax::XMLReader::J2CPP_METHOD_NAME(9),
		org::xml::sax::XMLReader::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< org::xml::sax::ContentHandler >
	>(get_jobject());
}

void org::xml::sax::XMLReader::setErrorHandler(local_ref< org::xml::sax::ErrorHandler > const &a0)
{
	return call_method<
		org::xml::sax::XMLReader::J2CPP_CLASS_NAME,
		org::xml::sax::XMLReader::J2CPP_METHOD_NAME(10),
		org::xml::sax::XMLReader::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

local_ref< org::xml::sax::ErrorHandler > org::xml::sax::XMLReader::getErrorHandler()
{
	return call_method<
		org::xml::sax::XMLReader::J2CPP_CLASS_NAME,
		org::xml::sax::XMLReader::J2CPP_METHOD_NAME(11),
		org::xml::sax::XMLReader::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< org::xml::sax::ErrorHandler >
	>(get_jobject());
}

void org::xml::sax::XMLReader::parse(local_ref< org::xml::sax::InputSource > const &a0)
{
	return call_method<
		org::xml::sax::XMLReader::J2CPP_CLASS_NAME,
		org::xml::sax::XMLReader::J2CPP_METHOD_NAME(12),
		org::xml::sax::XMLReader::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::XMLReader::parse(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::XMLReader::J2CPP_CLASS_NAME,
		org::xml::sax::XMLReader::J2CPP_METHOD_NAME(13),
		org::xml::sax::XMLReader::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::xml::sax::XMLReader,"org/xml/sax/XMLReader")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLReader,0,"getFeature","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLReader,1,"setFeature","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLReader,2,"getProperty","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLReader,3,"setProperty","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLReader,4,"setEntityResolver","(Lorg/xml/sax/EntityResolver;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLReader,5,"getEntityResolver","()Lorg/xml/sax/EntityResolver;")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLReader,6,"setDTDHandler","(Lorg/xml/sax/DTDHandler;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLReader,7,"getDTDHandler","()Lorg/xml/sax/DTDHandler;")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLReader,8,"setContentHandler","(Lorg/xml/sax/ContentHandler;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLReader,9,"getContentHandler","()Lorg/xml/sax/ContentHandler;")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLReader,10,"setErrorHandler","(Lorg/xml/sax/ErrorHandler;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLReader,11,"getErrorHandler","()Lorg/xml/sax/ErrorHandler;")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLReader,12,"parse","(Lorg/xml/sax/InputSource;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLReader,13,"parse","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_XMLREADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
