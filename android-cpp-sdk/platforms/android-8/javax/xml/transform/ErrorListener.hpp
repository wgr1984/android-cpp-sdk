/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.transform.ErrorListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_ERRORLISTENER_HPP_DECL
#define J2CPP_JAVAX_XML_TRANSFORM_ERRORLISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class TransformerException; } } } }


#include <java/lang/Object.hpp>
#include <javax/xml/transform/TransformerException.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace transform {

	class ErrorListener;
	class ErrorListener
		: public object<ErrorListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit ErrorListener(jobject jobj)
		: object<ErrorListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void warning(local_ref< javax::xml::transform::TransformerException >  const&);
		void error(local_ref< javax::xml::transform::TransformerException >  const&);
		void fatalError(local_ref< javax::xml::transform::TransformerException >  const&);
	}; //class ErrorListener

} //namespace transform
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_ERRORLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_ERRORLISTENER_HPP_IMPL
#define J2CPP_JAVAX_XML_TRANSFORM_ERRORLISTENER_HPP_IMPL

namespace j2cpp {



javax::xml::transform::ErrorListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void javax::xml::transform::ErrorListener::warning(local_ref< javax::xml::transform::TransformerException > const &a0)
{
	return call_method<
		javax::xml::transform::ErrorListener::J2CPP_CLASS_NAME,
		javax::xml::transform::ErrorListener::J2CPP_METHOD_NAME(0),
		javax::xml::transform::ErrorListener::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0);
}

void javax::xml::transform::ErrorListener::error(local_ref< javax::xml::transform::TransformerException > const &a0)
{
	return call_method<
		javax::xml::transform::ErrorListener::J2CPP_CLASS_NAME,
		javax::xml::transform::ErrorListener::J2CPP_METHOD_NAME(1),
		javax::xml::transform::ErrorListener::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

void javax::xml::transform::ErrorListener::fatalError(local_ref< javax::xml::transform::TransformerException > const &a0)
{
	return call_method<
		javax::xml::transform::ErrorListener::J2CPP_CLASS_NAME,
		javax::xml::transform::ErrorListener::J2CPP_METHOD_NAME(2),
		javax::xml::transform::ErrorListener::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(javax::xml::transform::ErrorListener,"javax/xml/transform/ErrorListener")
J2CPP_DEFINE_METHOD(javax::xml::transform::ErrorListener,0,"warning","(Ljavax/xml/transform/TransformerException;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::ErrorListener,1,"error","(Ljavax/xml/transform/TransformerException;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::ErrorListener,2,"fatalError","(Ljavax/xml/transform/TransformerException;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_ERRORLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
