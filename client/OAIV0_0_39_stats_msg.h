/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIV0_0_39_stats_msg.h
 *
 * 
 */

#ifndef OAIV0_0_39_stats_msg_H
#define OAIV0_0_39_stats_msg_H

#include <QJsonObject>

#include "OAIV0_0_39_stats_msg_rpcs_by_type_inner.h"
#include "OAIV0_0_39_stats_msg_rpcs_by_user_inner.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_39_stats_msg_rpcs_by_type_inner;
class OAIV0_0_39_stats_msg_rpcs_by_user_inner;

class OAIV0_0_39_stats_msg : public OAIObject {
public:
    OAIV0_0_39_stats_msg();
    OAIV0_0_39_stats_msg(QString json);
    ~OAIV0_0_39_stats_msg() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPartsPacked() const;
    void setPartsPacked(const qint32 &parts_packed);
    bool is_parts_packed_Set() const;
    bool is_parts_packed_Valid() const;

    qint64 getReqTime() const;
    void setReqTime(const qint64 &req_time);
    bool is_req_time_Set() const;
    bool is_req_time_Valid() const;

    qint64 getReqTimeStart() const;
    void setReqTimeStart(const qint64 &req_time_start);
    bool is_req_time_start_Set() const;
    bool is_req_time_start_Valid() const;

    qint32 getServerThreadCount() const;
    void setServerThreadCount(const qint32 &server_thread_count);
    bool is_server_thread_count_Set() const;
    bool is_server_thread_count_Valid() const;

    qint32 getAgentQueueSize() const;
    void setAgentQueueSize(const qint32 &agent_queue_size);
    bool is_agent_queue_size_Set() const;
    bool is_agent_queue_size_Valid() const;

    qint32 getAgentCount() const;
    void setAgentCount(const qint32 &agent_count);
    bool is_agent_count_Set() const;
    bool is_agent_count_Valid() const;

    qint32 getAgentThreadCount() const;
    void setAgentThreadCount(const qint32 &agent_thread_count);
    bool is_agent_thread_count_Set() const;
    bool is_agent_thread_count_Valid() const;

    qint32 getDbdAgentQueueSize() const;
    void setDbdAgentQueueSize(const qint32 &dbd_agent_queue_size);
    bool is_dbd_agent_queue_size_Set() const;
    bool is_dbd_agent_queue_size_Valid() const;

    qint32 getGettimeofdayLatency() const;
    void setGettimeofdayLatency(const qint32 &gettimeofday_latency);
    bool is_gettimeofday_latency_Set() const;
    bool is_gettimeofday_latency_Valid() const;

    qint32 getScheduleCycleMax() const;
    void setScheduleCycleMax(const qint32 &schedule_cycle_max);
    bool is_schedule_cycle_max_Set() const;
    bool is_schedule_cycle_max_Valid() const;

    qint32 getScheduleCycleLast() const;
    void setScheduleCycleLast(const qint32 &schedule_cycle_last);
    bool is_schedule_cycle_last_Set() const;
    bool is_schedule_cycle_last_Valid() const;

    qint32 getScheduleCycleTotal() const;
    void setScheduleCycleTotal(const qint32 &schedule_cycle_total);
    bool is_schedule_cycle_total_Set() const;
    bool is_schedule_cycle_total_Valid() const;

    qint64 getScheduleCycleMean() const;
    void setScheduleCycleMean(const qint64 &schedule_cycle_mean);
    bool is_schedule_cycle_mean_Set() const;
    bool is_schedule_cycle_mean_Valid() const;

    qint64 getScheduleCycleMeanDepth() const;
    void setScheduleCycleMeanDepth(const qint64 &schedule_cycle_mean_depth);
    bool is_schedule_cycle_mean_depth_Set() const;
    bool is_schedule_cycle_mean_depth_Valid() const;

    qint64 getScheduleCyclePerMinute() const;
    void setScheduleCyclePerMinute(const qint64 &schedule_cycle_per_minute);
    bool is_schedule_cycle_per_minute_Set() const;
    bool is_schedule_cycle_per_minute_Valid() const;

    qint32 getScheduleQueueLength() const;
    void setScheduleQueueLength(const qint32 &schedule_queue_length);
    bool is_schedule_queue_length_Set() const;
    bool is_schedule_queue_length_Valid() const;

    qint32 getJobsSubmitted() const;
    void setJobsSubmitted(const qint32 &jobs_submitted);
    bool is_jobs_submitted_Set() const;
    bool is_jobs_submitted_Valid() const;

