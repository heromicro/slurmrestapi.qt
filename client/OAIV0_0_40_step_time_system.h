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
 * OAIV0_0_40_step_time_system.h
 *
 * 
 */

#ifndef OAIV0_0_40_step_time_system_H
#define OAIV0_0_40_step_time_system_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {

class OAIV0_0_40_step_time_system : public OAIObject {
public:
    OAIV0_0_40_step_time_system();
    OAIV0_0_40_step_time_system(QString json);
    ~OAIV0_0_40_step_time_system() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint64 getSeconds() const;
    void setSeconds(const qint64 &seconds);
    bool is_seconds_Set() const;
    bool is_seconds_Valid() const;

    qint32 getMicroseconds() const;
    void setMicroseconds(const qint32 &microseconds);
    bool is_microseconds_Set() const;
    bool is_microseconds_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint64 m_seconds;
    bool m_seconds_isSet;
    bool m_seconds_isValid;

    qint32 m_microseconds;
    bool m_microseconds_isSet;
    bool m_microseconds_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_40_step_time_system)

#endif // OAIV0_0_40_step_time_system_H
