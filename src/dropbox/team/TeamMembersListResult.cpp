/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersListResult.h"

namespace dropboxQt{

namespace team{
///MembersListResult

MembersListResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MembersListResult::toJson(QJsonObject& js)const{

    js["members"] = struct_list2jsonarray(m_members);
    if(!m_cursor.isEmpty())
        js["cursor"] = m_cursor;
    js["has_more"] = m_has_more;
}

void MembersListResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["members"].toArray(), m_members);
    m_cursor = js["cursor"].toString();
    m_has_more = js["has_more"].toVariant().toBool();
}

QString MembersListResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersListResult MembersListResult::EXAMPLE(){
    MembersListResult rv;
    rv.cursor = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt