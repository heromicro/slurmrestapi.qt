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
 * OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per_H
#define OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner;

class OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per();
    OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner> getJob() const;
    void setJob(const QList<OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner> &job);
    bool is_job_Set() const;
    bool is_job_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner> m_job;
    bool m_job_isSet;
    bool m_job_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per)

#endif // OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per_H
