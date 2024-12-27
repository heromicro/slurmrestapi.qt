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
 * OAIV0_0_39_partition_info_nodes.h
 *
 * 
 */

#ifndef OAIV0_0_39_partition_info_nodes_H
#define OAIV0_0_39_partition_info_nodes_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {

class OAIV0_0_39_partition_info_nodes : public OAIObject {
public:
    OAIV0_0_39_partition_info_nodes();
    OAIV0_0_39_partition_info_nodes(QString json);
    ~OAIV0_0_39_partition_info_nodes() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAllowedAllocation() const;
    void setAllowedAllocation(const QString &allowed_allocation);
    bool is_allowed_allocation_Set() const;
    bool is_allowed_allocation_Valid() const;

    QString getConfigured() const;
    void setConfigured(const QString &configured);
    bool is_configured_Set() const;
    bool is_configured_Valid() const;

    qint32 getTotal() const;
    void setTotal(const qint32 &total);
    bool is_total_Set() const;
    bool is_total_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_allowed_allocation;
    bool m_allowed_allocation_isSet;
    bool m_allowed_allocation_isValid;

    QString m_configured;
    bool m_configured_isSet;
    bool m_configured_isValid;

    qint32 m_total;
    bool m_total_isSet;
    bool m_total_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_39_partition_info_nodes)

#endif // OAIV0_0_39_partition_info_nodes_H
