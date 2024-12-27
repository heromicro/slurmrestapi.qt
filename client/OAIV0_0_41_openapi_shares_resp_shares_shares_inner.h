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
 * OAIV0_0_41_openapi_shares_resp_shares_shares_inner.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_shares_resp_shares_shares_inner_H
#define OAIV0_0_41_openapi_shares_resp_shares_shares_inner_H

#include <QJsonObject>

#include "OAIV0_0_40_assoc_shares_obj_wrap_fairshare.h"
#include "OAIV0_0_41_openapi_shares_resp_shares_shares_inner_shares.h"
#include "OAIV0_0_41_openapi_shares_resp_shares_shares_inner_shares_normalized.h"
#include "OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres.h"
#include "OAIV0_0_41_openapi_shares_resp_shares_shares_inner_usage_normalized.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_41_openapi_shares_resp_shares_shares_inner_shares_normalized;
class OAIV0_0_41_openapi_shares_resp_shares_shares_inner_shares;
class OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres;
class OAIV0_0_41_openapi_shares_resp_shares_shares_inner_usage_normalized;
class OAIV0_0_40_assoc_shares_obj_wrap_fairshare;

class OAIV0_0_41_openapi_shares_resp_shares_shares_inner : public OAIObject {
public:
    OAIV0_0_41_openapi_shares_resp_shares_shares_inner();
    OAIV0_0_41_openapi_shares_resp_shares_shares_inner(QString json);
    ~OAIV0_0_41_openapi_shares_resp_shares_shares_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getCluster() const;
    void setCluster(const QString &cluster);
    bool is_cluster_Set() const;
    bool is_cluster_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getParent() const;
    void setParent(const QString &parent);
    bool is_parent_Set() const;
    bool is_parent_Valid() const;

    QString getPartition() const;
    void setPartition(const QString &partition);
    bool is_partition_Set() const;
    bool is_partition_Valid() const;

    OAIV0_0_41_openapi_shares_resp_shares_shares_inner_shares_normalized getSharesNormalized() const;
    void setSharesNormalized(const OAIV0_0_41_openapi_shares_resp_shares_shares_inner_shares_normalized &shares_normalized);
    bool is_shares_normalized_Set() const;
    bool is_shares_normalized_Valid() const;

    OAIV0_0_41_openapi_shares_resp_shares_shares_inner_shares getShares() const;
    void setShares(const OAIV0_0_41_openapi_shares_resp_shares_shares_inner_shares &shares);
    bool is_shares_Set() const;
    bool is_shares_Valid() const;

    OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres getTres() const;
    void setTres(const OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres &tres);
    bool is_tres_Set() const;
    bool is_tres_Valid() const;

    double getEffectiveUsage() const;
    void setEffectiveUsage(const double &effective_usage);
    bool is_effective_usage_Set() const;
    bool is_effective_usage_Valid() const;

    OAIV0_0_41_openapi_shares_resp_shares_shares_inner_usage_normalized getUsageNormalized() const;
    void setUsageNormalized(const OAIV0_0_41_openapi_shares_resp_shares_shares_inner_usage_normalized &usage_normalized);
    bool is_usage_normalized_Set() const;
    bool is_usage_normalized_Valid() const;

    qint64 getUsage() const;
    void setUsage(const qint64 &usage);
    bool is_usage_Set() const;
    bool is_usage_Valid() const;

    OAIV0_0_40_assoc_shares_obj_wrap_fairshare getFairshare() const;
    void setFairshare(const OAIV0_0_40_assoc_shares_obj_wrap_fairshare &fairshare);
    bool is_fairshare_Set() const;
    bool is_fairshare_Valid() const;

    QList<QString> getType() const;
    void setType(const QList<QString> &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_cluster;
    bool m_cluster_isSet;
    bool m_cluster_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_parent;
    bool m_parent_isSet;
    bool m_parent_isValid;

    QString m_partition;
    bool m_partition_isSet;
    bool m_partition_isValid;

    OAIV0_0_41_openapi_shares_resp_shares_shares_inner_shares_normalized m_shares_normalized;
    bool m_shares_normalized_isSet;
    bool m_shares_normalized_isValid;

    OAIV0_0_41_openapi_shares_resp_shares_shares_inner_shares m_shares;
    bool m_shares_isSet;
    bool m_shares_isValid;

    OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres m_tres;
    bool m_tres_isSet;
    bool m_tres_isValid;

    double m_effective_usage;
    bool m_effective_usage_isSet;
    bool m_effective_usage_isValid;

    OAIV0_0_41_openapi_shares_resp_shares_shares_inner_usage_normalized m_usage_normalized;
    bool m_usage_normalized_isSet;
    bool m_usage_normalized_isValid;

    qint64 m_usage;
    bool m_usage_isSet;
    bool m_usage_isValid;

    OAIV0_0_40_assoc_shares_obj_wrap_fairshare m_fairshare;
    bool m_fairshare_isSet;
    bool m_fairshare_isValid;

    QList<QString> m_type;
    bool m_type_isSet;
    bool m_type_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_41_openapi_shares_resp_shares_shares_inner)

#endif // OAIV0_0_41_openapi_shares_resp_shares_shares_inner_H
