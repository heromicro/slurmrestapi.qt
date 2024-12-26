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
 * OAIV0_0_40_job_info.h
 *
 * 
 */

#ifndef OAIV0_0_40_job_info_H
#define OAIV0_0_40_job_info_H

#include <QJsonObject>

#include "OAIV0_0_40_float64_no_val.h"
#include "OAIV0_0_40_job_info_power.h"
#include "OAIV0_0_40_job_res.h"
#include "OAIV0_0_40_process_exit_code_verbose.h"
#include "OAIV0_0_40_uint16_no_val.h"
#include "OAIV0_0_40_uint32_no_val.h"
#include "OAIV0_0_40_uint64_no_val.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_40_uint64_no_val;
class OAIV0_0_40_uint32_no_val;
class OAIV0_0_40_uint16_no_val;
class OAIV0_0_40_float64_no_val;
class OAIV0_0_40_process_exit_code_verbose;
class OAIV0_0_40_job_res;
class OAIV0_0_40_job_info_power;

class OAIV0_0_40_job_info : public OAIObject {
public:
    OAIV0_0_40_job_info();
    OAIV0_0_40_job_info(QString json);
    ~OAIV0_0_40_job_info() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAccount() const;
    void setAccount(const QString &account);
    bool is_account_Set() const;
    bool is_account_Valid() const;

    OAIV0_0_40_uint64_no_val getAccrueTime() const;
    void setAccrueTime(const OAIV0_0_40_uint64_no_val &accrue_time);
    bool is_accrue_time_Set() const;
    bool is_accrue_time_Valid() const;

    QString getAdminComment() const;
    void setAdminComment(const QString &admin_comment);
    bool is_admin_comment_Set() const;
    bool is_admin_comment_Valid() const;

    QString getAllocatingNode() const;
    void setAllocatingNode(const QString &allocating_node);
    bool is_allocating_node_Set() const;
    bool is_allocating_node_Valid() const;

    OAIV0_0_40_uint32_no_val getArrayJobId() const;
    void setArrayJobId(const OAIV0_0_40_uint32_no_val &array_job_id);
    bool is_array_job_id_Set() const;
    bool is_array_job_id_Valid() const;

    OAIV0_0_40_uint32_no_val getArrayTaskId() const;
    void setArrayTaskId(const OAIV0_0_40_uint32_no_val &array_task_id);
    bool is_array_task_id_Set() const;
    bool is_array_task_id_Valid() const;

    OAIV0_0_40_uint32_no_val getArrayMaxTasks() const;
    void setArrayMaxTasks(const OAIV0_0_40_uint32_no_val &array_max_tasks);
    bool is_array_max_tasks_Set() const;
    bool is_array_max_tasks_Valid() const;

    QString getArrayTaskString() const;
    void setArrayTaskString(const QString &array_task_string);
    bool is_array_task_string_Set() const;
    bool is_array_task_string_Valid() const;

    qint32 getAssociationId() const;
    void setAssociationId(const qint32 &association_id);
    bool is_association_id_Set() const;
    bool is_association_id_Valid() const;

    QString getBatchFeatures() const;
    void setBatchFeatures(const QString &batch_features);
    bool is_batch_features_Set() const;
    bool is_batch_features_Valid() const;

    bool isBatchFlag() const;
    void setBatchFlag(const bool &batch_flag);
    bool is_batch_flag_Set() const;
    bool is_batch_flag_Valid() const;

    QString getBatchHost() const;
    void setBatchHost(const QString &batch_host);
    bool is_batch_host_Set() const;
    bool is_batch_host_Valid() const;

