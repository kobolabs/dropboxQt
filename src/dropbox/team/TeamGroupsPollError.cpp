/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupsPollError.h"

namespace dropboxQt{

namespace team{
///GroupsPollError

GroupsPollError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GroupsPollError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case PollError_INVALID_ASYNC_JOB_ID:{
            if(!name.isEmpty())
                js[name] = "invalid_async_job_id";
        }break;
        case PollError_INTERNAL_ERROR:{
            if(!name.isEmpty())
                js[name] = "internal_error";
        }break;
        case PollError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
        case GroupsPollError_ACCESS_DENIED:{
            if(!name.isEmpty())
                js[name] = "access_denied";
        }break;
    }//switch
}

void GroupsPollError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("invalid_async_job_id") == 0){
        m_tag = PollError_INVALID_ASYNC_JOB_ID;
    }
    if(s.compare("internal_error") == 0){
        m_tag = PollError_INTERNAL_ERROR;
    }
    if(s.compare("other") == 0){
        m_tag = PollError_OTHER;
    }
    if(s.compare("access_denied") == 0){
        m_tag = GroupsPollError_ACCESS_DENIED;
    }
}

QString GroupsPollError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GroupsPollError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupsPollError GroupsPollError::EXAMPLE(){
    GroupsPollError rv;
    rv.m_tag = GroupsPollError_ACCESS_DENIED;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt