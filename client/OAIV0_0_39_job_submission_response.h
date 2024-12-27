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
 * OAIV0_0_39_job_submission_response.h
 *
 * 
 */

#ifndef OAIV0_0_39_job_submission_response_H
#define OAIV0_0_39_job_submission_response_H

#include <QJsonObject>

#include "OAIV0_0_39_error.h"
#include "OAIV0_0_39_meta.h"
#include "OAIV0_0_39_warning.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_39_meta;
class OAIV0_0_39_error;
class OAIV0_0_39_warning;

class OAIV0_0_39_job_submission_response : public OAIObject {
public:
    OAIV0_0_39_job_submission_response();
    OAIV0_0_39_job_submission_response(QString json);
    ~OAIV0_0_39_job_submission_response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_39_meta getMeta() const;
    void setMeta(const OAIV0_0_39_meta &meta);
    bool is_meta_Set() const;
    bool is_meta_Valid() const;

    QList<OAIV0_0_39_error> getErrors() const;
    void setErrors(const QList<OAIV0_0_39_error> &errors);
    bool is_errors_Set() const;
    bool is_errors_Valid() const;

    QList<OAIV0_0_39_warning> getWarnings() const;
    void setWarnings(const QList<OAIV0_0_39_warning> &warnings);
    bool is_warnings_Set() const;
    bool is_warnings_Valid() const;

    qint32 getJobId() const;
    void setJobId(const qint32 &job_id);
    bool is_job_id_Set() const;
    bool is_job_id_Valid() const;

    QString getStepId() const;
    void setStepId(const QString &step_id);
    bool is_step_id_Set() const;
    bool is_step_id_Valid() const;

    QString getJobSubmitUserMsg() const;
    void setJobSubmitUserMsg(const QString &job_submit_user_msg);
    bool is_job_submit_user_msg_Set() const;
    bool is_job_submit_user_msg_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_39_meta m_meta;
    bool m_meta_isSet;
    bool m_meta_isValid;

    QList<OAIV0_0_39_error> m_errors;
    bool m_errors_isSet;
    bool m_errors_isValid;

    QList<OAIV0_0_39_warning> m_warnings;
    bool m_warnings_isSet;
    bool m_warnings_isValid;

    qint32 m_job_id;
    bool m_job_id_isSet;
    bool m_job_id_isValid;

    QString m_step_id;
    bool m_step_id_isSet;
    bool m_step_id_isValid;

    QString m_job_submit_user_msg;
    bool m_job_submit_user_msg_isSet;
    bool m_job_submit_user_msg_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_39_job_submission_response)

#endif // OAIV0_0_39_job_submission_response_H
