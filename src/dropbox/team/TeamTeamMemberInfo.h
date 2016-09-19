/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamTeamMemberProfile.h"
#include "dropbox/team/TeamAdminTier.h"
#include "dropbox/team/TeamAdminTier.h"

namespace dropboxQt{
namespace team{
    class TeamMemberInfo{
        /**
            Information about a team member.

            field: profile: Profile of a user as a member of a team.
            field: role: The user's role in the team.
        */

    public:
        TeamMemberInfo(){};

        TeamMemberInfo(const TeamMemberProfile& arg){ m_profile = arg; };

    public:
        ///Profile of a user as a member of a team.
        TeamMemberProfile profile()const{return m_profile;};
        const TeamMemberInfo& setProfile(const TeamMemberProfile& arg){m_profile=arg; return *this;};

        ///The user's role in the team.
        AdminTier role()const{return m_role;};
        const TeamMemberInfo& setRole(const AdminTier& arg){m_role=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static TeamMemberInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Profile of a user as a member of a team.
        TeamMemberProfile m_profile;

        ///The user's role in the team.
        AdminTier m_role;

    };//TeamMemberInfo

}//team
}//dropboxQt