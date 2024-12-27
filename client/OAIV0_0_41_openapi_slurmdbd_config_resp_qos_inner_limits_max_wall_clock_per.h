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
 * OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_H
#define OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_job.h"
#include "OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_qos.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_qos;
class OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_job;

class OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per();
    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_qos getQos() const;
    void setQos(const OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_qos &qos);
    bool is_qos_Set() const;
    bool is_qos_Valid() const;

    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_job getJob() const;
    void setJob(const OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_job &job);
    bool is_job_Set() const;
    bool is_job_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_qos m_qos;
    bool m_qos_isSet;
    bool m_qos_isValid;

    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_job m_job;
    bool m_job_isSet;
    bool m_job_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per)

#endif // OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per_H
