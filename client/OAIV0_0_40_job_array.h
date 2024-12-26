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
 * OAIV0_0_40_job_array.h
 *
 * 
 */

#ifndef OAIV0_0_40_job_array_H
#define OAIV0_0_40_job_array_H

#include <QJsonObject>

#include "OAIV0_0_40_job_array_limits.h"
#include "OAIV0_0_40_uint32_no_val.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_40_job_array_limits;
class OAIV0_0_40_uint32_no_val;

class OAIV0_0_40_job_array : public OAIObject {
public:
    OAIV0_0_40_job_array();
    OAIV0_0_40_job_array(QString json);
    ~OAIV0_0_40_job_array() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getJobId() const;
    void setJobId(const qint32 &job_id);
    bool is_job_id_Set() const;
    bool is_job_id_Valid() const;

    OAIV0_0_40_job_array_limits getLimits() const;
    void setLimits(const OAIV0_0_40_job_array_limits &limits);
    bool is_limits_Set() const;
    bool is_limits_Valid() const;

    OAIV0_0_40_uint32_no_val getTaskId() const;
    void setTaskId(const OAIV0_0_40_uint32_no_val &task_id);
    bool is_task_id_Set() const;
    bool is_task_id_Valid() const;

    QString getTask() const;
    void setTask(const QString &task);
    bool is_task_Set() const;
    bool is_task_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_job_id;
    bool m_job_id_isSet;
    bool m_job_id_isValid;

    OAIV0_0_40_job_array_limits m_limits;
    bool m_limits_isSet;
    bool m_limits_isValid;

    OAIV0_0_40_uint32_no_val m_task_id;
    bool m_task_id_isSet;
    bool m_task_id_isValid;

    QString m_task;
    bool m_task_isSet;
    bool m_task_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_40_job_array)

#endif // OAIV0_0_40_job_array_H