/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupsListResult.h"

namespace dropboxQt{

namespace team{
///GroupsListResult

GroupsListResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupsListResult::toJson(QJsonObject& js)const{

    js["groups"] = struct_list2jsonarray(m_groups);
    if(!m_cursor.isEmpty())
        js["cursor"] = m_cursor;
    js["has_more"] = m_has_more;
}

void GroupsListResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["groups"].toArray(), m_groups);
    m_cursor = js["cursor"].toString();
    m_has_more = js["has_more"].toVariant().toBool();
}

QString GroupsListResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupsListResult GroupsListResult::EXAMPLE(){
    GroupsListResult rv;
    rv.cursor = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt