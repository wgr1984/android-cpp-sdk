/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.ListActivity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_LISTACTIVITY_HPP_DECL
#define J2CPP_ANDROID_APP_LISTACTIVITY_HPP_DECL


namespace j2cpp { namespace android { namespace app { class Activity; } } }
namespace j2cpp { namespace android { namespace widget { class ListView; } } }
namespace j2cpp { namespace android { namespace widget { class ListAdapter; } } }


#include <android/app/Activity.hpp>
#include <android/widget/ListAdapter.hpp>
#include <android/widget/ListView.hpp>


namespace j2cpp {

namespace android { namespace app {

	class ListActivity;
	class ListActivity
		: public object<ListActivity>
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

		explicit ListActivity(jobject jobj)
		: object<ListActivity>(jobj)
		{
		}

		operator local_ref<android::app::Activity>() const;


		ListActivity();
		void onContentChanged();
		void setListAdapter(local_ref< android::widget::ListAdapter >  const&);
		void setSelection(jint);
		jint getSelectedItemPosition();
		jlong getSelectedItemId();
		local_ref< android::widget::ListView > getListView();
		local_ref< android::widget::ListAdapter > getListAdapter();
	}; //class ListActivity

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_LISTACTIVITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_LISTACTIVITY_HPP_IMPL
#define J2CPP_ANDROID_APP_LISTACTIVITY_HPP_IMPL

namespace j2cpp {



android::app::ListActivity::operator local_ref<android::app::Activity>() const
{
	return local_ref<android::app::Activity>(get_jobject());
}


android::app::ListActivity::ListActivity()
: object<android::app::ListActivity>(
	call_new_object<
		android::app::ListActivity::J2CPP_CLASS_NAME,
		android::app::ListActivity::J2CPP_METHOD_NAME(0),
		android::app::ListActivity::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}





void android::app::ListActivity::onContentChanged()
{
	return call_method<
		android::app::ListActivity::J2CPP_CLASS_NAME,
		android::app::ListActivity::J2CPP_METHOD_NAME(4),
		android::app::ListActivity::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

void android::app::ListActivity::setListAdapter(local_ref< android::widget::ListAdapter > const &a0)
{
	return call_method<
		android::app::ListActivity::J2CPP_CLASS_NAME,
		android::app::ListActivity::J2CPP_METHOD_NAME(5),
		android::app::ListActivity::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

void android::app::ListActivity::setSelection(jint a0)
{
	return call_method<
		android::app::ListActivity::J2CPP_CLASS_NAME,
		android::app::ListActivity::J2CPP_METHOD_NAME(6),
		android::app::ListActivity::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

jint android::app::ListActivity::getSelectedItemPosition()
{
	return call_method<
		android::app::ListActivity::J2CPP_CLASS_NAME,
		android::app::ListActivity::J2CPP_METHOD_NAME(7),
		android::app::ListActivity::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject());
}

jlong android::app::ListActivity::getSelectedItemId()
{
	return call_method<
		android::app::ListActivity::J2CPP_CLASS_NAME,
		android::app::ListActivity::J2CPP_METHOD_NAME(8),
		android::app::ListActivity::J2CPP_METHOD_SIGNATURE(8), 
		jlong >
	(get_jobject());
}

local_ref< android::widget::ListView > android::app::ListActivity::getListView()
{
	return call_method<
		android::app::ListActivity::J2CPP_CLASS_NAME,
		android::app::ListActivity::J2CPP_METHOD_NAME(9),
		android::app::ListActivity::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::widget::ListView > >
	(get_jobject());
}

local_ref< android::widget::ListAdapter > android::app::ListActivity::getListAdapter()
{
	return call_method<
		android::app::ListActivity::J2CPP_CLASS_NAME,
		android::app::ListActivity::J2CPP_METHOD_NAME(10),
		android::app::ListActivity::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::widget::ListAdapter > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::app::ListActivity,"android/app/ListActivity")
J2CPP_DEFINE_METHOD(android::app::ListActivity,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::ListActivity,1,"onListItemClick","(Landroid/widget/ListView;Landroid/view/View;IJ)V")
J2CPP_DEFINE_METHOD(android::app::ListActivity,2,"onRestoreInstanceState","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::ListActivity,3,"onDestroy","()V")
J2CPP_DEFINE_METHOD(android::app::ListActivity,4,"onContentChanged","()V")
J2CPP_DEFINE_METHOD(android::app::ListActivity,5,"setListAdapter","(Landroid/widget/ListAdapter;)V")
J2CPP_DEFINE_METHOD(android::app::ListActivity,6,"setSelection","(I)V")
J2CPP_DEFINE_METHOD(android::app::ListActivity,7,"getSelectedItemPosition","()I")
J2CPP_DEFINE_METHOD(android::app::ListActivity,8,"getSelectedItemId","()J")
J2CPP_DEFINE_METHOD(android::app::ListActivity,9,"getListView","()Landroid/widget/ListView;")
J2CPP_DEFINE_METHOD(android::app::ListActivity,10,"getListAdapter","()Landroid/widget/ListAdapter;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_LISTACTIVITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
