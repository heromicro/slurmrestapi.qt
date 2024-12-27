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
 * OAIV0_0_39_stats_rpc.h
 *
 * 
 */

#ifndef OAIV0_0_39_stats_rpc_H
#define OAIV0_0_39_stats_rpc_H

#include <QJsonObject>

#include "OAIV0_0_39_stats_rpc_time.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_39_stats_rpc_time;

class OAIV0_0_39_stats_rpc : public OAIObject {
public:
    OAIV0_0_39_stats_rpc();
    OAIV0_0_39_stats_rpc(QString json);
    ~OAIV0_0_39_stats_rpc() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getRpc() const;
    void setRpc(const QString &rpc);
    bool is_rpc_Set() const;
    bool is_rpc_Valid() const;

    qint32 getCount() const;
    void setCount(const qint32 &count);
    bool is_count_Set() const;
    bool is_count_Valid() const;

    OAIV0_0_39_stats_rpc_time getTime() const;
    void setTime(const OAIV0_0_39_stats_rpc_time &time);
    bool is_time_Set() const;
    bool is_time_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_rpc;
    bool m_rpc_isSet;
    bool m_rpc_isValid;

    qint32 m_count;
    bool m_count_isSet;
    bool m_count_isValid;

    OAIV0_0_39_stats_rpc_time m_time;
    bool m_time_isSet;
    bool m_time_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_39_stats_rpc)

#endif // OAIV0_0_39_stats_rpc_H
