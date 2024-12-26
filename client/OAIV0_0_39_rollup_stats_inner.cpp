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

#include "OAIV0_0_39_rollup_stats_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_rollup_stats_inner::OAIV0_0_39_rollup_stats_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_rollup_stats_inner::OAIV0_0_39_rollup_stats_inner() {
    this->initializeModel();
}

OAIV0_0_39_rollup_stats_inner::~OAIV0_0_39_rollup_stats_inner() {}

void OAIV0_0_39_rollup_stats_inner::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_last_run_isSet = false;
    m_last_run_isValid = false;

    m_max_cycle_isSet = false;
    m_max_cycle_isValid = false;

    m_total_time_isSet = false;
    m_total_time_isValid = false;

    m_total_cycles_isSet = false;
    m_total_cycles_isValid = false;

    m_mean_cycles_isSet = false;
    m_mean_cycles_isValid = false;
}

void OAIV0_0_39_rollup_stats_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_rollup_stats_inner::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::OpenAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_last_run_isValid = ::OpenAPI::fromJsonValue(m_last_run, json[QString("last run")]);
    m_last_run_isSet = !json[QString("last run")].isNull() && m_last_run_isValid;

    m_max_cycle_isValid = ::OpenAPI::fromJsonValue(m_max_cycle, json[QString("max_cycle")]);
    m_max_cycle_isSet = !json[QString("max_cycle")].isNull() && m_max_cycle_isValid;

    m_total_time_isValid = ::OpenAPI::fromJsonValue(m_total_time, json[QString("total_time")]);
    m_total_time_isSet = !json[QString("total_time")].isNull() && m_total_time_isValid;

    m_total_cycles_isValid = ::OpenAPI::fromJsonValue(m_total_cycles, json[QString("total_cycles")]);
    m_total_cycles_isSet = !json[QString("total_cycles")].isNull() && m_total_cycles_isValid;

    m_mean_cycles_isValid = ::OpenAPI::fromJsonValue(m_mean_cycles, json[QString("mean_cycles")]);
    m_mean_cycles_isSet = !json[QString("mean_cycles")].isNull() && m_mean_cycles_isValid;
}

QString OAIV0_0_39_rollup_stats_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_rollup_stats_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(m_type));
    }
    if (m_last_run_isSet) {
        obj.insert(QString("last run"), ::OpenAPI::toJsonValue(m_last_run));
    }
    if (m_max_cycle_isSet) {
        obj.insert(QString("max_cycle"), ::OpenAPI::toJsonValue(m_max_cycle));
    }
    if (m_total_time_isSet) {
        obj.insert(QString("total_time"), ::OpenAPI::toJsonValue(m_total_time));
    }
    if (m_total_cycles_isSet) {
        obj.insert(QString("total_cycles"), ::OpenAPI::toJsonValue(m_total_cycles));
    }
    if (m_mean_cycles_isSet) {
        obj.insert(QString("mean_cycles"), ::OpenAPI::toJsonValue(m_mean_cycles));
    }
    return obj;
}

QString OAIV0_0_39_rollup_stats_inner::getType() const {
    return m_type;
}
void OAIV0_0_39_rollup_stats_inner::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIV0_0_39_rollup_stats_inner::is_type_Set() const{
    return m_type_isSet;
}

bool OAIV0_0_39_rollup_stats_inner::is_type_Valid() const{
    return m_type_isValid;
}

qint32 OAIV0_0_39_rollup_stats_inner::getLastRun() const {
    return m_last_run;
}
void OAIV0_0_39_rollup_stats_inner::setLastRun(const qint32 &last_run) {
    m_last_run = last_run;
    m_last_run_isSet = true;
}

bool OAIV0_0_39_rollup_stats_inner::is_last_run_Set() const{
    return m_last_run_isSet;
}

bool OAIV0_0_39_rollup_stats_inner::is_last_run_Valid() const{
    return m_last_run_isValid;
}

qint64 OAIV0_0_39_rollup_stats_inner::getMaxCycle() const {
    return m_max_cycle;
}
void OAIV0_0_39_rollup_stats_inner::setMaxCycle(const qint64 &max_cycle) {
    m_max_cycle = max_cycle;
    m_max_cycle_isSet = true;
}

bool OAIV0_0_39_rollup_stats_inner::is_max_cycle_Set() const{
    return m_max_cycle_isSet;
}

bool OAIV0_0_39_rollup_stats_inner::is_max_cycle_Valid() const{
    return m_max_cycle_isValid;
}

qint64 OAIV0_0_39_rollup_stats_inner::getTotalTime() const {
    return m_total_time;
}
void OAIV0_0_39_rollup_stats_inner::setTotalTime(const qint64 &total_time) {
    m_total_time = total_time;
    m_total_time_isSet = true;
}

bool OAIV0_0_39_rollup_stats_inner::is_total_time_Set() const{
    return m_total_time_isSet;
}

bool OAIV0_0_39_rollup_stats_inner::is_total_time_Valid() const{
    return m_total_time_isValid;
}

qint64 OAIV0_0_39_rollup_stats_inner::getTotalCycles() const {
    return m_total_cycles;
}
void OAIV0_0_39_rollup_stats_inner::setTotalCycles(const qint64 &total_cycles) {
    m_total_cycles = total_cycles;
    m_total_cycles_isSet = true;
}

bool OAIV0_0_39_rollup_stats_inner::is_total_cycles_Set() const{
    return m_total_cycles_isSet;
}

bool OAIV0_0_39_rollup_stats_inner::is_total_cycles_Valid() const{
    return m_total_cycles_isValid;
}

qint64 OAIV0_0_39_rollup_stats_inner::getMeanCycles() const {
    return m_mean_cycles;
}
void OAIV0_0_39_rollup_stats_inner::setMeanCycles(const qint64 &mean_cycles) {
    m_mean_cycles = mean_cycles;
    m_mean_cycles_isSet = true;
}

bool OAIV0_0_39_rollup_stats_inner::is_mean_cycles_Set() const{
    return m_mean_cycles_isSet;
}

bool OAIV0_0_39_rollup_stats_inner::is_mean_cycles_Valid() const{
    return m_mean_cycles_isValid;
}

bool OAIV0_0_39_rollup_stats_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_run_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_cycle_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_cycles_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mean_cycles_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_rollup_stats_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
