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
 * OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_H
#define OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner;

class OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes : public OAIObject {
public:
    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes();
    OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes(QString json);
    ~OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getCount() const;
    void setCount(const qint32 &count);
    bool is_count_Set() const;
    bool is_count_Valid() const;

    QList<QString> getSelectType() const;
    void setSelectType(const QList<QString> &select_type);
    bool is_select_type_Set() const;
    bool is_select_type_Valid() const;

    QString getList() const;
    void setList(const QString &list);
    bool is_list_Set() const;
    bool is_list_Valid() const;

    bool isWhole() const;
    void setWhole(const bool &whole);
    bool is_whole_Set() const;
    bool is_whole_Valid() const;

    QList<OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner> getAllocation() const;
    void setAllocation(const QList<OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner> &allocation);
    bool is_allocation_Set() const;
    bool is_allocation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_count;
    bool m_count_isSet;
    bool m_count_isValid;

    QList<QString> m_select_type;
    bool m_select_type_isSet;
    bool m_select_type_isValid;

    QString m_list;
    bool m_list_isSet;
    bool m_list_isValid;

    bool m_whole;
    bool m_whole_isSet;
    bool m_whole_isValid;

    QList<OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner> m_allocation;
    bool m_allocation_isSet;
    bool m_allocation_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes)

#endif // OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_H
