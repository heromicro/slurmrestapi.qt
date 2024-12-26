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
 * OAIV0_0_40_acct_gather_energy.h
 *
 * 
 */

#ifndef OAIV0_0_40_acct_gather_energy_H
#define OAIV0_0_40_acct_gather_energy_H

#include <QJsonObject>

#include "OAIV0_0_40_uint32_no_val.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_40_uint32_no_val;

class OAIV0_0_40_acct_gather_energy : public OAIObject {
public:
    OAIV0_0_40_acct_gather_energy();
    OAIV0_0_40_acct_gather_energy(QString json);
    ~OAIV0_0_40_acct_gather_energy() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getAverageWatts() const;
    void setAverageWatts(const qint32 &average_watts);
    bool is_average_watts_Set() const;
    bool is_average_watts_Valid() const;

    qint64 getBaseConsumedEnergy() const;
    void setBaseConsumedEnergy(const qint64 &base_consumed_energy);
    bool is_base_consumed_energy_Set() const;
    bool is_base_consumed_energy_Valid() const;

    qint64 getConsumedEnergy() const;
    void setConsumedEnergy(const qint64 &consumed_energy);
    bool is_consumed_energy_Set() const;
    bool is_consumed_energy_Valid() const;

    OAIV0_0_40_uint32_no_val getCurrentWatts() const;
    void setCurrentWatts(const OAIV0_0_40_uint32_no_val &current_watts);
    bool is_current_watts_Set() const;
    bool is_current_watts_Valid() const;

    qint64 getPreviousConsumedEnergy() const;
    void setPreviousConsumedEnergy(const qint64 &previous_consumed_energy);
    bool is_previous_consumed_energy_Set() const;
    bool is_previous_consumed_energy_Valid() const;

    qint64 getLastCollected() const;
    void setLastCollected(const qint64 &last_collected);
    bool is_last_collected_Set() const;
    bool is_last_collected_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_average_watts;
    bool m_average_watts_isSet;
    bool m_average_watts_isValid;

    qint64 m_base_consumed_energy;
    bool m_base_consumed_energy_isSet;
    bool m_base_consumed_energy_isValid;

    qint64 m_consumed_energy;
    bool m_consumed_energy_isSet;
    bool m_consumed_energy_isValid;

    OAIV0_0_40_uint32_no_val m_current_watts;
    bool m_current_watts_isSet;
    bool m_current_watts_isValid;

    qint64 m_previous_consumed_energy;
    bool m_previous_consumed_energy_isSet;
    bool m_previous_consumed_energy_isValid;

    qint64 m_last_collected;
    bool m_last_collected_isSet;
    bool m_last_collected_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_40_acct_gather_energy)

#endif // OAIV0_0_40_acct_gather_energy_H
