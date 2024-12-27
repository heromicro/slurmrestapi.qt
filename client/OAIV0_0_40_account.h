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
 * OAIV0_0_40_account.h
 *
 * 
 */

#ifndef OAIV0_0_40_account_H
#define OAIV0_0_40_account_H

#include <QJsonObject>

#include "OAIV0_0_40_assoc_short.h"
#include "OAIV0_0_40_coord.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_40_assoc_short;
class OAIV0_0_40_coord;

class OAIV0_0_40_account : public OAIObject {
public:
    OAIV0_0_40_account();
    OAIV0_0_40_account(QString json);
    ~OAIV0_0_40_account() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIV0_0_40_assoc_short> getAssociations() const;
    void setAssociations(const QList<OAIV0_0_40_assoc_short> &associations);
    bool is_associations_Set() const;
    bool is_associations_Valid() const;

    QList<OAIV0_0_40_coord> getCoordinators() const;
    void setCoordinators(const QList<OAIV0_0_40_coord> &coordinators);
    bool is_coordinators_Set() const;
    bool is_coordinators_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getOrganization() const;
    void setOrganization(const QString &organization);
    bool is_organization_Set() const;
    bool is_organization_Valid() const;

    QList<QString> getFlags() const;
    void setFlags(const QList<QString> &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIV0_0_40_assoc_short> m_associations;
    bool m_associations_isSet;
    bool m_associations_isValid;

    QList<OAIV0_0_40_coord> m_coordinators;
    bool m_coordinators_isSet;
    bool m_coordinators_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_organization;
    bool m_organization_isSet;
    bool m_organization_isValid;

    QList<QString> m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_40_account)

#endif // OAIV0_0_40_account_H
