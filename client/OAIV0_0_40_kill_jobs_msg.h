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
 * OAIV0_0_40_kill_jobs_msg.h
 *
 * 
 */

#ifndef OAIV0_0_40_kill_jobs_msg_H
#define OAIV0_0_40_kill_jobs_msg_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV0_0_40_kill_jobs_msg : public OAIObject {
public:
    OAIV0_0_40_kill_jobs_msg();
    OAIV0_0_40_kill_jobs_msg(QString json);
    ~OAIV0_0_40_kill_jobs_msg() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAccount() const;
    void setAccount(const QString &account);
    bool is_account_Set() const;
    bool is_account_Valid() const;

    QList<QString> getFlags() const;
    void setFlags(const QList<QString> &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    QString getJobName() const;
    void setJobName(const QString &job_name);
    bool is_job_name_Set() const;
    bool is_job_name_Valid() const;

    QList<QString> getJobs() const;
    void setJobs(const QList<QString> &jobs);
    bool is_jobs_Set() const;
    bool is_jobs_Valid() const;

    QString getPartition() const;
    void setPartition(const QString &partition);
    bool is_partition_Set() const;
    bool is_partition_Valid() const;

    QString getQos() const;
    void setQos(const QString &qos);
    bool is_qos_Set() const;
    bool is_qos_Valid() const;

    QString getReservation() const;
    void setReservation(const QString &reservation);
    bool is_reservation_Set() const;
    bool is_reservation_Valid() const;

    QString getSignal() const;
    void setSignal(const QString &signal);
    bool is_signal_Set() const;
    bool is_signal_Valid() const;

    QList<QString> getJobState() const;
    void setJobState(const QList<QString> &job_state);
    bool is_job_state_Set() const;
    bool is_job_state_Valid() const;

    QString getUserId() const;
    void setUserId(const QString &user_id);
    bool is_user_id_Set() const;
    bool is_user_id_Valid() const;

    QString getUserName() const;
    void setUserName(const QString &user_name);
    bool is_user_name_Set() const;
    bool is_user_name_Valid() const;

    QString getWckey() const;
    void setWckey(const QString &wckey);
    bool is_wckey_Set() const;
    bool is_wckey_Valid() const;

    QList<QString> getNodes() const;
    void setNodes(const QList<QString> &nodes);
    bool is_nodes_Set() const;
    bool is_nodes_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_account;
    bool m_account_isSet;
    bool m_account_isValid;

    QList<QString> m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;

    QString m_job_name;
    bool m_job_name_isSet;
    bool m_job_name_isValid;

    QList<QString> m_jobs;
    bool m_jobs_isSet;
    bool m_jobs_isValid;

    QString m_partition;
    bool m_partition_isSet;
    bool m_partition_isValid;

    QString m_qos;
    bool m_qos_isSet;
    bool m_qos_isValid;

    QString m_reservation;
    bool m_reservation_isSet;
    bool m_reservation_isValid;

    QString m_signal;
    bool m_signal_isSet;
    bool m_signal_isValid;

    QList<QString> m_job_state;
    bool m_job_state_isSet;
    bool m_job_state_isValid;

    QString m_user_id;
    bool m_user_id_isSet;
    bool m_user_id_isValid;

    QString m_user_name;
    bool m_user_name_isSet;
    bool m_user_name_isValid;

    QString m_wckey;
    bool m_wckey_isSet;
    bool m_wckey_isValid;

    QList<QString> m_nodes;
    bool m_nodes_isSet;
    bool m_nodes_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_40_kill_jobs_msg)

#endif // OAIV0_0_40_kill_jobs_msg_H
