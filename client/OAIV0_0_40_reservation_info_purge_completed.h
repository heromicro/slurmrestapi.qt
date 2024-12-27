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
 * OAIV0_0_40_reservation_info_purge_completed.h
 *
 * 
 */

#ifndef OAIV0_0_40_reservation_info_purge_completed_H
#define OAIV0_0_40_reservation_info_purge_completed_H

#include <QJsonObject>

#include "OAIV0_0_40_uint32_no_val.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_40_uint32_no_val;

class OAIV0_0_40_reservation_info_purge_completed : public OAIObject {
public:
    OAIV0_0_40_reservation_info_purge_completed();
    OAIV0_0_40_reservation_info_purge_completed(QString json);
    ~OAIV0_0_40_reservation_info_purge_completed() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_40_uint32_no_val getTime() const;
    void setTime(const OAIV0_0_40_uint32_no_val &time);
    bool is_time_Set() const;
    bool is_time_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_40_uint32_no_val m_time;
    bool m_time_isSet;
    bool m_time_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_40_reservation_info_purge_completed)

#endif // OAIV0_0_40_reservation_info_purge_completed_H
