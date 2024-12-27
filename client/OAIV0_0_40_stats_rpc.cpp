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

#include "OAIV0_0_40_stats_rpc.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_40_stats_rpc::OAIV0_0_40_stats_rpc(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_stats_rpc::OAIV0_0_40_stats_rpc() {
    this->initializeModel();
}

OAIV0_0_40_stats_rpc::~OAIV0_0_40_stats_rpc() {}

void OAIV0_0_40_stats_rpc::initializeModel() {

    m_rpc_isSet = false;
    m_rpc_isValid = false;

    m_count_isSet = false;
    m_count_isValid = false;

    m_time_isSet = false;
    m_time_isValid = false;
}

void OAIV0_0_40_stats_rpc::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_stats_rpc::fromJsonObject(QJsonObject json) {

    m_rpc_isValid = ::hm:slurm:client::fromJsonValue(m_rpc, json[QString("rpc")]);
    m_rpc_isSet = !json[QString("rpc")].isNull() && m_rpc_isValid;

    m_count_isValid = ::hm:slurm:client::fromJsonValue(m_count, json[QString("count")]);
    m_count_isSet = !json[QString("count")].isNull() && m_count_isValid;

    m_time_isValid = ::hm:slurm:client::fromJsonValue(m_time, json[QString("time")]);
    m_time_isSet = !json[QString("time")].isNull() && m_time_isValid;
}

QString OAIV0_0_40_stats_rpc::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_stats_rpc::asJsonObject() const {
    QJsonObject obj;
    if (m_rpc_isSet) {
        obj.insert(QString("rpc"), ::hm:slurm:client::toJsonValue(m_rpc));
    }
    if (m_count_isSet) {
        obj.insert(QString("count"), ::hm:slurm:client::toJsonValue(m_count));
    }
    if (m_time.isSet()) {
        obj.insert(QString("time"), ::hm:slurm:client::toJsonValue(m_time));
    }
    return obj;
}

QString OAIV0_0_40_stats_rpc::getRpc() const {
    return m_rpc;
}
void OAIV0_0_40_stats_rpc::setRpc(const QString &rpc) {
    m_rpc = rpc;
    m_rpc_isSet = true;
}

bool OAIV0_0_40_stats_rpc::is_rpc_Set() const{
    return m_rpc_isSet;
}

bool OAIV0_0_40_stats_rpc::is_rpc_Valid() const{
    return m_rpc_isValid;
}

qint32 OAIV0_0_40_stats_rpc::getCount() const {
    return m_count;
}
void OAIV0_0_40_stats_rpc::setCount(const qint32 &count) {
    m_count = count;
    m_count_isSet = true;
}

bool OAIV0_0_40_stats_rpc::is_count_Set() const{
    return m_count_isSet;
}

bool OAIV0_0_40_stats_rpc::is_count_Valid() const{
    return m_count_isValid;
}

OAIV0_0_40_stats_rpc_time OAIV0_0_40_stats_rpc::getTime() const {
    return m_time;
}
void OAIV0_0_40_stats_rpc::setTime(const OAIV0_0_40_stats_rpc_time &time) {
    m_time = time;
    m_time_isSet = true;
}

bool OAIV0_0_40_stats_rpc::is_time_Set() const{
    return m_time_isSet;
}

bool OAIV0_0_40_stats_rpc::is_time_Valid() const{
    return m_time_isValid;
}

bool OAIV0_0_40_stats_rpc::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_rpc_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_time.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_stats_rpc::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
