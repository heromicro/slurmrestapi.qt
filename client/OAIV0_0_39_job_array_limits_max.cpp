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

#include "OAIV0_0_39_job_array_limits_max.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_job_array_limits_max::OAIV0_0_39_job_array_limits_max(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_job_array_limits_max::OAIV0_0_39_job_array_limits_max() {
    this->initializeModel();
}

OAIV0_0_39_job_array_limits_max::~OAIV0_0_39_job_array_limits_max() {}

void OAIV0_0_39_job_array_limits_max::initializeModel() {

    m_running_isSet = false;
    m_running_isValid = false;
}

void OAIV0_0_39_job_array_limits_max::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_job_array_limits_max::fromJsonObject(QJsonObject json) {

    m_running_isValid = ::OpenAPI::fromJsonValue(m_running, json[QString("running")]);
    m_running_isSet = !json[QString("running")].isNull() && m_running_isValid;
}

QString OAIV0_0_39_job_array_limits_max::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_job_array_limits_max::asJsonObject() const {
    QJsonObject obj;
    if (m_running.isSet()) {
        obj.insert(QString("running"), ::OpenAPI::toJsonValue(m_running));
    }
    return obj;
}

OAIV0_0_39_job_array_limits_max_running OAIV0_0_39_job_array_limits_max::getRunning() const {
    return m_running;
}
void OAIV0_0_39_job_array_limits_max::setRunning(const OAIV0_0_39_job_array_limits_max_running &running) {
    m_running = running;
    m_running_isSet = true;
}

bool OAIV0_0_39_job_array_limits_max::is_running_Set() const{
    return m_running_isSet;
}

bool OAIV0_0_39_job_array_limits_max::is_running_Valid() const{
    return m_running_isValid;
}

bool OAIV0_0_39_job_array_limits_max::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_running.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_job_array_limits_max::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI