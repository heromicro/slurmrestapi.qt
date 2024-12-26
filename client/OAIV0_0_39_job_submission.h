/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIV0_0_39_job_submission.h
 *
 * 
 */

#ifndef OAIV0_0_39_job_submission_H
#define OAIV0_0_39_job_submission_H

#include <QJsonObject>

#include "OAIV0_0_39_job_desc_msg.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_39_job_desc_msg;

class OAIV0_0_39_job_submission : public OAIObject {
public:
    OAIV0_0_39_job_submission();
    OAIV0_0_39_job_submission(QString json);
    ~OAIV0_0_39_job_submission() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getScript() const;
    void setScript(const QString &script);
    bool is_script_Set() const;
    bool is_script_Valid() const;

    OAIV0_0_39_job_desc_msg getJob() const;
    void setJob(const OAIV0_0_39_job_desc_msg &job);
    bool is_job_Set() const;
    bool is_job_Valid() const;

    QList<OAIV0_0_39_job_desc_msg> getJobs() const;
    void setJobs(const QList<OAIV0_0_39_job_desc_msg> &jobs);
    bool is_jobs_Set() const;
    bool is_jobs_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_script;
    bool m_script_isSet;
    bool m_script_isValid;

    OAIV0_0_39_job_desc_msg m_job;
    bool m_job_isSet;
    bool m_job_isValid;

    QList<OAIV0_0_39_job_desc_msg> m_jobs;
    bool m_jobs_isSet;
    bool m_jobs_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_39_job_submission)

#endif // OAIV0_0_39_job_submission_H
