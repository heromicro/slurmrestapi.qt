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
 * OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner_H
#define OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner_H

#include <QJsonObject>

#include "OAIV0_0_40_instance_time.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_40_instance_time;

class OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner();
    OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCluster() const;
    void setCluster(const QString &cluster);
    bool is_cluster_Set() const;
    bool is_cluster_Valid() const;

    QString getExtra() const;
    void setExtra(const QString &extra);
    bool is_extra_Set() const;
    bool is_extra_Valid() const;

    QString getInstanceId() const;
    void setInstanceId(const QString &instance_id);
    bool is_instance_id_Set() const;
    bool is_instance_id_Valid() const;

    QString getInstanceType() const;
    void setInstanceType(const QString &instance_type);
    bool is_instance_type_Set() const;
    bool is_instance_type_Valid() const;

    QString getNodeName() const;
    void setNodeName(const QString &node_name);
    bool is_node_name_Set() const;
    bool is_node_name_Valid() const;

    OAIV0_0_40_instance_time getTime() const;
    void setTime(const OAIV0_0_40_instance_time &time);
    bool is_time_Set() const;
    bool is_time_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_cluster;
    bool m_cluster_isSet;
    bool m_cluster_isValid;

    QString m_extra;
    bool m_extra_isSet;
    bool m_extra_isValid;

    QString m_instance_id;
    bool m_instance_id_isSet;
    bool m_instance_id_isValid;

    QString m_instance_type;
    bool m_instance_type_isSet;
    bool m_instance_type_isValid;

    QString m_node_name;
    bool m_node_name_isSet;
    bool m_node_name_isValid;

    OAIV0_0_40_instance_time m_time;
    bool m_time_isSet;
    bool m_time_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner)

#endif // OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner_H
