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

#include "OAIV0_0_39_stats_user.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_stats_user::OAIV0_0_39_stats_user(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_stats_user::OAIV0_0_39_stats_user() {
    this->initializeModel();
}

OAIV0_0_39_stats_user::~OAIV0_0_39_stats_user() {}

void OAIV0_0_39_stats_user::initializeModel() {

    m_user_isSet = false;
    m_user_isValid = false;

    m_count_isSet = false;
    m_count_isValid = false;

    m_time_isSet = false;
    m_time_isValid = false;
}

void OAIV0_0_39_stats_user::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_stats_user::fromJsonObject(QJsonObject json) {

    m_user_isValid = ::OpenAPI::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_count_isValid = ::OpenAPI::fromJsonValue(m_count, json[QString("count")]);
    m_count_isSet = !json[QString("count")].isNull() && m_count_isValid;

    m_time_isValid = ::OpenAPI::fromJsonValue(m_time, json[QString("time")]);
    m_time_isSet = !json[QString("time")].isNull() && m_time_isValid;
}

QString OAIV0_0_39_stats_user::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_stats_user::asJsonObject() const {
    QJsonObject obj;
    if (m_user_isSet) {
        obj.insert(QString("user"), ::OpenAPI::toJsonValue(m_user));
    }
    if (m_count_isSet) {
        obj.insert(QString("count"), ::OpenAPI::toJsonValue(m_count));
    }
    if (m_time.isSet()) {
        obj.insert(QString("time"), ::OpenAPI::toJsonValue(m_time));
    }
    return obj;
}

QString OAIV0_0_39_stats_user::getUser() const {
    return m_user;
}
void OAIV0_0_39_stats_user::setUser(const QString &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIV0_0_39_stats_user::is_user_Set() const{
    return m_user_isSet;
}

bool OAIV0_0_39_stats_user::is_user_Valid() const{
    return m_user_isValid;
}

qint32 OAIV0_0_39_stats_user::getCount() const {
    return m_count;
}
void OAIV0_0_39_stats_user::setCount(const qint32 &count) {
    m_count = count;
    m_count_isSet = true;
}

bool OAIV0_0_39_stats_user::is_count_Set() const{
    return m_count_isSet;
}

bool OAIV0_0_39_stats_user::is_count_Valid() const{
    return m_count_isValid;
}

OAIV0_0_39_stats_rpc_time OAIV0_0_39_stats_user::getTime() const {
    return m_time;
}
void OAIV0_0_39_stats_user::setTime(const OAIV0_0_39_stats_rpc_time &time) {
    m_time = time;
    m_time_isSet = true;
}

bool OAIV0_0_39_stats_user::is_time_Set() const{
    return m_time_isSet;
}

bool OAIV0_0_39_stats_user::is_time_Valid() const{
    return m_time_isValid;
}

bool OAIV0_0_39_stats_user::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_user_isSet) {
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

bool OAIV0_0_39_stats_user::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI