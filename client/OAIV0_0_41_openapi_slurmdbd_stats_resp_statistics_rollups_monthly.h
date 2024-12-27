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
 * OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_H
#define OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_duration.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_duration;

class OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly();
    OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getCount() const;
    void setCount(const qint32 &count);
    bool is_count_Set() const;
    bool is_count_Valid() const;

    qint64 getLastRun() const;
    void setLastRun(const qint64 &last_run);
    bool is_last_run_Set() const;
    bool is_last_run_Valid() const;

    OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_duration getDuration() const;
    void setDuration(const OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_duration &duration);
    bool is_duration_Set() const;
    bool is_duration_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_count;
    bool m_count_isSet;
    bool m_count_isValid;

    qint64 m_last_run;
    bool m_last_run_isSet;
    bool m_last_run_isValid;

    OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_duration m_duration;
    bool m_duration_isSet;
    bool m_duration_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly)

#endif // OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_monthly_H
