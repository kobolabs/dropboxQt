/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class ApiApp{
        /**
            Information on linked third party applications

            field: app_id: The application unique id
            field: app_name: The application name
            field: publisher: The application publisher name
            field: publisher_url: The publisher's URL
            field: linked: The time this application was linked
            field: is_app_folder: Whether the linked application uses a
                dedicated folder
        */

    public:
        ApiApp(){};

        ApiApp(const QString& arg){ m_app_id = arg; };

    public:
        ///The application unique id
        QString appId()const{return m_app_id;};
        const ApiApp& setAppid(const QString& arg){m_app_id=arg; return *this;};

        ///The application name
        QString appName()const{return m_app_name;};
        const ApiApp& setAppname(const QString& arg){m_app_name=arg; return *this;};

        ///The application publisher name
        QString publisher()const{return m_publisher;};
        const ApiApp& setPublisher(const QString& arg){m_publisher=arg; return *this;};

        ///The publisher's URL
        QString publisherUrl()const{return m_publisher_url;};
        const ApiApp& setPublisherurl(const QString& arg){m_publisher_url=arg; return *this;};

        ///The time this application was linked
        QDateTime linked()const{return m_linked;};
        const ApiApp& setLinked(const QDateTime& arg){m_linked=arg; return *this;};

        ///Whether the linked application uses a dedicated folder
        bool isAppFolder()const{return m_is_app_folder;};
        const ApiApp& setIsappfolder(const bool& arg){m_is_app_folder=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ApiApp EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The application unique id
        QString m_app_id;

        ///The application name
        QString m_app_name;

        ///The application publisher name
        QString m_publisher;

        ///The publisher's URL
        QString m_publisher_url;

        ///The time this application was linked
        QDateTime m_linked;

        ///Whether the linked application uses a dedicated folder
        bool m_is_app_folder;

    };//ApiApp

}//team
}//dropboxQt