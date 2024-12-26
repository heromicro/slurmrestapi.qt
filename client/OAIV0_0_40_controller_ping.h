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
 * OAIV0_0_40_controller_ping.h
 *
 * 
 */

#ifndef OAIV0_0_40_controller_ping_H
#define OAIV0_0_40_controller_ping_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV0_0_40_controller_ping : public OAIObject {
public:
    OAIV0_0_40_controller_ping();
    OAIV0_0_40_controller_ping(QString json);
    ~OAIV0_0_40_controller_ping() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getHostname() const;
    void setHostname(const QString &hostname);
    bool is_hostname_Set() const;
    bool is_hostname_Valid() const;

    QString getPinged() const;
    void setPinged(const QString &pinged);
    bool is_pinged_Set() const;
    bool is_pinged_Valid() const;

    qint64 getLatency() const;
    void setLatency(const qint64 &latency);
    bool is_latency_Set() const;
    bool is_latency_Valid() const;

    QString getMode() const;
    void setMode(const QString &mode);
    bool is_mode_Set() const;
    bool is_mode_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_hostname;
    bool m_hostname_isSet;
    bool m_hostname_isValid;

    QString m_pinged;
    bool m_pinged_isSet;
    bool m_pinged_isValid;

    qint64 m_latency;
    bool m_latency_isSet;
    bool m_latency_isValid;

    QString m_mode;
    bool m_mode_isSet;
    bool m_mode_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_40_controller_ping)

#endif // OAIV0_0_40_controller_ping_H
