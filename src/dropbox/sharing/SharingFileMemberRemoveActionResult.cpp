/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingFileMemberRemoveActionResult.h"

namespace dropboxQt{

namespace sharing{
///FileMemberRemoveActionResult

FileMemberRemoveActionResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void FileMemberRemoveActionResult::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case FileMemberRemoveActionResult_SUCCESS:{
            if(!name.isEmpty())
                js[name] = "success";
            js["success"] = (QJsonObject)m_success;
        }break;
        case FileMemberRemoveActionResult_MEMBER_ERROR:{
            if(!name.isEmpty())
                js[name] = "member_error";
            m_member_error.toJson(js, "member_error");
        }break;
        case FileMemberRemoveActionResult_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void FileMemberRemoveActionResult::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("success") == 0){
        m_tag = FileMemberRemoveActionResult_SUCCESS;
    }
    if(s.compare("member_error") == 0){
        m_tag = FileMemberRemoveActionResult_MEMBER_ERROR;
    }
    if(s.compare("other") == 0){
        m_tag = FileMemberRemoveActionResult_OTHER;
    }
}

QString FileMemberRemoveActionResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "FileMemberRemoveActionResult");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
FileMemberRemoveActionResult FileMemberRemoveActionResult::EXAMPLE(){
    FileMemberRemoveActionResult rv;
    rv.success = sharing::MemberAccessLevelResult::EXAMPLE();
    rv.member_error = sharing::FileMemberActionError::EXAMPLE();
    rv.m_tag = FileMemberRemoveActionResult_SUCCESS;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt