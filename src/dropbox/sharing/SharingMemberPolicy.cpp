/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingMemberPolicy.h"

namespace dropboxQt{

namespace sharing{
///MemberPolicy

MemberPolicy::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MemberPolicy::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case MemberPolicy_TEAM:{
            if(!name.isEmpty())
                js[name] = "team";
        }break;
        case MemberPolicy_ANYONE:{
            if(!name.isEmpty())
                js[name] = "anyone";
        }break;
        case MemberPolicy_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void MemberPolicy::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("team") == 0){
        m_tag = MemberPolicy_TEAM;
    }
    if(s.compare("anyone") == 0){
        m_tag = MemberPolicy_ANYONE;
    }
    if(s.compare("other") == 0){
        m_tag = MemberPolicy_OTHER;
    }
}

QString MemberPolicy::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MemberPolicy");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MemberPolicy MemberPolicy::EXAMPLE(){
    MemberPolicy rv;
    rv.m_tag = MemberPolicy_TEAM;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt