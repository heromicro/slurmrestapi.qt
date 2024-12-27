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
 * OAIV0_0_40_cluster_rec_controller.h
 *
 * 
 */

#ifndef OAIV0_0_40_cluster_rec_controller_H
#define OAIV0_0_40_cluster_rec_controller_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {

class OAIV0_0_40_cluster_rec_controller : public OAIObject {
public:
    OAIV0_0_40_cluster_rec_controller();
    OAIV0_0_40_cluster_rec_controller(QString json);
    ~OAIV0_0_40_cluster_rec_controller() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getHost() const;
    void setHost(const QString &host);
    bool is_host_Set() const;
    bool is_host_Valid() const;

    qint32 getPort() const;
    void setPort(const qint32 &port);
    bool is_port_Set() const;
    bool is_port_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_host;
    bool m_host_isSet;
    bool m_host_isValid;

    qint32 m_port;
    bool m_port_isSet;
    bool m_port_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_40_cluster_rec_controller)

#endif // OAIV0_0_40_cluster_rec_controller_H
