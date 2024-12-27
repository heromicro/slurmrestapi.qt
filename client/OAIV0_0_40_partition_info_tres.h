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
 * OAIV0_0_40_partition_info_tres.h
 *
 * 
 */

#ifndef OAIV0_0_40_partition_info_tres_H
#define OAIV0_0_40_partition_info_tres_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {

class OAIV0_0_40_partition_info_tres : public OAIObject {
public:
    OAIV0_0_40_partition_info_tres();
    OAIV0_0_40_partition_info_tres(QString json);
    ~OAIV0_0_40_partition_info_tres() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getBillingWeights() const;
    void setBillingWeights(const QString &billing_weights);
    bool is_billing_weights_Set() const;
    bool is_billing_weights_Valid() const;

    QString getConfigured() const;
    void setConfigured(const QString &configured);
    bool is_configured_Set() const;
    bool is_configured_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_billing_weights;
    bool m_billing_weights_isSet;
    bool m_billing_weights_isValid;

    QString m_configured;
    bool m_configured_isSet;
    bool m_configured_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_40_partition_info_tres)

#endif // OAIV0_0_40_partition_info_tres_H