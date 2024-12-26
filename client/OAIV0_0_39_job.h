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
 * OAIV0_0_39_job.h
 *
 * 
 */

#ifndef OAIV0_0_39_job_H
#define OAIV0_0_39_job_H

#include <QJsonObject>

#include "OAIV0_0_39_assoc_short.h"
#include "OAIV0_0_39_job_array.h"
#include "OAIV0_0_39_job_comment.h"
#include "OAIV0_0_39_job_exit_code.h"
#include "OAIV0_0_39_job_het.h"
#include "OAIV0_0_39_job_mcs.h"
#include "OAIV0_0_39_job_required.h"
#include "OAIV0_0_39_job_reservation.h"
#include "OAIV0_0_39_job_state.h"
#include "OAIV0_0_39_job_time.h"
#include "OAIV0_0_39_job_tres.h"
#include "OAIV0_0_39_step.h"
#include "OAIV0_0_39_uint32_no_val.h"
#include "OAIV0_0_39_wckey_tag.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_39_job_comment;
class OAIV0_0_39_job_array;
class OAIV0_0_39_assoc_short;
class OAIV0_0_39_job_exit_code;
class OAIV0_0_39_job_time;
class OAIV0_0_39_job_het;
class OAIV0_0_39_job_mcs;
class OAIV0_0_39_uint32_no_val;
class OAIV0_0_39_job_required;
class OAIV0_0_39_job_reservation;
class OAIV0_0_39_job_state;
class OAIV0_0_39_step;
class OAIV0_0_39_job_tres;
class OAIV0_0_39_wckey_tag;

class OAIV0_0_39_job : public OAIObject {
public:
    OAIV0_0_39_job();
    OAIV0_0_39_job(QString json);
    ~OAIV0_0_39_job() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAccount() const;
    void setAccount(const QString &account);
    bool is_account_Set() const;
    bool is_account_Valid() const;

    OAIV0_0_39_job_comment getComment() const;
    void setComment(const OAIV0_0_39_job_comment &comment);
    bool is_comment_Set() const;
    bool is_comment_Valid() const;

    qint32 getAllocationNodes() const;
    void setAllocationNodes(const qint32 &allocation_nodes);
    bool is_allocation_nodes_Set() const;
    bool is_allocation_nodes_Valid() const;

    OAIV0_0_39_job_array getArray() const;
    void setArray(const OAIV0_0_39_job_array &array);
    bool is_array_Set() const;
    bool is_array_Valid() const;

    OAIV0_0_39_assoc_short getAssociation() const;
    void setAssociation(const OAIV0_0_39_assoc_short &association);
    bool is_association_Set() const;
    bool is_association_Valid() const;

    QString getBlock() const;
    void setBlock(const QString &block);
    bool is_block_Set() const;
    bool is_block_Valid() const;

    QString getCluster() const;
    void setCluster(const QString &cluster);
    bool is_cluster_Set() const;
    bool is_cluster_Valid() const;

    QString getConstraints() const;
    void setConstraints(const QString &constraints);
    bool is_constraints_Set() const;
    bool is_constraints_Valid() const;

    QString getContainer() const;
    void setContainer(const QString &container);
    bool is_container_Set() const;
    bool is_container_Valid() const;

    OAIV0_0_39_job_exit_code getDerivedExitCode() const;
    void setDerivedExitCode(const OAIV0_0_39_job_exit_code &derived_exit_code);
    bool is_derived_exit_code_Set() const;
    bool is_derived_exit_code_Valid() const;

    OAIV0_0_39_job_time getTime() const;
    void setTime(const OAIV0_0_39_job_time &time);
    bool is_time_Set() const;
    bool is_time_Valid() const;

    OAIV0_0_39_job_exit_code getExitCode() const;
    void setExitCode(const OAIV0_0_39_job_exit_code &exit_code);
    bool is_exit_code_Set() const;
    bool is_exit_code_Valid() const;

