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

#include "OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code() {
    this->initializeModel();
}

OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::~OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code() {}

void OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::initializeModel() {

    m_status_isSet = false;
    m_status_isValid = false;

    m_return_code_isSet = false;
    m_return_code_isValid = false;

    m_signal_isSet = false;
    m_signal_isValid = false;
}

void OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::fromJsonObject(QJsonObject json) {

    m_status_isValid = ::OpenAPI::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_return_code_isValid = ::OpenAPI::fromJsonValue(m_return_code, json[QString("return_code")]);
    m_return_code_isSet = !json[QString("return_code")].isNull() && m_return_code_isValid;

    m_signal_isValid = ::OpenAPI::fromJsonValue(m_signal, json[QString("signal")]);
    m_signal_isSet = !json[QString("signal")].isNull() && m_signal_isValid;
}

QString OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::asJsonObject() const {
    QJsonObject obj;
    if (m_status.size() > 0) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(m_status));
    }
    if (m_return_code.isSet()) {
        obj.insert(QString("return_code"), ::OpenAPI::toJsonValue(m_return_code));
    }
    if (m_signal.isSet()) {
        obj.insert(QString("signal"), ::OpenAPI::toJsonValue(m_signal));
    }
    return obj;
}

QList<QString> OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::getStatus() const {
    return m_status;
}
void OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::setStatus(const QList<QString> &status) {
    m_status = status;
    m_status_isSet = true;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::is_status_Set() const{
    return m_status_isSet;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::is_status_Valid() const{
    return m_status_isValid;
}

OAIV0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code_return_code OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::getReturnCode() const {
    return m_return_code;
}
void OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::setReturnCode(const OAIV0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code_return_code &return_code) {
    m_return_code = return_code;
    m_return_code_isSet = true;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::is_return_code_Set() const{
    return m_return_code_isSet;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::is_return_code_Valid() const{
    return m_return_code_isValid;
}

OAIV0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code_signal OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::getSignal() const {
    return m_signal;
}
void OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::setSignal(const OAIV0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code_signal &signal) {
    m_signal = signal;
    m_signal_isSet = true;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::is_signal_Set() const{
    return m_signal_isSet;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::is_signal_Valid() const{
    return m_signal_isValid;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_status.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_return_code.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_signal.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_exit_code::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
