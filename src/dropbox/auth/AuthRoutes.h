/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "auth"
 www.prokarpaty.net
***********************************************************/

#pragma once

#include "dropbox/endpoint/ApiUtil.h"
#include "dropbox/DropboxRouteBase.h"

namespace dropboxQt{
namespace auth{


    class AuthRoutes: public DropboxRouteBase{
    public:
        AuthRoutes(Endpoint* ep):DropboxRouteBase(ep){};
            /**
            ApiRoute('token/revoke')


            Disables the access token used to authenticate the call.

            */
        void tokenRevoke(void);
        void tokenRevoke_Async(
            std::function<void()> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

    protected:
    };//AuthRoutes

}//auth
}//dropboxQt
