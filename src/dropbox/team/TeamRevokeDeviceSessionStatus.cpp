/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamRevokeDeviceSessionStatus.h"

namespace dropboxQt{

namespace team{
///RevokeDeviceSessionStatus

RevokeDeviceSessionStatus::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RevokeDeviceSessionStatus::toJson(QJsonObject& js)const{

    js["success"] = m_success;
    m_error_type.toJson(js, "error_type");
}

void RevokeDeviceSessionStatus::fromJson(const QJsonObject& js){

    m_success = js["success"].toVariant().toBool();
    m_error_type.fromJson(js["error_type"].toObject());
}

QString RevokeDeviceSessionStatus::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RevokeDeviceSessionStatus RevokeDeviceSessionStatus::EXAMPLE(){
    RevokeDeviceSessionStatus rv;
    rv.error_type = team::RevokeDeviceSessionError::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt