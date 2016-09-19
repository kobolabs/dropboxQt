/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamTeamMemberStatus.h"
#include "dropbox/team/TeamTeamMemberStatus.h"
#include "dropbox/users/UsersName.h"
#include "dropbox/team/TeamTeamMembershipType.h"
#include "dropbox/team/TeamTeamMembershipType.h"

namespace dropboxQt{
namespace team{
    class MemberProfile{
        /**
            Basic member profile.

            field: team_member_id: ID of user as a member of a team.
            field: external_id: External ID that a team can attach to the user.
                An application using the API may find it easier to use their own
                IDs instead of Dropbox IDs like account_id or team_member_id.
            field: account_id: A user's account identifier.
            field: email: Email address of user.
            field: email_verified: Is true if the user's email is verified to be
                owned by the user.
            field: status: The user's status as a member of a specific team.
            field: name: Representations for a person's name.
            field: membership_type: The user's membership type: full (normal
                team member) vs limited (does not use a license; no access to
                the team's shared quota).
        */

    public:
        MemberProfile(){};

        MemberProfile(const QString& arg){ m_team_member_id = arg; };

    public:
        ///ID of user as a member of a team.
        QString teamMemberId()const{return m_team_member_id;};
        const MemberProfile& setTeammemberid(const QString& arg){m_team_member_id=arg; return *this;};

        ///External ID that a team can attach to the user. An application using the API may find it easier to use their own IDs instead of Dropbox IDs like account_id or team_member_id.
        QString externalId()const{return m_external_id;};
        const MemberProfile& setExternalid(const QString& arg){m_external_id=arg; return *this;};

        ///A user's account identifier.
        QString accountId()const{return m_account_id;};
        const MemberProfile& setAccountid(const QString& arg){m_account_id=arg; return *this;};

        ///Email address of user.
        QString email()const{return m_email;};
        const MemberProfile& setEmail(const QString& arg){m_email=arg; return *this;};

        ///Is true if the user's email is verified to be owned by the user.
        bool emailVerified()const{return m_email_verified;};
        const MemberProfile& setEmailverified(const bool& arg){m_email_verified=arg; return *this;};

        ///The user's status as a member of a specific team.
        TeamMemberStatus status()const{return m_status;};
        const MemberProfile& setStatus(const TeamMemberStatus& arg){m_status=arg; return *this;};

        ///Representations for a person's name.
        users::Name name()const{return m_name;};
        const MemberProfile& setName(const users::Name& arg){m_name=arg; return *this;};

        ///The user's membership type: full (normal team member) vs limited (does not use a license; no access to the team's shared quota).
        TeamMembershipType membershipType()const{return m_membership_type;};
        const MemberProfile& setMembershiptype(const TeamMembershipType& arg){m_membership_type=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MemberProfile EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///ID of user as a member of a team.
        QString m_team_member_id;

        ///External ID that a team can attach to the user. An application using the API may find it easier to use their own IDs instead of Dropbox IDs like account_id or team_member_id.
        QString m_external_id;

        ///A user's account identifier.
        QString m_account_id;

        ///Email address of user.
        QString m_email;

        ///Is true if the user's email is verified to be owned by the user.
        bool m_email_verified;

        ///The user's status as a member of a specific team.
        TeamMemberStatus m_status;

        ///Representations for a person's name.
        users::Name m_name;

        ///The user's membership type: full (normal team member) vs limited (does not use a license; no access to the team's shared quota).
        TeamMembershipType m_membership_type;

    };//MemberProfile

}//team
}//dropboxQt