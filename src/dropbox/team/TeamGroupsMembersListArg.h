/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamGroupSelector.h"
#include "dropbox/team/TeamGroupSelector.h"

namespace dropboxQt{
namespace team{
    class GroupsMembersListArg{
        /**
            field: group: The group whose members are to be listed.
            field: limit: Number of results to return per call.
        */

    public:
        GroupsMembersListArg():
        m_limit(1000)
        {};

        GroupsMembersListArg(const GroupSelector& arg):
        m_limit(1000)
        { m_group = arg; };

    public:
        ///The group whose members are to be listed.
        GroupSelector group()const{return m_group;};
        const GroupsMembersListArg& setGroup(const GroupSelector& arg){m_group=arg; return *this;};

        ///Number of results to return per call.
        int limit()const{return m_limit;};
        const GroupsMembersListArg& setLimit(const int& arg){m_limit=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupsMembersListArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The group whose members are to be listed.
        GroupSelector m_group;

        ///Number of results to return per call.
        int m_limit;

    };//GroupsMembersListArg

}//team
}//dropboxQt