/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedFolderAccessError.h"
#include "dropbox/sharing/SharingSharedFolderAccessError.h"

namespace dropboxQt{
namespace sharing{
    class UnmountFolderError{
        /**
            field: no_permission: The current user does not have permission to
                perform this action.
            field: not_unmountable: The shared folder can't be unmounted. One
                example where this can occur is when the shared folder's parent
                folder is also a shared folder that resides in the current
                user's Dropbox.
        */
    public:
        enum Tag{

		/*None*/
		UnmountFolderError_ACCESS_ERROR,
		/*The current user does not have permission to perform this action.*/
		UnmountFolderError_NO_PERMISSION,
		/*The shared folder can't be unmounted. One example where this can occur is when the shared folder's parent folder is also a shared folder that resides in the current user's Dropbox.*/
		UnmountFolderError_NOT_UNMOUNTABLE,
		/*None*/
		UnmountFolderError_OTHER
        };

        UnmountFolderError(){}
        UnmountFolderError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        SharedFolderAccessError getAccessError()const{DBOX_CHECK_STATE((UnmountFolderError_ACCESS_ERROR == m_tag), "expected tag: UnmountFolderError_ACCESS_ERROR", m_tag);return m_access_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UnmountFolderError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharedFolderAccessError m_access_error;
    };//UnmountFolderError

}//sharing
}//dropboxQt