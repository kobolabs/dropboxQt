/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesFileMetadata.h"

namespace dropboxQt{

namespace files{
///FileMetadata

FileMetadata::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void FileMetadata::toJson(QJsonObject& js)const{

    Metadata::toJson(js);
    if(!m_id.isEmpty())
        js["id"] = m_id;
    if(m_client_modified.isValid())
        js["client_modified"] = m_client_modified.toString("yyyy-MM-ddThh:mm:ssZ");
    if(m_server_modified.isValid())
        js["server_modified"] = m_server_modified.toString("yyyy-MM-ddThh:mm:ssZ");
    if(!m_rev.isEmpty())
        js["rev"] = m_rev;
    js["size"] = m_size;
    m_media_info.toJson(js, "media_info");
    js["sharing_info"] = (QJsonObject)m_sharing_info;
    js["property_groups"] = struct_list2jsonarray(m_property_groups);
    js["has_explicit_shared_members"] = m_has_explicit_shared_members;
}

void FileMetadata::fromJson(const QJsonObject& js){

    Metadata::fromJson(js);
    m_id = js["id"].toString();
    m_client_modified = QDateTime::fromString(js["client_modified"].toString(), "yyyy-MM-ddThh:mm:ssZ");
    m_server_modified = QDateTime::fromString(js["server_modified"].toString(), "yyyy-MM-ddThh:mm:ssZ");
    m_rev = js["rev"].toString();
    m_size = js["size"].toVariant().toInt();
    m_media_info.fromJson(js["media_info"].toObject());
    m_sharing_info.fromJson(js);
    jsonarray2struct_list(js["property_groups"].toArray(), m_property_groups);
    m_has_explicit_shared_members = js["has_explicit_shared_members"].toVariant().toBool();
}

QString FileMetadata::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
FileMetadata FileMetadata::EXAMPLE(){
    FileMetadata rv;
    rv.id = "test1value";
    rv.client_modified = QDateTime::currentDateTime();
    rv.server_modified = QDateTime::currentDateTime();
    rv.rev = "test4value";
    rv.size = 5;
    rv.media_info = files::MediaInfo::EXAMPLE();
    rv.sharing_info = files::FileSharingInfo::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt