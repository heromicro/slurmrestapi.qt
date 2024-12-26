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
 * OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_nodes.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_nodes_H
#define OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_nodes_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_nodes : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_nodes();
    OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_nodes(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_nodes() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getCount() const;
    void setCount(const qint32 &count);
    bool is_count_Set() const;
    bool is_count_Valid() const;

    QString getRange() const;
    void setRange(const QString &range);
    bool is_range_Set() const;
    bool is_range_Valid() const;

    QList<QString> getList() const;
    void setList(const QList<QString> &list);
    bool is_list_Set() const;
    bool is_list_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_count;
    bool m_count_isSet;
    bool m_count_isValid;

    QString m_range;
    bool m_range_isSet;
    bool m_range_isValid;

    QList<QString> m_list;
    bool m_list_isSet;
    bool m_list_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_nodes)

#endif // OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_nodes_H
