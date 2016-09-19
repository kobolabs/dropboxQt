/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamBaseDfbReport.h"

namespace dropboxQt{

namespace team{
///BaseDfbReport

BaseDfbReport::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void BaseDfbReport::toJson(QJsonObject& js)const{

    if(!m_start_date.isEmpty())
        js["start_date"] = m_start_date;
}

void BaseDfbReport::fromJson(const QJsonObject& js){

    m_start_date = js["start_date"].toString();
}

QString BaseDfbReport::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
BaseDfbReport BaseDfbReport::EXAMPLE(){
    BaseDfbReport rv;
    rv.start_date = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt