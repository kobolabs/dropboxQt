/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingFileAction.h"

namespace dropboxQt{
namespace sharing{
    class GetFileMetadataArg{
        /**
            Arguments of :meth:`get_file_metadata`

            field: file: The file to query.
            field: actions: File actions to query.
        */

    public:
        GetFileMetadataArg(){};

        GetFileMetadataArg(const QString& arg){ m_file = arg; };

    public:
        ///The file to query.
        QString file()const{return m_file;};
        const GetFileMetadataArg& setFile(const QString& arg){m_file=arg; return *this;};

        ///File actions to query.
        const std::list <FileAction>& actions()const{return m_actions;};
        const GetFileMetadataArg& setActions(const std::list <FileAction>&& arg){m_actions=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetFileMetadataArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The file to query.
        QString m_file;

        ///File actions to query.
        std::list <FileAction> m_actions;

    };//GetFileMetadataArg

}//sharing
}//dropboxQt