/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.Spinner
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SPINNER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_SPINNER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace content { class DialogInterface; } } }
namespace j2cpp { namespace android { namespace content { namespace DialogInterface_ { class OnClickListener; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace widget { namespace AdapterView_ { class OnItemClickListener; } } } }
namespace j2cpp { namespace android { namespace widget { class AbsSpinner; } } }


#include <android/content/Context.hpp>
#include <android/content/DialogInterface.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/widget/AbsSpinner.hpp>
#include <android/widget/AdapterView.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class Spinner;
	class Spinner
		: public object<Spinner>
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
		J2CPP_DECLARE_METHOD(11)

		explicit Spinner(jobject jobj)
		: object<Spinner>(jobj)
		{
		}

		operator local_ref<android::widget::AbsSpinner>() const;
		operator local_ref<android::content::DialogInterface_::OnClickListener>() const;


		Spinner(local_ref< android::content::Context > const&);
		Spinner(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		Spinner(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		jint getBaseline();
		void setOnItemClickListener(local_ref< android::widget::AdapterView_::OnItemClickListener >  const&);
		jboolean performClick();
		void onClick(local_ref< android::content::DialogInterface >  const&, jint);
		void setPrompt(local_ref< java::lang::CharSequence >  const&);
		void setPromptId(jint);
		local_ref< java::lang::CharSequence > getPrompt();
	}; //class Spinner

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SPINNER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SPINNER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_SPINNER_HPP_IMPL

namespace j2cpp {



android::widget::Spinner::operator local_ref<android::widget::AbsSpinner>() const
{
	return local_ref<android::widget::AbsSpinner>(get_jobject());
}

android::widget::Spinner::operator local_ref<android::content::DialogInterface_::OnClickListener>() const
{
	return local_ref<android::content::DialogInterface_::OnClickListener>(get_jobject());
}


android::widget::Spinner::Spinner(local_ref< android::content::Context > const &a0)
: object<android::widget::Spinner>(
	call_new_object<
		android::widget::Spinner::J2CPP_CLASS_NAME,
		android::widget::Spinner::J2CPP_METHOD_NAME(0),
		android::widget::Spinner::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



android::widget::Spinner::Spinner(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::Spinner>(
	call_new_object<
		android::widget::Spinner::J2CPP_CLASS_NAME,
		android::widget::Spinner::J2CPP_METHOD_NAME(1),
		android::widget::Spinner::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



android::widget::Spinner::Spinner(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::Spinner>(
	call_new_object<
		android::widget::Spinner::J2CPP_CLASS_NAME,
		android::widget::Spinner::J2CPP_METHOD_NAME(2),
		android::widget::Spinner::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}


jint android::widget::Spinner::getBaseline()
{
	return call_method<
		android::widget::Spinner::J2CPP_CLASS_NAME,
		android::widget::Spinner::J2CPP_METHOD_NAME(3),
		android::widget::Spinner::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}


void android::widget::Spinner::setOnItemClickListener(local_ref< android::widget::AdapterView_::OnItemClickListener > const &a0)
{
	return call_method<
		android::widget::Spinner::J2CPP_CLASS_NAME,
		android::widget::Spinner::J2CPP_METHOD_NAME(5),
		android::widget::Spinner::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}


jboolean android::widget::Spinner::performClick()
{
	return call_method<
		android::widget::Spinner::J2CPP_CLASS_NAME,
		android::widget::Spinner::J2CPP_METHOD_NAME(7),
		android::widget::Spinner::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject());
}

void android::widget::Spinner::onClick(local_ref< android::content::DialogInterface > const &a0, jint a1)
{
	return call_method<
		android::widget::Spinner::J2CPP_CLASS_NAME,
		android::widget::Spinner::J2CPP_METHOD_NAME(8),
		android::widget::Spinner::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1);
}

void android::widget::Spinner::setPrompt(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::widget::Spinner::J2CPP_CLASS_NAME,
		android::widget::Spinner::J2CPP_METHOD_NAME(9),
		android::widget::Spinner::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

void android::widget::Spinner::setPromptId(jint a0)
{
	return call_method<
		android::widget::Spinner::J2CPP_CLASS_NAME,
		android::widget::Spinner::J2CPP_METHOD_NAME(10),
		android::widget::Spinner::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > android::widget::Spinner::getPrompt()
{
	return call_method<
		android::widget::Spinner::J2CPP_CLASS_NAME,
		android::widget::Spinner::J2CPP_METHOD_NAME(11),
		android::widget::Spinner::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::CharSequence > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::Spinner,"android/widget/Spinner")
J2CPP_DEFINE_METHOD(android::widget::Spinner,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::Spinner,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::Spinner,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::Spinner,3,"getBaseline","()I")
J2CPP_DEFINE_METHOD(android::widget::Spinner,4,"onDetachedFromWindow","()V")
J2CPP_DEFINE_METHOD(android::widget::Spinner,5,"setOnItemClickListener","(Landroid/widget/AdapterView$OnItemClickListener;)V")
J2CPP_DEFINE_METHOD(android::widget::Spinner,6,"onLayout","(ZIIII)V")
J2CPP_DEFINE_METHOD(android::widget::Spinner,7,"performClick","()Z")
J2CPP_DEFINE_METHOD(android::widget::Spinner,8,"onClick","(Landroid/content/DialogInterface;I)V")
J2CPP_DEFINE_METHOD(android::widget::Spinner,9,"setPrompt","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::widget::Spinner,10,"setPromptId","(I)V")
J2CPP_DEFINE_METHOD(android::widget::Spinner,11,"getPrompt","()Ljava/lang/CharSequence;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SPINNER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
