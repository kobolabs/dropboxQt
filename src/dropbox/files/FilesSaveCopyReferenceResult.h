/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesMetadata.h"

namespace dropboxQt{
namespace files{
    class SaveCopyReferenceResult{
        /**
            field: metadata: The metadata of the saved file or folder in the
                user's Dropbox.
        */

    public:
        SaveCopyReferenceResult(){};

        SaveCopyReferenceResult(const Metadata& arg){ m_metadata = arg; };

    public:
        ///The metadata of the saved file or folder in the user's Dropbox.
        Metadata metadata()const{return m_metadata;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SaveCopyReferenceResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The metadata of the saved file or folder in the user's Dropbox.
        Metadata m_metadata;

    };//SaveCopyReferenceResult

}//files
}//dropboxQt