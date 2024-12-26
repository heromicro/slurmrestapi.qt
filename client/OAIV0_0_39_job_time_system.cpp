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

#include "OAIV0_0_39_job_time_system.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_job_time_system::OAIV0_0_39_job_time_system(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_job_time_system::OAIV0_0_39_job_time_system() {
    this->initializeModel();
}

OAIV0_0_39_job_time_system::~OAIV0_0_39_job_time_system() {}

void OAIV0_0_39_job_time_system::initializeModel() {

    m_seconds_isSet = false;
    m_seconds_isValid = false;

    m_microseconds_isSet = false;
    m_microseconds_isValid = false;
}

void OAIV0_0_39_job_time_system::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_job_time_system::fromJsonObject(QJsonObject json) {

    m_seconds_isValid = ::OpenAPI::fromJsonValue(m_seconds, json[QString("seconds")]);
    m_seconds_isSet = !json[QString("seconds")].isNull() && m_seconds_isValid;

    m_microseconds_isValid = ::OpenAPI::fromJsonValue(m_microseconds, json[QString("microseconds")]);
    m_microseconds_isSet = !json[QString("microseconds")].isNull() && m_microseconds_isValid;
}

QString OAIV0_0_39_job_time_system::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_job_time_system::asJsonObject() const {
    QJsonObject obj;
    if (m_seconds_isSet) {
        obj.insert(QString("seconds"), ::OpenAPI::toJsonValue(m_seconds));
    }
    if (m_microseconds_isSet) {
        obj.insert(QString("microseconds"), ::OpenAPI::toJsonValue(m_microseconds));
    }
    return obj;
}

qint64 OAIV0_0_39_job_time_system::getSeconds() const {
    return m_seconds;
}
void OAIV0_0_39_job_time_system::setSeconds(const qint64 &seconds) {
    m_seconds = seconds;
    m_seconds_isSet = true;
}

bool OAIV0_0_39_job_time_system::is_seconds_Set() const{
    return m_seconds_isSet;
}

bool OAIV0_0_39_job_time_system::is_seconds_Valid() const{
    return m_seconds_isValid;
}

qint64 OAIV0_0_39_job_time_system::getMicroseconds() const {
    return m_microseconds;
}
void OAIV0_0_39_job_time_system::setMicroseconds(const qint64 &microseconds) {
    m_microseconds = microseconds;
    m_microseconds_isSet = true;
}

bool OAIV0_0_39_job_time_system::is_microseconds_Set() const{
    return m_microseconds_isSet;
}

bool OAIV0_0_39_job_time_system::is_microseconds_Valid() const{
    return m_microseconds_isValid;
}

bool OAIV0_0_39_job_time_system::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_seconds_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_microseconds_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_job_time_system::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
