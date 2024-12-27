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
 * OAIV0_0_40_step.h
 *
 * 
 */

#ifndef OAIV0_0_40_step_H
#define OAIV0_0_40_step_H

#include <QJsonObject>

#include "OAIV0_0_40_process_exit_code_verbose.h"
#include "OAIV0_0_40_step_CPU.h"
#include "OAIV0_0_40_step_nodes.h"
#include "OAIV0_0_40_step_statistics.h"
#include "OAIV0_0_40_step_step.h"
#include "OAIV0_0_40_step_task.h"
#include "OAIV0_0_40_step_tasks.h"
#include "OAIV0_0_40_step_time.h"
#include "OAIV0_0_40_step_tres.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_40_step_time;
class OAIV0_0_40_process_exit_code_verbose;
class OAIV0_0_40_step_nodes;
class OAIV0_0_40_step_tasks;
class OAIV0_0_40_step_CPU;
class OAIV0_0_40_step_statistics;
class OAIV0_0_40_step_step;
class OAIV0_0_40_step_task;
class OAIV0_0_40_step_tres;

class OAIV0_0_40_step : public OAIObject {
public:
    OAIV0_0_40_step();
    OAIV0_0_40_step(QString json);
    ~OAIV0_0_40_step() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_40_step_time getTime() const;
    void setTime(const OAIV0_0_40_step_time &time);
    bool is_time_Set() const;
    bool is_time_Valid() const;

    OAIV0_0_40_process_exit_code_verbose getExitCode() const;
    void setExitCode(const OAIV0_0_40_process_exit_code_verbose &exit_code);
    bool is_exit_code_Set() const;
    bool is_exit_code_Valid() const;

    OAIV0_0_40_step_nodes getNodes() const;
    void setNodes(const OAIV0_0_40_step_nodes &nodes);
    bool is_nodes_Set() const;
    bool is_nodes_Valid() const;

    OAIV0_0_40_step_tasks getTasks() const;
    void setTasks(const OAIV0_0_40_step_tasks &tasks);
    bool is_tasks_Set() const;
    bool is_tasks_Valid() const;

    QString getPid() const;
    void setPid(const QString &pid);
    bool is_pid_Set() const;
    bool is_pid_Valid() const;

    OAIV0_0_40_step_CPU getCpu() const;
    void setCpu(const OAIV0_0_40_step_CPU &cpu);
    bool is_cpu_Set() const;
    bool is_cpu_Valid() const;

    QString getKillRequestUser() const;
    void setKillRequestUser(const QString &kill_request_user);
    bool is_kill_request_user_Set() const;
    bool is_kill_request_user_Valid() const;

    QList<QString> getState() const;
    void setState(const QList<QString> &state);
    bool is_state_Set() const;
    bool is_state_Valid() const;

    OAIV0_0_40_step_statistics getStatistics() const;
    void setStatistics(const OAIV0_0_40_step_statistics &statistics);
    bool is_statistics_Set() const;
    bool is_statistics_Valid() const;

    OAIV0_0_40_step_step getStep() const;
    void setStep(const OAIV0_0_40_step_step &step);
    bool is_step_Set() const;
    bool is_step_Valid() const;

    OAIV0_0_40_step_task getTask() const;
    void setTask(const OAIV0_0_40_step_task &task);
    bool is_task_Set() const;
    bool is_task_Valid() const;

    OAIV0_0_40_step_tres getTres() const;
    void setTres(const OAIV0_0_40_step_tres &tres);
    bool is_tres_Set() const;
    bool is_tres_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_40_step_time m_time;
    bool m_time_isSet;
    bool m_time_isValid;

    OAIV0_0_40_process_exit_code_verbose m_exit_code;
    bool m_exit_code_isSet;
    bool m_exit_code_isValid;

    OAIV0_0_40_step_nodes m_nodes;
    bool m_nodes_isSet;
    bool m_nodes_isValid;

    OAIV0_0_40_step_tasks m_tasks;
    bool m_tasks_isSet;
    bool m_tasks_isValid;

    QString m_pid;
    bool m_pid_isSet;
    bool m_pid_isValid;

    OAIV0_0_40_step_CPU m_cpu;
    bool m_cpu_isSet;
    bool m_cpu_isValid;

    QString m_kill_request_user;
    bool m_kill_request_user_isSet;
    bool m_kill_request_user_isValid;

    QList<QString> m_state;
    bool m_state_isSet;
    bool m_state_isValid;

    OAIV0_0_40_step_statistics m_statistics;
    bool m_statistics_isSet;
    bool m_statistics_isValid;

    OAIV0_0_40_step_step m_step;
    bool m_step_isSet;
    bool m_step_isValid;

    OAIV0_0_40_step_task m_task;
    bool m_task_isSet;
    bool m_task_isValid;

    OAIV0_0_40_step_tres m_tres;
    bool m_tres_isSet;
    bool m_tres_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_40_step)

#endif // OAIV0_0_40_step_H