    QString getExtra() const;
    void setExtra(const QString &extra);
    bool is_extra_Set() const;
    bool is_extra_Valid() const;

    QString getFailedNode() const;
    void setFailedNode(const QString &failed_node);
    bool is_failed_node_Set() const;
    bool is_failed_node_Valid() const;

    QList<QString> getFlags() const;
    void setFlags(const QList<QString> &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    QString getGroup() const;
    void setGroup(const QString &group);
    bool is_group_Set() const;
    bool is_group_Valid() const;

    OAIV0_0_39_job_het getHet() const;
    void setHet(const OAIV0_0_39_job_het &het);
    bool is_het_Set() const;
    bool is_het_Valid() const;

    qint32 getJobId() const;
    void setJobId(const qint32 &job_id);
    bool is_job_id_Set() const;
    bool is_job_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getLicenses() const;
    void setLicenses(const QString &licenses);
    bool is_licenses_Set() const;
    bool is_licenses_Valid() const;

    OAIV0_0_39_job_mcs getMcs() const;
    void setMcs(const OAIV0_0_39_job_mcs &mcs);
    bool is_mcs_Set() const;
    bool is_mcs_Valid() const;

    QString getNodes() const;
    void setNodes(const QString &nodes);
    bool is_nodes_Set() const;
    bool is_nodes_Valid() const;

    QString getPartition() const;
    void setPartition(const QString &partition);
    bool is_partition_Set() const;
    bool is_partition_Valid() const;

    bool isHold() const;
    void setHold(const bool &hold);
    bool is_hold_Set() const;
    bool is_hold_Valid() const;

    OAIV0_0_39_uint32_no_val getPriority() const;
    void setPriority(const OAIV0_0_39_uint32_no_val &priority);
    bool is_priority_Set() const;
    bool is_priority_Valid() const;

    QString getQos() const;
    void setQos(const QString &qos);
    bool is_qos_Set() const;
    bool is_qos_Valid() const;

    OAIV0_0_39_job_required getRequired() const;
    void setRequired(const OAIV0_0_39_job_required &required);
    bool is_required_Set() const;
    bool is_required_Valid() const;

    QString getKillRequestUser() const;
    void setKillRequestUser(const QString &kill_request_user);
    bool is_kill_request_user_Set() const;
    bool is_kill_request_user_Valid() const;

    OAIV0_0_39_job_reservation getReservation() const;
    void setReservation(const OAIV0_0_39_job_reservation &reservation);
    bool is_reservation_Set() const;
    bool is_reservation_Valid() const;

    QString getScript() const;
    void setScript(const QString &script);
    bool is_script_Set() const;
    bool is_script_Valid() const;

    OAIV0_0_39_job_state getState() const;
    void setState(const OAIV0_0_39_job_state &state);
    bool is_state_Set() const;
    bool is_state_Valid() const;

    QList<OAIV0_0_39_step> getSteps() const;
    void setSteps(const QList<OAIV0_0_39_step> &steps);
    bool is_steps_Set() const;
    bool is_steps_Valid() const;

    QString getSubmitLine() const;
    void setSubmitLine(const QString &submit_line);
    bool is_submit_line_Set() const;
    bool is_submit_line_Valid() const;

    OAIV0_0_39_job_tres getTres() const;
    void setTres(const OAIV0_0_39_job_tres &tres);
    bool is_tres_Set() const;
    bool is_tres_Valid() const;

    QString getUsedGres() const;
    void setUsedGres(const QString &used_gres);
    bool is_used_gres_Set() const;
    bool is_used_gres_Valid() const;

    QString getUser() const;
    void setUser(const QString &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    OAIV0_0_39_wckey_tag getWckey() const;
    void setWckey(const OAIV0_0_39_wckey_tag &wckey);
    bool is_wckey_Set() const;
    bool is_wckey_Valid() const;

    QString getWorkingDirectory() const;
    void setWorkingDirectory(const QString &working_directory);
    bool is_working_directory_Set() const;
    bool is_working_directory_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_account;
    bool m_account_isSet;
    bool m_account_isValid;

    OAIV0_0_39_job_comment m_comment;
    bool m_comment_isSet;
    bool m_comment_isValid;

    qint32 m_allocation_nodes;
    bool m_allocation_nodes_isSet;
    bool m_allocation_nodes_isValid;

    OAIV0_0_39_job_array m_array;
    bool m_array_isSet;
    bool m_array_isValid;

    OAIV0_0_39_assoc_short m_association;
    bool m_association_isSet;
    bool m_association_isValid;

    QString m_block;
    bool m_block_isSet;
    bool m_block_isValid;

    QString m_cluster;
    bool m_cluster_isSet;
    bool m_cluster_isValid;

    QString m_constraints;
    bool m_constraints_isSet;
    bool m_constraints_isValid;

    QString m_container;
    bool m_container_isSet;
    bool m_container_isValid;

    OAIV0_0_39_job_exit_code m_derived_exit_code;
    bool m_derived_exit_code_isSet;
    bool m_derived_exit_code_isValid;

    OAIV0_0_39_job_time m_time;
    bool m_time_isSet;
    bool m_time_isValid;

    OAIV0_0_39_job_exit_code m_exit_code;
    bool m_exit_code_isSet;
    bool m_exit_code_isValid;

    QString m_extra;
    bool m_extra_isSet;
    bool m_extra_isValid;

    QString m_failed_node;
    bool m_failed_node_isSet;
    bool m_failed_node_isValid;

    QList<QString> m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;

    QString m_group;
    bool m_group_isSet;
    bool m_group_isValid;

    OAIV0_0_39_job_het m_het;
    bool m_het_isSet;
    bool m_het_isValid;

    qint32 m_job_id;
    bool m_job_id_isSet;
    bool m_job_id_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_licenses;
    bool m_licenses_isSet;
    bool m_licenses_isValid;

    OAIV0_0_39_job_mcs m_mcs;
    bool m_mcs_isSet;
    bool m_mcs_isValid;

    QString m_nodes;
    bool m_nodes_isSet;
    bool m_nodes_isValid;

    QString m_partition;
    bool m_partition_isSet;
    bool m_partition_isValid;

    bool m_hold;
    bool m_hold_isSet;
    bool m_hold_isValid;

    OAIV0_0_39_uint32_no_val m_priority;
    bool m_priority_isSet;
    bool m_priority_isValid;

    QString m_qos;
    bool m_qos_isSet;
    bool m_qos_isValid;

    OAIV0_0_39_job_required m_required;
    bool m_required_isSet;
    bool m_required_isValid;

    QString m_kill_request_user;
    bool m_kill_request_user_isSet;
    bool m_kill_request_user_isValid;

    OAIV0_0_39_job_reservation m_reservation;
    bool m_reservation_isSet;
    bool m_reservation_isValid;

    QString m_script;
    bool m_script_isSet;
    bool m_script_isValid;

    OAIV0_0_39_job_state m_state;
    bool m_state_isSet;
    bool m_state_isValid;

    QList<OAIV0_0_39_step> m_steps;
    bool m_steps_isSet;
    bool m_steps_isValid;

    QString m_submit_line;
    bool m_submit_line_isSet;
    bool m_submit_line_isValid;

    OAIV0_0_39_job_tres m_tres;
    bool m_tres_isSet;
    bool m_tres_isValid;

    QString m_used_gres;
    bool m_used_gres_isSet;
    bool m_used_gres_isValid;

    QString m_user;
    bool m_user_isSet;
    bool m_user_isValid;

    OAIV0_0_39_wckey_tag m_wckey;
    bool m_wckey_isSet;
    bool m_wckey_isValid;

    QString m_working_directory;
    bool m_working_directory_isSet;
    bool m_working_directory_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_39_job)

#endif // OAIV0_0_39_job_H
