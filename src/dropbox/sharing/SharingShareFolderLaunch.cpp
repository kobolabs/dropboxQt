/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingShareFolderLaunch.h"

namespace dropboxQt{

namespace sharing{
///ShareFolderLaunch

ShareFolderLaunch::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ShareFolderLaunch::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case LaunchResultBase_ASYNC_JOB_ID:{
            if(!name.isEmpty())
                js[name] = "async_job_id";
            if(!m_async_job_id.isEmpty())
                js["async_job_id"] = m_async_job_id;
        }break;
        case ShareFolderLaunch_COMPLETE:{
            if(!name.isEmpty())
                js[name] = "complete";
            js["complete"] = (QJsonObject)m_complete;
        }break;
    }//switch
}

void ShareFolderLaunch::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("async_job_id") == 0){
        m_tag = LaunchResultBase_ASYNC_JOB_ID;
    }
    if(s.compare("complete") == 0){
        m_tag = ShareFolderLaunch_COMPLETE;
    }
}

QString ShareFolderLaunch::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ShareFolderLaunch");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ShareFolderLaunch ShareFolderLaunch::EXAMPLE(){
    ShareFolderLaunch rv;
    rv.complete = sharing::SharedFolderMetadata::EXAMPLE();
    rv.m_tag = ShareFolderLaunch_COMPLETE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt