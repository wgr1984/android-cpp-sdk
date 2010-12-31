/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.DataTruncation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_DATATRUNCATION_HPP_DECL
#define J2CPP_JAVA_SQL_DATATRUNCATION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace sql { class SQLWarning; } } }


#include <java/io/Serializable.hpp>
#include <java/sql/SQLWarning.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class DataTruncation;
	class DataTruncation
		: public object<DataTruncation>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit DataTruncation(jobject jobj)
		: object<DataTruncation>(jobj)
		{
		}

		operator local_ref<java::sql::SQLWarning>() const;
		operator local_ref<java::io::Serializable>() const;


		DataTruncation(jint, jboolean, jboolean, jint, jint);
		jint getDataSize();
		jint getIndex();
		jboolean getParameter();
		jboolean getRead();
		jint getTransferSize();
	}; //class DataTruncation

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_DATATRUNCATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_DATATRUNCATION_HPP_IMPL
#define J2CPP_JAVA_SQL_DATATRUNCATION_HPP_IMPL

namespace j2cpp {



java::sql::DataTruncation::operator local_ref<java::sql::SQLWarning>() const
{
	return local_ref<java::sql::SQLWarning>(get_jobject());
}

java::sql::DataTruncation::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::sql::DataTruncation::DataTruncation(jint a0, jboolean a1, jboolean a2, jint a3, jint a4)
: object<java::sql::DataTruncation>(
	call_new_object<
		java::sql::DataTruncation::J2CPP_CLASS_NAME,
		java::sql::DataTruncation::J2CPP_METHOD_NAME(0),
		java::sql::DataTruncation::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3, a4)
)
{
}


jint java::sql::DataTruncation::getDataSize()
{
	return call_method<
		java::sql::DataTruncation::J2CPP_CLASS_NAME,
		java::sql::DataTruncation::J2CPP_METHOD_NAME(1),
		java::sql::DataTruncation::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

jint java::sql::DataTruncation::getIndex()
{
	return call_method<
		java::sql::DataTruncation::J2CPP_CLASS_NAME,
		java::sql::DataTruncation::J2CPP_METHOD_NAME(2),
		java::sql::DataTruncation::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

jboolean java::sql::DataTruncation::getParameter()
{
	return call_method<
		java::sql::DataTruncation::J2CPP_CLASS_NAME,
		java::sql::DataTruncation::J2CPP_METHOD_NAME(3),
		java::sql::DataTruncation::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject());
}

jboolean java::sql::DataTruncation::getRead()
{
	return call_method<
		java::sql::DataTruncation::J2CPP_CLASS_NAME,
		java::sql::DataTruncation::J2CPP_METHOD_NAME(4),
		java::sql::DataTruncation::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject());
}

jint java::sql::DataTruncation::getTransferSize()
{
	return call_method<
		java::sql::DataTruncation::J2CPP_CLASS_NAME,
		java::sql::DataTruncation::J2CPP_METHOD_NAME(5),
		java::sql::DataTruncation::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::sql::DataTruncation,"java/sql/DataTruncation")
J2CPP_DEFINE_METHOD(java::sql::DataTruncation,0,"<init>","(IZZII)V")
J2CPP_DEFINE_METHOD(java::sql::DataTruncation,1,"getDataSize","()I")
J2CPP_DEFINE_METHOD(java::sql::DataTruncation,2,"getIndex","()I")
J2CPP_DEFINE_METHOD(java::sql::DataTruncation,3,"getParameter","()Z")
J2CPP_DEFINE_METHOD(java::sql::DataTruncation,4,"getRead","()Z")
J2CPP_DEFINE_METHOD(java::sql::DataTruncation,5,"getTransferSize","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_DATATRUNCATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
