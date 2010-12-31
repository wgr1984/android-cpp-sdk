/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.AvoidXfermode
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_AVOIDXFERMODE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_AVOIDXFERMODE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace android { namespace graphics { namespace AvoidXfermode_ { class Mode; } } } }
namespace j2cpp { namespace android { namespace graphics { class Xfermode; } } }


#include <android/graphics/AvoidXfermode.hpp>
#include <android/graphics/Xfermode.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class AvoidXfermode;
	namespace AvoidXfermode_ {

		class Mode;
		class Mode
			: public object<Mode>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			explicit Mode(jobject jobj)
			: object<Mode>(jobj)
			{
			}

			operator local_ref<java::lang::Enum>() const;


			static local_ref< array< local_ref< android::graphics::AvoidXfermode_::Mode >, 1> > values();
			static local_ref< android::graphics::AvoidXfermode_::Mode > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::AvoidXfermode_::Mode > > AVOID;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::AvoidXfermode_::Mode > > TARGET;
		}; //class Mode

	} //namespace AvoidXfermode_

	class AvoidXfermode
		: public object<AvoidXfermode>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		typedef AvoidXfermode_::Mode Mode;

		explicit AvoidXfermode(jobject jobj)
		: object<AvoidXfermode>(jobj)
		{
		}

		operator local_ref<android::graphics::Xfermode>() const;


		AvoidXfermode(jint, jint, local_ref< android::graphics::AvoidXfermode_::Mode > const&);
	}; //class AvoidXfermode

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_AVOIDXFERMODE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_AVOIDXFERMODE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_AVOIDXFERMODE_HPP_IMPL

namespace j2cpp {




android::graphics::AvoidXfermode_::Mode::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

local_ref< array< local_ref< android::graphics::AvoidXfermode_::Mode >, 1> > android::graphics::AvoidXfermode_::Mode::values()
{
	return call_static_method<
		android::graphics::AvoidXfermode_::Mode::J2CPP_CLASS_NAME,
		android::graphics::AvoidXfermode_::Mode::J2CPP_METHOD_NAME(0),
		android::graphics::AvoidXfermode_::Mode::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::graphics::AvoidXfermode_::Mode >, 1> > >
	();
}

local_ref< android::graphics::AvoidXfermode_::Mode > android::graphics::AvoidXfermode_::Mode::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::graphics::AvoidXfermode_::Mode::J2CPP_CLASS_NAME,
		android::graphics::AvoidXfermode_::Mode::J2CPP_METHOD_NAME(1),
		android::graphics::AvoidXfermode_::Mode::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::AvoidXfermode_::Mode > >
	(a0);
}




static_field<
	android::graphics::AvoidXfermode_::Mode::J2CPP_CLASS_NAME,
	android::graphics::AvoidXfermode_::Mode::J2CPP_FIELD_NAME(0),
	android::graphics::AvoidXfermode_::Mode::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::AvoidXfermode_::Mode >
> android::graphics::AvoidXfermode_::Mode::AVOID;

static_field<
	android::graphics::AvoidXfermode_::Mode::J2CPP_CLASS_NAME,
	android::graphics::AvoidXfermode_::Mode::J2CPP_FIELD_NAME(1),
	android::graphics::AvoidXfermode_::Mode::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::AvoidXfermode_::Mode >
> android::graphics::AvoidXfermode_::Mode::TARGET;


J2CPP_DEFINE_CLASS(android::graphics::AvoidXfermode_::Mode,"android/graphics/AvoidXfermode$Mode")
J2CPP_DEFINE_METHOD(android::graphics::AvoidXfermode_::Mode,0,"values","()[android.graphics.AvoidXfermode.Mode")
J2CPP_DEFINE_METHOD(android::graphics::AvoidXfermode_::Mode,1,"valueOf","(Ljava/lang/String;)Landroid/graphics/AvoidXfermode$Mode;")
J2CPP_DEFINE_METHOD(android::graphics::AvoidXfermode_::Mode,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::graphics::AvoidXfermode_::Mode,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::AvoidXfermode_::Mode,0,"AVOID","Landroid/graphics/AvoidXfermode$Mode;")
J2CPP_DEFINE_FIELD(android::graphics::AvoidXfermode_::Mode,1,"TARGET","Landroid/graphics/AvoidXfermode$Mode;")
J2CPP_DEFINE_FIELD(android::graphics::AvoidXfermode_::Mode,2,"$VALUES","[android.graphics.AvoidXfermode.Mode")



android::graphics::AvoidXfermode::operator local_ref<android::graphics::Xfermode>() const
{
	return local_ref<android::graphics::Xfermode>(get_jobject());
}


android::graphics::AvoidXfermode::AvoidXfermode(jint a0, jint a1, local_ref< android::graphics::AvoidXfermode_::Mode > const &a2)
: object<android::graphics::AvoidXfermode>(
	call_new_object<
		android::graphics::AvoidXfermode::J2CPP_CLASS_NAME,
		android::graphics::AvoidXfermode::J2CPP_METHOD_NAME(0),
		android::graphics::AvoidXfermode::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2)
)
{
}



J2CPP_DEFINE_CLASS(android::graphics::AvoidXfermode,"android/graphics/AvoidXfermode")
J2CPP_DEFINE_METHOD(android::graphics::AvoidXfermode,0,"<init>","(IILandroid/graphics/AvoidXfermode$Mode;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_AVOIDXFERMODE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
