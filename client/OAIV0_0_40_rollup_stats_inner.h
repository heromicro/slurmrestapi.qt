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
 * OAIV0_0_40_rollup_stats_inner.h
 *
 * recorded rollup statistics
 */

#ifndef OAIV0_0_40_rollup_stats_inner_H
#define OAIV0_0_40_rollup_stats_inner_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {

class OAIV0_0_40_rollup_stats_inner : public OAIObject {
public:
    OAIV0_0_40_rollup_stats_inner();
    OAIV0_0_40_rollup_stats_inner(QString json);
    ~OAIV0_0_40_rollup_stats_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    qint32 getLastRun() const;
    void setLastRun(const qint32 &last_run);
    bool is_last_run_Set() const;
    bool is_last_run_Valid() const;

    qint64 getMaxCycle() const;
    void setMaxCycle(const qint64 &max_cycle);
    bool is_max_cycle_Set() const;
    bool is_max_cycle_Valid() const;

    qint64 getTotalTime() const;
    void setTotalTime(const qint64 &total_time);
    bool is_total_time_Set() const;
    bool is_total_time_Valid() const;

    qint64 getTotalCycles() const;
    void setTotalCycles(const qint64 &total_cycles);
    bool is_total_cycles_Set() const;
    bool is_total_cycles_Valid() const;

    qint64 getMeanCycles() const;
    void setMeanCycles(const qint64 &mean_cycles);
    bool is_mean_cycles_Set() const;
    bool is_mean_cycles_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    qint32 m_last_run;
    bool m_last_run_isSet;
    bool m_last_run_isValid;

    qint64 m_max_cycle;
    bool m_max_cycle_isSet;
    bool m_max_cycle_isValid;

    qint64 m_total_time;
    bool m_total_time_isSet;
    bool m_total_time_isValid;

    qint64 m_total_cycles;
    bool m_total_cycles_isSet;
    bool m_total_cycles_isValid;

    qint64 m_mean_cycles;
    bool m_mean_cycles_isSet;
    bool m_mean_cycles_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_40_rollup_stats_inner)

#endif // OAIV0_0_40_rollup_stats_inner_H
