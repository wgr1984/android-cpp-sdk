/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.ArrayAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_ARRAYADAPTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_ARRAYADAPTER_HPP_DECL


namespace j2cpp { namespace android { namespace widget { class BaseAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class Filter; } } }
namespace j2cpp { namespace android { namespace widget { class Filterable; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Comparator; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <android/content/Context.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/widget/BaseAdapter.hpp>
#include <android/widget/Filter.hpp>
#include <android/widget/Filterable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ArrayAdapter;
	class ArrayAdapter
		: public object<ArrayAdapter>
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

		explicit ArrayAdapter(jobject jobj)
		: object<ArrayAdapter>(jobj)
		{
		}

		operator local_ref<android::widget::BaseAdapter>() const;
		operator local_ref<android::widget::Filterable>() const;


		ArrayAdapter(local_ref< android::content::Context > const&, jint);
		ArrayAdapter(local_ref< android::content::Context > const&, jint, jint);
		ArrayAdapter(local_ref< android::content::Context > const&, jint, local_ref< array< local_ref< java::lang::Object >, 1> > const&);
		ArrayAdapter(local_ref< android::content::Context > const&, jint, jint, local_ref< array< local_ref< java::lang::Object >, 1> > const&);
		ArrayAdapter(local_ref< android::content::Context > const&, jint, local_ref< java::util::List > const&);
		ArrayAdapter(local_ref< android::content::Context > const&, jint, jint, local_ref< java::util::List > const&);
		void add(local_ref< java::lang::Object >  const&);
		void insert(local_ref< java::lang::Object >  const&, jint);
		void remove(local_ref< java::lang::Object >  const&);
		void clear();
		void sort(local_ref< java::util::Comparator >  const&);
		void notifyDataSetChanged();
		void setNotifyOnChange(jboolean);
		local_ref< android::content::Context > getContext();
		jint getCount();
		local_ref< java::lang::Object > getItem(jint);
		jint getPosition(local_ref< java::lang::Object >  const&);
		jlong getItemId(jint);
		local_ref< android::view::View > getView(jint, local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup >  const&);
		void setDropDownViewResource(jint);
		local_ref< android::view::View > getDropDownView(jint, local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup >  const&);
		static local_ref< android::widget::ArrayAdapter > createFromResource(local_ref< android::content::Context >  const&, jint, jint);
		local_ref< android::widget::Filter > getFilter();
	}; //class ArrayAdapter

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_ARRAYADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_ARRAYADAPTER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_ARRAYADAPTER_HPP_IMPL

namespace j2cpp {



android::widget::ArrayAdapter::operator local_ref<android::widget::BaseAdapter>() const
{
	return local_ref<android::widget::BaseAdapter>(get_jobject());
}

android::widget::ArrayAdapter::operator local_ref<android::widget::Filterable>() const
{
	return local_ref<android::widget::Filterable>(get_jobject());
}


android::widget::ArrayAdapter::ArrayAdapter(local_ref< android::content::Context > const &a0, jint a1)
: object<android::widget::ArrayAdapter>(
	call_new_object<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(0),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



android::widget::ArrayAdapter::ArrayAdapter(local_ref< android::content::Context > const &a0, jint a1, jint a2)
: object<android::widget::ArrayAdapter>(
	call_new_object<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(1),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2)
)
{
}



android::widget::ArrayAdapter::ArrayAdapter(local_ref< android::content::Context > const &a0, jint a1, local_ref< array< local_ref< java::lang::Object >, 1> > const &a2)
: object<android::widget::ArrayAdapter>(
	call_new_object<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(2),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}



android::widget::ArrayAdapter::ArrayAdapter(local_ref< android::content::Context > const &a0, jint a1, jint a2, local_ref< array< local_ref< java::lang::Object >, 1> > const &a3)
: object<android::widget::ArrayAdapter>(
	call_new_object<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(3),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(3)>
	(a0, a1, a2, a3)
)
{
}



android::widget::ArrayAdapter::ArrayAdapter(local_ref< android::content::Context > const &a0, jint a1, local_ref< java::util::List > const &a2)
: object<android::widget::ArrayAdapter>(
	call_new_object<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(4),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(4)>
	(a0, a1, a2)
)
{
}



android::widget::ArrayAdapter::ArrayAdapter(local_ref< android::content::Context > const &a0, jint a1, jint a2, local_ref< java::util::List > const &a3)
: object<android::widget::ArrayAdapter>(
	call_new_object<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(5),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(5)>
	(a0, a1, a2, a3)
)
{
}


void android::widget::ArrayAdapter::add(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(6),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

void android::widget::ArrayAdapter::insert(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(7),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1);
}

void android::widget::ArrayAdapter::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(8),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void android::widget::ArrayAdapter::clear()
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(9),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject());
}

void android::widget::ArrayAdapter::sort(local_ref< java::util::Comparator > const &a0)
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(10),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

void android::widget::ArrayAdapter::notifyDataSetChanged()
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(11),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject());
}

