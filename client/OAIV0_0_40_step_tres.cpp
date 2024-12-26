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

#include "OAIV0_0_40_step_tres.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_40_step_tres::OAIV0_0_40_step_tres(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_step_tres::OAIV0_0_40_step_tres() {
    this->initializeModel();
}

OAIV0_0_40_step_tres::~OAIV0_0_40_step_tres() {}

void OAIV0_0_40_step_tres::initializeModel() {

    m_requested_isSet = false;
    m_requested_isValid = false;

    m_consumed_isSet = false;
    m_consumed_isValid = false;

    m_allocated_isSet = false;
    m_allocated_isValid = false;
}

void OAIV0_0_40_step_tres::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_step_tres::fromJsonObject(QJsonObject json) {

    m_requested_isValid = ::OpenAPI::fromJsonValue(m_requested, json[QString("requested")]);
    m_requested_isSet = !json[QString("requested")].isNull() && m_requested_isValid;

    m_consumed_isValid = ::OpenAPI::fromJsonValue(m_consumed, json[QString("consumed")]);
    m_consumed_isSet = !json[QString("consumed")].isNull() && m_consumed_isValid;

    m_allocated_isValid = ::OpenAPI::fromJsonValue(m_allocated, json[QString("allocated")]);
    m_allocated_isSet = !json[QString("allocated")].isNull() && m_allocated_isValid;
}

QString OAIV0_0_40_step_tres::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_step_tres::asJsonObject() const {
    QJsonObject obj;
    if (m_requested.isSet()) {
        obj.insert(QString("requested"), ::OpenAPI::toJsonValue(m_requested));
    }
    if (m_consumed.isSet()) {
        obj.insert(QString("consumed"), ::OpenAPI::toJsonValue(m_consumed));
    }
    if (m_allocated.size() > 0) {
        obj.insert(QString("allocated"), ::OpenAPI::toJsonValue(m_allocated));
    }
    return obj;
}

OAIV0_0_40_step_tres_requested OAIV0_0_40_step_tres::getRequested() const {
    return m_requested;
}
void OAIV0_0_40_step_tres::setRequested(const OAIV0_0_40_step_tres_requested &requested) {
    m_requested = requested;
    m_requested_isSet = true;
}

bool OAIV0_0_40_step_tres::is_requested_Set() const{
    return m_requested_isSet;
}

bool OAIV0_0_40_step_tres::is_requested_Valid() const{
    return m_requested_isValid;
}

OAIV0_0_40_step_tres_consumed OAIV0_0_40_step_tres::getConsumed() const {
    return m_consumed;
}
void OAIV0_0_40_step_tres::setConsumed(const OAIV0_0_40_step_tres_consumed &consumed) {
    m_consumed = consumed;
    m_consumed_isSet = true;
}

bool OAIV0_0_40_step_tres::is_consumed_Set() const{
    return m_consumed_isSet;
}

bool OAIV0_0_40_step_tres::is_consumed_Valid() const{
    return m_consumed_isValid;
}

QList<OAIV0_0_40_tres> OAIV0_0_40_step_tres::getAllocated() const {
    return m_allocated;
}
void OAIV0_0_40_step_tres::setAllocated(const QList<OAIV0_0_40_tres> &allocated) {
    m_allocated = allocated;
    m_allocated_isSet = true;
}

bool OAIV0_0_40_step_tres::is_allocated_Set() const{
    return m_allocated_isSet;
}

bool OAIV0_0_40_step_tres::is_allocated_Valid() const{
    return m_allocated_isValid;
}

bool OAIV0_0_40_step_tres::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_requested.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_consumed.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_allocated.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_step_tres::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI