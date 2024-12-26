QT += network

HEADERS += \
# Models
    $${PWD}/OAIDbv0_0_39_account_info.h \
    $${PWD}/OAIDbv0_0_39_associations_info.h \
    $${PWD}/OAIDbv0_0_39_clusters_info.h \
    $${PWD}/OAIDbv0_0_39_config_info.h \
    $${PWD}/OAIDbv0_0_39_diag.h \
    $${PWD}/OAIDbv0_0_39_error.h \
    $${PWD}/OAIDbv0_0_39_job_info.h \
    $${PWD}/OAIDbv0_0_39_meta.h \
    $${PWD}/OAIDbv0_0_39_qos_info.h \
    $${PWD}/OAIDbv0_0_39_response_associations_delete.h \
    $${PWD}/OAIDbv0_0_39_set_config.h \
    $${PWD}/OAIDbv0_0_39_tres_info.h \
    $${PWD}/OAIDbv0_0_39_tres_update.h \
    $${PWD}/OAIDbv0_0_39_update_qos.h \
    $${PWD}/OAIDbv0_0_39_update_users.h \
    $${PWD}/OAIDbv0_0_39_user_info.h \
    $${PWD}/OAIDbv0_0_39_warning.h \
    $${PWD}/OAIDbv0_0_39_wckey_info.h \
    $${PWD}/OAIStatus.h \
    $${PWD}/OAIV0_0_39_account.h \
    $${PWD}/OAIV0_0_39_accounting.h \
    $${PWD}/OAIV0_0_39_accounting_allocated.h \
    $${PWD}/OAIV0_0_39_acct_gather_energy.h \
    $${PWD}/OAIV0_0_39_assoc.h \
    $${PWD}/OAIV0_0_39_assoc_default.h \
    $${PWD}/OAIV0_0_39_assoc_max.h \
    $${PWD}/OAIV0_0_39_assoc_max_jobs.h \
    $${PWD}/OAIV0_0_39_assoc_max_jobs_per.h \
    $${PWD}/OAIV0_0_39_assoc_min.h \
    $${PWD}/OAIV0_0_39_assoc_short.h \
    $${PWD}/OAIV0_0_39_assoc_usage.h \
    $${PWD}/OAIV0_0_39_cluster_rec.h \
    $${PWD}/OAIV0_0_39_cluster_rec_associations.h \
    $${PWD}/OAIV0_0_39_cluster_rec_controller.h \
    $${PWD}/OAIV0_0_39_controller_ping.h \
    $${PWD}/OAIV0_0_39_coord.h \
    $${PWD}/OAIV0_0_39_cron_entry.h \
    $${PWD}/OAIV0_0_39_cron_entry_line.h \
    $${PWD}/OAIV0_0_39_diag.h \
    $${PWD}/OAIV0_0_39_error.h \
    $${PWD}/OAIV0_0_39_ext_sensors_data.h \
    $${PWD}/OAIV0_0_39_float64_no_val.h \
    $${PWD}/OAIV0_0_39_job.h \
    $${PWD}/OAIV0_0_39_job_array.h \
    $${PWD}/OAIV0_0_39_job_array_response_msg_inner.h \
    $${PWD}/OAIV0_0_39_job_comment.h \
    $${PWD}/OAIV0_0_39_job_desc_msg.h \
    $${PWD}/OAIV0_0_39_job_exit_code.h \
    $${PWD}/OAIV0_0_39_job_exit_code_signal.h \
    $${PWD}/OAIV0_0_39_job_het.h \
    $${PWD}/OAIV0_0_39_job_info.h \
    $${PWD}/OAIV0_0_39_job_info_power.h \
    $${PWD}/OAIV0_0_39_job_mcs.h \
    $${PWD}/OAIV0_0_39_job_required.h \
    $${PWD}/OAIV0_0_39_job_res.h \
    $${PWD}/OAIV0_0_39_job_reservation.h \
    $${PWD}/OAIV0_0_39_job_state.h \
    $${PWD}/OAIV0_0_39_job_submission.h \
    $${PWD}/OAIV0_0_39_job_submission_response.h \
    $${PWD}/OAIV0_0_39_job_time.h \
    $${PWD}/OAIV0_0_39_job_time_user.h \
    $${PWD}/OAIV0_0_39_job_tres.h \
    $${PWD}/OAIV0_0_39_job_update_response.h \
    $${PWD}/OAIV0_0_39_jobs_response.h \
    $${PWD}/OAIV0_0_39_license.h \
    $${PWD}/OAIV0_0_39_licenses_info.h \
    $${PWD}/OAIV0_0_39_meta.h \
    $${PWD}/OAIV0_0_39_meta_Slurm.h \
    $${PWD}/OAIV0_0_39_meta_Slurm_version.h \
    $${PWD}/OAIV0_0_39_meta_plugin.h \
    $${PWD}/OAIV0_0_39_node.h \
    $${PWD}/OAIV0_0_39_nodes_response.h \
    $${PWD}/OAIV0_0_39_partition_info.h \
    $${PWD}/OAIV0_0_39_partition_info_accounts.h \
    $${PWD}/OAIV0_0_39_partition_info_defaults.h \
    $${PWD}/OAIV0_0_39_partition_info_groups.h \
    $${PWD}/OAIV0_0_39_partition_info_maximums.h \
    $${PWD}/OAIV0_0_39_partition_info_minimums.h \
    $${PWD}/OAIV0_0_39_partition_info_nodes.h \
    $${PWD}/OAIV0_0_39_partition_info_priority.h \
    $${PWD}/OAIV0_0_39_partition_info_qos.h \
    $${PWD}/OAIV0_0_39_partition_info_timeouts.h \
    $${PWD}/OAIV0_0_39_partition_info_tres.h \
    $${PWD}/OAIV0_0_39_partitions_response.h \
    $${PWD}/OAIV0_0_39_pings.h \
    $${PWD}/OAIV0_0_39_power_mgmt_data.h \
    $${PWD}/OAIV0_0_39_qos.h \
    $${PWD}/OAIV0_0_39_qos_limits.h \
    $${PWD}/OAIV0_0_39_qos_limits_min.h \
    $${PWD}/OAIV0_0_39_qos_limits_min_tres.h \
    $${PWD}/OAIV0_0_39_qos_limits_min_tres_per.h \
    $${PWD}/OAIV0_0_39_qos_preempt.h \
    $${PWD}/OAIV0_0_39_reservation_core_spec.h \
    $${PWD}/OAIV0_0_39_reservation_info.h \
    $${PWD}/OAIV0_0_39_reservation_info_purge_completed.h \
    $${PWD}/OAIV0_0_39_reservations_response.h \
    $${PWD}/OAIV0_0_39_rollup_stats_inner.h \
    $${PWD}/OAIV0_0_39_slurm_step_id.h \
    $${PWD}/OAIV0_0_39_stats_msg.h \
    $${PWD}/OAIV0_0_39_stats_msg_rpcs_by_type_inner.h \
    $${PWD}/OAIV0_0_39_stats_msg_rpcs_by_user_inner.h \
    $${PWD}/OAIV0_0_39_stats_rec.h \
    $${PWD}/OAIV0_0_39_stats_rpc.h \
    $${PWD}/OAIV0_0_39_stats_rpc_time.h \
    $${PWD}/OAIV0_0_39_stats_user.h \
    $${PWD}/OAIV0_0_39_step.h \
    $${PWD}/OAIV0_0_39_step_CPU.h \
    $${PWD}/OAIV0_0_39_step_nodes.h \
    $${PWD}/OAIV0_0_39_step_statistics.h \
    $${PWD}/OAIV0_0_39_step_statistics_energy.h \
    $${PWD}/OAIV0_0_39_step_task.h \
    $${PWD}/OAIV0_0_39_step_tasks.h \
    $${PWD}/OAIV0_0_39_step_time.h \
    $${PWD}/OAIV0_0_39_step_time_user.h \
    $${PWD}/OAIV0_0_39_step_tres.h \
    $${PWD}/OAIV0_0_39_tres.h \
    $${PWD}/OAIV0_0_39_uint16_no_val.h \
    $${PWD}/OAIV0_0_39_uint32_no_val.h \
    $${PWD}/OAIV0_0_39_uint64_no_val.h \
    $${PWD}/OAIV0_0_39_update_node_msg.h \
    $${PWD}/OAIV0_0_39_user.h \
    $${PWD}/OAIV0_0_39_user_default.h \
    $${PWD}/OAIV0_0_39_warning.h \
    $${PWD}/OAIV0_0_39_wckey.h \
    $${PWD}/OAIV0_0_39_wckey_tag.h \
