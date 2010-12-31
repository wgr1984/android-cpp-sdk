/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.inputmethod.InputMethodManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODMANAGER_HPP_DECL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODMANAGER_HPP_DECL


namespace j2cpp { namespace android { namespace os { class IBinder; } } }
namespace j2cpp { namespace android { namespace os { class ResultReceiver; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class ExtractedText; } } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class CompletionInfo; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <android/os/Bundle.hpp>
#include <android/os/IBinder.hpp>
#include <android/os/ResultReceiver.hpp>
#include <android/view/View.hpp>
#include <android/view/inputmethod/CompletionInfo.hpp>
#include <android/view/inputmethod/ExtractedText.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace android { namespace view { namespace inputmethod {

	class InputMethodManager;
	class InputMethodManager
		: public object<InputMethodManager>
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
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)

		explicit InputMethodManager(jobject jobj)
		: object<InputMethodManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::util::List > getInputMethodList();
		local_ref< java::util::List > getEnabledInputMethodList();
		void showStatusIcon(local_ref< android::os::IBinder >  const&, local_ref< java::lang::String >  const&, jint);
		void hideStatusIcon(local_ref< android::os::IBinder >  const&);
		jboolean isFullscreenMode();
		jboolean isActive(local_ref< android::view::View >  const&);
		jboolean isActive();
		jboolean isAcceptingText();
		void displayCompletions(local_ref< android::view::View >  const&, local_ref< array< local_ref< android::view::inputmethod::CompletionInfo >, 1> >  const&);
		void updateExtractedText(local_ref< android::view::View >  const&, jint, local_ref< android::view::inputmethod::ExtractedText >  const&);
		jboolean showSoftInput(local_ref< android::view::View >  const&, jint);
		jboolean showSoftInput(local_ref< android::view::View >  const&, jint, local_ref< android::os::ResultReceiver >  const&);
		jboolean hideSoftInputFromWindow(local_ref< android::os::IBinder >  const&, jint);
		jboolean hideSoftInputFromWindow(local_ref< android::os::IBinder >  const&, jint, local_ref< android::os::ResultReceiver >  const&);
		void toggleSoftInputFromWindow(local_ref< android::os::IBinder >  const&, jint, jint);
		void toggleSoftInput(jint, jint);
		void restartInput(local_ref< android::view::View >  const&);
		void updateSelection(local_ref< android::view::View >  const&, jint, jint, jint, jint);
		jboolean isWatchingCursor(local_ref< android::view::View >  const&);
		void updateCursor(local_ref< android::view::View >  const&, jint, jint, jint, jint);
		void sendAppPrivateCommand(local_ref< android::view::View >  const&, local_ref< java::lang::String >  const&, local_ref< android::os::Bundle >  const&);
		void setInputMethod(local_ref< android::os::IBinder >  const&, local_ref< java::lang::String >  const&);
		void hideSoftInputFromInputMethod(local_ref< android::os::IBinder >  const&, jint);
		void showSoftInputFromInputMethod(local_ref< android::os::IBinder >  const&, jint);
		void showInputMethodPicker();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > SHOW_IMPLICIT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > SHOW_FORCED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > RESULT_UNCHANGED_SHOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > RESULT_UNCHANGED_HIDDEN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > RESULT_SHOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > RESULT_HIDDEN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > HIDE_IMPLICIT_ONLY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > HIDE_NOT_ALWAYS;
	}; //class InputMethodManager

} //namespace inputmethod
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODMANAGER_HPP_IMPL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODMANAGER_HPP_IMPL

namespace j2cpp {



android::view::inputmethod::InputMethodManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::util::List > android::view::inputmethod::InputMethodManager::getInputMethodList()
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(1),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::List > >
	(get_jobject());
}

local_ref< java::util::List > android::view::inputmethod::InputMethodManager::getEnabledInputMethodList()
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(2),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::List > >
	(get_jobject());
}

void android::view::inputmethod::InputMethodManager::showStatusIcon(local_ref< android::os::IBinder > const &a0, local_ref< java::lang::String > const &a1, jint a2)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(3),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::view::inputmethod::InputMethodManager::hideStatusIcon(local_ref< android::os::IBinder > const &a0)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(4),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

jboolean android::view::inputmethod::InputMethodManager::isFullscreenMode()
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(5),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject());
}

jboolean android::view::inputmethod::InputMethodManager::isActive(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(6),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::view::inputmethod::InputMethodManager::isActive()
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(7),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject());
}

jboolean android::view::inputmethod::InputMethodManager::isAcceptingText()
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(8),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject());
}

void android::view::inputmethod::InputMethodManager::displayCompletions(local_ref< android::view::View > const &a0, local_ref< array< local_ref< android::view::inputmethod::CompletionInfo >, 1> > const &a1)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(9),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1);
}

void android::view::inputmethod::InputMethodManager::updateExtractedText(local_ref< android::view::View > const &a0, jint a1, local_ref< android::view::inputmethod::ExtractedText > const &a2)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(10),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0, a1, a2);
}