void android::widget::ArrayAdapter::setNotifyOnChange(jboolean a0)
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(12),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

local_ref< android::content::Context > android::widget::ArrayAdapter::getContext()
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(13),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< android::content::Context > >
	(get_jobject());
}

jint android::widget::ArrayAdapter::getCount()
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(14),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(get_jobject());
}

local_ref< java::lang::Object > android::widget::ArrayAdapter::getItem(jint a0)
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(15),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

jint android::widget::ArrayAdapter::getPosition(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(16),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(16), 
		jint >
	(get_jobject(), a0);
}

jlong android::widget::ArrayAdapter::getItemId(jint a0)
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(17),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(17), 
		jlong >
	(get_jobject(), a0);
}

local_ref< android::view::View > android::widget::ArrayAdapter::getView(jint a0, local_ref< android::view::View > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(18),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< android::view::View > >
	(get_jobject(), a0, a1, a2);
}

void android::widget::ArrayAdapter::setDropDownViewResource(jint a0)
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(19),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0);
}

local_ref< android::view::View > android::widget::ArrayAdapter::getDropDownView(jint a0, local_ref< android::view::View > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(20),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< android::view::View > >
	(get_jobject(), a0, a1, a2);
}

local_ref< android::widget::ArrayAdapter > android::widget::ArrayAdapter::createFromResource(local_ref< android::content::Context > const &a0, jint a1, jint a2)
{
	return call_static_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(21),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< android::widget::ArrayAdapter > >
	(a0, a1, a2);
}

local_ref< android::widget::Filter > android::widget::ArrayAdapter::getFilter()
{
	return call_method<
		android::widget::ArrayAdapter::J2CPP_CLASS_NAME,
		android::widget::ArrayAdapter::J2CPP_METHOD_NAME(22),
		android::widget::ArrayAdapter::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< android::widget::Filter > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::ArrayAdapter,"android/widget/ArrayAdapter")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,0,"<init>","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,1,"<init>","(Landroid/content/Context;II)V")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,2,"<init>","(Landroid/content/Context;I[java.lang.Object)V")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,3,"<init>","(Landroid/content/Context;II[java.lang.Object)V")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,4,"<init>","(Landroid/content/Context;ILjava/util/List;)V")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,5,"<init>","(Landroid/content/Context;IILjava/util/List;)V")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,6,"add","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,7,"insert","(Ljava/lang/Object;I)V")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,8,"remove","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,9,"clear","()V")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,10,"sort","(Ljava/util/Comparator;)V")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,11,"notifyDataSetChanged","()V")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,12,"setNotifyOnChange","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,13,"getContext","()Landroid/content/Context;")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,14,"getCount","()I")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,15,"getItem","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,16,"getPosition","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,17,"getItemId","(I)J")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,18,"getView","(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,19,"setDropDownViewResource","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,20,"getDropDownView","(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,21,"createFromResource","(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;")
J2CPP_DEFINE_METHOD(android::widget::ArrayAdapter,22,"getFilter","()Landroid/widget/Filter;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_ARRAYADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
