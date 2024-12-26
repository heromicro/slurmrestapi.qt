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
 * OAIV0_0_40_partition_info_accounts.h
 *
 * 
 */

#ifndef OAIV0_0_40_partition_info_accounts_H
#define OAIV0_0_40_partition_info_accounts_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV0_0_40_partition_info_accounts : public OAIObject {
public:
    OAIV0_0_40_partition_info_accounts();
    OAIV0_0_40_partition_info_accounts(QString json);
    ~OAIV0_0_40_partition_info_accounts() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAllowed() const;
    void setAllowed(const QString &allowed);
    bool is_allowed_Set() const;
    bool is_allowed_Valid() const;

    QString getDeny() const;
    void setDeny(const QString &deny);
    bool is_deny_Set() const;
    bool is_deny_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_allowed;
    bool m_allowed_isSet;
    bool m_allowed_isValid;

    QString m_deny;
    bool m_deny_isSet;
    bool m_deny_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_40_partition_info_accounts)

#endif // OAIV0_0_40_partition_info_accounts_H