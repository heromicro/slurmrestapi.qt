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

#include "OAIV0_0_41_openapi_job_alloc_resp.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_41_openapi_job_alloc_resp::OAIV0_0_41_openapi_job_alloc_resp(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_job_alloc_resp::OAIV0_0_41_openapi_job_alloc_resp() {
    this->initializeModel();
}

OAIV0_0_41_openapi_job_alloc_resp::~OAIV0_0_41_openapi_job_alloc_resp() {}

void OAIV0_0_41_openapi_job_alloc_resp::initializeModel() {

    m_job_id_isSet = false;
    m_job_id_isValid = false;

    m_job_submit_user_msg_isSet = false;
    m_job_submit_user_msg_isValid = false;

    m_meta_isSet = false;
    m_meta_isValid = false;

    m_errors_isSet = false;
    m_errors_isValid = false;

    m_warnings_isSet = false;
    m_warnings_isValid = false;
}

void OAIV0_0_41_openapi_job_alloc_resp::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_job_alloc_resp::fromJsonObject(QJsonObject json) {

    m_job_id_isValid = ::hm:slurm:client::fromJsonValue(m_job_id, json[QString("job_id")]);
    m_job_id_isSet = !json[QString("job_id")].isNull() && m_job_id_isValid;

    m_job_submit_user_msg_isValid = ::hm:slurm:client::fromJsonValue(m_job_submit_user_msg, json[QString("job_submit_user_msg")]);
    m_job_submit_user_msg_isSet = !json[QString("job_submit_user_msg")].isNull() && m_job_submit_user_msg_isValid;

    m_meta_isValid = ::hm:slurm:client::fromJsonValue(m_meta, json[QString("meta")]);
    m_meta_isSet = !json[QString("meta")].isNull() && m_meta_isValid;

    m_errors_isValid = ::hm:slurm:client::fromJsonValue(m_errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;

    m_warnings_isValid = ::hm:slurm:client::fromJsonValue(m_warnings, json[QString("warnings")]);
    m_warnings_isSet = !json[QString("warnings")].isNull() && m_warnings_isValid;
}

QString OAIV0_0_41_openapi_job_alloc_resp::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_job_alloc_resp::asJsonObject() const {
    QJsonObject obj;
    if (m_job_id_isSet) {
        obj.insert(QString("job_id"), ::hm:slurm:client::toJsonValue(m_job_id));
    }
    if (m_job_submit_user_msg_isSet) {
        obj.insert(QString("job_submit_user_msg"), ::hm:slurm:client::toJsonValue(m_job_submit_user_msg));
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

qint32 OAIV0_0_41_openapi_job_alloc_resp::getJobId() const {
    return m_job_id;
}
void OAIV0_0_41_openapi_job_alloc_resp::setJobId(const qint32 &job_id) {
    m_job_id = job_id;
    m_job_id_isSet = true;
}

bool OAIV0_0_41_openapi_job_alloc_resp::is_job_id_Set() const{
    return m_job_id_isSet;
}

bool OAIV0_0_41_openapi_job_alloc_resp::is_job_id_Valid() const{
    return m_job_id_isValid;
}

QString OAIV0_0_41_openapi_job_alloc_resp::getJobSubmitUserMsg() const {
    return m_job_submit_user_msg;
}
void OAIV0_0_41_openapi_job_alloc_resp::setJobSubmitUserMsg(const QString &job_submit_user_msg) {
    m_job_submit_user_msg = job_submit_user_msg;
    m_job_submit_user_msg_isSet = true;
}

bool OAIV0_0_41_openapi_job_alloc_resp::is_job_submit_user_msg_Set() const{
    return m_job_submit_user_msg_isSet;
}

bool OAIV0_0_41_openapi_job_alloc_resp::is_job_submit_user_msg_Valid() const{
    return m_job_submit_user_msg_isValid;
}

OAIV0_0_41_openapi_shares_resp_meta OAIV0_0_41_openapi_job_alloc_resp::getMeta() const {
    return m_meta;
}
void OAIV0_0_41_openapi_job_alloc_resp::setMeta(const OAIV0_0_41_openapi_shares_resp_meta &meta) {
    m_meta = meta;
    m_meta_isSet = true;
}

bool OAIV0_0_41_openapi_job_alloc_resp::is_meta_Set() const{
    return m_meta_isSet;
}

bool OAIV0_0_41_openapi_job_alloc_resp::is_meta_Valid() const{
    return m_meta_isValid;
}

QList<OAIV0_0_41_openapi_shares_resp_errors_inner> OAIV0_0_41_openapi_job_alloc_resp::getErrors() const {
    return m_errors;
}
void OAIV0_0_41_openapi_job_alloc_resp::setErrors(const QList<OAIV0_0_41_openapi_shares_resp_errors_inner> &errors) {
    m_errors = errors;
    m_errors_isSet = true;
}

bool OAIV0_0_41_openapi_job_alloc_resp::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAIV0_0_41_openapi_job_alloc_resp::is_errors_Valid() const{
    return m_errors_isValid;
}

QList<OAIV0_0_41_openapi_shares_resp_warnings_inner> OAIV0_0_41_openapi_job_alloc_resp::getWarnings() const {
    return m_warnings;
}
void OAIV0_0_41_openapi_job_alloc_resp::setWarnings(const QList<OAIV0_0_41_openapi_shares_resp_warnings_inner> &warnings) {
    m_warnings = warnings;
    m_warnings_isSet = true;
}

bool OAIV0_0_41_openapi_job_alloc_resp::is_warnings_Set() const{
    return m_warnings_isSet;
}

bool OAIV0_0_41_openapi_job_alloc_resp::is_warnings_Valid() const{
    return m_warnings_isValid;
}

bool OAIV0_0_41_openapi_job_alloc_resp::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_job_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_job_submit_user_msg_isSet) {
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

bool OAIV0_0_41_openapi_job_alloc_resp::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
