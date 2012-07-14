/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.crypto.CipherOutputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_CIPHEROUTPUTSTREAM_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_CIPHEROUTPUTSTREAM_HPP_DECL


namespace j2cpp { namespace javax { namespace crypto { class Cipher; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class Flushable; } } }
namespace j2cpp { namespace java { namespace io { class FilterOutputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Closeable.hpp>
#include <java/io/FilterOutputStream.hpp>
#include <java/io/Flushable.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <javax/crypto/Cipher.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class CipherOutputStream;
	class CipherOutputStream
		: public object<CipherOutputStream>
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

		explicit CipherOutputStream(jobject jobj)
		: object<CipherOutputStream>(jobj)
		{
		}

		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::Flushable>() const;
		operator local_ref<java::io::FilterOutputStream>() const;
		operator local_ref<java::io::OutputStream>() const;
		operator local_ref<java::lang::Object>() const;


		CipherOutputStream(local_ref< java::io::OutputStream > const&, local_ref< javax::crypto::Cipher > const&);
		void write(jint);
		void write(local_ref< array<jbyte,1> >  const&);
		void write(local_ref< array<jbyte,1> >  const&, jint, jint);
		void flush();
		void close();
	}; //class CipherOutputStream

} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_CIPHEROUTPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_CIPHEROUTPUTSTREAM_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_CIPHEROUTPUTSTREAM_HPP_IMPL

namespace j2cpp {



javax::crypto::CipherOutputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

javax::crypto::CipherOutputStream::operator local_ref<java::io::Flushable>() const
{
	return local_ref<java::io::Flushable>(get_jobject());
}

javax::crypto::CipherOutputStream::operator local_ref<java::io::FilterOutputStream>() const
{
	return local_ref<java::io::FilterOutputStream>(get_jobject());
}

javax::crypto::CipherOutputStream::operator local_ref<java::io::OutputStream>() const
{
	return local_ref<java::io::OutputStream>(get_jobject());
}

javax::crypto::CipherOutputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


javax::crypto::CipherOutputStream::CipherOutputStream(local_ref< java::io::OutputStream > const &a0, local_ref< javax::crypto::Cipher > const &a1)
: object<javax::crypto::CipherOutputStream>(
	call_new_object<
		javax::crypto::CipherOutputStream::J2CPP_CLASS_NAME,
		javax::crypto::CipherOutputStream::J2CPP_METHOD_NAME(0),
		javax::crypto::CipherOutputStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



void javax::crypto::CipherOutputStream::write(jint a0)
{
	return call_method<
		javax::crypto::CipherOutputStream::J2CPP_CLASS_NAME,
		javax::crypto::CipherOutputStream::J2CPP_METHOD_NAME(2),
		javax::crypto::CipherOutputStream::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void javax::crypto::CipherOutputStream::write(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		javax::crypto::CipherOutputStream::J2CPP_CLASS_NAME,
		javax::crypto::CipherOutputStream::J2CPP_METHOD_NAME(3),
		javax::crypto::CipherOutputStream::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void javax::crypto::CipherOutputStream::write(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		javax::crypto::CipherOutputStream::J2CPP_CLASS_NAME,
		javax::crypto::CipherOutputStream::J2CPP_METHOD_NAME(4),
		javax::crypto::CipherOutputStream::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2);
}

void javax::crypto::CipherOutputStream::flush()
{
	return call_method<
		javax::crypto::CipherOutputStream::J2CPP_CLASS_NAME,
		javax::crypto::CipherOutputStream::J2CPP_METHOD_NAME(5),
		javax::crypto::CipherOutputStream::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

void javax::crypto::CipherOutputStream::close()
{
	return call_method<
		javax::crypto::CipherOutputStream::J2CPP_CLASS_NAME,
		javax::crypto::CipherOutputStream::J2CPP_METHOD_NAME(6),
		javax::crypto::CipherOutputStream::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::crypto::CipherOutputStream,"javax/crypto/CipherOutputStream")
J2CPP_DEFINE_METHOD(javax::crypto::CipherOutputStream,0,"<init>","(Ljava/io/OutputStream;Ljavax/crypto/Cipher;)V")
J2CPP_DEFINE_METHOD(javax::crypto::CipherOutputStream,1,"<init>","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(javax::crypto::CipherOutputStream,2,"write","(I)V")
J2CPP_DEFINE_METHOD(javax::crypto::CipherOutputStream,3,"write","([B)V")
J2CPP_DEFINE_METHOD(javax::crypto::CipherOutputStream,4,"write","([BII)V")
J2CPP_DEFINE_METHOD(javax::crypto::CipherOutputStream,5,"flush","()V")
J2CPP_DEFINE_METHOD(javax::crypto::CipherOutputStream,6,"close","()V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_CIPHEROUTPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION