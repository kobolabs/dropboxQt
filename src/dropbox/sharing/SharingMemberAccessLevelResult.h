/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingAccessLevel.h"
#include "dropbox/sharing/SharingAccessLevel.h"
#include "dropbox/sharing/SharingParentFolderAccessInfo.h"

namespace dropboxQt{
namespace sharing{
    class MemberAccessLevelResult{
        /**
            Contains information about a member's access level to content after
            an operation.

            field: access_level: The member still has this level of access to
                the content through a parent folder.
            field: warning: A localized string with additional information about
                why the user has this access level to the content.
            field: access_details: The parent folders that a member has access
                to. The field is present if the user has access to the first
                parent folder where the member gains access.
        */

    public:
        MemberAccessLevelResult(){};

        MemberAccessLevelResult(const AccessLevel& arg){ m_access_level = arg; };

    public:
        ///The member still has this level of access to the content through a parent folder.
        AccessLevel accessLevel()const{return m_access_level;};

        ///A localized string with additional information about why the user has this access level to the content.
        QString warning()const{return m_warning;};

        ///The parent folders that a member has access to. The field is present if the user has access to the first parent folder where the member gains access.
        const std::list <ParentFolderAccessInfo>& accessDetails()const{return m_access_details;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MemberAccessLevelResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The member still has this level of access to the content through a parent folder.
        AccessLevel m_access_level;

        ///A localized string with additional information about why the user has this access level to the content.
        QString m_warning;

        ///The parent folders that a member has access to. The field is present if the user has access to the first parent folder where the member gains access.
        std::list <ParentFolderAccessInfo> m_access_details;

    };//MemberAccessLevelResult

}//sharing
}//dropboxQt