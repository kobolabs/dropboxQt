/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class ListTeamDevicesError{
        /**
            field: reset: Indicates that the cursor has been invalidated. Call
                :meth:`devices_list_team_devices` again with an empty cursor to
                obtain a new cursor.
        */
    public:
        enum Tag{

		/*Indicates that the cursor has been invalidated. Call :route:`devices/list_team_devices` again with an empty cursor to obtain a new cursor.*/
		ListTeamDevicesError_RESET,
		/*None*/
		ListTeamDevicesError_OTHER
        };

        ListTeamDevicesError(){}
        ListTeamDevicesError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListTeamDevicesError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//ListTeamDevicesError

}//team
}//dropboxQt