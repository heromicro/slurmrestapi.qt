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
 * OAIV0_0_40_partition_info_defaults.h
 *
 * 
 */

#ifndef OAIV0_0_40_partition_info_defaults_H
#define OAIV0_0_40_partition_info_defaults_H

#include <QJsonObject>

#include "OAIV0_0_40_uint32_no_val.h"
#include "OAIV0_0_40_uint64_no_val.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_40_uint64_no_val;
class OAIV0_0_40_uint32_no_val;

class OAIV0_0_40_partition_info_defaults : public OAIObject {
public:
    OAIV0_0_40_partition_info_defaults();
    OAIV0_0_40_partition_info_defaults(QString json);
    ~OAIV0_0_40_partition_info_defaults() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint64 getMemoryPerCpu() const;
    void setMemoryPerCpu(const qint64 &memory_per_cpu);
    bool is_memory_per_cpu_Set() const;
    bool is_memory_per_cpu_Valid() const;

    OAIV0_0_40_uint64_no_val getPartitionMemoryPerCpu() const;
    void setPartitionMemoryPerCpu(const OAIV0_0_40_uint64_no_val &partition_memory_per_cpu);
    bool is_partition_memory_per_cpu_Set() const;
    bool is_partition_memory_per_cpu_Valid() const;

    OAIV0_0_40_uint64_no_val getPartitionMemoryPerNode() const;
    void setPartitionMemoryPerNode(const OAIV0_0_40_uint64_no_val &partition_memory_per_node);
    bool is_partition_memory_per_node_Set() const;
    bool is_partition_memory_per_node_Valid() const;

    OAIV0_0_40_uint32_no_val getTime() const;
    void setTime(const OAIV0_0_40_uint32_no_val &time);
    bool is_time_Set() const;
    bool is_time_Valid() const;

    QString getJob() const;
    void setJob(const QString &job);
    bool is_job_Set() const;
    bool is_job_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint64 m_memory_per_cpu;
    bool m_memory_per_cpu_isSet;
    bool m_memory_per_cpu_isValid;

    OAIV0_0_40_uint64_no_val m_partition_memory_per_cpu;
    bool m_partition_memory_per_cpu_isSet;
    bool m_partition_memory_per_cpu_isValid;

    OAIV0_0_40_uint64_no_val m_partition_memory_per_node;
    bool m_partition_memory_per_node_isSet;
    bool m_partition_memory_per_node_isValid;

    OAIV0_0_40_uint32_no_val m_time;
    bool m_time_isSet;
    bool m_time_isValid;

    QString m_job;
    bool m_job_isSet;
    bool m_job_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_40_partition_info_defaults)

#endif // OAIV0_0_40_partition_info_defaults_H