    qint32 getJobsStarted() const;
    void setJobsStarted(const qint32 &jobs_started);
    bool is_jobs_started_Set() const;
    bool is_jobs_started_Valid() const;

    qint32 getJobsCompleted() const;
    void setJobsCompleted(const qint32 &jobs_completed);
    bool is_jobs_completed_Set() const;
    bool is_jobs_completed_Valid() const;

    qint32 getJobsCanceled() const;
    void setJobsCanceled(const qint32 &jobs_canceled);
    bool is_jobs_canceled_Set() const;
    bool is_jobs_canceled_Valid() const;

    qint32 getJobsFailed() const;
    void setJobsFailed(const qint32 &jobs_failed);
    bool is_jobs_failed_Set() const;
    bool is_jobs_failed_Valid() const;

    qint32 getJobsPending() const;
    void setJobsPending(const qint32 &jobs_pending);
    bool is_jobs_pending_Set() const;
    bool is_jobs_pending_Valid() const;

    qint32 getJobsRunning() const;
    void setJobsRunning(const qint32 &jobs_running);
    bool is_jobs_running_Set() const;
    bool is_jobs_running_Valid() const;

    qint64 getJobStatesTs() const;
    void setJobStatesTs(const qint64 &job_states_ts);
    bool is_job_states_ts_Set() const;
    bool is_job_states_ts_Valid() const;

    qint32 getBfBackfilledJobs() const;
    void setBfBackfilledJobs(const qint32 &bf_backfilled_jobs);
    bool is_bf_backfilled_jobs_Set() const;
    bool is_bf_backfilled_jobs_Valid() const;

    qint32 getBfLastBackfilledJobs() const;
    void setBfLastBackfilledJobs(const qint32 &bf_last_backfilled_jobs);
    bool is_bf_last_backfilled_jobs_Set() const;
    bool is_bf_last_backfilled_jobs_Valid() const;

    qint32 getBfBackfilledHetJobs() const;
    void setBfBackfilledHetJobs(const qint32 &bf_backfilled_het_jobs);
    bool is_bf_backfilled_het_jobs_Set() const;
    bool is_bf_backfilled_het_jobs_Valid() const;

    qint32 getBfCycleCounter() const;
    void setBfCycleCounter(const qint32 &bf_cycle_counter);
    bool is_bf_cycle_counter_Set() const;
    bool is_bf_cycle_counter_Valid() const;

    qint64 getBfCycleMean() const;
    void setBfCycleMean(const qint64 &bf_cycle_mean);
    bool is_bf_cycle_mean_Set() const;
    bool is_bf_cycle_mean_Valid() const;

    qint64 getBfDepthMean() const;
    void setBfDepthMean(const qint64 &bf_depth_mean);
    bool is_bf_depth_mean_Set() const;
    bool is_bf_depth_mean_Valid() const;

    qint64 getBfDepthMeanTry() const;
    void setBfDepthMeanTry(const qint64 &bf_depth_mean_try);
    bool is_bf_depth_mean_try_Set() const;
    bool is_bf_depth_mean_try_Valid() const;

    qint64 getBfCycleSum() const;
    void setBfCycleSum(const qint64 &bf_cycle_sum);
    bool is_bf_cycle_sum_Set() const;
    bool is_bf_cycle_sum_Valid() const;

    qint32 getBfCycleLast() const;
    void setBfCycleLast(const qint32 &bf_cycle_last);
    bool is_bf_cycle_last_Set() const;
    bool is_bf_cycle_last_Valid() const;

    qint32 getBfLastDepth() const;
    void setBfLastDepth(const qint32 &bf_last_depth);
    bool is_bf_last_depth_Set() const;
    bool is_bf_last_depth_Valid() const;

    qint32 getBfLastDepthTry() const;
    void setBfLastDepthTry(const qint32 &bf_last_depth_try);
    bool is_bf_last_depth_try_Set() const;
    bool is_bf_last_depth_try_Valid() const;

    qint32 getBfDepthSum() const;
    void setBfDepthSum(const qint32 &bf_depth_sum);
    bool is_bf_depth_sum_Set() const;
    bool is_bf_depth_sum_Valid() const;

    qint32 getBfDepthTrySum() const;
    void setBfDepthTrySum(const qint32 &bf_depth_try_sum);
    bool is_bf_depth_try_sum_Set() const;
    bool is_bf_depth_try_sum_Valid() const;

