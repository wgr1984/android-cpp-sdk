/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.GridView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_GRIDVIEW_HPP_DECL
#define J2CPP_ANDROID_WIDGET_GRIDVIEW_HPP_DECL


namespace j2cpp { namespace android { namespace widget { class AbsListView; } } }
namespace j2cpp { namespace android { namespace widget { class ListAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class Adapter; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/widget/AbsListView.hpp>
#include <android/widget/Adapter.hpp>
#include <android/widget/ListAdapter.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class GridView;
	class GridView
		: public object<GridView>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		explicit GridView(jobject jobj)
		: object<GridView>(jobj)
		{
		}

		operator local_ref<android::widget::AbsListView>() const;


		GridView(local_ref< android::content::Context > const&);
		GridView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		GridView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		local_ref< android::widget::ListAdapter > getAdapter();
		void setAdapter(local_ref< android::widget::ListAdapter >  const&);
		void setSelection(jint);
		jboolean onKeyDown(jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyMultiple(jint, jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyUp(jint, local_ref< android::view::KeyEvent >  const&);
		void setGravity(jint);
		void setHorizontalSpacing(jint);
		void setVerticalSpacing(jint);
		void setStretchMode(jint);
		jint getStretchMode();
		void setColumnWidth(jint);
		void setNumColumns(jint);
		void setAdapter(local_ref< android::widget::Adapter >  const&);
		local_ref< android::widget::Adapter > getAdapter_1();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > NO_STRETCH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > STRETCH_SPACING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > STRETCH_COLUMN_WIDTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > STRETCH_SPACING_UNIFORM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > AUTO_FIT;
	}; //class GridView

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_GRIDVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_GRIDVIEW_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_GRIDVIEW_HPP_IMPL

namespace j2cpp {



android::widget::GridView::operator local_ref<android::widget::AbsListView>() const
{
	return local_ref<android::widget::AbsListView>(get_jobject());
}


android::widget::GridView::GridView(local_ref< android::content::Context > const &a0)
: object<android::widget::GridView>(
	call_new_object<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(0),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



android::widget::GridView::GridView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::GridView>(
	call_new_object<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(1),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



android::widget::GridView::GridView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::GridView>(
	call_new_object<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(2),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}


local_ref< android::widget::ListAdapter > android::widget::GridView::getAdapter()
{
	return call_method<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(3),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::widget::ListAdapter > >
	(get_jobject());
}

void android::widget::GridView::setAdapter(local_ref< android::widget::ListAdapter > const &a0)
{
	return call_method<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(4),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}




void android::widget::GridView::setSelection(jint a0)
{
	return call_method<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(8),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

jboolean android::widget::GridView::onKeyDown(jint a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(9),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::widget::GridView::onKeyMultiple(jint a0, jint a1, local_ref< android::view::KeyEvent > const &a2)
{
	return call_method<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(10),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

jboolean android::widget::GridView::onKeyUp(jint a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(11),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(11), 
		jboolean >
	(get_jobject(), a0, a1);
}


void android::widget::GridView::setGravity(jint a0)
{
	return call_method<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(13),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0);
}

void android::widget::GridView::setHorizontalSpacing(jint a0)
{
	return call_method<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(14),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0);
}

void android::widget::GridView::setVerticalSpacing(jint a0)
{
	return call_method<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(15),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

void android::widget::GridView::setStretchMode(jint a0)
{
	return call_method<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(16),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

jint android::widget::GridView::getStretchMode()
{
	return call_method<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(17),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(17), 
		jint >
	(get_jobject());
}

void android::widget::GridView::setColumnWidth(jint a0)
{
	return call_method<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(18),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0);
}

void android::widget::GridView::setNumColumns(jint a0)
{
	return call_method<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(19),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0);
}




void android::widget::GridView::setAdapter(local_ref< android::widget::Adapter > const &a0)
{
	return call_method<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(23),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(23), 
		void >
	(get_jobject(), a0);
}

local_ref< android::widget::Adapter > android::widget::GridView::getAdapter_1()
{
	return call_method<
		android::widget::GridView::J2CPP_CLASS_NAME,
		android::widget::GridView::J2CPP_METHOD_NAME(24),
		android::widget::GridView::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< android::widget::Adapter > >
	(get_jobject());
}


static_field<
	android::widget::GridView::J2CPP_CLASS_NAME,
	android::widget::GridView::J2CPP_FIELD_NAME(0),
	android::widget::GridView::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::widget::GridView::NO_STRETCH;

static_field<
	android::widget::GridView::J2CPP_CLASS_NAME,
	android::widget::GridView::J2CPP_FIELD_NAME(1),
	android::widget::GridView::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::widget::GridView::STRETCH_SPACING;

static_field<
	android::widget::GridView::J2CPP_CLASS_NAME,
	android::widget::GridView::J2CPP_FIELD_NAME(2),
	android::widget::GridView::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::widget::GridView::STRETCH_COLUMN_WIDTH;

static_field<
	android::widget::GridView::J2CPP_CLASS_NAME,
	android::widget::GridView::J2CPP_FIELD_NAME(3),
	android::widget::GridView::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::widget::GridView::STRETCH_SPACING_UNIFORM;

static_field<
	android::widget::GridView::J2CPP_CLASS_NAME,
	android::widget::GridView::J2CPP_FIELD_NAME(4),
	android::widget::GridView::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::widget::GridView::AUTO_FIT;


J2CPP_DEFINE_CLASS(android::widget::GridView,"android/widget/GridView")
J2CPP_DEFINE_METHOD(android::widget::GridView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::GridView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::GridView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::GridView,3,"getAdapter","()Landroid/widget/ListAdapter;")
J2CPP_DEFINE_METHOD(android::widget::GridView,4,"setAdapter","(Landroid/widget/ListAdapter;)V")
J2CPP_DEFINE_METHOD(android::widget::GridView,5,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::GridView,6,"attachLayoutAnimationParameters","(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;II)V")
J2CPP_DEFINE_METHOD(android::widget::GridView,7,"layoutChildren","()V")
J2CPP_DEFINE_METHOD(android::widget::GridView,8,"setSelection","(I)V")
J2CPP_DEFINE_METHOD(android::widget::GridView,9,"onKeyDown","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::GridView,10,"onKeyMultiple","(IILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::GridView,11,"onKeyUp","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::GridView,12,"onFocusChanged","(ZILandroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::widget::GridView,13,"setGravity","(I)V")
J2CPP_DEFINE_METHOD(android::widget::GridView,14,"setHorizontalSpacing","(I)V")
J2CPP_DEFINE_METHOD(android::widget::GridView,15,"setVerticalSpacing","(I)V")
J2CPP_DEFINE_METHOD(android::widget::GridView,16,"setStretchMode","(I)V")
J2CPP_DEFINE_METHOD(android::widget::GridView,17,"getStretchMode","()I")
J2CPP_DEFINE_METHOD(android::widget::GridView,18,"setColumnWidth","(I)V")
J2CPP_DEFINE_METHOD(android::widget::GridView,19,"setNumColumns","(I)V")
J2CPP_DEFINE_METHOD(android::widget::GridView,20,"computeVerticalScrollExtent","()I")
J2CPP_DEFINE_METHOD(android::widget::GridView,21,"computeVerticalScrollOffset","()I")
J2CPP_DEFINE_METHOD(android::widget::GridView,22,"computeVerticalScrollRange","()I")
J2CPP_DEFINE_METHOD(android::widget::GridView,23,"setAdapter","(Landroid/widget/Adapter;)V")
J2CPP_DEFINE_METHOD(android::widget::GridView,24,"getAdapter","()Landroid/widget/Adapter;")
J2CPP_DEFINE_FIELD(android::widget::GridView,0,"NO_STRETCH","I")
J2CPP_DEFINE_FIELD(android::widget::GridView,1,"STRETCH_SPACING","I")
J2CPP_DEFINE_FIELD(android::widget::GridView,2,"STRETCH_COLUMN_WIDTH","I")
J2CPP_DEFINE_FIELD(android::widget::GridView,3,"STRETCH_SPACING_UNIFORM","I")
J2CPP_DEFINE_FIELD(android::widget::GridView,4,"AUTO_FIT","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_GRIDVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
