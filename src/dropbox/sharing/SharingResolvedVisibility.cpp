/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingResolvedVisibility.h"

namespace dropboxQt{

namespace sharing{
///ResolvedVisibility

ResolvedVisibility::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ResolvedVisibility::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case RequestedVisibility_PUBLIC:{
            if(!name.isEmpty())
                js[name] = "public";
        }break;
        case RequestedVisibility_TEAM_ONLY:{
            if(!name.isEmpty())
                js[name] = "team_only";
        }break;
        case RequestedVisibility_PASSWORD:{
            if(!name.isEmpty())
                js[name] = "password";
        }break;
        case ResolvedVisibility_TEAM_AND_PASSWORD:{
            if(!name.isEmpty())
                js[name] = "team_and_password";
        }break;
        case ResolvedVisibility_SHARED_FOLDER_ONLY:{
            if(!name.isEmpty())
                js[name] = "shared_folder_only";
        }break;
        case ResolvedVisibility_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void ResolvedVisibility::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("public") == 0){
        m_tag = RequestedVisibility_PUBLIC;
    }
    if(s.compare("team_only") == 0){
        m_tag = RequestedVisibility_TEAM_ONLY;
    }
    if(s.compare("password") == 0){
        m_tag = RequestedVisibility_PASSWORD;
    }
    if(s.compare("team_and_password") == 0){
        m_tag = ResolvedVisibility_TEAM_AND_PASSWORD;
    }
    if(s.compare("shared_folder_only") == 0){
        m_tag = ResolvedVisibility_SHARED_FOLDER_ONLY;
    }
    if(s.compare("other") == 0){
        m_tag = ResolvedVisibility_OTHER;
    }
}

QString ResolvedVisibility::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ResolvedVisibility");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ResolvedVisibility ResolvedVisibility::EXAMPLE(){
    ResolvedVisibility rv;
    rv.m_tag = ResolvedVisibility_TEAM_AND_PASSWORD;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt