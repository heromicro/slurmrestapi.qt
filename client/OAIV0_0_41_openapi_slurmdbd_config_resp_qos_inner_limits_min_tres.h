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
 * OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres_H
#define OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres_per.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres_per;

class OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres();
    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres_per getPer() const;
    void setPer(const OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres_per &per);
    bool is_per_Set() const;
    bool is_per_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres_per m_per;
    bool m_per_isSet;
    bool m_per_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres)

#endif // OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_min_tres_H
