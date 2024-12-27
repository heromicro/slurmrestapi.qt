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
 * OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_H
#define OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_max.h"
#include "OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_min.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_min;
class OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_max;

class OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency();
    OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_min getMin() const;
    void setMin(const OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_min &min);
    bool is_min_Set() const;
    bool is_min_Valid() const;

    OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_max getMax() const;
    void setMax(const OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_max &max);
    bool is_max_Set() const;
    bool is_max_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_min m_min;
    bool m_min_isSet;
    bool m_min_isValid;

    OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_max m_max;
    bool m_max_isSet;
    bool m_max_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency)

#endif // OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_CPU_requested_frequency_H
