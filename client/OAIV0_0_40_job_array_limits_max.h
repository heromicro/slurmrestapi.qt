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
 * OAIV0_0_40_job_array_limits_max.h
 *
 * 
 */

#ifndef OAIV0_0_40_job_array_limits_max_H
#define OAIV0_0_40_job_array_limits_max_H

#include <QJsonObject>

#include "OAIV0_0_40_job_array_limits_max_running.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_40_job_array_limits_max_running;

class OAIV0_0_40_job_array_limits_max : public OAIObject {
public:
    OAIV0_0_40_job_array_limits_max();
    OAIV0_0_40_job_array_limits_max(QString json);
    ~OAIV0_0_40_job_array_limits_max() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_40_job_array_limits_max_running getRunning() const;
    void setRunning(const OAIV0_0_40_job_array_limits_max_running &running);
    bool is_running_Set() const;
    bool is_running_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_40_job_array_limits_max_running m_running;
    bool m_running_isSet;
    bool m_running_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_40_job_array_limits_max)

#endif // OAIV0_0_40_job_array_limits_max_H
