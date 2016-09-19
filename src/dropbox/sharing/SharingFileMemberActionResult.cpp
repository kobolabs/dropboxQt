/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingFileMemberActionResult.h"

namespace dropboxQt{

namespace sharing{
///FileMemberActionResult

FileMemberActionResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void FileMemberActionResult::toJson(QJsonObject& js)const{

    m_member.toJson(js, "member");
    m_result.toJson(js, "result");
}

void FileMemberActionResult::fromJson(const QJsonObject& js){

    m_member.fromJson(js["member"].toObject());
    m_result.fromJson(js["result"].toObject());
}

QString FileMemberActionResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
FileMemberActionResult FileMemberActionResult::EXAMPLE(){
    FileMemberActionResult rv;
    rv.member = sharing::MemberSelector::EXAMPLE();
    rv.result = sharing::FileMemberActionIndividualResult::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt