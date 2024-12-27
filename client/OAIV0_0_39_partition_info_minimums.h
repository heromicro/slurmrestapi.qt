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
 * OAIV0_0_39_partition_info_minimums.h
 *
 * 
 */

#ifndef OAIV0_0_39_partition_info_minimums_H
#define OAIV0_0_39_partition_info_minimums_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {

class OAIV0_0_39_partition_info_minimums : public OAIObject {
public:
    OAIV0_0_39_partition_info_minimums();
    OAIV0_0_39_partition_info_minimums(QString json);
    ~OAIV0_0_39_partition_info_minimums() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getNodes() const;
    void setNodes(const qint32 &nodes);
    bool is_nodes_Set() const;
    bool is_nodes_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_nodes;
    bool m_nodes_isSet;
    bool m_nodes_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_39_partition_info_minimums)

#endif // OAIV0_0_39_partition_info_minimums_H
