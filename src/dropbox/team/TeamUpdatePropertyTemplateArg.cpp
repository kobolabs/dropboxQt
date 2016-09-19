/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamUpdatePropertyTemplateArg.h"

namespace dropboxQt{

namespace team{
///UpdatePropertyTemplateArg

UpdatePropertyTemplateArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UpdatePropertyTemplateArg::toJson(QJsonObject& js)const{

    if(!m_template_id.isEmpty())
        js["template_id"] = m_template_id;
    if(!m_name.isEmpty())
        js["name"] = m_name;
    if(!m_description.isEmpty())
        js["description"] = m_description;
    js["add_fields"] = struct_list2jsonarray(m_add_fields);
}

void UpdatePropertyTemplateArg::fromJson(const QJsonObject& js){

    m_template_id = js["template_id"].toString();
    m_name = js["name"].toString();
    m_description = js["description"].toString();
    jsonarray2struct_list(js["add_fields"].toArray(), m_add_fields);
}

QString UpdatePropertyTemplateArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UpdatePropertyTemplateArg UpdatePropertyTemplateArg::EXAMPLE(){
    UpdatePropertyTemplateArg rv;
    rv.template_id = "test1value";
    rv.name = "test2value";
    rv.description = "test3value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt