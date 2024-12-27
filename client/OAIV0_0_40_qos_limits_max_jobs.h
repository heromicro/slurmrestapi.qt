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
 * OAIV0_0_40_qos_limits_max_jobs.h
 *
 * 
 */

#ifndef OAIV0_0_40_qos_limits_max_jobs_H
#define OAIV0_0_40_qos_limits_max_jobs_H

#include <QJsonObject>

#include "OAIV0_0_40_qos_limits_max_jobs_active_jobs.h"
#include "OAIV0_0_40_qos_limits_max_jobs_active_jobs_per.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_40_qos_limits_max_jobs_active_jobs;
class OAIV0_0_40_qos_limits_max_jobs_active_jobs_per;

class OAIV0_0_40_qos_limits_max_jobs : public OAIObject {
public:
    OAIV0_0_40_qos_limits_max_jobs();
    OAIV0_0_40_qos_limits_max_jobs(QString json);
    ~OAIV0_0_40_qos_limits_max_jobs() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_40_qos_limits_max_jobs_active_jobs getActiveJobs() const;
    void setActiveJobs(const OAIV0_0_40_qos_limits_max_jobs_active_jobs &active_jobs);
    bool is_active_jobs_Set() const;
    bool is_active_jobs_Valid() const;

    OAIV0_0_40_qos_limits_max_jobs_active_jobs_per getPer() const;
    void setPer(const OAIV0_0_40_qos_limits_max_jobs_active_jobs_per &per);
    bool is_per_Set() const;
    bool is_per_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_40_qos_limits_max_jobs_active_jobs m_active_jobs;
    bool m_active_jobs_isSet;
    bool m_active_jobs_isValid;

    OAIV0_0_40_qos_limits_max_jobs_active_jobs_per m_per;
    bool m_per_isSet;
    bool m_per_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_40_qos_limits_max_jobs)

#endif // OAIV0_0_40_qos_limits_max_jobs_H
