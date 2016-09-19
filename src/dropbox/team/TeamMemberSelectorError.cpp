/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMemberSelectorError.h"

namespace dropboxQt{

namespace team{
///MemberSelectorError

MemberSelectorError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MemberSelectorError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UserSelectorError_USER_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "user_not_found";
        }break;
        case MemberSelectorError_USER_NOT_IN_TEAM:{
            if(!name.isEmpty())
                js[name] = "user_not_in_team";
        }break;
    }//switch
}

void MemberSelectorError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("user_not_found") == 0){
        m_tag = UserSelectorError_USER_NOT_FOUND;
    }
    if(s.compare("user_not_in_team") == 0){
        m_tag = MemberSelectorError_USER_NOT_IN_TEAM;
    }
}

QString MemberSelectorError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MemberSelectorError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MemberSelectorError MemberSelectorError::EXAMPLE(){
    MemberSelectorError rv;
    rv.m_tag = MemberSelectorError_USER_NOT_IN_TEAM;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt