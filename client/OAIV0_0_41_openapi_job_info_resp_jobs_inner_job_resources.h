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
 * OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources.h
 *
 * Resources used by the job
 */

#ifndef OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_H
#define OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes.h"
#include "OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_threads_per_core.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes;
class OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_threads_per_core;

class OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources : public OAIObject {
public:
    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources();
    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources(QString json);
    ~OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<QString> getSelectType() const;
    void setSelectType(const QList<QString> &select_type);
    bool is_select_type_Set() const;
    bool is_select_type_Valid() const;

    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes getNodes() const;
    void setNodes(const OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes &nodes);
    bool is_nodes_Set() const;
    bool is_nodes_Valid() const;

    qint32 getCpus() const;
    void setCpus(const qint32 &cpus);
    bool is_cpus_Set() const;
    bool is_cpus_Valid() const;

    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_threads_per_core getThreadsPerCore() const;
    void setThreadsPerCore(const OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_threads_per_core &threads_per_core);
    bool is_threads_per_core_Set() const;
    bool is_threads_per_core_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<QString> m_select_type;
    bool m_select_type_isSet;
    bool m_select_type_isValid;

    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes m_nodes;
    bool m_nodes_isSet;
    bool m_nodes_isValid;

    qint32 m_cpus;
    bool m_cpus_isSet;
    bool m_cpus_isValid;

    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_threads_per_core m_threads_per_core;
    bool m_threads_per_core_isSet;
    bool m_threads_per_core_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources)

#endif // OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_H
