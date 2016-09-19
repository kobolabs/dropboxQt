/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/async/AsyncLaunchResultBase.h"
#include "dropbox/sharing/SharingSharedFolderMetadata.h"

namespace dropboxQt{
namespace sharing{
    class ShareFolderLaunch{
    public:
        enum Tag{

		/*This response indicates that the processing is asynchronous. The string is an id that can be used to obtain the status of the asynchronous job.*/
		LaunchResultBase_ASYNC_JOB_ID,
		/*None*/
		ShareFolderLaunch_COMPLETE
        };

        ShareFolderLaunch(){}
        ShareFolderLaunch(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///This response indicates that the processing is asynchronous. The string is an id that can be used to obtain the status of the asynchronous job.
        QString getAsyncJobId()const{DBOX_CHECK_STATE((LaunchResultBase_ASYNC_JOB_ID == m_tag), "expected tag: LaunchResultBase_ASYNC_JOB_ID", m_tag);return m_async_job_id;};

        ///None
        SharedFolderMetadata getComplete()const{DBOX_CHECK_STATE((ShareFolderLaunch_COMPLETE == m_tag), "expected tag: ShareFolderLaunch_COMPLETE", m_tag);return m_complete;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ShareFolderLaunch EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        QString m_async_job_id;
        SharedFolderMetadata m_complete;
    };//ShareFolderLaunch

}//sharing
}//dropboxQt