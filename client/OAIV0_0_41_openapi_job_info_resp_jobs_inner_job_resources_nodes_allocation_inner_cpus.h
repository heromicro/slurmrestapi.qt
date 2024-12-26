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
 * OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus_H
#define OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus : public OAIObject {
public:
    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus();
    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus(QString json);
    ~OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getCount() const;
    void setCount(const qint32 &count);
    bool is_count_Set() const;
    bool is_count_Valid() const;

    qint32 getUsed() const;
    void setUsed(const qint32 &used);
    bool is_used_Set() const;
    bool is_used_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_count;
    bool m_count_isSet;
    bool m_count_isValid;

    qint32 m_used;
    bool m_used_isSet;
    bool m_used_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus)

#endif // OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus_H
