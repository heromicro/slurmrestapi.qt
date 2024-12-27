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

#include "OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array() {
    this->initializeModel();
}

OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::~OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array() {}

void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::initializeModel() {

    m_job_id_isSet = false;
    m_job_id_isValid = false;

    m_limits_isSet = false;
    m_limits_isValid = false;

    m_task_id_isSet = false;
    m_task_id_isValid = false;

    m_task_isSet = false;
    m_task_isValid = false;
}

void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::fromJsonObject(QJsonObject json) {

    m_job_id_isValid = ::hm:slurm:client::fromJsonValue(m_job_id, json[QString("job_id")]);
    m_job_id_isSet = !json[QString("job_id")].isNull() && m_job_id_isValid;

    m_limits_isValid = ::hm:slurm:client::fromJsonValue(m_limits, json[QString("limits")]);
    m_limits_isSet = !json[QString("limits")].isNull() && m_limits_isValid;

    m_task_id_isValid = ::hm:slurm:client::fromJsonValue(m_task_id, json[QString("task_id")]);
    m_task_id_isSet = !json[QString("task_id")].isNull() && m_task_id_isValid;

    m_task_isValid = ::hm:slurm:client::fromJsonValue(m_task, json[QString("task")]);
    m_task_isSet = !json[QString("task")].isNull() && m_task_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::asJsonObject() const {
    QJsonObject obj;
    if (m_job_id_isSet) {
        obj.insert(QString("job_id"), ::hm:slurm:client::toJsonValue(m_job_id));
    }
    if (m_limits.isSet()) {
        obj.insert(QString("limits"), ::hm:slurm:client::toJsonValue(m_limits));
    }
    if (m_task_id.isSet()) {
        obj.insert(QString("task_id"), ::hm:slurm:client::toJsonValue(m_task_id));
    }
    if (m_task_isSet) {
        obj.insert(QString("task"), ::hm:slurm:client::toJsonValue(m_task));
    }
    return obj;
}

qint32 OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::getJobId() const {
    return m_job_id;
}
void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::setJobId(const qint32 &job_id) {
    m_job_id = job_id;
    m_job_id_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::is_job_id_Set() const{
    return m_job_id_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::is_job_id_Valid() const{
    return m_job_id_isValid;
}

OAIV0_0_40_job_array_limits OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::getLimits() const {
    return m_limits;
}
void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::setLimits(const OAIV0_0_40_job_array_limits &limits) {
    m_limits = limits;
    m_limits_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::is_limits_Set() const{
    return m_limits_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::is_limits_Valid() const{
    return m_limits_isValid;
}

OAIV0_0_41_openapi_job_info_resp_jobs_inner_array_task_id OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::getTaskId() const {
    return m_task_id;
}
void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::setTaskId(const OAIV0_0_41_openapi_job_info_resp_jobs_inner_array_task_id &task_id) {
    m_task_id = task_id;
    m_task_id_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::is_task_id_Set() const{
    return m_task_id_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::is_task_id_Valid() const{
    return m_task_id_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::getTask() const {
    return m_task;
}
void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::setTask(const QString &task) {
    m_task = task;
    m_task_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::is_task_Set() const{
    return m_task_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::is_task_Valid() const{
    return m_task_isValid;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_job_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_limits.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_task_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_task_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
