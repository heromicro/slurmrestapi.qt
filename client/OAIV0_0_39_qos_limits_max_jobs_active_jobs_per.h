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
 * OAIV0_0_39_qos_limits_max_jobs_active_jobs_per.h
 *
 * 
 */

#ifndef OAIV0_0_39_qos_limits_max_jobs_active_jobs_per_H
#define OAIV0_0_39_qos_limits_max_jobs_active_jobs_per_H

#include <QJsonObject>

#include "OAIV0_0_39_uint32_no_val.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_39_uint32_no_val;

class OAIV0_0_39_qos_limits_max_jobs_active_jobs_per : public OAIObject {
public:
    OAIV0_0_39_qos_limits_max_jobs_active_jobs_per();
    OAIV0_0_39_qos_limits_max_jobs_active_jobs_per(QString json);
    ~OAIV0_0_39_qos_limits_max_jobs_active_jobs_per() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_39_uint32_no_val getAccount() const;
    void setAccount(const OAIV0_0_39_uint32_no_val &account);
    bool is_account_Set() const;
    bool is_account_Valid() const;

    OAIV0_0_39_uint32_no_val getUser() const;
    void setUser(const OAIV0_0_39_uint32_no_val &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_39_uint32_no_val m_account;
    bool m_account_isSet;
    bool m_account_isValid;

    OAIV0_0_39_uint32_no_val m_user;
    bool m_user_isSet;
    bool m_user_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_39_qos_limits_max_jobs_active_jobs_per)

#endif // OAIV0_0_39_qos_limits_max_jobs_active_jobs_per_H