jboolean android::view::inputmethod::InputMethodManager::showSoftInput(local_ref< android::view::View > const &a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(11),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(11), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::view::inputmethod::InputMethodManager::showSoftInput(local_ref< android::view::View > const &a0, jint a1, local_ref< android::os::ResultReceiver > const &a2)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(12),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(12), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

jboolean android::view::inputmethod::InputMethodManager::hideSoftInputFromWindow(local_ref< android::os::IBinder > const &a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(13),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(13), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::view::inputmethod::InputMethodManager::hideSoftInputFromWindow(local_ref< android::os::IBinder > const &a0, jint a1, local_ref< android::os::ResultReceiver > const &a2)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(14),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(14), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

void android::view::inputmethod::InputMethodManager::toggleSoftInputFromWindow(local_ref< android::os::IBinder > const &a0, jint a1, jint a2)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(15),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::view::inputmethod::InputMethodManager::toggleSoftInput(jint a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(16),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0, a1);
}

void android::view::inputmethod::InputMethodManager::restartInput(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(17),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

void android::view::inputmethod::InputMethodManager::updateSelection(local_ref< android::view::View > const &a0, jint a1, jint a2, jint a3, jint a4)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(18),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

jboolean android::view::inputmethod::InputMethodManager::isWatchingCursor(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(19),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(19), 
		jboolean >
	(get_jobject(), a0);
}

void android::view::inputmethod::InputMethodManager::updateCursor(local_ref< android::view::View > const &a0, jint a1, jint a2, jint a3, jint a4)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(20),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

void android::view::inputmethod::InputMethodManager::sendAppPrivateCommand(local_ref< android::view::View > const &a0, local_ref< java::lang::String > const &a1, local_ref< android::os::Bundle > const &a2)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(21),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::view::inputmethod::InputMethodManager::setInputMethod(local_ref< android::os::IBinder > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(22),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject(), a0, a1);
}

void android::view::inputmethod::InputMethodManager::hideSoftInputFromInputMethod(local_ref< android::os::IBinder > const &a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(23),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(23), 
		void >
	(get_jobject(), a0, a1);
}

void android::view::inputmethod::InputMethodManager::showSoftInputFromInputMethod(local_ref< android::os::IBinder > const &a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(24),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(24), 
		void >
	(get_jobject(), a0, a1);
}

void android::view::inputmethod::InputMethodManager::showInputMethodPicker()
{
	return call_method<
		android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_NAME(25),
		android::view::inputmethod::InputMethodManager::J2CPP_METHOD_SIGNATURE(25), 
		void >
	(get_jobject());
}


static_field<
	android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_NAME(0),
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::view::inputmethod::InputMethodManager::SHOW_IMPLICIT;

static_field<
	android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_NAME(1),
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::view::inputmethod::InputMethodManager::SHOW_FORCED;

static_field<
	android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_NAME(2),
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::view::inputmethod::InputMethodManager::RESULT_UNCHANGED_SHOWN;

static_field<
	android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_NAME(3),
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::view::inputmethod::InputMethodManager::RESULT_UNCHANGED_HIDDEN;

static_field<
	android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_NAME(4),
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::view::inputmethod::InputMethodManager::RESULT_SHOWN;

static_field<
	android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_NAME(5),
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::view::inputmethod::InputMethodManager::RESULT_HIDDEN;

static_field<
	android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_NAME(6),
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::view::inputmethod::InputMethodManager::HIDE_IMPLICIT_ONLY;

static_field<
	android::view::inputmethod::InputMethodManager::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_NAME(7),
	android::view::inputmethod::InputMethodManager::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::view::inputmethod::InputMethodManager::HIDE_NOT_ALWAYS;


J2CPP_DEFINE_CLASS(android::view::inputmethod::InputMethodManager,"android/view/inputmethod/InputMethodManager")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,1,"getInputMethodList","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,2,"getEnabledInputMethodList","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,3,"showStatusIcon","(Landroid/os/IBinder;Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,4,"hideStatusIcon","(Landroid/os/IBinder;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,5,"isFullscreenMode","()Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,6,"isActive","(Landroid/view/View;)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,7,"isActive","()Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,8,"isAcceptingText","()Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,9,"displayCompletions","(Landroid/view/View;[android.view.inputmethod.CompletionInfo)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,10,"updateExtractedText","(Landroid/view/View;ILandroid/view/inputmethod/ExtractedText;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,11,"showSoftInput","(Landroid/view/View;I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,12,"showSoftInput","(Landroid/view/View;ILandroid/os/ResultReceiver;)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,13,"hideSoftInputFromWindow","(Landroid/os/IBinder;I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,14,"hideSoftInputFromWindow","(Landroid/os/IBinder;ILandroid/os/ResultReceiver;)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,15,"toggleSoftInputFromWindow","(Landroid/os/IBinder;II)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,16,"toggleSoftInput","(II)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,17,"restartInput","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,18,"updateSelection","(Landroid/view/View;IIII)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,19,"isWatchingCursor","(Landroid/view/View;)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,20,"updateCursor","(Landroid/view/View;IIII)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,21,"sendAppPrivateCommand","(Landroid/view/View;Ljava/lang/String;Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,22,"setInputMethod","(Landroid/os/IBinder;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,23,"hideSoftInputFromInputMethod","(Landroid/os/IBinder;I)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,24,"showSoftInputFromInputMethod","(Landroid/os/IBinder;I)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodManager,25,"showInputMethodPicker","()V")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputMethodManager,0,"SHOW_IMPLICIT","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputMethodManager,1,"SHOW_FORCED","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputMethodManager,2,"RESULT_UNCHANGED_SHOWN","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputMethodManager,3,"RESULT_UNCHANGED_HIDDEN","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputMethodManager,4,"RESULT_SHOWN","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputMethodManager,5,"RESULT_HIDDEN","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputMethodManager,6,"HIDE_IMPLICIT_ONLY","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputMethodManager,7,"HIDE_NOT_ALWAYS","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
