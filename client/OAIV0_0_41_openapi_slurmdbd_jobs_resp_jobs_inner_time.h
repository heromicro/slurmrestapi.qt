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
 * OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time_H
#define OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time_H

#include <QJsonObject>

#include "OAIV0_0_40_job_time_system.h"
#include "OAIV0_0_40_job_time_total.h"
#include "OAIV0_0_40_job_time_user.h"
#include "OAIV0_0_41_job_desc_msg_time_limit.h"
#include "OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time_planned.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time_planned;
class OAIV0_0_40_job_time_system;
class OAIV0_0_41_job_desc_msg_time_limit;
class OAIV0_0_40_job_time_total;
class OAIV0_0_40_job_time_user;

class OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time();
    OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getElapsed() const;
    void setElapsed(const qint32 &elapsed);
    bool is_elapsed_Set() const;
    bool is_elapsed_Valid() const;

    qint64 getEligible() const;
    void setEligible(const qint64 &eligible);
    bool is_eligible_Set() const;
    bool is_eligible_Valid() const;

    qint64 getEnd() const;
    void setEnd(const qint64 &end);
    bool is_end_Set() const;
    bool is_end_Valid() const;

    OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time_planned getPlanned() const;
    void setPlanned(const OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time_planned &planned);
    bool is_planned_Set() const;
    bool is_planned_Valid() const;

    qint64 getStart() const;
    void setStart(const qint64 &start);
    bool is_start_Set() const;
    bool is_start_Valid() const;

    qint64 getSubmission() const;
    void setSubmission(const qint64 &submission);
    bool is_submission_Set() const;
    bool is_submission_Valid() const;

    qint32 getSuspended() const;
    void setSuspended(const qint32 &suspended);
    bool is_suspended_Set() const;
    bool is_suspended_Valid() const;

    OAIV0_0_40_job_time_system getSystem() const;
    void setSystem(const OAIV0_0_40_job_time_system &system);
    bool is_system_Set() const;
    bool is_system_Valid() const;

    OAIV0_0_41_job_desc_msg_time_limit getLimit() const;
    void setLimit(const OAIV0_0_41_job_desc_msg_time_limit &limit);
    bool is_limit_Set() const;
    bool is_limit_Valid() const;

    OAIV0_0_40_job_time_total getTotal() const;
    void setTotal(const OAIV0_0_40_job_time_total &total);
    bool is_total_Set() const;
    bool is_total_Valid() const;

    OAIV0_0_40_job_time_user getUser() const;
    void setUser(const OAIV0_0_40_job_time_user &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_elapsed;
    bool m_elapsed_isSet;
    bool m_elapsed_isValid;

    qint64 m_eligible;
    bool m_eligible_isSet;
    bool m_eligible_isValid;

    qint64 m_end;
    bool m_end_isSet;
    bool m_end_isValid;

    OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time_planned m_planned;
    bool m_planned_isSet;
    bool m_planned_isValid;

    qint64 m_start;
    bool m_start_isSet;
    bool m_start_isValid;

    qint64 m_submission;
    bool m_submission_isSet;
    bool m_submission_isValid;

    qint32 m_suspended;
    bool m_suspended_isSet;
    bool m_suspended_isValid;

    OAIV0_0_40_job_time_system m_system;
    bool m_system_isSet;
    bool m_system_isValid;

    OAIV0_0_41_job_desc_msg_time_limit m_limit;
    bool m_limit_isSet;
    bool m_limit_isValid;

    OAIV0_0_40_job_time_total m_total;
    bool m_total_isSet;
    bool m_total_isValid;

    OAIV0_0_40_job_time_user m_user;
    bool m_user_isSet;
    bool m_user_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time)

#endif // OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time_H
