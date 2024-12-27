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

#include "OAIV0_0_40_stats_msg_rpcs_by_type_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_40_stats_msg_rpcs_by_type_inner::OAIV0_0_40_stats_msg_rpcs_by_type_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_stats_msg_rpcs_by_type_inner::OAIV0_0_40_stats_msg_rpcs_by_type_inner() {
    this->initializeModel();
}

OAIV0_0_40_stats_msg_rpcs_by_type_inner::~OAIV0_0_40_stats_msg_rpcs_by_type_inner() {}

void OAIV0_0_40_stats_msg_rpcs_by_type_inner::initializeModel() {

    m_message_type_isSet = false;
    m_message_type_isValid = false;

    m_type_id_isSet = false;
    m_type_id_isValid = false;

    m_count_isSet = false;
    m_count_isValid = false;

    m_average_time_isSet = false;
    m_average_time_isValid = false;

    m_total_time_isSet = false;
    m_total_time_isValid = false;
}

void OAIV0_0_40_stats_msg_rpcs_by_type_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_stats_msg_rpcs_by_type_inner::fromJsonObject(QJsonObject json) {

    m_message_type_isValid = ::hm:slurm:client::fromJsonValue(m_message_type, json[QString("message_type")]);
    m_message_type_isSet = !json[QString("message_type")].isNull() && m_message_type_isValid;

    m_type_id_isValid = ::hm:slurm:client::fromJsonValue(m_type_id, json[QString("type_id")]);
    m_type_id_isSet = !json[QString("type_id")].isNull() && m_type_id_isValid;

    m_count_isValid = ::hm:slurm:client::fromJsonValue(m_count, json[QString("count")]);
    m_count_isSet = !json[QString("count")].isNull() && m_count_isValid;

    m_average_time_isValid = ::hm:slurm:client::fromJsonValue(m_average_time, json[QString("average_time")]);
    m_average_time_isSet = !json[QString("average_time")].isNull() && m_average_time_isValid;

    m_total_time_isValid = ::hm:slurm:client::fromJsonValue(m_total_time, json[QString("total_time")]);
    m_total_time_isSet = !json[QString("total_time")].isNull() && m_total_time_isValid;
}

QString OAIV0_0_40_stats_msg_rpcs_by_type_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_stats_msg_rpcs_by_type_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_message_type_isSet) {
        obj.insert(QString("message_type"), ::hm:slurm:client::toJsonValue(m_message_type));
    }
    if (m_type_id_isSet) {
        obj.insert(QString("type_id"), ::hm:slurm:client::toJsonValue(m_type_id));
    }
    if (m_count_isSet) {
        obj.insert(QString("count"), ::hm:slurm:client::toJsonValue(m_count));
    }
    if (m_average_time_isSet) {
        obj.insert(QString("average_time"), ::hm:slurm:client::toJsonValue(m_average_time));
    }
    if (m_total_time_isSet) {
        obj.insert(QString("total_time"), ::hm:slurm:client::toJsonValue(m_total_time));
    }
    return obj;
}

QString OAIV0_0_40_stats_msg_rpcs_by_type_inner::getMessageType() const {
    return m_message_type;
}
void OAIV0_0_40_stats_msg_rpcs_by_type_inner::setMessageType(const QString &message_type) {
    m_message_type = message_type;
    m_message_type_isSet = true;
}

bool OAIV0_0_40_stats_msg_rpcs_by_type_inner::is_message_type_Set() const{
    return m_message_type_isSet;
}

bool OAIV0_0_40_stats_msg_rpcs_by_type_inner::is_message_type_Valid() const{
    return m_message_type_isValid;
}

qint32 OAIV0_0_40_stats_msg_rpcs_by_type_inner::getTypeId() const {
    return m_type_id;
}
void OAIV0_0_40_stats_msg_rpcs_by_type_inner::setTypeId(const qint32 &type_id) {
    m_type_id = type_id;
    m_type_id_isSet = true;
}

bool OAIV0_0_40_stats_msg_rpcs_by_type_inner::is_type_id_Set() const{
    return m_type_id_isSet;
}

bool OAIV0_0_40_stats_msg_rpcs_by_type_inner::is_type_id_Valid() const{
    return m_type_id_isValid;
}

qint64 OAIV0_0_40_stats_msg_rpcs_by_type_inner::getCount() const {
    return m_count;
}
void OAIV0_0_40_stats_msg_rpcs_by_type_inner::setCount(const qint64 &count) {
    m_count = count;
    m_count_isSet = true;
}

bool OAIV0_0_40_stats_msg_rpcs_by_type_inner::is_count_Set() const{
    return m_count_isSet;
}

bool OAIV0_0_40_stats_msg_rpcs_by_type_inner::is_count_Valid() const{
    return m_count_isValid;
}

qint64 OAIV0_0_40_stats_msg_rpcs_by_type_inner::getAverageTime() const {
    return m_average_time;
}
void OAIV0_0_40_stats_msg_rpcs_by_type_inner::setAverageTime(const qint64 &average_time) {
    m_average_time = average_time;
    m_average_time_isSet = true;
}

bool OAIV0_0_40_stats_msg_rpcs_by_type_inner::is_average_time_Set() const{
    return m_average_time_isSet;
}

bool OAIV0_0_40_stats_msg_rpcs_by_type_inner::is_average_time_Valid() const{
    return m_average_time_isValid;
}

qint64 OAIV0_0_40_stats_msg_rpcs_by_type_inner::getTotalTime() const {
    return m_total_time;
}
void OAIV0_0_40_stats_msg_rpcs_by_type_inner::setTotalTime(const qint64 &total_time) {
    m_total_time = total_time;
    m_total_time_isSet = true;
}

bool OAIV0_0_40_stats_msg_rpcs_by_type_inner::is_total_time_Set() const{
    return m_total_time_isSet;
}

bool OAIV0_0_40_stats_msg_rpcs_by_type_inner::is_total_time_Valid() const{
    return m_total_time_isValid;
}

bool OAIV0_0_40_stats_msg_rpcs_by_type_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_message_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_average_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_time_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_stats_msg_rpcs_by_type_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
