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
 * OAIV0_0_40_assoc_short.h
 *
 * 
 */

#ifndef OAIV0_0_40_assoc_short_H
#define OAIV0_0_40_assoc_short_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV0_0_40_assoc_short : public OAIObject {
public:
    OAIV0_0_40_assoc_short();
    OAIV0_0_40_assoc_short(QString json);
    ~OAIV0_0_40_assoc_short() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAccount() const;
    void setAccount(const QString &account);
    bool is_account_Set() const;
    bool is_account_Valid() const;

    QString getCluster() const;
    void setCluster(const QString &cluster);
    bool is_cluster_Set() const;
    bool is_cluster_Valid() const;

    QString getPartition() const;
    void setPartition(const QString &partition);
    bool is_partition_Set() const;
    bool is_partition_Valid() const;

    QString getUser() const;
    void setUser(const QString &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_account;
    bool m_account_isSet;
    bool m_account_isValid;

    QString m_cluster;
    bool m_cluster_isSet;
    bool m_cluster_isValid;

    QString m_partition;
    bool m_partition_isSet;
    bool m_partition_isValid;

    QString m_user;
    bool m_user_isSet;
    bool m_user_isValid;

    qint32 m_id;
    bool m_id_isSet;
    bool m_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_40_assoc_short)

#endif // OAIV0_0_40_assoc_short_H
