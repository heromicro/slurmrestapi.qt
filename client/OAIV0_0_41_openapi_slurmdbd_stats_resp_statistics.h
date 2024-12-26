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
 * OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics.h
 *
 * statistics
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_H
#define OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_RPCs_inner.h"
#include "OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups.h"
#include "OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_users_inner.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups;
class OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_RPCs_inner;
class OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_users_inner;

class OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics();
    OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint64 getTimeStart() const;
    void setTimeStart(const qint64 &time_start);
    bool is_time_start_Set() const;
    bool is_time_start_Valid() const;

    OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups getRollups() const;
    void setRollups(const OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups &rollups);
    bool is_rollups_Set() const;
    bool is_rollups_Valid() const;

    QList<OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_RPCs_inner> getRpcs() const;
    void setRpcs(const QList<OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_RPCs_inner> &rpcs);
    bool is_rpcs_Set() const;
    bool is_rpcs_Valid() const;

    QList<OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_users_inner> getUsers() const;
    void setUsers(const QList<OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_users_inner> &users);
    bool is_users_Set() const;
    bool is_users_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint64 m_time_start;
    bool m_time_start_isSet;
    bool m_time_start_isValid;

    OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups m_rollups;
    bool m_rollups_isSet;
    bool m_rollups_isValid;

    QList<OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_RPCs_inner> m_rpcs;
    bool m_rpcs_isSet;
    bool m_rpcs_isValid;

    QList<OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_users_inner> m_users;
    bool m_users_isSet;
    bool m_users_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics)

#endif // OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_H