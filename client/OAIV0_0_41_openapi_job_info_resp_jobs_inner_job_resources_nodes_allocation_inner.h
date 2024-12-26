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
 * OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner.h
 *
 * Job resources for a node
 */

#ifndef OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_H
#define OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus.h"
#include "OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory.h"
#include "OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus;
class OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory;
class OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner;

class OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner : public OAIObject {
public:
    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner();
    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner(QString json);
    ~OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getIndex() const;
    void setIndex(const qint32 &index);
    bool is_index_Set() const;
    bool is_index_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus getCpus() const;
    void setCpus(const OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus &cpus);
    bool is_cpus_Set() const;
    bool is_cpus_Valid() const;

    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory getMemory() const;
    void setMemory(const OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory &memory);
    bool is_memory_Set() const;
    bool is_memory_Valid() const;

    QList<OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner> getSockets() const;
    void setSockets(const QList<OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner> &sockets);
    bool is_sockets_Set() const;
    bool is_sockets_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_index;
    bool m_index_isSet;
    bool m_index_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_cpus m_cpus;
    bool m_cpus_isSet;
    bool m_cpus_isValid;

    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_memory m_memory;
    bool m_memory_isSet;
    bool m_memory_isValid;

    QList<OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_sockets_inner> m_sockets;
    bool m_sockets_isSet;
    bool m_sockets_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner)

#endif // OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner_H
