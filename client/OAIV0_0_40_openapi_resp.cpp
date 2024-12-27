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

#include "OAIV0_0_40_openapi_resp.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_40_openapi_resp::OAIV0_0_40_openapi_resp(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_openapi_resp::OAIV0_0_40_openapi_resp() {
    this->initializeModel();
}

OAIV0_0_40_openapi_resp::~OAIV0_0_40_openapi_resp() {}

void OAIV0_0_40_openapi_resp::initializeModel() {

    m_meta_isSet = false;
    m_meta_isValid = false;

    m_errors_isSet = false;
    m_errors_isValid = false;

    m_warnings_isSet = false;
    m_warnings_isValid = false;
}

void OAIV0_0_40_openapi_resp::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_openapi_resp::fromJsonObject(QJsonObject json) {

    m_meta_isValid = ::hm:slurm:client::fromJsonValue(m_meta, json[QString("meta")]);
    m_meta_isSet = !json[QString("meta")].isNull() && m_meta_isValid;

    m_errors_isValid = ::hm:slurm:client::fromJsonValue(m_errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;

    m_warnings_isValid = ::hm:slurm:client::fromJsonValue(m_warnings, json[QString("warnings")]);
    m_warnings_isSet = !json[QString("warnings")].isNull() && m_warnings_isValid;
}

QString OAIV0_0_40_openapi_resp::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_openapi_resp::asJsonObject() const {
    QJsonObject obj;
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

OAIV0_0_40_openapi_meta OAIV0_0_40_openapi_resp::getMeta() const {
    return m_meta;
}
void OAIV0_0_40_openapi_resp::setMeta(const OAIV0_0_40_openapi_meta &meta) {
    m_meta = meta;
    m_meta_isSet = true;
}

bool OAIV0_0_40_openapi_resp::is_meta_Set() const{
    return m_meta_isSet;
}

bool OAIV0_0_40_openapi_resp::is_meta_Valid() const{
    return m_meta_isValid;
}

QList<OAIV0_0_40_openapi_error> OAIV0_0_40_openapi_resp::getErrors() const {
    return m_errors;
}
void OAIV0_0_40_openapi_resp::setErrors(const QList<OAIV0_0_40_openapi_error> &errors) {
    m_errors = errors;
    m_errors_isSet = true;
}

bool OAIV0_0_40_openapi_resp::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAIV0_0_40_openapi_resp::is_errors_Valid() const{
    return m_errors_isValid;
}

QList<OAIV0_0_40_openapi_warning> OAIV0_0_40_openapi_resp::getWarnings() const {
    return m_warnings;
}
void OAIV0_0_40_openapi_resp::setWarnings(const QList<OAIV0_0_40_openapi_warning> &warnings) {
    m_warnings = warnings;
    m_warnings_isSet = true;
}

bool OAIV0_0_40_openapi_resp::is_warnings_Set() const{
    return m_warnings_isSet;
}

bool OAIV0_0_40_openapi_resp::is_warnings_Valid() const{
    return m_warnings_isValid;
}

bool OAIV0_0_40_openapi_resp::isSet() const {
    bool isObjectUpdated = false;
    do {
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

bool OAIV0_0_40_openapi_resp::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
