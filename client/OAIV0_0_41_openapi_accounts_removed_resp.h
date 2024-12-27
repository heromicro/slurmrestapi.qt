/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIV0_0_41_openapi_accounts_removed_resp.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_accounts_removed_resp_H
#define OAIV0_0_41_openapi_accounts_removed_resp_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_shares_resp_errors_inner.h"
#include "OAIV0_0_41_openapi_shares_resp_meta.h"
#include "OAIV0_0_41_openapi_shares_resp_warnings_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_41_openapi_shares_resp_meta;
class OAIV0_0_41_openapi_shares_resp_errors_inner;
class OAIV0_0_41_openapi_shares_resp_warnings_inner;

class OAIV0_0_41_openapi_accounts_removed_resp : public OAIObject {
public:
    OAIV0_0_41_openapi_accounts_removed_resp();
    OAIV0_0_41_openapi_accounts_removed_resp(QString json);
    ~OAIV0_0_41_openapi_accounts_removed_resp() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<QString> getRemovedAccounts() const;
    void setRemovedAccounts(const QList<QString> &removed_accounts);
    bool is_removed_accounts_Set() const;
    bool is_removed_accounts_Valid() const;

    OAIV0_0_41_openapi_shares_resp_meta getMeta() const;
    void setMeta(const OAIV0_0_41_openapi_shares_resp_meta &meta);
    bool is_meta_Set() const;
    bool is_meta_Valid() const;

    QList<OAIV0_0_41_openapi_shares_resp_errors_inner> getErrors() const;
    void setErrors(const QList<OAIV0_0_41_openapi_shares_resp_errors_inner> &errors);
    bool is_errors_Set() const;
    bool is_errors_Valid() const;

    QList<OAIV0_0_41_openapi_shares_resp_warnings_inner> getWarnings() const;
    void setWarnings(const QList<OAIV0_0_41_openapi_shares_resp_warnings_inner> &warnings);
    bool is_warnings_Set() const;
    bool is_warnings_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<QString> m_removed_accounts;
    bool m_removed_accounts_isSet;
    bool m_removed_accounts_isValid;

    OAIV0_0_41_openapi_shares_resp_meta m_meta;
    bool m_meta_isSet;
    bool m_meta_isValid;

    QList<OAIV0_0_41_openapi_shares_resp_errors_inner> m_errors;
    bool m_errors_isSet;
    bool m_errors_isValid;

    QList<OAIV0_0_41_openapi_shares_resp_warnings_inner> m_warnings;
    bool m_warnings_isSet;
    bool m_warnings_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_41_openapi_accounts_removed_resp)

#endif // OAIV0_0_41_openapi_accounts_removed_resp_H
