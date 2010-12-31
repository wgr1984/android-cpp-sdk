/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.entity.FileEntity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_ENTITY_FILEENTITY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_ENTITY_FILEENTITY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace entity { class AbstractHttpEntity; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }


#include <java/io/File.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/entity/AbstractHttpEntity.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace entity {

	class FileEntity;
	class FileEntity
		: public object<FileEntity>
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
		J2CPP_DECLARE_FIELD(0)

		explicit FileEntity(jobject jobj)
		: object<FileEntity>(jobj)
		{
		}

		operator local_ref<org::apache::http::entity::AbstractHttpEntity>() const;
		operator local_ref<java::lang::Cloneable>() const;


		FileEntity(local_ref< java::io::File > const&, local_ref< java::lang::String > const&);
		jboolean isRepeatable();
		jlong getContentLength();
		local_ref< java::io::InputStream > getContent();
		void writeTo(local_ref< java::io::OutputStream >  const&);
		jboolean isStreaming();
		local_ref< java::lang::Object > clone();

	}; //class FileEntity

} //namespace entity
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_ENTITY_FILEENTITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_ENTITY_FILEENTITY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_ENTITY_FILEENTITY_HPP_IMPL

namespace j2cpp {



org::apache::http::entity::FileEntity::operator local_ref<org::apache::http::entity::AbstractHttpEntity>() const
{
	return local_ref<org::apache::http::entity::AbstractHttpEntity>(get_jobject());
}

org::apache::http::entity::FileEntity::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}


org::apache::http::entity::FileEntity::FileEntity(local_ref< java::io::File > const &a0, local_ref< java::lang::String > const &a1)
: object<org::apache::http::entity::FileEntity>(
	call_new_object<
		org::apache::http::entity::FileEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::FileEntity::J2CPP_METHOD_NAME(0),
		org::apache::http::entity::FileEntity::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


jboolean org::apache::http::entity::FileEntity::isRepeatable()
{
	return call_method<
		org::apache::http::entity::FileEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::FileEntity::J2CPP_METHOD_NAME(1),
		org::apache::http::entity::FileEntity::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject());
}

jlong org::apache::http::entity::FileEntity::getContentLength()
{
	return call_method<
		org::apache::http::entity::FileEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::FileEntity::J2CPP_METHOD_NAME(2),
		org::apache::http::entity::FileEntity::J2CPP_METHOD_SIGNATURE(2), 
		jlong >
	(get_jobject());
}

local_ref< java::io::InputStream > org::apache::http::entity::FileEntity::getContent()
{
	return call_method<
		org::apache::http::entity::FileEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::FileEntity::J2CPP_METHOD_NAME(3),
		org::apache::http::entity::FileEntity::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::io::InputStream > >
	(get_jobject());
}

void org::apache::http::entity::FileEntity::writeTo(local_ref< java::io::OutputStream > const &a0)
{
	return call_method<
		org::apache::http::entity::FileEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::FileEntity::J2CPP_METHOD_NAME(4),
		org::apache::http::entity::FileEntity::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

jboolean org::apache::http::entity::FileEntity::isStreaming()
{
	return call_method<
		org::apache::http::entity::FileEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::FileEntity::J2CPP_METHOD_NAME(5),
		org::apache::http::entity::FileEntity::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::entity::FileEntity::clone()
{
	return call_method<
		org::apache::http::entity::FileEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::FileEntity::J2CPP_METHOD_NAME(6),
		org::apache::http::entity::FileEntity::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object > >
	(get_jobject());
}



J2CPP_DEFINE_CLASS(org::apache::http::entity::FileEntity,"org/apache/http/entity/FileEntity")
J2CPP_DEFINE_METHOD(org::apache::http::entity::FileEntity,0,"<init>","(Ljava/io/File;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::entity::FileEntity,1,"isRepeatable","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::entity::FileEntity,2,"getContentLength","()J")
J2CPP_DEFINE_METHOD(org::apache::http::entity::FileEntity,3,"getContent","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(org::apache::http::entity::FileEntity,4,"writeTo","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(org::apache::http::entity::FileEntity,5,"isStreaming","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::entity::FileEntity,6,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(org::apache::http::entity::FileEntity,0,"file","Ljava/io/File;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_ENTITY_FILEENTITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
