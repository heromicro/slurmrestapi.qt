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

#include "OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly() {
    this->initializeModel();
}

OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::~OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly() {}

void OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::initializeModel() {

    m_count_isSet = false;
    m_count_isValid = false;

    m_last_run_isSet = false;
    m_last_run_isValid = false;

    m_duration_isSet = false;
    m_duration_isValid = false;
}

void OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::fromJsonObject(QJsonObject json) {

    m_count_isValid = ::hm:slurm:client::fromJsonValue(m_count, json[QString("count")]);
    m_count_isSet = !json[QString("count")].isNull() && m_count_isValid;

    m_last_run_isValid = ::hm:slurm:client::fromJsonValue(m_last_run, json[QString("last_run")]);
    m_last_run_isSet = !json[QString("last_run")].isNull() && m_last_run_isValid;

    m_duration_isValid = ::hm:slurm:client::fromJsonValue(m_duration, json[QString("duration")]);
    m_duration_isSet = !json[QString("duration")].isNull() && m_duration_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::asJsonObject() const {
    QJsonObject obj;
    if (m_count_isSet) {
        obj.insert(QString("count"), ::hm:slurm:client::toJsonValue(m_count));
    }
    if (m_last_run_isSet) {
        obj.insert(QString("last_run"), ::hm:slurm:client::toJsonValue(m_last_run));
    }
    if (m_duration.isSet()) {
        obj.insert(QString("duration"), ::hm:slurm:client::toJsonValue(m_duration));
    }
    return obj;
}

qint32 OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::getCount() const {
    return m_count;
}
void OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::setCount(const qint32 &count) {
    m_count = count;
    m_count_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::is_count_Set() const{
    return m_count_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::is_count_Valid() const{
    return m_count_isValid;
}

qint64 OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::getLastRun() const {
    return m_last_run;
}
void OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::setLastRun(const qint64 &last_run) {
    m_last_run = last_run;
    m_last_run_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::is_last_run_Set() const{
    return m_last_run_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::is_last_run_Valid() const{
    return m_last_run_isValid;
}

OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::getDuration() const {
    return m_duration;
}
void OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::setDuration(const OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration &duration) {
    m_duration = duration;
    m_duration_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::is_duration_Set() const{
    return m_duration_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::is_duration_Valid() const{
    return m_duration_isValid;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_run_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_duration.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
