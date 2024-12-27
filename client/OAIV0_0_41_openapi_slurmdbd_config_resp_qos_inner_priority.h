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
 * OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_priority.h
 *
 * Priority
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_priority_H
#define OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_priority_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {

class OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_priority : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_priority();
    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_priority(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_priority() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isRSet() const;
    void setRSet(const bool &r_set);
    bool is_r_set_Set() const;
    bool is_r_set_Valid() const;

    bool isInfinite() const;
    void setInfinite(const bool &infinite);
    bool is_infinite_Set() const;
    bool is_infinite_Valid() const;

    qint32 getNumber() const;
    void setNumber(const qint32 &number);
    bool is_number_Set() const;
    bool is_number_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool m_r_set;
    bool m_r_set_isSet;
    bool m_r_set_isValid;

    bool m_infinite;
    bool m_infinite_isSet;
    bool m_infinite_isValid;

    qint32 m_number;
    bool m_number_isSet;
    bool m_number_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_priority)

#endif // OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_priority_H
