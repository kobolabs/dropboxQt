/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class UserSelectorError{
        /**
            Error that can be returned whenever a struct derived from
            :class:`UserSelectorArg` is used.

            field: user_not_found: No matching user found. The provided
                team_member_id, email, or external_id does not exist on this
                team.
        */
    public:
        enum Tag{

		/*No matching user found. The provided team_member_id, email, or external_id does not exist on this team.*/
		UserSelectorError_USER_NOT_FOUND
        };

        UserSelectorError(){}
        UserSelectorError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UserSelectorError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//UserSelectorError

}//team
}//dropboxQt