# APIs
    $${PWD}/OAIOpenapiApi.h \
    $${PWD}/OAISlurmApi.h \
# Others
    $${PWD}/OAIHelpers.h \
    $${PWD}/OAIHttpRequest.h \
    $${PWD}/OAIObject.h \
    $${PWD}/OAIEnum.h \
    $${PWD}/OAIHttpFileElement.h \
    $${PWD}/OAIServerConfiguration.h \
    $${PWD}/OAIServerVariable.h \
    $${PWD}/OAIOauth.h

SOURCES += \
# Models
    $${PWD}/OAIDbv0_0_39_account_info.cpp \
    $${PWD}/OAIDbv0_0_39_associations_info.cpp \
    $${PWD}/OAIDbv0_0_39_clusters_info.cpp \
    $${PWD}/OAIDbv0_0_39_config_info.cpp \
    $${PWD}/OAIDbv0_0_39_diag.cpp \
    $${PWD}/OAIDbv0_0_39_error.cpp \
    $${PWD}/OAIDbv0_0_39_job_info.cpp \
    $${PWD}/OAIDbv0_0_39_meta.cpp \
    $${PWD}/OAIDbv0_0_39_qos_info.cpp \
    $${PWD}/OAIDbv0_0_39_response_associations_delete.cpp \
    $${PWD}/OAIDbv0_0_39_set_config.cpp \
    $${PWD}/OAIDbv0_0_39_tres_info.cpp \
    $${PWD}/OAIDbv0_0_39_tres_update.cpp \
    $${PWD}/OAIDbv0_0_39_update_qos.cpp \
    $${PWD}/OAIDbv0_0_39_update_users.cpp \
    $${PWD}/OAIDbv0_0_39_user_info.cpp \
    $${PWD}/OAIDbv0_0_39_warning.cpp \
    $${PWD}/OAIDbv0_0_39_wckey_info.cpp \
    $${PWD}/OAIStatus.cpp \
    $${PWD}/OAIV0_0_39_account.cpp \
    $${PWD}/OAIV0_0_39_accounting.cpp \
    $${PWD}/OAIV0_0_39_accounting_allocated.cpp \
    $${PWD}/OAIV0_0_39_acct_gather_energy.cpp \
    $${PWD}/OAIV0_0_39_assoc.cpp \
    $${PWD}/OAIV0_0_39_assoc_default.cpp \
    $${PWD}/OAIV0_0_39_assoc_max.cpp \
    $${PWD}/OAIV0_0_39_assoc_max_jobs.cpp \
    $${PWD}/OAIV0_0_39_assoc_max_jobs_per.cpp \
    $${PWD}/OAIV0_0_39_assoc_min.cpp \
    $${PWD}/OAIV0_0_39_assoc_short.cpp \
    $${PWD}/OAIV0_0_39_assoc_usage.cpp \
    $${PWD}/OAIV0_0_39_cluster_rec.cpp \
    $${PWD}/OAIV0_0_39_cluster_rec_associations.cpp \
    $${PWD}/OAIV0_0_39_cluster_rec_controller.cpp \
    $${PWD}/OAIV0_0_39_controller_ping.cpp \
    $${PWD}/OAIV0_0_39_coord.cpp \
    $${PWD}/OAIV0_0_39_cron_entry.cpp \
    $${PWD}/OAIV0_0_39_cron_entry_line.cpp \
    $${PWD}/OAIV0_0_39_diag.cpp \
    $${PWD}/OAIV0_0_39_error.cpp \
    $${PWD}/OAIV0_0_39_ext_sensors_data.cpp \
    $${PWD}/OAIV0_0_39_float64_no_val.cpp \
    $${PWD}/OAIV0_0_39_job.cpp \
    $${PWD}/OAIV0_0_39_job_array.cpp \
    $${PWD}/OAIV0_0_39_job_array_response_msg_inner.cpp \
    $${PWD}/OAIV0_0_39_job_comment.cpp \
    $${PWD}/OAIV0_0_39_job_desc_msg.cpp \
    $${PWD}/OAIV0_0_39_job_exit_code.cpp \
    $${PWD}/OAIV0_0_39_job_exit_code_signal.cpp \
    $${PWD}/OAIV0_0_39_job_het.cpp \
    $${PWD}/OAIV0_0_39_job_info.cpp \
    $${PWD}/OAIV0_0_39_job_info_power.cpp \
    $${PWD}/OAIV0_0_39_job_mcs.cpp \
    $${PWD}/OAIV0_0_39_job_required.cpp \
    $${PWD}/OAIV0_0_39_job_res.cpp \
    $${PWD}/OAIV0_0_39_job_reservation.cpp \
    $${PWD}/OAIV0_0_39_job_state.cpp \
    $${PWD}/OAIV0_0_39_job_submission.cpp \
    $${PWD}/OAIV0_0_39_job_submission_response.cpp \
    $${PWD}/OAIV0_0_39_job_time.cpp \
    $${PWD}/OAIV0_0_39_job_time_user.cpp \
    $${PWD}/OAIV0_0_39_job_tres.cpp \
    $${PWD}/OAIV0_0_39_job_update_response.cpp \
    $${PWD}/OAIV0_0_39_jobs_response.cpp \
    $${PWD}/OAIV0_0_39_license.cpp \
    $${PWD}/OAIV0_0_39_licenses_info.cpp \
    $${PWD}/OAIV0_0_39_meta.cpp \
    $${PWD}/OAIV0_0_39_meta_Slurm.cpp \
    $${PWD}/OAIV0_0_39_meta_Slurm_version.cpp \
    $${PWD}/OAIV0_0_39_meta_plugin.cpp \
    $${PWD}/OAIV0_0_39_node.cpp \
    $${PWD}/OAIV0_0_39_nodes_response.cpp \
    $${PWD}/OAIV0_0_39_partition_info.cpp \
    $${PWD}/OAIV0_0_39_partition_info_accounts.cpp \
    $${PWD}/OAIV0_0_39_partition_info_defaults.cpp \
    $${PWD}/OAIV0_0_39_partition_info_groups.cpp \
    $${PWD}/OAIV0_0_39_partition_info_maximums.cpp \
    $${PWD}/OAIV0_0_39_partition_info_minimums.cpp \
    $${PWD}/OAIV0_0_39_partition_info_nodes.cpp \
    $${PWD}/OAIV0_0_39_partition_info_priority.cpp \
    $${PWD}/OAIV0_0_39_partition_info_qos.cpp \
    $${PWD}/OAIV0_0_39_partition_info_timeouts.cpp \
    $${PWD}/OAIV0_0_39_partition_info_tres.cpp \
    $${PWD}/OAIV0_0_39_partitions_response.cpp \
    $${PWD}/OAIV0_0_39_pings.cpp \
    $${PWD}/OAIV0_0_39_power_mgmt_data.cpp \
    $${PWD}/OAIV0_0_39_qos.cpp \
    $${PWD}/OAIV0_0_39_qos_limits.cpp \
    $${PWD}/OAIV0_0_39_qos_limits_min.cpp \
    $${PWD}/OAIV0_0_39_qos_limits_min_tres.cpp \
    $${PWD}/OAIV0_0_39_qos_limits_min_tres_per.cpp \
    $${PWD}/OAIV0_0_39_qos_preempt.cpp \
    $${PWD}/OAIV0_0_39_reservation_core_spec.cpp \
    $${PWD}/OAIV0_0_39_reservation_info.cpp \
    $${PWD}/OAIV0_0_39_reservation_info_purge_completed.cpp \
    $${PWD}/OAIV0_0_39_reservations_response.cpp \
    $${PWD}/OAIV0_0_39_rollup_stats_inner.cpp \
    $${PWD}/OAIV0_0_39_slurm_step_id.cpp \
    $${PWD}/OAIV0_0_39_stats_msg.cpp \
    $${PWD}/OAIV0_0_39_stats_msg_rpcs_by_type_inner.cpp \
    $${PWD}/OAIV0_0_39_stats_msg_rpcs_by_user_inner.cpp \
    $${PWD}/OAIV0_0_39_stats_rec.cpp \
    $${PWD}/OAIV0_0_39_stats_rpc.cpp \
    $${PWD}/OAIV0_0_39_stats_rpc_time.cpp \
    $${PWD}/OAIV0_0_39_stats_user.cpp \
    $${PWD}/OAIV0_0_39_step.cpp \
    $${PWD}/OAIV0_0_39_step_CPU.cpp \
    $${PWD}/OAIV0_0_39_step_nodes.cpp \
    $${PWD}/OAIV0_0_39_step_statistics.cpp \
    $${PWD}/OAIV0_0_39_step_statistics_energy.cpp \
    $${PWD}/OAIV0_0_39_step_task.cpp \
    $${PWD}/OAIV0_0_39_step_tasks.cpp \
    $${PWD}/OAIV0_0_39_step_time.cpp \
    $${PWD}/OAIV0_0_39_step_time_user.cpp \
    $${PWD}/OAIV0_0_39_step_tres.cpp \
    $${PWD}/OAIV0_0_39_tres.cpp \
    $${PWD}/OAIV0_0_39_uint16_no_val.cpp \
    $${PWD}/OAIV0_0_39_uint32_no_val.cpp \
    $${PWD}/OAIV0_0_39_uint64_no_val.cpp \
    $${PWD}/OAIV0_0_39_update_node_msg.cpp \
    $${PWD}/OAIV0_0_39_user.cpp \
    $${PWD}/OAIV0_0_39_user_default.cpp \
    $${PWD}/OAIV0_0_39_warning.cpp \
    $${PWD}/OAIV0_0_39_wckey.cpp \
    $${PWD}/OAIV0_0_39_wckey_tag.cpp \
# APIs
    $${PWD}/OAIOpenapiApi.cpp \
    $${PWD}/OAISlurmApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp \
    $${PWD}/OAIHttpFileElement.cpp \
    $${PWD}/OAIOauth.cpp
