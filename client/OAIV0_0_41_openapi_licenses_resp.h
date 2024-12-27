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
 * OAIV0_0_41_openapi_licenses_resp.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_licenses_resp_H
#define OAIV0_0_41_openapi_licenses_resp_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_licenses_resp_last_update.h"
#include "OAIV0_0_41_openapi_licenses_resp_licenses_inner.h"
#include "OAIV0_0_41_openapi_shares_resp_errors_inner.h"
#include "OAIV0_0_41_openapi_shares_resp_meta.h"
#include "OAIV0_0_41_openapi_shares_resp_warnings_inner.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_41_openapi_licenses_resp_licenses_inner;
class OAIV0_0_41_openapi_licenses_resp_last_update;
class OAIV0_0_41_openapi_shares_resp_meta;
class OAIV0_0_41_openapi_shares_resp_errors_inner;
class OAIV0_0_41_openapi_shares_resp_warnings_inner;

class OAIV0_0_41_openapi_licenses_resp : public OAIObject {
public:
    OAIV0_0_41_openapi_licenses_resp();
    OAIV0_0_41_openapi_licenses_resp(QString json);
    ~OAIV0_0_41_openapi_licenses_resp() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIV0_0_41_openapi_licenses_resp_licenses_inner> getLicenses() const;
    void setLicenses(const QList<OAIV0_0_41_openapi_licenses_resp_licenses_inner> &licenses);
    bool is_licenses_Set() const;
    bool is_licenses_Valid() const;

    OAIV0_0_41_openapi_licenses_resp_last_update getLastUpdate() const;
    void setLastUpdate(const OAIV0_0_41_openapi_licenses_resp_last_update &last_update);
    bool is_last_update_Set() const;
    bool is_last_update_Valid() const;

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

    QList<OAIV0_0_41_openapi_licenses_resp_licenses_inner> m_licenses;
    bool m_licenses_isSet;
    bool m_licenses_isValid;

    OAIV0_0_41_openapi_licenses_resp_last_update m_last_update;
    bool m_last_update_isSet;
    bool m_last_update_isValid;

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

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_41_openapi_licenses_resp)

#endif // OAIV0_0_41_openapi_licenses_resp_H
