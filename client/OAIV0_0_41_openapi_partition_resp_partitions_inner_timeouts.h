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
 * OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts_H
#define OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts_resume.h"
#include "OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts_suspend.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts_resume;
class OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts_suspend;

class OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts : public OAIObject {
public:
    OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts();
    OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts(QString json);
    ~OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts_resume getResume() const;
    void setResume(const OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts_resume &resume);
    bool is_resume_Set() const;
    bool is_resume_Valid() const;

    OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts_suspend getSuspend() const;
    void setSuspend(const OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts_suspend &suspend);
    bool is_suspend_Set() const;
    bool is_suspend_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts_resume m_resume;
    bool m_resume_isSet;
    bool m_resume_isValid;

    OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts_suspend m_suspend;
    bool m_suspend_isSet;
    bool m_suspend_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts)

#endif // OAIV0_0_41_openapi_partition_resp_partitions_inner_timeouts_H
