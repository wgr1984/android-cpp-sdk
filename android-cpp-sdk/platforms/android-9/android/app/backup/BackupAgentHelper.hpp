/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.backup.BackupAgentHelper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_BACKUPAGENTHELPER_HPP_DECL
#define J2CPP_ANDROID_APP_BACKUP_BACKUPAGENTHELPER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace app { namespace backup { class BackupAgent; } } } }
namespace j2cpp { namespace android { namespace app { namespace backup { class BackupDataInput; } } } }
namespace j2cpp { namespace android { namespace app { namespace backup { class BackupDataOutput; } } } }
namespace j2cpp { namespace android { namespace app { namespace backup { class BackupHelper; } } } }
namespace j2cpp { namespace android { namespace os { class ParcelFileDescriptor; } } }


#include <android/app/backup/BackupAgent.hpp>
#include <android/app/backup/BackupDataInput.hpp>
#include <android/app/backup/BackupDataOutput.hpp>
#include <android/app/backup/BackupHelper.hpp>
#include <android/os/ParcelFileDescriptor.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app { namespace backup {

	class BackupAgentHelper;
	class BackupAgentHelper
		: public object<BackupAgentHelper>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit BackupAgentHelper(jobject jobj)
		: object<BackupAgentHelper>(jobj)
		{
		}

		operator local_ref<android::app::backup::BackupAgent>() const;


		BackupAgentHelper();
		void onBackup(local_ref< android::os::ParcelFileDescriptor >  const&, local_ref< android::app::backup::BackupDataOutput >  const&, local_ref< android::os::ParcelFileDescriptor >  const&);
		void onRestore(local_ref< android::app::backup::BackupDataInput >  const&, jint, local_ref< android::os::ParcelFileDescriptor >  const&);
		void addHelper(local_ref< java::lang::String >  const&, local_ref< android::app::backup::BackupHelper >  const&);
	}; //class BackupAgentHelper

} //namespace backup
} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_BACKUPAGENTHELPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_BACKUPAGENTHELPER_HPP_IMPL
#define J2CPP_ANDROID_APP_BACKUP_BACKUPAGENTHELPER_HPP_IMPL

namespace j2cpp {



android::app::backup::BackupAgentHelper::operator local_ref<android::app::backup::BackupAgent>() const
{
	return local_ref<android::app::backup::BackupAgent>(get_jobject());
}


android::app::backup::BackupAgentHelper::BackupAgentHelper()
: object<android::app::backup::BackupAgentHelper>(
	call_new_object<
		android::app::backup::BackupAgentHelper::J2CPP_CLASS_NAME,
		android::app::backup::BackupAgentHelper::J2CPP_METHOD_NAME(0),
		android::app::backup::BackupAgentHelper::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void android::app::backup::BackupAgentHelper::onBackup(local_ref< android::os::ParcelFileDescriptor > const &a0, local_ref< android::app::backup::BackupDataOutput > const &a1, local_ref< android::os::ParcelFileDescriptor > const &a2)
{
	return call_method<
		android::app::backup::BackupAgentHelper::J2CPP_CLASS_NAME,
		android::app::backup::BackupAgentHelper::J2CPP_METHOD_NAME(1),
		android::app::backup::BackupAgentHelper::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::app::backup::BackupAgentHelper::onRestore(local_ref< android::app::backup::BackupDataInput > const &a0, jint a1, local_ref< android::os::ParcelFileDescriptor > const &a2)
{
	return call_method<
		android::app::backup::BackupAgentHelper::J2CPP_CLASS_NAME,
		android::app::backup::BackupAgentHelper::J2CPP_METHOD_NAME(2),
		android::app::backup::BackupAgentHelper::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::app::backup::BackupAgentHelper::addHelper(local_ref< java::lang::String > const &a0, local_ref< android::app::backup::BackupHelper > const &a1)
{
	return call_method<
		android::app::backup::BackupAgentHelper::J2CPP_CLASS_NAME,
		android::app::backup::BackupAgentHelper::J2CPP_METHOD_NAME(3),
		android::app::backup::BackupAgentHelper::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::app::backup::BackupAgentHelper,"android/app/backup/BackupAgentHelper")
J2CPP_DEFINE_METHOD(android::app::backup::BackupAgentHelper,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::backup::BackupAgentHelper,1,"onBackup","(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V")
J2CPP_DEFINE_METHOD(android::app::backup::BackupAgentHelper,2,"onRestore","(Landroid/app/backup/BackupDataInput;ILandroid/os/ParcelFileDescriptor;)V")
J2CPP_DEFINE_METHOD(android::app::backup::BackupAgentHelper,3,"addHelper","(Ljava/lang/String;Landroid/app/backup/BackupHelper;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_BACKUPAGENTHELPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
