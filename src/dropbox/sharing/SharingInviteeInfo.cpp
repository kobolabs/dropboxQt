/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingInviteeInfo.h"

namespace dropboxQt{

namespace sharing{
///InviteeInfo

InviteeInfo::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void InviteeInfo::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case InviteeInfo_EMAIL:{
            if(!name.isEmpty())
                js[name] = "email";
            if(!m_email.isEmpty())
                js["email"] = m_email;
        }break;
        case InviteeInfo_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void InviteeInfo::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("email") == 0){
        m_tag = InviteeInfo_EMAIL;
    }
    if(s.compare("other") == 0){
        m_tag = InviteeInfo_OTHER;
    }
}

QString InviteeInfo::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "InviteeInfo");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
InviteeInfo InviteeInfo::EXAMPLE(){
    InviteeInfo rv;
    rv.email = "test1value";
    rv.m_tag = InviteeInfo_EMAIL;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt