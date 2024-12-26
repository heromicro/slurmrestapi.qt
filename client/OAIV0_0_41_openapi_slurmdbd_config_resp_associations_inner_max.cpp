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

#include "OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max() {
    this->initializeModel();
}

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::~OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max() {}

void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::initializeModel() {

    m_jobs_isSet = false;
    m_jobs_isValid = false;

    m_tres_isSet = false;
    m_tres_isValid = false;

    m_per_isSet = false;
    m_per_isValid = false;
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::fromJsonObject(QJsonObject json) {

    m_jobs_isValid = ::OpenAPI::fromJsonValue(m_jobs, json[QString("jobs")]);
    m_jobs_isSet = !json[QString("jobs")].isNull() && m_jobs_isValid;

    m_tres_isValid = ::OpenAPI::fromJsonValue(m_tres, json[QString("tres")]);
    m_tres_isSet = !json[QString("tres")].isNull() && m_tres_isValid;

    m_per_isValid = ::OpenAPI::fromJsonValue(m_per, json[QString("per")]);
    m_per_isSet = !json[QString("per")].isNull() && m_per_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::asJsonObject() const {
    QJsonObject obj;
    if (m_jobs.isSet()) {
        obj.insert(QString("jobs"), ::OpenAPI::toJsonValue(m_jobs));
    }
    if (m_tres.isSet()) {
        obj.insert(QString("tres"), ::OpenAPI::toJsonValue(m_tres));
    }
    if (m_per.isSet()) {
        obj.insert(QString("per"), ::OpenAPI::toJsonValue(m_per));
    }
    return obj;
}

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_jobs OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::getJobs() const {
    return m_jobs;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::setJobs(const OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_jobs &jobs) {
    m_jobs = jobs;
    m_jobs_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::is_jobs_Set() const{
    return m_jobs_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::is_jobs_Valid() const{
    return m_jobs_isValid;
}

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::getTres() const {
    return m_tres;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::setTres(const OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres &tres) {
    m_tres = tres;
    m_tres_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::is_tres_Set() const{
    return m_tres_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::is_tres_Valid() const{
    return m_tres_isValid;
}

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::getPer() const {
    return m_per;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::setPer(const OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per &per) {
    m_per = per;
    m_per_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::is_per_Set() const{
    return m_per_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::is_per_Valid() const{
    return m_per_isValid;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_jobs.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_tres.isSet()) {
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

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