    QList<QString> getFlags() const;
    void setFlags(const QList<QString> &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    QString getBurstBuffer() const;
    void setBurstBuffer(const QString &burst_buffer);
    bool is_burst_buffer_Set() const;
    bool is_burst_buffer_Valid() const;

    QString getBurstBufferState() const;
    void setBurstBufferState(const QString &burst_buffer_state);
    bool is_burst_buffer_state_Set() const;
    bool is_burst_buffer_state_Valid() const;

    QString getCluster() const;
    void setCluster(const QString &cluster);
    bool is_cluster_Set() const;
    bool is_cluster_Valid() const;

    QString getClusterFeatures() const;
    void setClusterFeatures(const QString &cluster_features);
    bool is_cluster_features_Set() const;
    bool is_cluster_features_Valid() const;

    QString getCommand() const;
    void setCommand(const QString &command);
    bool is_command_Set() const;
    bool is_command_Valid() const;

    QString getComment() const;
    void setComment(const QString &comment);
    bool is_comment_Set() const;
    bool is_comment_Valid() const;

    QString getContainer() const;
    void setContainer(const QString &container);
    bool is_container_Set() const;
    bool is_container_Valid() const;

    QString getContainerId() const;
    void setContainerId(const QString &container_id);
    bool is_container_id_Set() const;
    bool is_container_id_Valid() const;

    bool isContiguous() const;
    void setContiguous(const bool &contiguous);
    bool is_contiguous_Set() const;
    bool is_contiguous_Valid() const;

    qint32 getCoreSpec() const;
    void setCoreSpec(const qint32 &core_spec);
    bool is_core_spec_Set() const;
    bool is_core_spec_Valid() const;

    qint32 getThreadSpec() const;
    void setThreadSpec(const qint32 &thread_spec);
    bool is_thread_spec_Set() const;
    bool is_thread_spec_Valid() const;

    OAIV0_0_40_uint16_no_val getCoresPerSocket() const;
    void setCoresPerSocket(const OAIV0_0_40_uint16_no_val &cores_per_socket);
    bool is_cores_per_socket_Set() const;
    bool is_cores_per_socket_Valid() const;

    OAIV0_0_40_float64_no_val getBillableTres() const;
    void setBillableTres(const OAIV0_0_40_float64_no_val &billable_tres);
    bool is_billable_tres_Set() const;
    bool is_billable_tres_Valid() const;

    OAIV0_0_40_uint16_no_val getCpusPerTask() const;
    void setCpusPerTask(const OAIV0_0_40_uint16_no_val &cpus_per_task);
    bool is_cpus_per_task_Set() const;
    bool is_cpus_per_task_Valid() const;

    OAIV0_0_40_uint32_no_val getCpuFrequencyMinimum() const;
    void setCpuFrequencyMinimum(const OAIV0_0_40_uint32_no_val &cpu_frequency_minimum);
    bool is_cpu_frequency_minimum_Set() const;
    bool is_cpu_frequency_minimum_Valid() const;

    OAIV0_0_40_uint32_no_val getCpuFrequencyMaximum() const;
    void setCpuFrequencyMaximum(const OAIV0_0_40_uint32_no_val &cpu_frequency_maximum);
    bool is_cpu_frequency_maximum_Set() const;
    bool is_cpu_frequency_maximum_Valid() const;

    OAIV0_0_40_uint32_no_val getCpuFrequencyGovernor() const;
    void setCpuFrequencyGovernor(const OAIV0_0_40_uint32_no_val &cpu_frequency_governor);
    bool is_cpu_frequency_governor_Set() const;
    bool is_cpu_frequency_governor_Valid() const;

    QString getCpusPerTres() const;
    void setCpusPerTres(const QString &cpus_per_tres);
    bool is_cpus_per_tres_Set() const;
    bool is_cpus_per_tres_Valid() const;

    QString getCron() const;
    void setCron(const QString &cron);
    bool is_cron_Set() const;
    bool is_cron_Valid() const;

    OAIV0_0_40_uint64_no_val getDeadline() const;
    void setDeadline(const OAIV0_0_40_uint64_no_val &deadline);
    bool is_deadline_Set() const;
    bool is_deadline_Valid() const;

    OAIV0_0_40_uint32_no_val getDelayBoot() const;
    void setDelayBoot(const OAIV0_0_40_uint32_no_val &delay_boot);
    bool is_delay_boot_Set() const;
    bool is_delay_boot_Valid() const;

    QString getDependency() const;
    void setDependency(const QString &dependency);
    bool is_dependency_Set() const;
    bool is_dependency_Valid() const;

    OAIV0_0_40_process_exit_code_verbose getDerivedExitCode() const;
    void setDerivedExitCode(const OAIV0_0_40_process_exit_code_verbose &derived_exit_code);
    bool is_derived_exit_code_Set() const;
    bool is_derived_exit_code_Valid() const;

    OAIV0_0_40_uint64_no_val getEligibleTime() const;
    void setEligibleTime(const OAIV0_0_40_uint64_no_val &eligible_time);
    bool is_eligible_time_Set() const;
    bool is_eligible_time_Valid() const;

    OAIV0_0_40_uint64_no_val getEndTime() const;
    void setEndTime(const OAIV0_0_40_uint64_no_val &end_time);
    bool is_end_time_Set() const;
    bool is_end_time_Valid() const;

    QString getExcludedNodes() const;
    void setExcludedNodes(const QString &excluded_nodes);
    bool is_excluded_nodes_Set() const;
    bool is_excluded_nodes_Valid() const;

    OAIV0_0_40_process_exit_code_verbose getExitCode() const;
    void setExitCode(const OAIV0_0_40_process_exit_code_verbose &exit_code);
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

    QString getFeatures() const;
    void setFeatures(const QString &features);
    bool is_features_Set() const;
    bool is_features_Valid() const;

    QString getFederationOrigin() const;
    void setFederationOrigin(const QString &federation_origin);
    bool is_federation_origin_Set() const;
    bool is_federation_origin_Valid() const;

    QString getFederationSiblingsActive() const;
    void setFederationSiblingsActive(const QString &federation_siblings_active);
    bool is_federation_siblings_active_Set() const;
    bool is_federation_siblings_active_Valid() const;

    QString getFederationSiblingsViable() const;
    void setFederationSiblingsViable(const QString &federation_siblings_viable);
    bool is_federation_siblings_viable_Set() const;
    bool is_federation_siblings_viable_Valid() const;

    QList<QString> getGresDetail() const;
    void setGresDetail(const QList<QString> &gres_detail);
    bool is_gres_detail_Set() const;
    bool is_gres_detail_Valid() const;

    qint32 getGroupId() const;
    void setGroupId(const qint32 &group_id);
    bool is_group_id_Set() const;
    bool is_group_id_Valid() const;

    QString getGroupName() const;
    void setGroupName(const QString &group_name);
    bool is_group_name_Set() const;
    bool is_group_name_Valid() const;

    OAIV0_0_40_uint32_no_val getHetJobId() const;
    void setHetJobId(const OAIV0_0_40_uint32_no_val &het_job_id);
    bool is_het_job_id_Set() const;
    bool is_het_job_id_Valid() const;

    QString getHetJobIdSet() const;
    void setHetJobIdSet(const QString &het_job_id_set);
    bool is_het_job_id_set_Set() const;
    bool is_het_job_id_set_Valid() const;

    OAIV0_0_40_uint32_no_val getHetJobOffset() const;
    void setHetJobOffset(const OAIV0_0_40_uint32_no_val &het_job_offset);
    bool is_het_job_offset_Set() const;
    bool is_het_job_offset_Valid() const;

    qint32 getJobId() const;
    void setJobId(const qint32 &job_id);
    bool is_job_id_Set() const;
    bool is_job_id_Valid() const;

    OAIV0_0_40_job_res getJobResources() const;
    void setJobResources(const OAIV0_0_40_job_res &job_resources);
    bool is_job_resources_Set() const;
    bool is_job_resources_Valid() const;

    QList<QString> getJobSizeStr() const;
    void setJobSizeStr(const QList<QString> &job_size_str);
    bool is_job_size_str_Set() const;
    bool is_job_size_str_Valid() const;

    QList<QString> getJobState() const;
    void setJobState(const QList<QString> &job_state);
    bool is_job_state_Set() const;
    bool is_job_state_Valid() const;

    OAIV0_0_40_uint64_no_val getLastSchedEvaluation() const;
    void setLastSchedEvaluation(const OAIV0_0_40_uint64_no_val &last_sched_evaluation);
    bool is_last_sched_evaluation_Set() const;
    bool is_last_sched_evaluation_Valid() const;

    QString getLicenses() const;
    void setLicenses(const QString &licenses);
    bool is_licenses_Set() const;
    bool is_licenses_Valid() const;

    QList<QString> getMailType() const;
    void setMailType(const QList<QString> &mail_type);
    bool is_mail_type_Set() const;
    bool is_mail_type_Valid() const;

    QString getMailUser() const;
    void setMailUser(const QString &mail_user);
    bool is_mail_user_Set() const;
    bool is_mail_user_Valid() const;

    OAIV0_0_40_uint32_no_val getMaxCpus() const;
    void setMaxCpus(const OAIV0_0_40_uint32_no_val &max_cpus);
    bool is_max_cpus_Set() const;
    bool is_max_cpus_Valid() const;

    OAIV0_0_40_uint32_no_val getMaxNodes() const;
    void setMaxNodes(const OAIV0_0_40_uint32_no_val &max_nodes);
    bool is_max_nodes_Set() const;
    bool is_max_nodes_Valid() const;

    QString getMcsLabel() const;
    void setMcsLabel(const QString &mcs_label);
    bool is_mcs_label_Set() const;
    bool is_mcs_label_Valid() const;

    QString getMemoryPerTres() const;
    void setMemoryPerTres(const QString &memory_per_tres);
    bool is_memory_per_tres_Set() const;
    bool is_memory_per_tres_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getNetwork() const;
    void setNetwork(const QString &network);
    bool is_network_Set() const;
    bool is_network_Valid() const;

    QString getNodes() const;
    void setNodes(const QString &nodes);
    bool is_nodes_Set() const;
    bool is_nodes_Valid() const;

    qint32 getNice() const;
    void setNice(const qint32 &nice);
    bool is_nice_Set() const;
    bool is_nice_Valid() const;

    OAIV0_0_40_uint16_no_val getTasksPerCore() const;
    void setTasksPerCore(const OAIV0_0_40_uint16_no_val &tasks_per_core);
    bool is_tasks_per_core_Set() const;
    bool is_tasks_per_core_Valid() const;

    OAIV0_0_40_uint16_no_val getTasksPerTres() const;
    void setTasksPerTres(const OAIV0_0_40_uint16_no_val &tasks_per_tres);
    bool is_tasks_per_tres_Set() const;
    bool is_tasks_per_tres_Valid() const;

    OAIV0_0_40_uint16_no_val getTasksPerNode() const;
    void setTasksPerNode(const OAIV0_0_40_uint16_no_val &tasks_per_node);
    bool is_tasks_per_node_Set() const;
    bool is_tasks_per_node_Valid() const;

    OAIV0_0_40_uint16_no_val getTasksPerSocket() const;
    void setTasksPerSocket(const OAIV0_0_40_uint16_no_val &tasks_per_socket);
    bool is_tasks_per_socket_Set() const;
    bool is_tasks_per_socket_Valid() const;

    OAIV0_0_40_uint16_no_val getTasksPerBoard() const;
    void setTasksPerBoard(const OAIV0_0_40_uint16_no_val &tasks_per_board);
    bool is_tasks_per_board_Set() const;
    bool is_tasks_per_board_Valid() const;

    OAIV0_0_40_uint32_no_val getCpus() const;
    void setCpus(const OAIV0_0_40_uint32_no_val &cpus);
    bool is_cpus_Set() const;
    bool is_cpus_Valid() const;

    OAIV0_0_40_uint32_no_val getNodeCount() const;
    void setNodeCount(const OAIV0_0_40_uint32_no_val &node_count);
    bool is_node_count_Set() const;
    bool is_node_count_Valid() const;

    OAIV0_0_40_uint32_no_val getTasks() const;
    void setTasks(const OAIV0_0_40_uint32_no_val &tasks);
    bool is_tasks_Set() const;
    bool is_tasks_Valid() const;

    QString getPartition() const;
    void setPartition(const QString &partition);
    bool is_partition_Set() const;
    bool is_partition_Valid() const;

    QString getPrefer() const;
    void setPrefer(const QString &prefer);
    bool is_prefer_Set() const;
    bool is_prefer_Valid() const;

    OAIV0_0_40_uint64_no_val getMemoryPerCpu() const;
    void setMemoryPerCpu(const OAIV0_0_40_uint64_no_val &memory_per_cpu);
    bool is_memory_per_cpu_Set() const;
    bool is_memory_per_cpu_Valid() const;

    OAIV0_0_40_uint64_no_val getMemoryPerNode() const;
    void setMemoryPerNode(const OAIV0_0_40_uint64_no_val &memory_per_node);
    bool is_memory_per_node_Set() const;
    bool is_memory_per_node_Valid() const;

    OAIV0_0_40_uint16_no_val getMinimumCpusPerNode() const;
    void setMinimumCpusPerNode(const OAIV0_0_40_uint16_no_val &minimum_cpus_per_node);
    bool is_minimum_cpus_per_node_Set() const;
    bool is_minimum_cpus_per_node_Valid() const;

    OAIV0_0_40_uint32_no_val getMinimumTmpDiskPerNode() const;
    void setMinimumTmpDiskPerNode(const OAIV0_0_40_uint32_no_val &minimum_tmp_disk_per_node);
    bool is_minimum_tmp_disk_per_node_Set() const;
    bool is_minimum_tmp_disk_per_node_Valid() const;

    OAIV0_0_40_job_info_power getPower() const;
    void setPower(const OAIV0_0_40_job_info_power &power);
    bool is_power_Set() const;
    bool is_power_Valid() const;

    OAIV0_0_40_uint64_no_val getPreemptTime() const;
    void setPreemptTime(const OAIV0_0_40_uint64_no_val &preempt_time);
    bool is_preempt_time_Set() const;
    bool is_preempt_time_Valid() const;

    OAIV0_0_40_uint64_no_val getPreemptableTime() const;
    void setPreemptableTime(const OAIV0_0_40_uint64_no_val &preemptable_time);
    bool is_preemptable_time_Set() const;
    bool is_preemptable_time_Valid() const;

    OAIV0_0_40_uint64_no_val getPreSusTime() const;
    void setPreSusTime(const OAIV0_0_40_uint64_no_val &pre_sus_time);
    bool is_pre_sus_time_Set() const;
    bool is_pre_sus_time_Valid() const;

    bool isHold() const;
    void setHold(const bool &hold);
    bool is_hold_Set() const;
    bool is_hold_Valid() const;

    OAIV0_0_40_uint32_no_val getPriority() const;
    void setPriority(const OAIV0_0_40_uint32_no_val &priority);
    bool is_priority_Set() const;
    bool is_priority_Valid() const;

    QList<QString> getProfile() const;
    void setProfile(const QList<QString> &profile);
    bool is_profile_Set() const;
    bool is_profile_Valid() const;

    QString getQos() const;
    void setQos(const QString &qos);
    bool is_qos_Set() const;
    bool is_qos_Valid() const;

    bool isReboot() const;
    void setReboot(const bool &reboot);
    bool is_reboot_Set() const;
    bool is_reboot_Valid() const;

    QString getRequiredNodes() const;
    void setRequiredNodes(const QString &required_nodes);
    bool is_required_nodes_Set() const;
    bool is_required_nodes_Valid() const;

    qint32 getMinimumSwitches() const;
    void setMinimumSwitches(const qint32 &minimum_switches);
    bool is_minimum_switches_Set() const;
    bool is_minimum_switches_Valid() const;

    bool isRequeue() const;
    void setRequeue(const bool &requeue);
    bool is_requeue_Set() const;
    bool is_requeue_Valid() const;

    OAIV0_0_40_uint64_no_val getResizeTime() const;
    void setResizeTime(const OAIV0_0_40_uint64_no_val &resize_time);
    bool is_resize_time_Set() const;
    bool is_resize_time_Valid() const;

    qint32 getRestartCnt() const;
    void setRestartCnt(const qint32 &restart_cnt);
    bool is_restart_cnt_Set() const;
    bool is_restart_cnt_Valid() const;

    QString getResvName() const;
    void setResvName(const QString &resv_name);
    bool is_resv_name_Set() const;
    bool is_resv_name_Valid() const;

    QString getScheduledNodes() const;
    void setScheduledNodes(const QString &scheduled_nodes);
    bool is_scheduled_nodes_Set() const;
    bool is_scheduled_nodes_Valid() const;

    QString getSelinuxContext() const;
    void setSelinuxContext(const QString &selinux_context);
    bool is_selinux_context_Set() const;
    bool is_selinux_context_Valid() const;

    QList<QString> getShared() const;
    void setShared(const QList<QString> &shared);
    bool is_shared_Set() const;
    bool is_shared_Valid() const;

    QList<QString> getExclusive() const;
    void setExclusive(const QList<QString> &exclusive);
    bool is_exclusive_Set() const;
    bool is_exclusive_Valid() const;

    bool isOversubscribe() const;
    void setOversubscribe(const bool &oversubscribe);
    bool is_oversubscribe_Set() const;
    bool is_oversubscribe_Valid() const;

    QList<QString> getShowFlags() const;
    void setShowFlags(const QList<QString> &show_flags);
    bool is_show_flags_Set() const;
    bool is_show_flags_Valid() const;

    qint32 getSocketsPerBoard() const;
    void setSocketsPerBoard(const qint32 &sockets_per_board);
    bool is_sockets_per_board_Set() const;
    bool is_sockets_per_board_Valid() const;

    OAIV0_0_40_uint16_no_val getSocketsPerNode() const;
    void setSocketsPerNode(const OAIV0_0_40_uint16_no_val &sockets_per_node);
    bool is_sockets_per_node_Set() const;
    bool is_sockets_per_node_Valid() const;

    OAIV0_0_40_uint64_no_val getStartTime() const;
    void setStartTime(const OAIV0_0_40_uint64_no_val &start_time);
    bool is_start_time_Set() const;
    bool is_start_time_Valid() const;

    QString getStateDescription() const;
    void setStateDescription(const QString &state_description);
    bool is_state_description_Set() const;
    bool is_state_description_Valid() const;

    QString getStateReason() const;
    void setStateReason(const QString &state_reason);
    bool is_state_reason_Set() const;
    bool is_state_reason_Valid() const;

    QString getStandardError() const;
    void setStandardError(const QString &standard_error);
    bool is_standard_error_Set() const;
    bool is_standard_error_Valid() const;

    QString getStandardInput() const;
    void setStandardInput(const QString &standard_input);
    bool is_standard_input_Set() const;
    bool is_standard_input_Valid() const;

    QString getStandardOutput() const;
    void setStandardOutput(const QString &standard_output);
    bool is_standard_output_Set() const;
    bool is_standard_output_Valid() const;

    OAIV0_0_40_uint64_no_val getSubmitTime() const;
    void setSubmitTime(const OAIV0_0_40_uint64_no_val &submit_time);
    bool is_submit_time_Set() const;
    bool is_submit_time_Valid() const;

    OAIV0_0_40_uint64_no_val getSuspendTime() const;
    void setSuspendTime(const OAIV0_0_40_uint64_no_val &suspend_time);
    bool is_suspend_time_Set() const;
    bool is_suspend_time_Valid() const;

    QString getSystemComment() const;
    void setSystemComment(const QString &system_comment);
    bool is_system_comment_Set() const;
    bool is_system_comment_Valid() const;

    OAIV0_0_40_uint32_no_val getTimeLimit() const;
    void setTimeLimit(const OAIV0_0_40_uint32_no_val &time_limit);
    bool is_time_limit_Set() const;
    bool is_time_limit_Valid() const;

    OAIV0_0_40_uint32_no_val getTimeMinimum() const;
    void setTimeMinimum(const OAIV0_0_40_uint32_no_val &time_minimum);
    bool is_time_minimum_Set() const;
    bool is_time_minimum_Valid() const;

    OAIV0_0_40_uint16_no_val getThreadsPerCore() const;
    void setThreadsPerCore(const OAIV0_0_40_uint16_no_val &threads_per_core);
    bool is_threads_per_core_Set() const;
    bool is_threads_per_core_Valid() const;

    QString getTresBind() const;
    void setTresBind(const QString &tres_bind);
    bool is_tres_bind_Set() const;
    bool is_tres_bind_Valid() const;

    QString getTresFreq() const;
    void setTresFreq(const QString &tres_freq);
    bool is_tres_freq_Set() const;
    bool is_tres_freq_Valid() const;

    QString getTresPerJob() const;
    void setTresPerJob(const QString &tres_per_job);
    bool is_tres_per_job_Set() const;
    bool is_tres_per_job_Valid() const;

    QString getTresPerNode() const;
    void setTresPerNode(const QString &tres_per_node);
    bool is_tres_per_node_Set() const;
    bool is_tres_per_node_Valid() const;

    QString getTresPerSocket() const;
    void setTresPerSocket(const QString &tres_per_socket);
    bool is_tres_per_socket_Set() const;
    bool is_tres_per_socket_Valid() const;

    QString getTresPerTask() const;
    void setTresPerTask(const QString &tres_per_task);
    bool is_tres_per_task_Set() const;
    bool is_tres_per_task_Valid() const;

    QString getTresReqStr() const;
    void setTresReqStr(const QString &tres_req_str);
    bool is_tres_req_str_Set() const;
    bool is_tres_req_str_Valid() const;

    QString getTresAllocStr() const;
    void setTresAllocStr(const QString &tres_alloc_str);
    bool is_tres_alloc_str_Set() const;
    bool is_tres_alloc_str_Valid() const;

    qint32 getUserId() const;
    void setUserId(const qint32 &user_id);
    bool is_user_id_Set() const;
    bool is_user_id_Valid() const;

    QString getUserName() const;
    void setUserName(const QString &user_name);
    bool is_user_name_Set() const;
    bool is_user_name_Valid() const;

    qint32 getMaximumSwitchWaitTime() const;
    void setMaximumSwitchWaitTime(const qint32 &maximum_switch_wait_time);
    bool is_maximum_switch_wait_time_Set() const;
    bool is_maximum_switch_wait_time_Valid() const;

    QString getWckey() const;
    void setWckey(const QString &wckey);
    bool is_wckey_Set() const;
    bool is_wckey_Valid() const;

    QString getCurrentWorkingDirectory() const;
    void setCurrentWorkingDirectory(const QString &current_working_directory);
    bool is_current_working_directory_Set() const;
    bool is_current_working_directory_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_account;
    bool m_account_isSet;
    bool m_account_isValid;

    OAIV0_0_40_uint64_no_val m_accrue_time;
    bool m_accrue_time_isSet;
    bool m_accrue_time_isValid;

    QString m_admin_comment;
    bool m_admin_comment_isSet;
    bool m_admin_comment_isValid;

    QString m_allocating_node;
    bool m_allocating_node_isSet;
    bool m_allocating_node_isValid;

    OAIV0_0_40_uint32_no_val m_array_job_id;
    bool m_array_job_id_isSet;
    bool m_array_job_id_isValid;

    OAIV0_0_40_uint32_no_val m_array_task_id;
    bool m_array_task_id_isSet;
    bool m_array_task_id_isValid;

    OAIV0_0_40_uint32_no_val m_array_max_tasks;
    bool m_array_max_tasks_isSet;
    bool m_array_max_tasks_isValid;

    QString m_array_task_string;
    bool m_array_task_string_isSet;
    bool m_array_task_string_isValid;

    qint32 m_association_id;
    bool m_association_id_isSet;
    bool m_association_id_isValid;

    QString m_batch_features;
    bool m_batch_features_isSet;
    bool m_batch_features_isValid;

    bool m_batch_flag;
    bool m_batch_flag_isSet;
    bool m_batch_flag_isValid;

    QString m_batch_host;
    bool m_batch_host_isSet;
    bool m_batch_host_isValid;

    QList<QString> m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;

    QString m_burst_buffer;
    bool m_burst_buffer_isSet;
    bool m_burst_buffer_isValid;

    QString m_burst_buffer_state;
    bool m_burst_buffer_state_isSet;
    bool m_burst_buffer_state_isValid;

    QString m_cluster;
    bool m_cluster_isSet;
    bool m_cluster_isValid;

    QString m_cluster_features;
    bool m_cluster_features_isSet;
    bool m_cluster_features_isValid;

    QString m_command;
    bool m_command_isSet;
    bool m_command_isValid;

    QString m_comment;
    bool m_comment_isSet;
    bool m_comment_isValid;

    QString m_container;
    bool m_container_isSet;
    bool m_container_isValid;

    QString m_container_id;
    bool m_container_id_isSet;
    bool m_container_id_isValid;

    bool m_contiguous;
    bool m_contiguous_isSet;
    bool m_contiguous_isValid;

    qint32 m_core_spec;
    bool m_core_spec_isSet;
    bool m_core_spec_isValid;

    qint32 m_thread_spec;
    bool m_thread_spec_isSet;
    bool m_thread_spec_isValid;

    OAIV0_0_40_uint16_no_val m_cores_per_socket;
    bool m_cores_per_socket_isSet;
    bool m_cores_per_socket_isValid;

    OAIV0_0_40_float64_no_val m_billable_tres;
    bool m_billable_tres_isSet;
    bool m_billable_tres_isValid;

    OAIV0_0_40_uint16_no_val m_cpus_per_task;
    bool m_cpus_per_task_isSet;
    bool m_cpus_per_task_isValid;

    OAIV0_0_40_uint32_no_val m_cpu_frequency_minimum;
    bool m_cpu_frequency_minimum_isSet;
    bool m_cpu_frequency_minimum_isValid;

    OAIV0_0_40_uint32_no_val m_cpu_frequency_maximum;
    bool m_cpu_frequency_maximum_isSet;
    bool m_cpu_frequency_maximum_isValid;

    OAIV0_0_40_uint32_no_val m_cpu_frequency_governor;
    bool m_cpu_frequency_governor_isSet;
    bool m_cpu_frequency_governor_isValid;

    QString m_cpus_per_tres;
    bool m_cpus_per_tres_isSet;
    bool m_cpus_per_tres_isValid;

    QString m_cron;
    bool m_cron_isSet;
    bool m_cron_isValid;

    OAIV0_0_40_uint64_no_val m_deadline;
    bool m_deadline_isSet;
    bool m_deadline_isValid;

    OAIV0_0_40_uint32_no_val m_delay_boot;
    bool m_delay_boot_isSet;
    bool m_delay_boot_isValid;

    QString m_dependency;
    bool m_dependency_isSet;
    bool m_dependency_isValid;

    OAIV0_0_40_process_exit_code_verbose m_derived_exit_code;
    bool m_derived_exit_code_isSet;
    bool m_derived_exit_code_isValid;

    OAIV0_0_40_uint64_no_val m_eligible_time;
    bool m_eligible_time_isSet;
    bool m_eligible_time_isValid;

    OAIV0_0_40_uint64_no_val m_end_time;
    bool m_end_time_isSet;
    bool m_end_time_isValid;

    QString m_excluded_nodes;
    bool m_excluded_nodes_isSet;
    bool m_excluded_nodes_isValid;

    OAIV0_0_40_process_exit_code_verbose m_exit_code;
    bool m_exit_code_isSet;
    bool m_exit_code_isValid;

    QString m_extra;
    bool m_extra_isSet;
    bool m_extra_isValid;

    QString m_failed_node;
    bool m_failed_node_isSet;
    bool m_failed_node_isValid;

    QString m_features;
    bool m_features_isSet;
    bool m_features_isValid;

    QString m_federation_origin;
    bool m_federation_origin_isSet;
    bool m_federation_origin_isValid;

    QString m_federation_siblings_active;
    bool m_federation_siblings_active_isSet;
    bool m_federation_siblings_active_isValid;

    QString m_federation_siblings_viable;
    bool m_federation_siblings_viable_isSet;
    bool m_federation_siblings_viable_isValid;

    QList<QString> m_gres_detail;
    bool m_gres_detail_isSet;
    bool m_gres_detail_isValid;

    qint32 m_group_id;
    bool m_group_id_isSet;
    bool m_group_id_isValid;

    QString m_group_name;
    bool m_group_name_isSet;
    bool m_group_name_isValid;

    OAIV0_0_40_uint32_no_val m_het_job_id;
    bool m_het_job_id_isSet;
    bool m_het_job_id_isValid;

    QString m_het_job_id_set;
    bool m_het_job_id_set_isSet;
    bool m_het_job_id_set_isValid;

    OAIV0_0_40_uint32_no_val m_het_job_offset;
    bool m_het_job_offset_isSet;
    bool m_het_job_offset_isValid;

    qint32 m_job_id;
    bool m_job_id_isSet;
    bool m_job_id_isValid;

    OAIV0_0_40_job_res m_job_resources;
    bool m_job_resources_isSet;
    bool m_job_resources_isValid;

    QList<QString> m_job_size_str;
    bool m_job_size_str_isSet;
    bool m_job_size_str_isValid;

    QList<QString> m_job_state;
    bool m_job_state_isSet;
    bool m_job_state_isValid;

    OAIV0_0_40_uint64_no_val m_last_sched_evaluation;
    bool m_last_sched_evaluation_isSet;
    bool m_last_sched_evaluation_isValid;

    QString m_licenses;
    bool m_licenses_isSet;
    bool m_licenses_isValid;

    QList<QString> m_mail_type;
    bool m_mail_type_isSet;
    bool m_mail_type_isValid;

    QString m_mail_user;
    bool m_mail_user_isSet;
    bool m_mail_user_isValid;

    OAIV0_0_40_uint32_no_val m_max_cpus;
    bool m_max_cpus_isSet;
    bool m_max_cpus_isValid;

    OAIV0_0_40_uint32_no_val m_max_nodes;
    bool m_max_nodes_isSet;
    bool m_max_nodes_isValid;

    QString m_mcs_label;
    bool m_mcs_label_isSet;
    bool m_mcs_label_isValid;

    QString m_memory_per_tres;
    bool m_memory_per_tres_isSet;
    bool m_memory_per_tres_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_network;
    bool m_network_isSet;
    bool m_network_isValid;

    QString m_nodes;
    bool m_nodes_isSet;
    bool m_nodes_isValid;

    qint32 m_nice;
    bool m_nice_isSet;
    bool m_nice_isValid;

    OAIV0_0_40_uint16_no_val m_tasks_per_core;
    bool m_tasks_per_core_isSet;
    bool m_tasks_per_core_isValid;

    OAIV0_0_40_uint16_no_val m_tasks_per_tres;
    bool m_tasks_per_tres_isSet;
    bool m_tasks_per_tres_isValid;

    OAIV0_0_40_uint16_no_val m_tasks_per_node;
    bool m_tasks_per_node_isSet;
    bool m_tasks_per_node_isValid;

    OAIV0_0_40_uint16_no_val m_tasks_per_socket;
    bool m_tasks_per_socket_isSet;
    bool m_tasks_per_socket_isValid;

    OAIV0_0_40_uint16_no_val m_tasks_per_board;
    bool m_tasks_per_board_isSet;
    bool m_tasks_per_board_isValid;

    OAIV0_0_40_uint32_no_val m_cpus;
    bool m_cpus_isSet;
    bool m_cpus_isValid;

    OAIV0_0_40_uint32_no_val m_node_count;
    bool m_node_count_isSet;
    bool m_node_count_isValid;

    OAIV0_0_40_uint32_no_val m_tasks;
    bool m_tasks_isSet;
    bool m_tasks_isValid;

    QString m_partition;
    bool m_partition_isSet;
    bool m_partition_isValid;

    QString m_prefer;
    bool m_prefer_isSet;
    bool m_prefer_isValid;

    OAIV0_0_40_uint64_no_val m_memory_per_cpu;
    bool m_memory_per_cpu_isSet;
    bool m_memory_per_cpu_isValid;

    OAIV0_0_40_uint64_no_val m_memory_per_node;
    bool m_memory_per_node_isSet;
    bool m_memory_per_node_isValid;

    OAIV0_0_40_uint16_no_val m_minimum_cpus_per_node;
    bool m_minimum_cpus_per_node_isSet;
    bool m_minimum_cpus_per_node_isValid;

    OAIV0_0_40_uint32_no_val m_minimum_tmp_disk_per_node;
    bool m_minimum_tmp_disk_per_node_isSet;
    bool m_minimum_tmp_disk_per_node_isValid;

    OAIV0_0_40_job_info_power m_power;
    bool m_power_isSet;
    bool m_power_isValid;

    OAIV0_0_40_uint64_no_val m_preempt_time;
    bool m_preempt_time_isSet;
    bool m_preempt_time_isValid;

    OAIV0_0_40_uint64_no_val m_preemptable_time;
    bool m_preemptable_time_isSet;
    bool m_preemptable_time_isValid;

    OAIV0_0_40_uint64_no_val m_pre_sus_time;
    bool m_pre_sus_time_isSet;
    bool m_pre_sus_time_isValid;

    bool m_hold;
    bool m_hold_isSet;
    bool m_hold_isValid;

    OAIV0_0_40_uint32_no_val m_priority;
    bool m_priority_isSet;
    bool m_priority_isValid;

    QList<QString> m_profile;
    bool m_profile_isSet;
    bool m_profile_isValid;

    QString m_qos;
    bool m_qos_isSet;
    bool m_qos_isValid;

    bool m_reboot;
    bool m_reboot_isSet;
    bool m_reboot_isValid;

    QString m_required_nodes;
    bool m_required_nodes_isSet;
    bool m_required_nodes_isValid;

    qint32 m_minimum_switches;
    bool m_minimum_switches_isSet;
    bool m_minimum_switches_isValid;

    bool m_requeue;
    bool m_requeue_isSet;
    bool m_requeue_isValid;

    OAIV0_0_40_uint64_no_val m_resize_time;
    bool m_resize_time_isSet;
    bool m_resize_time_isValid;

    qint32 m_restart_cnt;
    bool m_restart_cnt_isSet;
    bool m_restart_cnt_isValid;

    QString m_resv_name;
    bool m_resv_name_isSet;
    bool m_resv_name_isValid;

    QString m_scheduled_nodes;
    bool m_scheduled_nodes_isSet;
    bool m_scheduled_nodes_isValid;

    QString m_selinux_context;
    bool m_selinux_context_isSet;
    bool m_selinux_context_isValid;

    QList<QString> m_shared;
    bool m_shared_isSet;
    bool m_shared_isValid;

    QList<QString> m_exclusive;
    bool m_exclusive_isSet;
    bool m_exclusive_isValid;

    bool m_oversubscribe;
    bool m_oversubscribe_isSet;
    bool m_oversubscribe_isValid;

    QList<QString> m_show_flags;
    bool m_show_flags_isSet;
    bool m_show_flags_isValid;

    qint32 m_sockets_per_board;
    bool m_sockets_per_board_isSet;
    bool m_sockets_per_board_isValid;

    OAIV0_0_40_uint16_no_val m_sockets_per_node;
    bool m_sockets_per_node_isSet;
    bool m_sockets_per_node_isValid;

    OAIV0_0_40_uint64_no_val m_start_time;
    bool m_start_time_isSet;
    bool m_start_time_isValid;

    QString m_state_description;
    bool m_state_description_isSet;
    bool m_state_description_isValid;

    QString m_state_reason;
    bool m_state_reason_isSet;
    bool m_state_reason_isValid;

    QString m_standard_error;
    bool m_standard_error_isSet;
    bool m_standard_error_isValid;

    QString m_standard_input;
    bool m_standard_input_isSet;
    bool m_standard_input_isValid;

    QString m_standard_output;
    bool m_standard_output_isSet;
    bool m_standard_output_isValid;

    OAIV0_0_40_uint64_no_val m_submit_time;
    bool m_submit_time_isSet;
    bool m_submit_time_isValid;

    OAIV0_0_40_uint64_no_val m_suspend_time;
    bool m_suspend_time_isSet;
    bool m_suspend_time_isValid;

    QString m_system_comment;
    bool m_system_comment_isSet;
    bool m_system_comment_isValid;

    OAIV0_0_40_uint32_no_val m_time_limit;
    bool m_time_limit_isSet;
    bool m_time_limit_isValid;

    OAIV0_0_40_uint32_no_val m_time_minimum;
    bool m_time_minimum_isSet;
    bool m_time_minimum_isValid;

    OAIV0_0_40_uint16_no_val m_threads_per_core;
    bool m_threads_per_core_isSet;
    bool m_threads_per_core_isValid;

    QString m_tres_bind;
    bool m_tres_bind_isSet;
    bool m_tres_bind_isValid;

    QString m_tres_freq;
    bool m_tres_freq_isSet;
    bool m_tres_freq_isValid;

    QString m_tres_per_job;
    bool m_tres_per_job_isSet;
    bool m_tres_per_job_isValid;

    QString m_tres_per_node;
    bool m_tres_per_node_isSet;
    bool m_tres_per_node_isValid;

    QString m_tres_per_socket;
    bool m_tres_per_socket_isSet;
    bool m_tres_per_socket_isValid;

    QString m_tres_per_task;
    bool m_tres_per_task_isSet;
    bool m_tres_per_task_isValid;

    QString m_tres_req_str;
    bool m_tres_req_str_isSet;
    bool m_tres_req_str_isValid;

    QString m_tres_alloc_str;
    bool m_tres_alloc_str_isSet;
    bool m_tres_alloc_str_isValid;

    qint32 m_user_id;
    bool m_user_id_isSet;
    bool m_user_id_isValid;

    QString m_user_name;
    bool m_user_name_isSet;
    bool m_user_name_isValid;

    qint32 m_maximum_switch_wait_time;
    bool m_maximum_switch_wait_time_isSet;
    bool m_maximum_switch_wait_time_isValid;

    QString m_wckey;
    bool m_wckey_isSet;
    bool m_wckey_isValid;

    QString m_current_working_directory;
    bool m_current_working_directory_isSet;
    bool m_current_working_directory_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_40_job_info)

#endif // OAIV0_0_40_job_info_H