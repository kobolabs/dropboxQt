/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_policies"
***********************************************************/

#include "dropbox/team_policies/TeamPoliciesSharedFolderJoinPolicy.h"

namespace dropboxQt{

namespace team_policies{
///SharedFolderJoinPolicy

SharedFolderJoinPolicy::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SharedFolderJoinPolicy::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SharedFolderJoinPolicy_FROM_TEAM_ONLY:{
            if(!name.isEmpty())
                js[name] = "from_team_only";
        }break;
        case SharedFolderJoinPolicy_FROM_ANYONE:{
            if(!name.isEmpty())
                js[name] = "from_anyone";
        }break;
        case SharedFolderJoinPolicy_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void SharedFolderJoinPolicy::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("from_team_only") == 0){
        m_tag = SharedFolderJoinPolicy_FROM_TEAM_ONLY;
    }
    if(s.compare("from_anyone") == 0){
        m_tag = SharedFolderJoinPolicy_FROM_ANYONE;
    }
    if(s.compare("other") == 0){
        m_tag = SharedFolderJoinPolicy_OTHER;
    }
}

QString SharedFolderJoinPolicy::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SharedFolderJoinPolicy");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharedFolderJoinPolicy SharedFolderJoinPolicy::EXAMPLE(){
    SharedFolderJoinPolicy rv;
    rv.m_tag = SharedFolderJoinPolicy_FROM_TEAM_ONLY;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team_policies
}//dropboxQt