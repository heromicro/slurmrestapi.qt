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
 * OAIV0_0_40_account_short.h
 *
 * 
 */

#ifndef OAIV0_0_40_account_short_H
#define OAIV0_0_40_account_short_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV0_0_40_account_short : public OAIObject {
public:
    OAIV0_0_40_account_short();
    OAIV0_0_40_account_short(QString json);
    ~OAIV0_0_40_account_short() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getOrganization() const;
    void setOrganization(const QString &organization);
    bool is_organization_Set() const;
    bool is_organization_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_organization;
    bool m_organization_isSet;
    bool m_organization_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_40_account_short)

#endif // OAIV0_0_40_account_short_H
