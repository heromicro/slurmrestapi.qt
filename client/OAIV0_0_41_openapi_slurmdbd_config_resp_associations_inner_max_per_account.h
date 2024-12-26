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
 * OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account_H
#define OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_qos.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_qos;

class OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account();
    OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_qos getWallClock() const;
    void setWallClock(const OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_qos &wall_clock);
    bool is_wall_clock_Set() const;
    bool is_wall_clock_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_qos m_wall_clock;
    bool m_wall_clock_isSet;
    bool m_wall_clock_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account)

#endif // OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account_H
