/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesLookupError.h"
#include "dropbox/files/FilesLookupError.h"

namespace dropboxQt{
namespace files{
    class PreviewError{
        /**
            field: path: An error occurs when downloading metadata for the file.
            field: in_progress: This preview generation is still in progress and
                the file is not ready  for preview yet.
            field: unsupported_extension: The file extension is not supported
                preview generation.
            field: unsupported_content: The file content is not supported for
                preview generation.
        */
    public:
        enum Tag{

		/*An error occurs when downloading metadata for the file.*/
		PreviewError_PATH,
		/*This preview generation is still in progress and the file is not ready  for preview yet.*/
		PreviewError_IN_PROGRESS,
		/*The file extension is not supported preview generation.*/
		PreviewError_UNSUPPORTED_EXTENSION,
		/*The file content is not supported for preview generation.*/
		PreviewError_UNSUPPORTED_CONTENT
        };

        PreviewError(){}
        PreviewError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///An error occurs when downloading metadata for the file.
        LookupError getPath()const{DBOX_CHECK_STATE((PreviewError_PATH == m_tag), "expected tag: PreviewError_PATH", m_tag);return m_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static PreviewError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        LookupError m_path;
    };//PreviewError

}//files
}//dropboxQt