    qint32 getBfQueueLen() const;
    void setBfQueueLen(const qint32 &bf_queue_len);
    bool is_bf_queue_len_Set() const;
    bool is_bf_queue_len_Valid() const;

    qint64 getBfQueueLenMean() const;
    void setBfQueueLenMean(const qint64 &bf_queue_len_mean);
    bool is_bf_queue_len_mean_Set() const;
    bool is_bf_queue_len_mean_Valid() const;

    qint32 getBfQueueLenSum() const;
    void setBfQueueLenSum(const qint32 &bf_queue_len_sum);
    bool is_bf_queue_len_sum_Set() const;
    bool is_bf_queue_len_sum_Valid() const;

    qint32 getBfTableSize() const;
    void setBfTableSize(const qint32 &bf_table_size);
    bool is_bf_table_size_Set() const;
    bool is_bf_table_size_Valid() const;

    qint64 getBfTableSizeMean() const;
    void setBfTableSizeMean(const qint64 &bf_table_size_mean);
    bool is_bf_table_size_mean_Set() const;
    bool is_bf_table_size_mean_Valid() const;

    qint64 getBfWhenLastCycle() const;
    void setBfWhenLastCycle(const qint64 &bf_when_last_cycle);
    bool is_bf_when_last_cycle_Set() const;
    bool is_bf_when_last_cycle_Valid() const;

    bool isBfActive() const;
    void setBfActive(const bool &bf_active);
    bool is_bf_active_Set() const;
    bool is_bf_active_Valid() const;

    QList<OAIV0_0_39_stats_msg_rpcs_by_type_inner> getRpcsByMessageType() const;
    void setRpcsByMessageType(const QList<OAIV0_0_39_stats_msg_rpcs_by_type_inner> &rpcs_by_message_type);
    bool is_rpcs_by_message_type_Set() const;
    bool is_rpcs_by_message_type_Valid() const;

    QList<OAIV0_0_39_stats_msg_rpcs_by_user_inner> getRpcsByUser() const;
    void setRpcsByUser(const QList<OAIV0_0_39_stats_msg_rpcs_by_user_inner> &rpcs_by_user);
    bool is_rpcs_by_user_Set() const;
    bool is_rpcs_by_user_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_parts_packed;
    bool m_parts_packed_isSet;
    bool m_parts_packed_isValid;

    qint64 m_req_time;
    bool m_req_time_isSet;
    bool m_req_time_isValid;

    qint64 m_req_time_start;
    bool m_req_time_start_isSet;
    bool m_req_time_start_isValid;

    qint32 m_server_thread_count;
    bool m_server_thread_count_isSet;
    bool m_server_thread_count_isValid;

    qint32 m_agent_queue_size;
    bool m_agent_queue_size_isSet;
    bool m_agent_queue_size_isValid;

    qint32 m_agent_count;
    bool m_agent_count_isSet;
    bool m_agent_count_isValid;

    qint32 m_agent_thread_count;
    bool m_agent_thread_count_isSet;
    bool m_agent_thread_count_isValid;

    qint32 m_dbd_agent_queue_size;
    bool m_dbd_agent_queue_size_isSet;
    bool m_dbd_agent_queue_size_isValid;

    qint32 m_gettimeofday_latency;
    bool m_gettimeofday_latency_isSet;
    bool m_gettimeofday_latency_isValid;

    qint32 m_schedule_cycle_max;
    bool m_schedule_cycle_max_isSet;
    bool m_schedule_cycle_max_isValid;

    qint32 m_schedule_cycle_last;
    bool m_schedule_cycle_last_isSet;
    bool m_schedule_cycle_last_isValid;

    qint32 m_schedule_cycle_total;
    bool m_schedule_cycle_total_isSet;
    bool m_schedule_cycle_total_isValid;

    qint64 m_schedule_cycle_mean;
    bool m_schedule_cycle_mean_isSet;
    bool m_schedule_cycle_mean_isValid;

    qint64 m_schedule_cycle_mean_depth;
    bool m_schedule_cycle_mean_depth_isSet;
    bool m_schedule_cycle_mean_depth_isValid;

    qint64 m_schedule_cycle_per_minute;
    bool m_schedule_cycle_per_minute_isSet;
    bool m_schedule_cycle_per_minute_isValid;

    qint32 m_schedule_queue_length;
    bool m_schedule_queue_length_isSet;
    bool m_schedule_queue_length_isValid;

    qint32 m_jobs_submitted;
    bool m_jobs_submitted_isSet;
    bool m_jobs_submitted_isValid;

    qint32 m_jobs_started;
    bool m_jobs_started_isSet;
    bool m_jobs_started_isValid;

    qint32 m_jobs_completed;
    bool m_jobs_completed_isSet;
    bool m_jobs_completed_isValid;

    qint32 m_jobs_canceled;
    bool m_jobs_canceled_isSet;
    bool m_jobs_canceled_isValid;

    qint32 m_jobs_failed;
    bool m_jobs_failed_isSet;
    bool m_jobs_failed_isValid;

    qint32 m_jobs_pending;
    bool m_jobs_pending_isSet;
    bool m_jobs_pending_isValid;

    qint32 m_jobs_running;
    bool m_jobs_running_isSet;
    bool m_jobs_running_isValid;

    qint64 m_job_states_ts;
    bool m_job_states_ts_isSet;
    bool m_job_states_ts_isValid;

    qint32 m_bf_backfilled_jobs;
    bool m_bf_backfilled_jobs_isSet;
    bool m_bf_backfilled_jobs_isValid;

    qint32 m_bf_last_backfilled_jobs;
    bool m_bf_last_backfilled_jobs_isSet;
    bool m_bf_last_backfilled_jobs_isValid;

    qint32 m_bf_backfilled_het_jobs;
    bool m_bf_backfilled_het_jobs_isSet;
    bool m_bf_backfilled_het_jobs_isValid;

    qint32 m_bf_cycle_counter;
    bool m_bf_cycle_counter_isSet;
    bool m_bf_cycle_counter_isValid;

    qint64 m_bf_cycle_mean;
    bool m_bf_cycle_mean_isSet;
    bool m_bf_cycle_mean_isValid;

    qint64 m_bf_depth_mean;
    bool m_bf_depth_mean_isSet;
    bool m_bf_depth_mean_isValid;

    qint64 m_bf_depth_mean_try;
    bool m_bf_depth_mean_try_isSet;
    bool m_bf_depth_mean_try_isValid;

    qint64 m_bf_cycle_sum;
    bool m_bf_cycle_sum_isSet;
    bool m_bf_cycle_sum_isValid;

    qint32 m_bf_cycle_last;
    bool m_bf_cycle_last_isSet;
    bool m_bf_cycle_last_isValid;

    qint32 m_bf_last_depth;
    bool m_bf_last_depth_isSet;
    bool m_bf_last_depth_isValid;

    qint32 m_bf_last_depth_try;
    bool m_bf_last_depth_try_isSet;
    bool m_bf_last_depth_try_isValid;

    qint32 m_bf_depth_sum;
    bool m_bf_depth_sum_isSet;
    bool m_bf_depth_sum_isValid;

    qint32 m_bf_depth_try_sum;
    bool m_bf_depth_try_sum_isSet;
    bool m_bf_depth_try_sum_isValid;

    qint32 m_bf_queue_len;
    bool m_bf_queue_len_isSet;
    bool m_bf_queue_len_isValid;

    qint64 m_bf_queue_len_mean;
    bool m_bf_queue_len_mean_isSet;
    bool m_bf_queue_len_mean_isValid;

    qint32 m_bf_queue_len_sum;
    bool m_bf_queue_len_sum_isSet;
    bool m_bf_queue_len_sum_isValid;

    qint32 m_bf_table_size;
    bool m_bf_table_size_isSet;
    bool m_bf_table_size_isValid;

    qint64 m_bf_table_size_mean;
    bool m_bf_table_size_mean_isSet;
    bool m_bf_table_size_mean_isValid;

    qint64 m_bf_when_last_cycle;
    bool m_bf_when_last_cycle_isSet;
    bool m_bf_when_last_cycle_isValid;

    bool m_bf_active;
    bool m_bf_active_isSet;
    bool m_bf_active_isValid;

    QList<OAIV0_0_39_stats_msg_rpcs_by_type_inner> m_rpcs_by_message_type;
    bool m_rpcs_by_message_type_isSet;
    bool m_rpcs_by_message_type_isValid;

    QList<OAIV0_0_39_stats_msg_rpcs_by_user_inner> m_rpcs_by_user;
    bool m_rpcs_by_user_isSet;
    bool m_rpcs_by_user_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_39_stats_msg)

#endif // OAIV0_0_39_stats_msg_H
