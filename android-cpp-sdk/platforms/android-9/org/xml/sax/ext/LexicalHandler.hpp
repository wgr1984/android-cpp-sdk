/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.ext.LexicalHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_LEXICALHANDLER_HPP_DECL
#define J2CPP_ORG_XML_SAX_EXT_LEXICALHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace ext {

	class LexicalHandler;
	class LexicalHandler
		: public object<LexicalHandler>
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

		explicit LexicalHandler(jobject jobj)
		: object<LexicalHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void startDTD(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void endDTD();
		void startEntity(local_ref< java::lang::String >  const&);
		void endEntity(local_ref< java::lang::String >  const&);
		void startCDATA();
		void endCDATA();
		void comment(local_ref< array<jchar,1> >  const&, jint, jint);
	}; //class LexicalHandler

} //namespace ext
} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_LEXICALHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_LEXICALHANDLER_HPP_IMPL
#define J2CPP_ORG_XML_SAX_EXT_LEXICALHANDLER_HPP_IMPL

namespace j2cpp {



org::xml::sax::ext::LexicalHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void org::xml::sax::ext::LexicalHandler::startDTD(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		org::xml::sax::ext::LexicalHandler::J2CPP_CLASS_NAME,
		org::xml::sax::ext::LexicalHandler::J2CPP_METHOD_NAME(0),
		org::xml::sax::ext::LexicalHandler::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1, a2);
}

void org::xml::sax::ext::LexicalHandler::endDTD()
{
	return call_method<
		org::xml::sax::ext::LexicalHandler::J2CPP_CLASS_NAME,
		org::xml::sax::ext::LexicalHandler::J2CPP_METHOD_NAME(1),
		org::xml::sax::ext::LexicalHandler::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

void org::xml::sax::ext::LexicalHandler::startEntity(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::ext::LexicalHandler::J2CPP_CLASS_NAME,
		org::xml::sax::ext::LexicalHandler::J2CPP_METHOD_NAME(2),
		org::xml::sax::ext::LexicalHandler::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

void org::xml::sax::ext::LexicalHandler::endEntity(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::ext::LexicalHandler::J2CPP_CLASS_NAME,
		org::xml::sax::ext::LexicalHandler::J2CPP_METHOD_NAME(3),
		org::xml::sax::ext::LexicalHandler::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void org::xml::sax::ext::LexicalHandler::startCDATA()
{
	return call_method<
		org::xml::sax::ext::LexicalHandler::J2CPP_CLASS_NAME,
		org::xml::sax::ext::LexicalHandler::J2CPP_METHOD_NAME(4),
		org::xml::sax::ext::LexicalHandler::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

void org::xml::sax::ext::LexicalHandler::endCDATA()
{
	return call_method<
		org::xml::sax::ext::LexicalHandler::J2CPP_CLASS_NAME,
		org::xml::sax::ext::LexicalHandler::J2CPP_METHOD_NAME(5),
		org::xml::sax::ext::LexicalHandler::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}

void org::xml::sax::ext::LexicalHandler::comment(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::xml::sax::ext::LexicalHandler::J2CPP_CLASS_NAME,
		org::xml::sax::ext::LexicalHandler::J2CPP_METHOD_NAME(6),
		org::xml::sax::ext::LexicalHandler::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(org::xml::sax::ext::LexicalHandler,"org/xml/sax/ext/LexicalHandler")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::LexicalHandler,0,"startDTD","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::LexicalHandler,1,"endDTD","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::LexicalHandler,2,"startEntity","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::LexicalHandler,3,"endEntity","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::LexicalHandler,4,"startCDATA","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::LexicalHandler,5,"endCDATA","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::LexicalHandler,6,"comment","([CII)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_LEXICALHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
