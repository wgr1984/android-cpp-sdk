/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.ProcessBuilder
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_PROCESSBUILDER_HPP_DECL
#define J2CPP_JAVA_LANG_PROCESSBUILDER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Process; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }


#include <java/io/File.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Process.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class ProcessBuilder;
	class ProcessBuilder
		: public object<ProcessBuilder>
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

		explicit ProcessBuilder(jobject jobj)
		: object<ProcessBuilder>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ProcessBuilder(local_ref< array< local_ref< java::lang::String >, 1> > const&);
		ProcessBuilder(local_ref< java::util::List > const&);
		local_ref< java::util::List > command();
		local_ref< java::lang::ProcessBuilder > command(local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		local_ref< java::lang::ProcessBuilder > command(local_ref< java::util::List >  const&);
		local_ref< java::io::File > directory();
		local_ref< java::lang::ProcessBuilder > directory(local_ref< java::io::File >  const&);
		local_ref< java::util::Map > environment();
		jboolean redirectErrorStream();
		local_ref< java::lang::ProcessBuilder > redirectErrorStream(jboolean);
		local_ref< java::lang::Process > start();
	}; //class ProcessBuilder

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_PROCESSBUILDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_PROCESSBUILDER_HPP_IMPL
#define J2CPP_JAVA_LANG_PROCESSBUILDER_HPP_IMPL

namespace j2cpp {



java::lang::ProcessBuilder::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::lang::ProcessBuilder::ProcessBuilder(local_ref< array< local_ref< java::lang::String >, 1> > const &a0)
: object<java::lang::ProcessBuilder>(
	call_new_object<
		java::lang::ProcessBuilder::J2CPP_CLASS_NAME,
		java::lang::ProcessBuilder::J2CPP_METHOD_NAME(0),
		java::lang::ProcessBuilder::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::lang::ProcessBuilder::ProcessBuilder(local_ref< java::util::List > const &a0)
: object<java::lang::ProcessBuilder>(
	call_new_object<
		java::lang::ProcessBuilder::J2CPP_CLASS_NAME,
		java::lang::ProcessBuilder::J2CPP_METHOD_NAME(1),
		java::lang::ProcessBuilder::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


local_ref< java::util::List > java::lang::ProcessBuilder::command()
{
	return call_method<
		java::lang::ProcessBuilder::J2CPP_CLASS_NAME,
		java::lang::ProcessBuilder::J2CPP_METHOD_NAME(2),
		java::lang::ProcessBuilder::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::List > >
	(get_jobject());
}

local_ref< java::lang::ProcessBuilder > java::lang::ProcessBuilder::command(local_ref< array< local_ref< java::lang::String >, 1> > const &a0)
{
	return call_method<
		java::lang::ProcessBuilder::J2CPP_CLASS_NAME,
		java::lang::ProcessBuilder::J2CPP_METHOD_NAME(3),
		java::lang::ProcessBuilder::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::ProcessBuilder > >
	(get_jobject(), a0);
}

local_ref< java::lang::ProcessBuilder > java::lang::ProcessBuilder::command(local_ref< java::util::List > const &a0)
{
	return call_method<
		java::lang::ProcessBuilder::J2CPP_CLASS_NAME,
		java::lang::ProcessBuilder::J2CPP_METHOD_NAME(4),
		java::lang::ProcessBuilder::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::ProcessBuilder > >
	(get_jobject(), a0);
}

local_ref< java::io::File > java::lang::ProcessBuilder::directory()
{
	return call_method<
		java::lang::ProcessBuilder::J2CPP_CLASS_NAME,
		java::lang::ProcessBuilder::J2CPP_METHOD_NAME(5),
		java::lang::ProcessBuilder::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::io::File > >
	(get_jobject());
}

local_ref< java::lang::ProcessBuilder > java::lang::ProcessBuilder::directory(local_ref< java::io::File > const &a0)
{
	return call_method<
		java::lang::ProcessBuilder::J2CPP_CLASS_NAME,
		java::lang::ProcessBuilder::J2CPP_METHOD_NAME(6),
		java::lang::ProcessBuilder::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::ProcessBuilder > >
	(get_jobject(), a0);
}

local_ref< java::util::Map > java::lang::ProcessBuilder::environment()
{
	return call_method<
		java::lang::ProcessBuilder::J2CPP_CLASS_NAME,
		java::lang::ProcessBuilder::J2CPP_METHOD_NAME(7),
		java::lang::ProcessBuilder::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::util::Map > >
	(get_jobject());
}

jboolean java::lang::ProcessBuilder::redirectErrorStream()
{
	return call_method<
		java::lang::ProcessBuilder::J2CPP_CLASS_NAME,
		java::lang::ProcessBuilder::J2CPP_METHOD_NAME(8),
		java::lang::ProcessBuilder::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject());
}

local_ref< java::lang::ProcessBuilder > java::lang::ProcessBuilder::redirectErrorStream(jboolean a0)
{
	return call_method<
		java::lang::ProcessBuilder::J2CPP_CLASS_NAME,
		java::lang::ProcessBuilder::J2CPP_METHOD_NAME(9),
		java::lang::ProcessBuilder::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::ProcessBuilder > >
	(get_jobject(), a0);
}

local_ref< java::lang::Process > java::lang::ProcessBuilder::start()
{
	return call_method<
		java::lang::ProcessBuilder::J2CPP_CLASS_NAME,
		java::lang::ProcessBuilder::J2CPP_METHOD_NAME(10),
		java::lang::ProcessBuilder::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::Process > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::lang::ProcessBuilder,"java/lang/ProcessBuilder")
J2CPP_DEFINE_METHOD(java::lang::ProcessBuilder,0,"<init>","([java.lang.String)V")
J2CPP_DEFINE_METHOD(java::lang::ProcessBuilder,1,"<init>","(Ljava/util/List;)V")
J2CPP_DEFINE_METHOD(java::lang::ProcessBuilder,2,"command","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::lang::ProcessBuilder,3,"command","([java.lang.String)Ljava/lang/ProcessBuilder;")
J2CPP_DEFINE_METHOD(java::lang::ProcessBuilder,4,"command","(Ljava/util/List;)Ljava/lang/ProcessBuilder;")
J2CPP_DEFINE_METHOD(java::lang::ProcessBuilder,5,"directory","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(java::lang::ProcessBuilder,6,"directory","(Ljava/io/File;)Ljava/lang/ProcessBuilder;")
J2CPP_DEFINE_METHOD(java::lang::ProcessBuilder,7,"environment","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::lang::ProcessBuilder,8,"redirectErrorStream","()Z")
J2CPP_DEFINE_METHOD(java::lang::ProcessBuilder,9,"redirectErrorStream","(Z)Ljava/lang/ProcessBuilder;")
J2CPP_DEFINE_METHOD(java::lang::ProcessBuilder,10,"start","()Ljava/lang/Process;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_PROCESSBUILDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
