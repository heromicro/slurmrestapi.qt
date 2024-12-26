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

#include "OAIV0_0_40_qos_limits_max_jobs.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_40_qos_limits_max_jobs::OAIV0_0_40_qos_limits_max_jobs(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_qos_limits_max_jobs::OAIV0_0_40_qos_limits_max_jobs() {
    this->initializeModel();
}

OAIV0_0_40_qos_limits_max_jobs::~OAIV0_0_40_qos_limits_max_jobs() {}

void OAIV0_0_40_qos_limits_max_jobs::initializeModel() {

    m_active_jobs_isSet = false;
    m_active_jobs_isValid = false;

    m_per_isSet = false;
    m_per_isValid = false;
}

void OAIV0_0_40_qos_limits_max_jobs::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_qos_limits_max_jobs::fromJsonObject(QJsonObject json) {

    m_active_jobs_isValid = ::OpenAPI::fromJsonValue(m_active_jobs, json[QString("active_jobs")]);
    m_active_jobs_isSet = !json[QString("active_jobs")].isNull() && m_active_jobs_isValid;

    m_per_isValid = ::OpenAPI::fromJsonValue(m_per, json[QString("per")]);
    m_per_isSet = !json[QString("per")].isNull() && m_per_isValid;
}

QString OAIV0_0_40_qos_limits_max_jobs::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_qos_limits_max_jobs::asJsonObject() const {
    QJsonObject obj;
    if (m_active_jobs.isSet()) {
        obj.insert(QString("active_jobs"), ::OpenAPI::toJsonValue(m_active_jobs));
    }
    if (m_per.isSet()) {
        obj.insert(QString("per"), ::OpenAPI::toJsonValue(m_per));
    }
    return obj;
}

OAIV0_0_40_qos_limits_max_jobs_active_jobs OAIV0_0_40_qos_limits_max_jobs::getActiveJobs() const {
    return m_active_jobs;
}
void OAIV0_0_40_qos_limits_max_jobs::setActiveJobs(const OAIV0_0_40_qos_limits_max_jobs_active_jobs &active_jobs) {
    m_active_jobs = active_jobs;
    m_active_jobs_isSet = true;
}

bool OAIV0_0_40_qos_limits_max_jobs::is_active_jobs_Set() const{
    return m_active_jobs_isSet;
}

bool OAIV0_0_40_qos_limits_max_jobs::is_active_jobs_Valid() const{
    return m_active_jobs_isValid;
}

OAIV0_0_40_qos_limits_max_jobs_active_jobs_per OAIV0_0_40_qos_limits_max_jobs::getPer() const {
    return m_per;
}
void OAIV0_0_40_qos_limits_max_jobs::setPer(const OAIV0_0_40_qos_limits_max_jobs_active_jobs_per &per) {
    m_per = per;
    m_per_isSet = true;
}

bool OAIV0_0_40_qos_limits_max_jobs::is_per_Set() const{
    return m_per_isSet;
}

bool OAIV0_0_40_qos_limits_max_jobs::is_per_Valid() const{
    return m_per_isValid;
}

bool OAIV0_0_40_qos_limits_max_jobs::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_active_jobs.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_per.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_qos_limits_max_jobs::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
