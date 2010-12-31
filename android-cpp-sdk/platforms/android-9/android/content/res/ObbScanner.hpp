/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.res.ObbScanner
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RES_OBBSCANNER_HPP_DECL
#define J2CPP_ANDROID_CONTENT_RES_OBBSCANNER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class ObbInfo; } } } }


#include <android/content/res/ObbInfo.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace res {

	class ObbScanner;
	class ObbScanner
		: public object<ObbScanner>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ObbScanner(jobject jobj)
		: object<ObbScanner>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< android::content::res::ObbInfo > getObbInfo(local_ref< java::lang::String >  const&);
	}; //class ObbScanner

} //namespace res
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RES_OBBSCANNER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RES_OBBSCANNER_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_RES_OBBSCANNER_HPP_IMPL

namespace j2cpp {



android::content::res::ObbScanner::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< android::content::res::ObbInfo > android::content::res::ObbScanner::getObbInfo(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::content::res::ObbScanner::J2CPP_CLASS_NAME,
		android::content::res::ObbScanner::J2CPP_METHOD_NAME(1),
		android::content::res::ObbScanner::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::content::res::ObbInfo > >
	(a0);
}


J2CPP_DEFINE_CLASS(android::content::res::ObbScanner,"android/content/res/ObbScanner")
J2CPP_DEFINE_METHOD(android::content::res::ObbScanner,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::res::ObbScanner,1,"getObbInfo","(Ljava/lang/String;)Landroid/content/res/ObbInfo;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RES_OBBSCANNER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION