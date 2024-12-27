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

#include "OAIV0_0_41_openapi_job_info_resp.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_41_openapi_job_info_resp::OAIV0_0_41_openapi_job_info_resp(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_job_info_resp::OAIV0_0_41_openapi_job_info_resp() {
    this->initializeModel();
}

OAIV0_0_41_openapi_job_info_resp::~OAIV0_0_41_openapi_job_info_resp() {}

void OAIV0_0_41_openapi_job_info_resp::initializeModel() {

    m_jobs_isSet = false;
    m_jobs_isValid = false;

    m_last_backfill_isSet = false;
    m_last_backfill_isValid = false;

    m_last_update_isSet = false;
    m_last_update_isValid = false;

    m_meta_isSet = false;
    m_meta_isValid = false;

    m_errors_isSet = false;
    m_errors_isValid = false;

    m_warnings_isSet = false;
    m_warnings_isValid = false;
}

void OAIV0_0_41_openapi_job_info_resp::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_job_info_resp::fromJsonObject(QJsonObject json) {

    m_jobs_isValid = ::hm:slurm:client::fromJsonValue(m_jobs, json[QString("jobs")]);
    m_jobs_isSet = !json[QString("jobs")].isNull() && m_jobs_isValid;

    m_last_backfill_isValid = ::hm:slurm:client::fromJsonValue(m_last_backfill, json[QString("last_backfill")]);
    m_last_backfill_isSet = !json[QString("last_backfill")].isNull() && m_last_backfill_isValid;

    m_last_update_isValid = ::hm:slurm:client::fromJsonValue(m_last_update, json[QString("last_update")]);
    m_last_update_isSet = !json[QString("last_update")].isNull() && m_last_update_isValid;

    m_meta_isValid = ::hm:slurm:client::fromJsonValue(m_meta, json[QString("meta")]);
    m_meta_isSet = !json[QString("meta")].isNull() && m_meta_isValid;

    m_errors_isValid = ::hm:slurm:client::fromJsonValue(m_errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;

    m_warnings_isValid = ::hm:slurm:client::fromJsonValue(m_warnings, json[QString("warnings")]);
    m_warnings_isSet = !json[QString("warnings")].isNull() && m_warnings_isValid;
}

QString OAIV0_0_41_openapi_job_info_resp::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_job_info_resp::asJsonObject() const {
    QJsonObject obj;
    if (m_jobs.size() > 0) {
        obj.insert(QString("jobs"), ::hm:slurm:client::toJsonValue(m_jobs));
    }
    if (m_last_backfill.isSet()) {
        obj.insert(QString("last_backfill"), ::hm:slurm:client::toJsonValue(m_last_backfill));
    }
    if (m_last_update.isSet()) {
        obj.insert(QString("last_update"), ::hm:slurm:client::toJsonValue(m_last_update));
    }
    if (m_meta.isSet()) {
        obj.insert(QString("meta"), ::hm:slurm:client::toJsonValue(m_meta));
    }
    if (m_errors.size() > 0) {
        obj.insert(QString("errors"), ::hm:slurm:client::toJsonValue(m_errors));
    }
    if (m_warnings.size() > 0) {
        obj.insert(QString("warnings"), ::hm:slurm:client::toJsonValue(m_warnings));
    }
    return obj;
}

QList<OAIV0_0_41_openapi_job_info_resp_jobs_inner> OAIV0_0_41_openapi_job_info_resp::getJobs() const {
    return m_jobs;
}
void OAIV0_0_41_openapi_job_info_resp::setJobs(const QList<OAIV0_0_41_openapi_job_info_resp_jobs_inner> &jobs) {
    m_jobs = jobs;
    m_jobs_isSet = true;
}

bool OAIV0_0_41_openapi_job_info_resp::is_jobs_Set() const{
    return m_jobs_isSet;
}

bool OAIV0_0_41_openapi_job_info_resp::is_jobs_Valid() const{
    return m_jobs_isValid;
}

OAIV0_0_41_openapi_job_info_resp_last_backfill OAIV0_0_41_openapi_job_info_resp::getLastBackfill() const {
    return m_last_backfill;
}
void OAIV0_0_41_openapi_job_info_resp::setLastBackfill(const OAIV0_0_41_openapi_job_info_resp_last_backfill &last_backfill) {
    m_last_backfill = last_backfill;
    m_last_backfill_isSet = true;
}

bool OAIV0_0_41_openapi_job_info_resp::is_last_backfill_Set() const{
    return m_last_backfill_isSet;
}

bool OAIV0_0_41_openapi_job_info_resp::is_last_backfill_Valid() const{
    return m_last_backfill_isValid;
}

OAIV0_0_41_openapi_job_info_resp_last_update OAIV0_0_41_openapi_job_info_resp::getLastUpdate() const {
    return m_last_update;
}
void OAIV0_0_41_openapi_job_info_resp::setLastUpdate(const OAIV0_0_41_openapi_job_info_resp_last_update &last_update) {
    m_last_update = last_update;
    m_last_update_isSet = true;
}

bool OAIV0_0_41_openapi_job_info_resp::is_last_update_Set() const{
    return m_last_update_isSet;
}

bool OAIV0_0_41_openapi_job_info_resp::is_last_update_Valid() const{
    return m_last_update_isValid;
}

OAIV0_0_41_openapi_shares_resp_meta OAIV0_0_41_openapi_job_info_resp::getMeta() const {
    return m_meta;
}
void OAIV0_0_41_openapi_job_info_resp::setMeta(const OAIV0_0_41_openapi_shares_resp_meta &meta) {
    m_meta = meta;
    m_meta_isSet = true;
}

bool OAIV0_0_41_openapi_job_info_resp::is_meta_Set() const{
    return m_meta_isSet;
}

bool OAIV0_0_41_openapi_job_info_resp::is_meta_Valid() const{
    return m_meta_isValid;
}

QList<OAIV0_0_41_openapi_shares_resp_errors_inner> OAIV0_0_41_openapi_job_info_resp::getErrors() const {
    return m_errors;
}
void OAIV0_0_41_openapi_job_info_resp::setErrors(const QList<OAIV0_0_41_openapi_shares_resp_errors_inner> &errors) {
    m_errors = errors;
    m_errors_isSet = true;
}

bool OAIV0_0_41_openapi_job_info_resp::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAIV0_0_41_openapi_job_info_resp::is_errors_Valid() const{
    return m_errors_isValid;
}

QList<OAIV0_0_41_openapi_shares_resp_warnings_inner> OAIV0_0_41_openapi_job_info_resp::getWarnings() const {
    return m_warnings;
}
void OAIV0_0_41_openapi_job_info_resp::setWarnings(const QList<OAIV0_0_41_openapi_shares_resp_warnings_inner> &warnings) {
    m_warnings = warnings;
    m_warnings_isSet = true;
}

bool OAIV0_0_41_openapi_job_info_resp::is_warnings_Set() const{
    return m_warnings_isSet;
}

bool OAIV0_0_41_openapi_job_info_resp::is_warnings_Valid() const{
    return m_warnings_isValid;
}

bool OAIV0_0_41_openapi_job_info_resp::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_jobs.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_backfill.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_update.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_meta.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_errors.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_warnings.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_job_info_resp::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_jobs_isValid && m_last_backfill_isValid && m_last_update_isValid && true;
}

} // namespace hm:slurm:client
