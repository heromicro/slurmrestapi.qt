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
 * OAIV0_0_39_assoc_max_per.h
 *
 * 
 */

#ifndef OAIV0_0_39_assoc_max_per_H
#define OAIV0_0_39_assoc_max_per_H

#include <QJsonObject>

#include "OAIV0_0_39_assoc_max_per_account.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_39_assoc_max_per_account;

class OAIV0_0_39_assoc_max_per : public OAIObject {
public:
    OAIV0_0_39_assoc_max_per();
    OAIV0_0_39_assoc_max_per(QString json);
    ~OAIV0_0_39_assoc_max_per() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_39_assoc_max_per_account getAccount() const;
    void setAccount(const OAIV0_0_39_assoc_max_per_account &account);
    bool is_account_Set() const;
    bool is_account_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_39_assoc_max_per_account m_account;
    bool m_account_isSet;
    bool m_account_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_39_assoc_max_per)

#endif // OAIV0_0_39_assoc_max_per_H