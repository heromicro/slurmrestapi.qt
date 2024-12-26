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

#include "OAIV0_0_40_schedule_exit_fields.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_40_schedule_exit_fields::OAIV0_0_40_schedule_exit_fields(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_schedule_exit_fields::OAIV0_0_40_schedule_exit_fields() {
    this->initializeModel();
}

OAIV0_0_40_schedule_exit_fields::~OAIV0_0_40_schedule_exit_fields() {}

void OAIV0_0_40_schedule_exit_fields::initializeModel() {

    m_end_job_queue_isSet = false;
    m_end_job_queue_isValid = false;

    m_default_queue_depth_isSet = false;
    m_default_queue_depth_isValid = false;

    m_max_job_start_isSet = false;
    m_max_job_start_isValid = false;

    m_max_rpc_cnt_isSet = false;
    m_max_rpc_cnt_isValid = false;

    m_max_sched_time_isSet = false;
    m_max_sched_time_isValid = false;

    m_licenses_isSet = false;
    m_licenses_isValid = false;
}

void OAIV0_0_40_schedule_exit_fields::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_schedule_exit_fields::fromJsonObject(QJsonObject json) {

    m_end_job_queue_isValid = ::OpenAPI::fromJsonValue(m_end_job_queue, json[QString("end_job_queue")]);
    m_end_job_queue_isSet = !json[QString("end_job_queue")].isNull() && m_end_job_queue_isValid;

    m_default_queue_depth_isValid = ::OpenAPI::fromJsonValue(m_default_queue_depth, json[QString("default_queue_depth")]);
    m_default_queue_depth_isSet = !json[QString("default_queue_depth")].isNull() && m_default_queue_depth_isValid;

    m_max_job_start_isValid = ::OpenAPI::fromJsonValue(m_max_job_start, json[QString("max_job_start")]);
    m_max_job_start_isSet = !json[QString("max_job_start")].isNull() && m_max_job_start_isValid;

    m_max_rpc_cnt_isValid = ::OpenAPI::fromJsonValue(m_max_rpc_cnt, json[QString("max_rpc_cnt")]);
    m_max_rpc_cnt_isSet = !json[QString("max_rpc_cnt")].isNull() && m_max_rpc_cnt_isValid;

    m_max_sched_time_isValid = ::OpenAPI::fromJsonValue(m_max_sched_time, json[QString("max_sched_time")]);
    m_max_sched_time_isSet = !json[QString("max_sched_time")].isNull() && m_max_sched_time_isValid;

    m_licenses_isValid = ::OpenAPI::fromJsonValue(m_licenses, json[QString("licenses")]);
    m_licenses_isSet = !json[QString("licenses")].isNull() && m_licenses_isValid;
}

QString OAIV0_0_40_schedule_exit_fields::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_schedule_exit_fields::asJsonObject() const {
    QJsonObject obj;
    if (m_end_job_queue_isSet) {
        obj.insert(QString("end_job_queue"), ::OpenAPI::toJsonValue(m_end_job_queue));
    }
    if (m_default_queue_depth_isSet) {
        obj.insert(QString("default_queue_depth"), ::OpenAPI::toJsonValue(m_default_queue_depth));
    }
    if (m_max_job_start_isSet) {
        obj.insert(QString("max_job_start"), ::OpenAPI::toJsonValue(m_max_job_start));
    }
    if (m_max_rpc_cnt_isSet) {
        obj.insert(QString("max_rpc_cnt"), ::OpenAPI::toJsonValue(m_max_rpc_cnt));
    }
    if (m_max_sched_time_isSet) {
        obj.insert(QString("max_sched_time"), ::OpenAPI::toJsonValue(m_max_sched_time));
    }
    if (m_licenses_isSet) {
        obj.insert(QString("licenses"), ::OpenAPI::toJsonValue(m_licenses));
    }
    return obj;
}

qint32 OAIV0_0_40_schedule_exit_fields::getEndJobQueue() const {
    return m_end_job_queue;
}
void OAIV0_0_40_schedule_exit_fields::setEndJobQueue(const qint32 &end_job_queue) {
    m_end_job_queue = end_job_queue;
    m_end_job_queue_isSet = true;
}

bool OAIV0_0_40_schedule_exit_fields::is_end_job_queue_Set() const{
    return m_end_job_queue_isSet;
}

bool OAIV0_0_40_schedule_exit_fields::is_end_job_queue_Valid() const{
    return m_end_job_queue_isValid;
}

qint32 OAIV0_0_40_schedule_exit_fields::getDefaultQueueDepth() const {
    return m_default_queue_depth;
}
void OAIV0_0_40_schedule_exit_fields::setDefaultQueueDepth(const qint32 &default_queue_depth) {
    m_default_queue_depth = default_queue_depth;
    m_default_queue_depth_isSet = true;
}

bool OAIV0_0_40_schedule_exit_fields::is_default_queue_depth_Set() const{
    return m_default_queue_depth_isSet;
}

bool OAIV0_0_40_schedule_exit_fields::is_default_queue_depth_Valid() const{
    return m_default_queue_depth_isValid;
}

qint32 OAIV0_0_40_schedule_exit_fields::getMaxJobStart() const {
    return m_max_job_start;
}
void OAIV0_0_40_schedule_exit_fields::setMaxJobStart(const qint32 &max_job_start) {
    m_max_job_start = max_job_start;
    m_max_job_start_isSet = true;
}

bool OAIV0_0_40_schedule_exit_fields::is_max_job_start_Set() const{
    return m_max_job_start_isSet;
}

bool OAIV0_0_40_schedule_exit_fields::is_max_job_start_Valid() const{
    return m_max_job_start_isValid;
}

qint32 OAIV0_0_40_schedule_exit_fields::getMaxRpcCnt() const {
    return m_max_rpc_cnt;
}
void OAIV0_0_40_schedule_exit_fields::setMaxRpcCnt(const qint32 &max_rpc_cnt) {
    m_max_rpc_cnt = max_rpc_cnt;
    m_max_rpc_cnt_isSet = true;
}

bool OAIV0_0_40_schedule_exit_fields::is_max_rpc_cnt_Set() const{
    return m_max_rpc_cnt_isSet;
}

bool OAIV0_0_40_schedule_exit_fields::is_max_rpc_cnt_Valid() const{
    return m_max_rpc_cnt_isValid;
}

qint32 OAIV0_0_40_schedule_exit_fields::getMaxSchedTime() const {
    return m_max_sched_time;
}
void OAIV0_0_40_schedule_exit_fields::setMaxSchedTime(const qint32 &max_sched_time) {
    m_max_sched_time = max_sched_time;
    m_max_sched_time_isSet = true;
}

bool OAIV0_0_40_schedule_exit_fields::is_max_sched_time_Set() const{
    return m_max_sched_time_isSet;
}

bool OAIV0_0_40_schedule_exit_fields::is_max_sched_time_Valid() const{
    return m_max_sched_time_isValid;
}

qint32 OAIV0_0_40_schedule_exit_fields::getLicenses() const {
    return m_licenses;
}
void OAIV0_0_40_schedule_exit_fields::setLicenses(const qint32 &licenses) {
    m_licenses = licenses;
    m_licenses_isSet = true;
}

bool OAIV0_0_40_schedule_exit_fields::is_licenses_Set() const{
    return m_licenses_isSet;
}

bool OAIV0_0_40_schedule_exit_fields::is_licenses_Valid() const{
    return m_licenses_isValid;
}

bool OAIV0_0_40_schedule_exit_fields::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_end_job_queue_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_queue_depth_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_job_start_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_rpc_cnt_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_sched_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_licenses_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_schedule_exit_fields::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
