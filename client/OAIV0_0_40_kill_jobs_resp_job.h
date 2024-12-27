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
 * OAIV0_0_40_kill_jobs_resp_job.h
 *
 * 
 */

#ifndef OAIV0_0_40_kill_jobs_resp_job_H
#define OAIV0_0_40_kill_jobs_resp_job_H

#include <QJsonObject>

#include "OAIV0_0_40_kill_jobs_resp_job_error.h"
#include "OAIV0_0_40_kill_jobs_resp_job_federation.h"
#include "OAIV0_0_40_uint32_no_val.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_40_kill_jobs_resp_job_error;
class OAIV0_0_40_uint32_no_val;
class OAIV0_0_40_kill_jobs_resp_job_federation;

class OAIV0_0_40_kill_jobs_resp_job : public OAIObject {
public:
    OAIV0_0_40_kill_jobs_resp_job();
    OAIV0_0_40_kill_jobs_resp_job(QString json);
    ~OAIV0_0_40_kill_jobs_resp_job() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_40_kill_jobs_resp_job_error getError() const;
    void setError(const OAIV0_0_40_kill_jobs_resp_job_error &error);
    bool is_error_Set() const;
    bool is_error_Valid() const;

    QString getStepId() const;
    void setStepId(const QString &step_id);
    bool is_step_id_Set() const;
    bool is_step_id_Valid() const;

    OAIV0_0_40_uint32_no_val getJobId() const;
    void setJobId(const OAIV0_0_40_uint32_no_val &job_id);
    bool is_job_id_Set() const;
    bool is_job_id_Valid() const;

    OAIV0_0_40_kill_jobs_resp_job_federation getFederation() const;
    void setFederation(const OAIV0_0_40_kill_jobs_resp_job_federation &federation);
    bool is_federation_Set() const;
    bool is_federation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_40_kill_jobs_resp_job_error m_error;
    bool m_error_isSet;
    bool m_error_isValid;

    QString m_step_id;
    bool m_step_id_isSet;
    bool m_step_id_isValid;

    OAIV0_0_40_uint32_no_val m_job_id;
    bool m_job_id_isSet;
    bool m_job_id_isValid;

    OAIV0_0_40_kill_jobs_resp_job_federation m_federation;
    bool m_federation_isSet;
    bool m_federation_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_40_kill_jobs_resp_job)

#endif // OAIV0_0_40_kill_jobs_resp_job_H
