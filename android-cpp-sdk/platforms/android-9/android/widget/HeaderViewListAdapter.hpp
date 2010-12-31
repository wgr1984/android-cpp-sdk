/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.HeaderViewListAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_HEADERVIEWLISTADAPTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_HEADERVIEWLISTADAPTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class ArrayList; } } }
namespace j2cpp { namespace android { namespace database { class DataSetObserver; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace widget { class ListAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class WrapperListAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class Filter; } } }
namespace j2cpp { namespace android { namespace widget { class Filterable; } } }


#include <android/database/DataSetObserver.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/widget/Filter.hpp>
#include <android/widget/Filterable.hpp>
#include <android/widget/ListAdapter.hpp>
#include <android/widget/WrapperListAdapter.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class HeaderViewListAdapter;
	class HeaderViewListAdapter
		: public object<HeaderViewListAdapter>
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

		explicit HeaderViewListAdapter(jobject jobj)
		: object<HeaderViewListAdapter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::widget::WrapperListAdapter>() const;
		operator local_ref<android::widget::Filterable>() const;


		HeaderViewListAdapter(local_ref< java::util::ArrayList > const&, local_ref< java::util::ArrayList > const&, local_ref< android::widget::ListAdapter > const&);
		jint getHeadersCount();
		jint getFootersCount();
		jboolean isEmpty();
		jboolean removeHeader(local_ref< android::view::View >  const&);
		jboolean removeFooter(local_ref< android::view::View >  const&);
		jint getCount();
		jboolean areAllItemsEnabled();
		jboolean isEnabled(jint);
		local_ref< java::lang::Object > getItem(jint);
		jlong getItemId(jint);
		jboolean hasStableIds();
		local_ref< android::view::View > getView(jint, local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup >  const&);
		jint getItemViewType(jint);
		jint getViewTypeCount();
		void registerDataSetObserver(local_ref< android::database::DataSetObserver >  const&);
		void unregisterDataSetObserver(local_ref< android::database::DataSetObserver >  const&);
		local_ref< android::widget::Filter > getFilter();
		local_ref< android::widget::ListAdapter > getWrappedAdapter();
	}; //class HeaderViewListAdapter

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_HEADERVIEWLISTADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_HEADERVIEWLISTADAPTER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_HEADERVIEWLISTADAPTER_HPP_IMPL

namespace j2cpp {



android::widget::HeaderViewListAdapter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::widget::HeaderViewListAdapter::operator local_ref<android::widget::WrapperListAdapter>() const
{
	return local_ref<android::widget::WrapperListAdapter>(get_jobject());
}

android::widget::HeaderViewListAdapter::operator local_ref<android::widget::Filterable>() const
{
	return local_ref<android::widget::Filterable>(get_jobject());
}


android::widget::HeaderViewListAdapter::HeaderViewListAdapter(local_ref< java::util::ArrayList > const &a0, local_ref< java::util::ArrayList > const &a1, local_ref< android::widget::ListAdapter > const &a2)
: object<android::widget::HeaderViewListAdapter>(
	call_new_object<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(0),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2)
)
{
}


jint android::widget::HeaderViewListAdapter::getHeadersCount()
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(1),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

jint android::widget::HeaderViewListAdapter::getFootersCount()
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(2),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

jboolean android::widget::HeaderViewListAdapter::isEmpty()
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(3),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject());
}

jboolean android::widget::HeaderViewListAdapter::removeHeader(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(4),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::widget::HeaderViewListAdapter::removeFooter(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(5),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0);
}

jint android::widget::HeaderViewListAdapter::getCount()
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(6),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

jboolean android::widget::HeaderViewListAdapter::areAllItemsEnabled()
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(7),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject());
}

jboolean android::widget::HeaderViewListAdapter::isEnabled(jint a0)
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(8),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > android::widget::HeaderViewListAdapter::getItem(jint a0)
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(9),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

jlong android::widget::HeaderViewListAdapter::getItemId(jint a0)
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(10),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(10), 
		jlong >
	(get_jobject(), a0);
}

jboolean android::widget::HeaderViewListAdapter::hasStableIds()
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(11),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(11), 
		jboolean >
	(get_jobject());
}

local_ref< android::view::View > android::widget::HeaderViewListAdapter::getView(jint a0, local_ref< android::view::View > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(12),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< android::view::View > >
	(get_jobject(), a0, a1, a2);
}

jint android::widget::HeaderViewListAdapter::getItemViewType(jint a0)
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(13),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(13), 
		jint >
	(get_jobject(), a0);
}

jint android::widget::HeaderViewListAdapter::getViewTypeCount()
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(14),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(get_jobject());
}

void android::widget::HeaderViewListAdapter::registerDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(15),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

void android::widget::HeaderViewListAdapter::unregisterDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(16),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

local_ref< android::widget::Filter > android::widget::HeaderViewListAdapter::getFilter()
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(17),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< android::widget::Filter > >
	(get_jobject());
}

local_ref< android::widget::ListAdapter > android::widget::HeaderViewListAdapter::getWrappedAdapter()
{
	return call_method<
		android::widget::HeaderViewListAdapter::J2CPP_CLASS_NAME,
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_NAME(18),
		android::widget::HeaderViewListAdapter::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< android::widget::ListAdapter > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::HeaderViewListAdapter,"android/widget/HeaderViewListAdapter")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,0,"<init>","(Ljava/util/ArrayList;Ljava/util/ArrayList;Landroid/widget/ListAdapter;)V")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,1,"getHeadersCount","()I")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,2,"getFootersCount","()I")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,3,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,4,"removeHeader","(Landroid/view/View;)Z")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,5,"removeFooter","(Landroid/view/View;)Z")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,6,"getCount","()I")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,7,"areAllItemsEnabled","()Z")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,8,"isEnabled","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,9,"getItem","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,10,"getItemId","(I)J")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,11,"hasStableIds","()Z")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,12,"getView","(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,13,"getItemViewType","(I)I")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,14,"getViewTypeCount","()I")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,15,"registerDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,16,"unregisterDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,17,"getFilter","()Landroid/widget/Filter;")
J2CPP_DEFINE_METHOD(android::widget::HeaderViewListAdapter,18,"getWrappedAdapter","()Landroid/widget/ListAdapter;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_HEADERVIEWLISTADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
