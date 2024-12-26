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

#include "OAIV0_0_40_job_submit_response_msg.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_40_job_submit_response_msg::OAIV0_0_40_job_submit_response_msg(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_job_submit_response_msg::OAIV0_0_40_job_submit_response_msg() {
    this->initializeModel();
}

OAIV0_0_40_job_submit_response_msg::~OAIV0_0_40_job_submit_response_msg() {}

void OAIV0_0_40_job_submit_response_msg::initializeModel() {

    m_job_id_isSet = false;
    m_job_id_isValid = false;

    m_step_id_isSet = false;
    m_step_id_isValid = false;

    m_error_code_isSet = false;
    m_error_code_isValid = false;

    m_error_isSet = false;
    m_error_isValid = false;

    m_job_submit_user_msg_isSet = false;
    m_job_submit_user_msg_isValid = false;
}

void OAIV0_0_40_job_submit_response_msg::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_job_submit_response_msg::fromJsonObject(QJsonObject json) {

    m_job_id_isValid = ::OpenAPI::fromJsonValue(m_job_id, json[QString("job_id")]);
    m_job_id_isSet = !json[QString("job_id")].isNull() && m_job_id_isValid;

    m_step_id_isValid = ::OpenAPI::fromJsonValue(m_step_id, json[QString("step_id")]);
    m_step_id_isSet = !json[QString("step_id")].isNull() && m_step_id_isValid;

    m_error_code_isValid = ::OpenAPI::fromJsonValue(m_error_code, json[QString("error_code")]);
    m_error_code_isSet = !json[QString("error_code")].isNull() && m_error_code_isValid;

    m_error_isValid = ::OpenAPI::fromJsonValue(m_error, json[QString("error")]);
    m_error_isSet = !json[QString("error")].isNull() && m_error_isValid;

    m_job_submit_user_msg_isValid = ::OpenAPI::fromJsonValue(m_job_submit_user_msg, json[QString("job_submit_user_msg")]);
    m_job_submit_user_msg_isSet = !json[QString("job_submit_user_msg")].isNull() && m_job_submit_user_msg_isValid;
}

QString OAIV0_0_40_job_submit_response_msg::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_job_submit_response_msg::asJsonObject() const {
    QJsonObject obj;
    if (m_job_id_isSet) {
        obj.insert(QString("job_id"), ::OpenAPI::toJsonValue(m_job_id));
    }
    if (m_step_id_isSet) {
        obj.insert(QString("step_id"), ::OpenAPI::toJsonValue(m_step_id));
    }
    if (m_error_code_isSet) {
        obj.insert(QString("error_code"), ::OpenAPI::toJsonValue(m_error_code));
    }
    if (m_error_isSet) {
        obj.insert(QString("error"), ::OpenAPI::toJsonValue(m_error));
    }
    if (m_job_submit_user_msg_isSet) {
        obj.insert(QString("job_submit_user_msg"), ::OpenAPI::toJsonValue(m_job_submit_user_msg));
    }
    return obj;
}

qint32 OAIV0_0_40_job_submit_response_msg::getJobId() const {
    return m_job_id;
}
void OAIV0_0_40_job_submit_response_msg::setJobId(const qint32 &job_id) {
    m_job_id = job_id;
    m_job_id_isSet = true;
}

bool OAIV0_0_40_job_submit_response_msg::is_job_id_Set() const{
    return m_job_id_isSet;
}

bool OAIV0_0_40_job_submit_response_msg::is_job_id_Valid() const{
    return m_job_id_isValid;
}

QString OAIV0_0_40_job_submit_response_msg::getStepId() const {
    return m_step_id;
}
void OAIV0_0_40_job_submit_response_msg::setStepId(const QString &step_id) {
    m_step_id = step_id;
    m_step_id_isSet = true;
}

bool OAIV0_0_40_job_submit_response_msg::is_step_id_Set() const{
    return m_step_id_isSet;
}

bool OAIV0_0_40_job_submit_response_msg::is_step_id_Valid() const{
    return m_step_id_isValid;
}

qint32 OAIV0_0_40_job_submit_response_msg::getErrorCode() const {
    return m_error_code;
}
void OAIV0_0_40_job_submit_response_msg::setErrorCode(const qint32 &error_code) {
    m_error_code = error_code;
    m_error_code_isSet = true;
}

bool OAIV0_0_40_job_submit_response_msg::is_error_code_Set() const{
    return m_error_code_isSet;
}

bool OAIV0_0_40_job_submit_response_msg::is_error_code_Valid() const{
    return m_error_code_isValid;
}

QString OAIV0_0_40_job_submit_response_msg::getError() const {
    return m_error;
}
void OAIV0_0_40_job_submit_response_msg::setError(const QString &error) {
    m_error = error;
    m_error_isSet = true;
}

bool OAIV0_0_40_job_submit_response_msg::is_error_Set() const{
    return m_error_isSet;
}

bool OAIV0_0_40_job_submit_response_msg::is_error_Valid() const{
    return m_error_isValid;
}

QString OAIV0_0_40_job_submit_response_msg::getJobSubmitUserMsg() const {
    return m_job_submit_user_msg;
}
void OAIV0_0_40_job_submit_response_msg::setJobSubmitUserMsg(const QString &job_submit_user_msg) {
    m_job_submit_user_msg = job_submit_user_msg;
    m_job_submit_user_msg_isSet = true;
}

bool OAIV0_0_40_job_submit_response_msg::is_job_submit_user_msg_Set() const{
    return m_job_submit_user_msg_isSet;
}

bool OAIV0_0_40_job_submit_response_msg::is_job_submit_user_msg_Valid() const{
    return m_job_submit_user_msg_isValid;
}

bool OAIV0_0_40_job_submit_response_msg::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_job_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_step_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_error_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_error_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_job_submit_user_msg_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_job_submit_response_msg::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
