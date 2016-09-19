/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedLinkError.h"

namespace dropboxQt{
namespace sharing{
    class RevokeSharedLinkError{
        /**
            field: shared_link_malformed: Shared link is malformed.
        */
    public:
        enum Tag{

		/*The shared link wasn't found*/
		SharedLinkError_SHARED_LINK_NOT_FOUND,
		/*The caller is not allowed to access this shared link*/
		SharedLinkError_SHARED_LINK_ACCESS_DENIED,
		/*None*/
		SharedLinkError_OTHER,
		/*Shared link is malformed.*/
		RevokeSharedLinkError_SHARED_LINK_MALFORMED
        };

        RevokeSharedLinkError(){}
        RevokeSharedLinkError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RevokeSharedLinkError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//RevokeSharedLinkError

}//sharing
}//dropboxQt