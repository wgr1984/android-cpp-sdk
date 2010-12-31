/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.opengl.GLException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_GLEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_OPENGL_GLEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }


#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace opengl {

	class GLException;
	class GLException
		: public object<GLException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit GLException(jobject jobj)
		: object<GLException>(jobj)
		{
		}

		operator local_ref<java::lang::RuntimeException>() const;


		GLException(jint);
		GLException(jint, local_ref< java::lang::String > const&);
	}; //class GLException

} //namespace opengl
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_GLEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_GLEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_OPENGL_GLEXCEPTION_HPP_IMPL

namespace j2cpp {



android::opengl::GLException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}


android::opengl::GLException::GLException(jint a0)
: object<android::opengl::GLException>(
	call_new_object<
		android::opengl::GLException::J2CPP_CLASS_NAME,
		android::opengl::GLException::J2CPP_METHOD_NAME(0),
		android::opengl::GLException::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



android::opengl::GLException::GLException(jint a0, local_ref< java::lang::String > const &a1)
: object<android::opengl::GLException>(
	call_new_object<
		android::opengl::GLException::J2CPP_CLASS_NAME,
		android::opengl::GLException::J2CPP_METHOD_NAME(1),
		android::opengl::GLException::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



J2CPP_DEFINE_CLASS(android::opengl::GLException,"android/opengl/GLException")
J2CPP_DEFINE_METHOD(android::opengl::GLException,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::opengl::GLException,1,"<init>","(ILjava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_GLEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
