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

#include "OAIV0_0_41_job_submit_req.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_41_job_submit_req::OAIV0_0_41_job_submit_req(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_job_submit_req::OAIV0_0_41_job_submit_req() {
    this->initializeModel();
}

OAIV0_0_41_job_submit_req::~OAIV0_0_41_job_submit_req() {}

void OAIV0_0_41_job_submit_req::initializeModel() {

    m_script_isSet = false;
    m_script_isValid = false;

    m_jobs_isSet = false;
    m_jobs_isValid = false;

    m_job_isSet = false;
    m_job_isValid = false;
}

void OAIV0_0_41_job_submit_req::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_job_submit_req::fromJsonObject(QJsonObject json) {

    m_script_isValid = ::OpenAPI::fromJsonValue(m_script, json[QString("script")]);
    m_script_isSet = !json[QString("script")].isNull() && m_script_isValid;

    m_jobs_isValid = ::OpenAPI::fromJsonValue(m_jobs, json[QString("jobs")]);
    m_jobs_isSet = !json[QString("jobs")].isNull() && m_jobs_isValid;

    m_job_isValid = ::OpenAPI::fromJsonValue(m_job, json[QString("job")]);
    m_job_isSet = !json[QString("job")].isNull() && m_job_isValid;
}

QString OAIV0_0_41_job_submit_req::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_job_submit_req::asJsonObject() const {
    QJsonObject obj;
    if (m_script_isSet) {
        obj.insert(QString("script"), ::OpenAPI::toJsonValue(m_script));
    }
    if (m_jobs.size() > 0) {
        obj.insert(QString("jobs"), ::OpenAPI::toJsonValue(m_jobs));
    }
    if (m_job.isSet()) {
        obj.insert(QString("job"), ::OpenAPI::toJsonValue(m_job));
    }
    return obj;
}

QString OAIV0_0_41_job_submit_req::getScript() const {
    return m_script;
}
void OAIV0_0_41_job_submit_req::setScript(const QString &script) {
    m_script = script;
    m_script_isSet = true;
}

bool OAIV0_0_41_job_submit_req::is_script_Set() const{
    return m_script_isSet;
}

bool OAIV0_0_41_job_submit_req::is_script_Valid() const{
    return m_script_isValid;
}

QList<OAIV0_0_41_job_desc_msg> OAIV0_0_41_job_submit_req::getJobs() const {
    return m_jobs;
}
void OAIV0_0_41_job_submit_req::setJobs(const QList<OAIV0_0_41_job_desc_msg> &jobs) {
    m_jobs = jobs;
    m_jobs_isSet = true;
}

bool OAIV0_0_41_job_submit_req::is_jobs_Set() const{
    return m_jobs_isSet;
}

bool OAIV0_0_41_job_submit_req::is_jobs_Valid() const{
    return m_jobs_isValid;
}

OAIV0_0_41_job_desc_msg OAIV0_0_41_job_submit_req::getJob() const {
    return m_job;
}
void OAIV0_0_41_job_submit_req::setJob(const OAIV0_0_41_job_desc_msg &job) {
    m_job = job;
    m_job_isSet = true;
}

bool OAIV0_0_41_job_submit_req::is_job_Set() const{
    return m_job_isSet;
}

bool OAIV0_0_41_job_submit_req::is_job_Valid() const{
    return m_job_isValid;
}

bool OAIV0_0_41_job_submit_req::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_script_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_jobs.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_job.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_job_submit_req::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
