/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "auth"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/auth/AuthRateLimitReason.h"
#include "dropbox/auth/AuthRateLimitReason.h"

namespace dropboxQt{
namespace auth{
    class RateLimitError{
        /**
            Error occurred because the app is being rate limited.

            field: reason: The reason why the app is being rate limited.
            field: retry_after: The number of seconds that the app should wait
                before making another request.
        */

    public:
        RateLimitError():
        m_retry_after(1)
        {};

        RateLimitError(const RateLimitReason& arg):
        m_retry_after(1)
        { m_reason = arg; };

    public:
        ///The reason why the app is being rate limited.
        RateLimitReason reason()const{return m_reason;};
        const RateLimitError& setReason(const RateLimitReason& arg){m_reason=arg; return *this;};

        ///The number of seconds that the app should wait before making another request.
        int retryAfter()const{return m_retry_after;};
        const RateLimitError& setRetryafter(const int& arg){m_retry_after=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RateLimitError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The reason why the app is being rate limited.
        RateLimitReason m_reason;

        ///The number of seconds that the app should wait before making another request.
        int m_retry_after;

    };//RateLimitError

}//auth
}//dropboxQt