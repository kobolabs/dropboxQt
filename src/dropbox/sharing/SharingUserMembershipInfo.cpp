/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingUserMembershipInfo.h"

namespace dropboxQt{

namespace sharing{
///UserMembershipInfo

UserMembershipInfo::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UserMembershipInfo::toJson(QJsonObject& js)const{

    MembershipInfo::toJson(js);
    js["user"] = (QJsonObject)m_user;
}

void UserMembershipInfo::fromJson(const QJsonObject& js){

    MembershipInfo::fromJson(js);
    m_user.fromJson(js);
}

QString UserMembershipInfo::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UserMembershipInfo UserMembershipInfo::EXAMPLE(){
    UserMembershipInfo rv;
    rv.user = sharing::UserInfo::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt