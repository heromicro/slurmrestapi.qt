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
 * OAIV0_0_39_stats_rec.h
 *
 * 
 */

#ifndef OAIV0_0_39_stats_rec_H
#define OAIV0_0_39_stats_rec_H

#include <QJsonObject>

#include "OAIV0_0_39_stats_rpc.h"
#include "OAIV0_0_39_stats_user.h"
#include "OAIV0_0_40_rollup_stats_inner.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_40_rollup_stats_inner;
class OAIV0_0_39_stats_rpc;
class OAIV0_0_39_stats_user;

class OAIV0_0_39_stats_rec : public OAIObject {
public:
    OAIV0_0_39_stats_rec();
    OAIV0_0_39_stats_rec(QString json);
    ~OAIV0_0_39_stats_rec() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint64 getTimeStart() const;
    void setTimeStart(const qint64 &time_start);
    bool is_time_start_Set() const;
    bool is_time_start_Valid() const;

    QList<OAIV0_0_40_rollup_stats_inner> getRollups() const;
    void setRollups(const QList<OAIV0_0_40_rollup_stats_inner> &rollups);
    bool is_rollups_Set() const;
    bool is_rollups_Valid() const;

    QList<OAIV0_0_39_stats_rpc> getRpcs() const;
    void setRpcs(const QList<OAIV0_0_39_stats_rpc> &rpcs);
    bool is_rpcs_Set() const;
    bool is_rpcs_Valid() const;

    QList<OAIV0_0_39_stats_user> getUsers() const;
    void setUsers(const QList<OAIV0_0_39_stats_user> &users);
    bool is_users_Set() const;
    bool is_users_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint64 m_time_start;
    bool m_time_start_isSet;
    bool m_time_start_isValid;

    QList<OAIV0_0_40_rollup_stats_inner> m_rollups;
    bool m_rollups_isSet;
    bool m_rollups_isValid;

    QList<OAIV0_0_39_stats_rpc> m_rpcs;
    bool m_rpcs_isSet;
    bool m_rpcs_isValid;

    QList<OAIV0_0_39_stats_user> m_users;
    bool m_users_isSet;
    bool m_users_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_39_stats_rec)

#endif // OAIV0_0_39_stats_rec_H
