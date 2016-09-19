/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupSelectorError.h"

namespace dropboxQt{

namespace team{
///GroupSelectorError

GroupSelectorError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GroupSelectorError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GroupSelectorError_GROUP_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "group_not_found";
        }break;
        case GroupSelectorError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void GroupSelectorError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("group_not_found") == 0){
        m_tag = GroupSelectorError_GROUP_NOT_FOUND;
    }
    if(s.compare("other") == 0){
        m_tag = GroupSelectorError_OTHER;
    }
}

QString GroupSelectorError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GroupSelectorError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupSelectorError GroupSelectorError::EXAMPLE(){
    GroupSelectorError rv;
    rv.m_tag = GroupSelectorError_GROUP_NOT_FOUND;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt