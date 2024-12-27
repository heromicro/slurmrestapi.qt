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

#include "OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration() {
    this->initializeModel();
}

OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::~OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration() {}

void OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::initializeModel() {

    m_last_isSet = false;
    m_last_isValid = false;

    m_max_isSet = false;
    m_max_isValid = false;

    m_time_isSet = false;
    m_time_isValid = false;
}

void OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::fromJsonObject(QJsonObject json) {

    m_last_isValid = ::hm:slurm:client::fromJsonValue(m_last, json[QString("last")]);
    m_last_isSet = !json[QString("last")].isNull() && m_last_isValid;

    m_max_isValid = ::hm:slurm:client::fromJsonValue(m_max, json[QString("max")]);
    m_max_isSet = !json[QString("max")].isNull() && m_max_isValid;

    m_time_isValid = ::hm:slurm:client::fromJsonValue(m_time, json[QString("time")]);
    m_time_isSet = !json[QString("time")].isNull() && m_time_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::asJsonObject() const {
    QJsonObject obj;
    if (m_last_isSet) {
        obj.insert(QString("last"), ::hm:slurm:client::toJsonValue(m_last));
    }
    if (m_max_isSet) {
        obj.insert(QString("max"), ::hm:slurm:client::toJsonValue(m_max));
    }
    if (m_time_isSet) {
        obj.insert(QString("time"), ::hm:slurm:client::toJsonValue(m_time));
    }
    return obj;
}

qint64 OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::getLast() const {
    return m_last;
}
void OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::setLast(const qint64 &last) {
    m_last = last;
    m_last_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::is_last_Set() const{
    return m_last_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::is_last_Valid() const{
    return m_last_isValid;
}

qint64 OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::getMax() const {
    return m_max;
}
void OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::setMax(const qint64 &max) {
    m_max = max;
    m_max_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::is_max_Set() const{
    return m_max_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::is_max_Valid() const{
    return m_max_isValid;
}

qint64 OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::getTime() const {
    return m_time;
}
void OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::setTime(const qint64 &time) {
    m_time = time;
    m_time_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::is_time_Set() const{
    return m_time_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::is_time_Valid() const{
    return m_time_isValid;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_last_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_time_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_slurmdbd_stats_resp_statistics_rollups_hourly_duration::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
