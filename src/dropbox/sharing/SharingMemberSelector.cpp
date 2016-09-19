/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingMemberSelector.h"

namespace dropboxQt{

namespace sharing{
///MemberSelector

MemberSelector::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MemberSelector::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case MemberSelector_DROPBOX_ID:{
            if(!name.isEmpty())
                js[name] = "dropbox_id";
            if(!m_dropbox_id.isEmpty())
                js["dropbox_id"] = m_dropbox_id;
        }break;
        case MemberSelector_EMAIL:{
            if(!name.isEmpty())
                js[name] = "email";
            if(!m_email.isEmpty())
                js["email"] = m_email;
        }break;
        case MemberSelector_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void MemberSelector::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("dropbox_id") == 0){
        m_tag = MemberSelector_DROPBOX_ID;
    }
    if(s.compare("email") == 0){
        m_tag = MemberSelector_EMAIL;
    }
    if(s.compare("other") == 0){
        m_tag = MemberSelector_OTHER;
    }
}

QString MemberSelector::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MemberSelector");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MemberSelector MemberSelector::EXAMPLE(){
    MemberSelector rv;
    rv.dropbox_id = "test1value";
    rv.email = "test2value";
    rv.m_tag = MemberSelector_DROPBOX_ID;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt