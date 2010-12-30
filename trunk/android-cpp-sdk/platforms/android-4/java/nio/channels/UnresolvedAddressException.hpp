/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.UnresolvedAddressException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_UNRESOLVEDADDRESSEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_UNRESOLVEDADDRESSEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class IllegalArgumentException; } } }


#include <java/lang/IllegalArgumentException.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class UnresolvedAddressException;
	class UnresolvedAddressException
		: public object<UnresolvedAddressException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit UnresolvedAddressException(jobject jobj)
		: object<UnresolvedAddressException>(jobj)
		{
		}

		operator local_ref<java::lang::IllegalArgumentException>() const;


		UnresolvedAddressException();
	}; //class UnresolvedAddressException

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_UNRESOLVEDADDRESSEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_UNRESOLVEDADDRESSEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_UNRESOLVEDADDRESSEXCEPTION_HPP_IMPL

namespace j2cpp {



java::nio::channels::UnresolvedAddressException::operator local_ref<java::lang::IllegalArgumentException>() const
{
	return local_ref<java::lang::IllegalArgumentException>(get_jobject());
}


java::nio::channels::UnresolvedAddressException::UnresolvedAddressException()
: object<java::nio::channels::UnresolvedAddressException>(
	call_new_object<
		java::nio::channels::UnresolvedAddressException::J2CPP_CLASS_NAME,
		java::nio::channels::UnresolvedAddressException::J2CPP_METHOD_NAME(0),
		java::nio::channels::UnresolvedAddressException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



J2CPP_DEFINE_CLASS(java::nio::channels::UnresolvedAddressException,"java/nio/channels/UnresolvedAddressException")
J2CPP_DEFINE_METHOD(java::nio::channels::UnresolvedAddressException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_UNRESOLVEDADDRESSEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION