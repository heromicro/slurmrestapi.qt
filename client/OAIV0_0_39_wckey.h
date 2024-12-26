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
 * OAIV0_0_39_wckey.h
 *
 * 
 */

#ifndef OAIV0_0_39_wckey_H
#define OAIV0_0_39_wckey_H

#include <QJsonObject>

#include "OAIV0_0_39_accounting.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_39_accounting;

class OAIV0_0_39_wckey : public OAIObject {
public:
    OAIV0_0_39_wckey();
    OAIV0_0_39_wckey(QString json);
    ~OAIV0_0_39_wckey() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIV0_0_39_accounting> getAccounting() const;
    void setAccounting(const QList<OAIV0_0_39_accounting> &accounting);
    bool is_accounting_Set() const;
    bool is_accounting_Valid() const;

    QString getCluster() const;
    void setCluster(const QString &cluster);
    bool is_cluster_Set() const;
    bool is_cluster_Valid() const;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getUser() const;
    void setUser(const QString &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    QList<QString> getFlags() const;
    void setFlags(const QList<QString> &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIV0_0_39_accounting> m_accounting;
    bool m_accounting_isSet;
    bool m_accounting_isValid;

    QString m_cluster;
    bool m_cluster_isSet;
    bool m_cluster_isValid;

    qint32 m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_user;
    bool m_user_isSet;
    bool m_user_isValid;

    QList<QString> m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_39_wckey)

#endif // OAIV0_0_39_wckey_H
