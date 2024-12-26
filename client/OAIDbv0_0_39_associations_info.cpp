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

#include "OAIDbv0_0_39_associations_info.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDbv0_0_39_associations_info::OAIDbv0_0_39_associations_info(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDbv0_0_39_associations_info::OAIDbv0_0_39_associations_info() {
    this->initializeModel();
}

OAIDbv0_0_39_associations_info::~OAIDbv0_0_39_associations_info() {}

void OAIDbv0_0_39_associations_info::initializeModel() {

    m_meta_isSet = false;
    m_meta_isValid = false;

    m_errors_isSet = false;
    m_errors_isValid = false;

    m_warnings_isSet = false;
    m_warnings_isValid = false;

    m_associations_isSet = false;
    m_associations_isValid = false;
}

void OAIDbv0_0_39_associations_info::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDbv0_0_39_associations_info::fromJsonObject(QJsonObject json) {

    m_meta_isValid = ::OpenAPI::fromJsonValue(m_meta, json[QString("meta")]);
    m_meta_isSet = !json[QString("meta")].isNull() && m_meta_isValid;

    m_errors_isValid = ::OpenAPI::fromJsonValue(m_errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;

    m_warnings_isValid = ::OpenAPI::fromJsonValue(m_warnings, json[QString("warnings")]);
    m_warnings_isSet = !json[QString("warnings")].isNull() && m_warnings_isValid;

    m_associations_isValid = ::OpenAPI::fromJsonValue(m_associations, json[QString("associations")]);
    m_associations_isSet = !json[QString("associations")].isNull() && m_associations_isValid;
}

QString OAIDbv0_0_39_associations_info::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDbv0_0_39_associations_info::asJsonObject() const {
    QJsonObject obj;
    if (m_meta.isSet()) {
        obj.insert(QString("meta"), ::OpenAPI::toJsonValue(m_meta));
    }
    if (m_errors.size() > 0) {
        obj.insert(QString("errors"), ::OpenAPI::toJsonValue(m_errors));
    }
    if (m_warnings.size() > 0) {
        obj.insert(QString("warnings"), ::OpenAPI::toJsonValue(m_warnings));
    }
    if (m_associations.size() > 0) {
        obj.insert(QString("associations"), ::OpenAPI::toJsonValue(m_associations));
    }
    return obj;
}

OAIDbv0_0_39_meta OAIDbv0_0_39_associations_info::getMeta() const {
    return m_meta;
}
void OAIDbv0_0_39_associations_info::setMeta(const OAIDbv0_0_39_meta &meta) {
    m_meta = meta;
    m_meta_isSet = true;
}

bool OAIDbv0_0_39_associations_info::is_meta_Set() const{
    return m_meta_isSet;
}

bool OAIDbv0_0_39_associations_info::is_meta_Valid() const{
    return m_meta_isValid;
}

QList<OAIDbv0_0_39_error> OAIDbv0_0_39_associations_info::getErrors() const {
    return m_errors;
}
void OAIDbv0_0_39_associations_info::setErrors(const QList<OAIDbv0_0_39_error> &errors) {
    m_errors = errors;
    m_errors_isSet = true;
}

bool OAIDbv0_0_39_associations_info::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAIDbv0_0_39_associations_info::is_errors_Valid() const{
    return m_errors_isValid;
}

QList<OAIDbv0_0_39_warning> OAIDbv0_0_39_associations_info::getWarnings() const {
    return m_warnings;
}
void OAIDbv0_0_39_associations_info::setWarnings(const QList<OAIDbv0_0_39_warning> &warnings) {
    m_warnings = warnings;
    m_warnings_isSet = true;
}

bool OAIDbv0_0_39_associations_info::is_warnings_Set() const{
    return m_warnings_isSet;
}

bool OAIDbv0_0_39_associations_info::is_warnings_Valid() const{
    return m_warnings_isValid;
}

QList<OAIV0_0_39_assoc> OAIDbv0_0_39_associations_info::getAssociations() const {
    return m_associations;
}
void OAIDbv0_0_39_associations_info::setAssociations(const QList<OAIV0_0_39_assoc> &associations) {
    m_associations = associations;
    m_associations_isSet = true;
}

bool OAIDbv0_0_39_associations_info::is_associations_Set() const{
    return m_associations_isSet;
}

bool OAIDbv0_0_39_associations_info::is_associations_Valid() const{
    return m_associations_isValid;
}

bool OAIDbv0_0_39_associations_info::isSet() const {
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

        if (m_associations.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDbv0_0_39_associations_info::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
