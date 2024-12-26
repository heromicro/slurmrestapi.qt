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

#include "OAIV0_0_39_job_tres.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_job_tres::OAIV0_0_39_job_tres(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_job_tres::OAIV0_0_39_job_tres() {
    this->initializeModel();
}

OAIV0_0_39_job_tres::~OAIV0_0_39_job_tres() {}

void OAIV0_0_39_job_tres::initializeModel() {

    m_allocated_isSet = false;
    m_allocated_isValid = false;

    m_requested_isSet = false;
    m_requested_isValid = false;
}

void OAIV0_0_39_job_tres::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_job_tres::fromJsonObject(QJsonObject json) {

    m_allocated_isValid = ::OpenAPI::fromJsonValue(m_allocated, json[QString("allocated")]);
    m_allocated_isSet = !json[QString("allocated")].isNull() && m_allocated_isValid;

    m_requested_isValid = ::OpenAPI::fromJsonValue(m_requested, json[QString("requested")]);
    m_requested_isSet = !json[QString("requested")].isNull() && m_requested_isValid;
}

QString OAIV0_0_39_job_tres::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_job_tres::asJsonObject() const {
    QJsonObject obj;
    if (m_allocated.size() > 0) {
        obj.insert(QString("allocated"), ::OpenAPI::toJsonValue(m_allocated));
    }
    if (m_requested.size() > 0) {
        obj.insert(QString("requested"), ::OpenAPI::toJsonValue(m_requested));
    }
    return obj;
}

QList<OAIV0_0_39_tres> OAIV0_0_39_job_tres::getAllocated() const {
    return m_allocated;
}
void OAIV0_0_39_job_tres::setAllocated(const QList<OAIV0_0_39_tres> &allocated) {
    m_allocated = allocated;
    m_allocated_isSet = true;
}

bool OAIV0_0_39_job_tres::is_allocated_Set() const{
    return m_allocated_isSet;
}

bool OAIV0_0_39_job_tres::is_allocated_Valid() const{
    return m_allocated_isValid;
}

QList<OAIV0_0_39_tres> OAIV0_0_39_job_tres::getRequested() const {
    return m_requested;
}
void OAIV0_0_39_job_tres::setRequested(const QList<OAIV0_0_39_tres> &requested) {
    m_requested = requested;
    m_requested_isSet = true;
}

bool OAIV0_0_39_job_tres::is_requested_Set() const{
    return m_requested_isSet;
}

bool OAIV0_0_39_job_tres::is_requested_Valid() const{
    return m_requested_isValid;
}

bool OAIV0_0_39_job_tres::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_allocated.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_requested.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_job_tres::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
