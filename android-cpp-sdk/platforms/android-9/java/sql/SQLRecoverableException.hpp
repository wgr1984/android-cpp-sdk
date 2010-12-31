/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.SQLRecoverableException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLRECOVERABLEEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SQL_SQLRECOVERABLEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace sql { class SQLException; } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/sql/SQLException.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class SQLRecoverableException;
	class SQLRecoverableException
		: public object<SQLRecoverableException>
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

		explicit SQLRecoverableException(jobject jobj)
		: object<SQLRecoverableException>(jobj)
		{
		}

		operator local_ref<java::sql::SQLException>() const;


		SQLRecoverableException();
		SQLRecoverableException(local_ref< java::lang::String > const&);
		SQLRecoverableException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		SQLRecoverableException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, jint);
		SQLRecoverableException(local_ref< java::lang::Throwable > const&);
		SQLRecoverableException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		SQLRecoverableException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		SQLRecoverableException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, jint, local_ref< java::lang::Throwable > const&);
	}; //class SQLRecoverableException

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLRECOVERABLEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLRECOVERABLEEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SQL_SQLRECOVERABLEEXCEPTION_HPP_IMPL

namespace j2cpp {



java::sql::SQLRecoverableException::operator local_ref<java::sql::SQLException>() const
{
	return local_ref<java::sql::SQLException>(get_jobject());
}


java::sql::SQLRecoverableException::SQLRecoverableException()
: object<java::sql::SQLRecoverableException>(
	call_new_object<
		java::sql::SQLRecoverableException::J2CPP_CLASS_NAME,
		java::sql::SQLRecoverableException::J2CPP_METHOD_NAME(0),
		java::sql::SQLRecoverableException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::sql::SQLRecoverableException::SQLRecoverableException(local_ref< java::lang::String > const &a0)
: object<java::sql::SQLRecoverableException>(
	call_new_object<
		java::sql::SQLRecoverableException::J2CPP_CLASS_NAME,
		java::sql::SQLRecoverableException::J2CPP_METHOD_NAME(1),
		java::sql::SQLRecoverableException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



java::sql::SQLRecoverableException::SQLRecoverableException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::sql::SQLRecoverableException>(
	call_new_object<
		java::sql::SQLRecoverableException::J2CPP_CLASS_NAME,
		java::sql::SQLRecoverableException::J2CPP_METHOD_NAME(2),
		java::sql::SQLRecoverableException::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}



java::sql::SQLRecoverableException::SQLRecoverableException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jint a2)
: object<java::sql::SQLRecoverableException>(
	call_new_object<
		java::sql::SQLRecoverableException::J2CPP_CLASS_NAME,
		java::sql::SQLRecoverableException::J2CPP_METHOD_NAME(3),
		java::sql::SQLRecoverableException::J2CPP_METHOD_SIGNATURE(3)>
	(a0, a1, a2)
)
{
}



java::sql::SQLRecoverableException::SQLRecoverableException(local_ref< java::lang::Throwable > const &a0)
: object<java::sql::SQLRecoverableException>(
	call_new_object<
		java::sql::SQLRecoverableException::J2CPP_CLASS_NAME,
		java::sql::SQLRecoverableException::J2CPP_METHOD_NAME(4),
		java::sql::SQLRecoverableException::J2CPP_METHOD_SIGNATURE(4)>
	(a0)
)
{
}



java::sql::SQLRecoverableException::SQLRecoverableException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<java::sql::SQLRecoverableException>(
	call_new_object<
		java::sql::SQLRecoverableException::J2CPP_CLASS_NAME,
		java::sql::SQLRecoverableException::J2CPP_METHOD_NAME(5),
		java::sql::SQLRecoverableException::J2CPP_METHOD_SIGNATURE(5)>
	(a0, a1)
)
{
}



java::sql::SQLRecoverableException::SQLRecoverableException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::Throwable > const &a2)
: object<java::sql::SQLRecoverableException>(
	call_new_object<
		java::sql::SQLRecoverableException::J2CPP_CLASS_NAME,
		java::sql::SQLRecoverableException::J2CPP_METHOD_NAME(6),
		java::sql::SQLRecoverableException::J2CPP_METHOD_SIGNATURE(6)>
	(a0, a1, a2)
)
{
}



java::sql::SQLRecoverableException::SQLRecoverableException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jint a2, local_ref< java::lang::Throwable > const &a3)
: object<java::sql::SQLRecoverableException>(
	call_new_object<
		java::sql::SQLRecoverableException::J2CPP_CLASS_NAME,
		java::sql::SQLRecoverableException::J2CPP_METHOD_NAME(7),
		java::sql::SQLRecoverableException::J2CPP_METHOD_SIGNATURE(7)>
	(a0, a1, a2, a3)
)
{
}



J2CPP_DEFINE_CLASS(java::sql::SQLRecoverableException,"java/sql/SQLRecoverableException")
J2CPP_DEFINE_METHOD(java::sql::SQLRecoverableException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::sql::SQLRecoverableException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLRecoverableException,2,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLRecoverableException,3,"<init>","(Ljava/lang/String;Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::sql::SQLRecoverableException,4,"<init>","(Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLRecoverableException,5,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLRecoverableException,6,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLRecoverableException,7,"<init>","(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLRECOVERABLEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
