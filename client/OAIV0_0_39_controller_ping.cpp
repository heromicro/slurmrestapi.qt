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

#include "OAIV0_0_39_controller_ping.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_controller_ping::OAIV0_0_39_controller_ping(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_controller_ping::OAIV0_0_39_controller_ping() {
    this->initializeModel();
}

OAIV0_0_39_controller_ping::~OAIV0_0_39_controller_ping() {}

void OAIV0_0_39_controller_ping::initializeModel() {

    m_hostname_isSet = false;
    m_hostname_isValid = false;

    m_pinged_isSet = false;
    m_pinged_isValid = false;

    m_latency_isSet = false;
    m_latency_isValid = false;

    m_mode_isSet = false;
    m_mode_isValid = false;
}

void OAIV0_0_39_controller_ping::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_controller_ping::fromJsonObject(QJsonObject json) {

    m_hostname_isValid = ::OpenAPI::fromJsonValue(m_hostname, json[QString("hostname")]);
    m_hostname_isSet = !json[QString("hostname")].isNull() && m_hostname_isValid;

    m_pinged_isValid = ::OpenAPI::fromJsonValue(m_pinged, json[QString("pinged")]);
    m_pinged_isSet = !json[QString("pinged")].isNull() && m_pinged_isValid;

    m_latency_isValid = ::OpenAPI::fromJsonValue(m_latency, json[QString("latency")]);
    m_latency_isSet = !json[QString("latency")].isNull() && m_latency_isValid;

    m_mode_isValid = ::OpenAPI::fromJsonValue(m_mode, json[QString("mode")]);
    m_mode_isSet = !json[QString("mode")].isNull() && m_mode_isValid;
}

QString OAIV0_0_39_controller_ping::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_controller_ping::asJsonObject() const {
    QJsonObject obj;
    if (m_hostname_isSet) {
        obj.insert(QString("hostname"), ::OpenAPI::toJsonValue(m_hostname));
    }
    if (m_pinged_isSet) {
        obj.insert(QString("pinged"), ::OpenAPI::toJsonValue(m_pinged));
    }
    if (m_latency_isSet) {
        obj.insert(QString("latency"), ::OpenAPI::toJsonValue(m_latency));
    }
    if (m_mode_isSet) {
        obj.insert(QString("mode"), ::OpenAPI::toJsonValue(m_mode));
    }
    return obj;
}

QString OAIV0_0_39_controller_ping::getHostname() const {
    return m_hostname;
}
void OAIV0_0_39_controller_ping::setHostname(const QString &hostname) {
    m_hostname = hostname;
    m_hostname_isSet = true;
}

bool OAIV0_0_39_controller_ping::is_hostname_Set() const{
    return m_hostname_isSet;
}

bool OAIV0_0_39_controller_ping::is_hostname_Valid() const{
    return m_hostname_isValid;
}

QString OAIV0_0_39_controller_ping::getPinged() const {
    return m_pinged;
}
void OAIV0_0_39_controller_ping::setPinged(const QString &pinged) {
    m_pinged = pinged;
    m_pinged_isSet = true;
}

bool OAIV0_0_39_controller_ping::is_pinged_Set() const{
    return m_pinged_isSet;
}

bool OAIV0_0_39_controller_ping::is_pinged_Valid() const{
    return m_pinged_isValid;
}

qint64 OAIV0_0_39_controller_ping::getLatency() const {
    return m_latency;
}
void OAIV0_0_39_controller_ping::setLatency(const qint64 &latency) {
    m_latency = latency;
    m_latency_isSet = true;
}

bool OAIV0_0_39_controller_ping::is_latency_Set() const{
    return m_latency_isSet;
}

bool OAIV0_0_39_controller_ping::is_latency_Valid() const{
    return m_latency_isValid;
}

QString OAIV0_0_39_controller_ping::getMode() const {
    return m_mode;
}
void OAIV0_0_39_controller_ping::setMode(const QString &mode) {
    m_mode = mode;
    m_mode_isSet = true;
}

bool OAIV0_0_39_controller_ping::is_mode_Set() const{
    return m_mode_isSet;
}

bool OAIV0_0_39_controller_ping::is_mode_Valid() const{
    return m_mode_isValid;
}

bool OAIV0_0_39_controller_ping::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_hostname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pinged_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_latency_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mode_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_controller_ping::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
