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

#include "OAIV0_0_39_stats_msg_rpcs_by_user_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_stats_msg_rpcs_by_user_inner::OAIV0_0_39_stats_msg_rpcs_by_user_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_stats_msg_rpcs_by_user_inner::OAIV0_0_39_stats_msg_rpcs_by_user_inner() {
    this->initializeModel();
}

OAIV0_0_39_stats_msg_rpcs_by_user_inner::~OAIV0_0_39_stats_msg_rpcs_by_user_inner() {}

void OAIV0_0_39_stats_msg_rpcs_by_user_inner::initializeModel() {

    m_user_isSet = false;
    m_user_isValid = false;

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_count_isSet = false;
    m_count_isValid = false;

    m_average_time_isSet = false;
    m_average_time_isValid = false;

    m_total_time_isSet = false;
    m_total_time_isValid = false;
}

void OAIV0_0_39_stats_msg_rpcs_by_user_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_stats_msg_rpcs_by_user_inner::fromJsonObject(QJsonObject json) {

    m_user_isValid = ::OpenAPI::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_user_id_isValid = ::OpenAPI::fromJsonValue(m_user_id, json[QString("user_id")]);
    m_user_id_isSet = !json[QString("user_id")].isNull() && m_user_id_isValid;

    m_count_isValid = ::OpenAPI::fromJsonValue(m_count, json[QString("count")]);
    m_count_isSet = !json[QString("count")].isNull() && m_count_isValid;

    m_average_time_isValid = ::OpenAPI::fromJsonValue(m_average_time, json[QString("average_time")]);
    m_average_time_isSet = !json[QString("average_time")].isNull() && m_average_time_isValid;

    m_total_time_isValid = ::OpenAPI::fromJsonValue(m_total_time, json[QString("total_time")]);
    m_total_time_isSet = !json[QString("total_time")].isNull() && m_total_time_isValid;
}

QString OAIV0_0_39_stats_msg_rpcs_by_user_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_stats_msg_rpcs_by_user_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_user_isSet) {
        obj.insert(QString("user"), ::OpenAPI::toJsonValue(m_user));
    }
    if (m_user_id_isSet) {
        obj.insert(QString("user_id"), ::OpenAPI::toJsonValue(m_user_id));
    }
    if (m_count_isSet) {
        obj.insert(QString("count"), ::OpenAPI::toJsonValue(m_count));
    }
    if (m_average_time_isSet) {
        obj.insert(QString("average_time"), ::OpenAPI::toJsonValue(m_average_time));
    }
    if (m_total_time_isSet) {
        obj.insert(QString("total_time"), ::OpenAPI::toJsonValue(m_total_time));
    }
    return obj;
}

QString OAIV0_0_39_stats_msg_rpcs_by_user_inner::getUser() const {
    return m_user;
}
void OAIV0_0_39_stats_msg_rpcs_by_user_inner::setUser(const QString &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIV0_0_39_stats_msg_rpcs_by_user_inner::is_user_Set() const{
    return m_user_isSet;
}

bool OAIV0_0_39_stats_msg_rpcs_by_user_inner::is_user_Valid() const{
    return m_user_isValid;
}

qint32 OAIV0_0_39_stats_msg_rpcs_by_user_inner::getUserId() const {
    return m_user_id;
}
void OAIV0_0_39_stats_msg_rpcs_by_user_inner::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool OAIV0_0_39_stats_msg_rpcs_by_user_inner::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool OAIV0_0_39_stats_msg_rpcs_by_user_inner::is_user_id_Valid() const{
    return m_user_id_isValid;
}

qint64 OAIV0_0_39_stats_msg_rpcs_by_user_inner::getCount() const {
    return m_count;
}
void OAIV0_0_39_stats_msg_rpcs_by_user_inner::setCount(const qint64 &count) {
    m_count = count;
    m_count_isSet = true;
}

bool OAIV0_0_39_stats_msg_rpcs_by_user_inner::is_count_Set() const{
    return m_count_isSet;
}

bool OAIV0_0_39_stats_msg_rpcs_by_user_inner::is_count_Valid() const{
    return m_count_isValid;
}

qint64 OAIV0_0_39_stats_msg_rpcs_by_user_inner::getAverageTime() const {
    return m_average_time;
}
void OAIV0_0_39_stats_msg_rpcs_by_user_inner::setAverageTime(const qint64 &average_time) {
    m_average_time = average_time;
    m_average_time_isSet = true;
}

bool OAIV0_0_39_stats_msg_rpcs_by_user_inner::is_average_time_Set() const{
    return m_average_time_isSet;
}

bool OAIV0_0_39_stats_msg_rpcs_by_user_inner::is_average_time_Valid() const{
    return m_average_time_isValid;
}

qint64 OAIV0_0_39_stats_msg_rpcs_by_user_inner::getTotalTime() const {
    return m_total_time;
}
void OAIV0_0_39_stats_msg_rpcs_by_user_inner::setTotalTime(const qint64 &total_time) {
    m_total_time = total_time;
    m_total_time_isSet = true;
}

bool OAIV0_0_39_stats_msg_rpcs_by_user_inner::is_total_time_Set() const{
    return m_total_time_isSet;
}

bool OAIV0_0_39_stats_msg_rpcs_by_user_inner::is_total_time_Valid() const{
    return m_total_time_isValid;
}

bool OAIV0_0_39_stats_msg_rpcs_by_user_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_user_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_id_isSet) {
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

bool OAIV0_0_39_stats_msg_rpcs_by_user_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI