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
 * OAIV0_0_39_reservation_info.h
 *
 * 
 */

#ifndef OAIV0_0_39_reservation_info_H
#define OAIV0_0_39_reservation_info_H

#include <QJsonObject>

#include "OAIV0_0_39_reservation_core_spec.h"
#include "OAIV0_0_39_reservation_info_purge_completed.h"
#include "OAIV0_0_39_uint32_no_val.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_39_reservation_core_spec;
class OAIV0_0_39_reservation_info_purge_completed;
class OAIV0_0_39_uint32_no_val;

class OAIV0_0_39_reservation_info : public OAIObject {
public:
    OAIV0_0_39_reservation_info();
    OAIV0_0_39_reservation_info(QString json);
    ~OAIV0_0_39_reservation_info() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAccounts() const;
    void setAccounts(const QString &accounts);
    bool is_accounts_Set() const;
    bool is_accounts_Valid() const;

    QString getBurstBuffer() const;
    void setBurstBuffer(const QString &burst_buffer);
    bool is_burst_buffer_Set() const;
    bool is_burst_buffer_Valid() const;

    qint32 getCoreCount() const;
    void setCoreCount(const qint32 &core_count);
    bool is_core_count_Set() const;
    bool is_core_count_Valid() const;

    QList<OAIV0_0_39_reservation_core_spec> getCoreSpecializations() const;
    void setCoreSpecializations(const QList<OAIV0_0_39_reservation_core_spec> &core_specializations);
    bool is_core_specializations_Set() const;
    bool is_core_specializations_Valid() const;

    qint64 getEndTime() const;
    void setEndTime(const qint64 &end_time);
    bool is_end_time_Set() const;
    bool is_end_time_Valid() const;

    QString getFeatures() const;
    void setFeatures(const QString &features);
    bool is_features_Set() const;
    bool is_features_Valid() const;

    QList<QString> getFlags() const;
    void setFlags(const QList<QString> &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    QString getGroups() const;
    void setGroups(const QString &groups);
    bool is_groups_Set() const;
    bool is_groups_Valid() const;

    QString getLicenses() const;
    void setLicenses(const QString &licenses);
    bool is_licenses_Set() const;
    bool is_licenses_Valid() const;

    qint32 getMaxStartDelay() const;
    void setMaxStartDelay(const qint32 &max_start_delay);
    bool is_max_start_delay_Set() const;
    bool is_max_start_delay_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    qint32 getNodeCount() const;
    void setNodeCount(const qint32 &node_count);
    bool is_node_count_Set() const;
    bool is_node_count_Valid() const;

    QString getNodeList() const;
    void setNodeList(const QString &node_list);
    bool is_node_list_Set() const;
    bool is_node_list_Valid() const;

    QString getPartition() const;
    void setPartition(const QString &partition);
    bool is_partition_Set() const;
    bool is_partition_Valid() const;

    OAIV0_0_39_reservation_info_purge_completed getPurgeCompleted() const;
    void setPurgeCompleted(const OAIV0_0_39_reservation_info_purge_completed &purge_completed);
    bool is_purge_completed_Set() const;
    bool is_purge_completed_Valid() const;

    qint64 getStartTime() const;
    void setStartTime(const qint64 &start_time);
    bool is_start_time_Set() const;
    bool is_start_time_Valid() const;

    OAIV0_0_39_uint32_no_val getWatts() const;
    void setWatts(const OAIV0_0_39_uint32_no_val &watts);
    bool is_watts_Set() const;
    bool is_watts_Valid() const;

    QString getTres() const;
    void setTres(const QString &tres);
    bool is_tres_Set() const;
    bool is_tres_Valid() const;

    QString getUsers() const;
    void setUsers(const QString &users);
    bool is_users_Set() const;
    bool is_users_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_accounts;
    bool m_accounts_isSet;
    bool m_accounts_isValid;

    QString m_burst_buffer;
    bool m_burst_buffer_isSet;
    bool m_burst_buffer_isValid;

    qint32 m_core_count;
    bool m_core_count_isSet;
    bool m_core_count_isValid;

    QList<OAIV0_0_39_reservation_core_spec> m_core_specializations;
    bool m_core_specializations_isSet;
    bool m_core_specializations_isValid;

    qint64 m_end_time;
    bool m_end_time_isSet;
    bool m_end_time_isValid;

    QString m_features;
    bool m_features_isSet;
    bool m_features_isValid;

    QList<QString> m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;

    QString m_groups;
    bool m_groups_isSet;
    bool m_groups_isValid;

    QString m_licenses;
    bool m_licenses_isSet;
    bool m_licenses_isValid;

    qint32 m_max_start_delay;
    bool m_max_start_delay_isSet;
    bool m_max_start_delay_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    qint32 m_node_count;
    bool m_node_count_isSet;
    bool m_node_count_isValid;

    QString m_node_list;
    bool m_node_list_isSet;
    bool m_node_list_isValid;

    QString m_partition;
    bool m_partition_isSet;
    bool m_partition_isValid;

    OAIV0_0_39_reservation_info_purge_completed m_purge_completed;
    bool m_purge_completed_isSet;
    bool m_purge_completed_isValid;

    qint64 m_start_time;
    bool m_start_time_isSet;
    bool m_start_time_isValid;

    OAIV0_0_39_uint32_no_val m_watts;
    bool m_watts_isSet;
    bool m_watts_isValid;

    QString m_tres;
    bool m_tres_isSet;
    bool m_tres_isValid;

    QString m_users;
    bool m_users_isSet;
    bool m_users_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_39_reservation_info)

#endif // OAIV0_0_39_reservation_info_H
