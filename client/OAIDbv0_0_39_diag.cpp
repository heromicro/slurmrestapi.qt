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

#include "OAIDbv0_0_39_diag.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDbv0_0_39_diag::OAIDbv0_0_39_diag(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDbv0_0_39_diag::OAIDbv0_0_39_diag() {
    this->initializeModel();
}

OAIDbv0_0_39_diag::~OAIDbv0_0_39_diag() {}

void OAIDbv0_0_39_diag::initializeModel() {

    m_meta_isSet = false;
    m_meta_isValid = false;

    m_errors_isSet = false;
    m_errors_isValid = false;

    m_warnings_isSet = false;
    m_warnings_isValid = false;

    m_statistics_isSet = false;
    m_statistics_isValid = false;
}

void OAIDbv0_0_39_diag::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDbv0_0_39_diag::fromJsonObject(QJsonObject json) {

    m_meta_isValid = ::OpenAPI::fromJsonValue(m_meta, json[QString("meta")]);
    m_meta_isSet = !json[QString("meta")].isNull() && m_meta_isValid;

    m_errors_isValid = ::OpenAPI::fromJsonValue(m_errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;

    m_warnings_isValid = ::OpenAPI::fromJsonValue(m_warnings, json[QString("warnings")]);
    m_warnings_isSet = !json[QString("warnings")].isNull() && m_warnings_isValid;

    m_statistics_isValid = ::OpenAPI::fromJsonValue(m_statistics, json[QString("statistics")]);
    m_statistics_isSet = !json[QString("statistics")].isNull() && m_statistics_isValid;
}

QString OAIDbv0_0_39_diag::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDbv0_0_39_diag::asJsonObject() const {
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
    if (m_statistics.isSet()) {
        obj.insert(QString("statistics"), ::OpenAPI::toJsonValue(m_statistics));
    }
    return obj;
}

OAIDbv0_0_39_meta OAIDbv0_0_39_diag::getMeta() const {
    return m_meta;
}
void OAIDbv0_0_39_diag::setMeta(const OAIDbv0_0_39_meta &meta) {
    m_meta = meta;
    m_meta_isSet = true;
}

bool OAIDbv0_0_39_diag::is_meta_Set() const{
    return m_meta_isSet;
}

bool OAIDbv0_0_39_diag::is_meta_Valid() const{
    return m_meta_isValid;
}

QList<OAIDbv0_0_39_error> OAIDbv0_0_39_diag::getErrors() const {
    return m_errors;
}
void OAIDbv0_0_39_diag::setErrors(const QList<OAIDbv0_0_39_error> &errors) {
    m_errors = errors;
    m_errors_isSet = true;
}

bool OAIDbv0_0_39_diag::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAIDbv0_0_39_diag::is_errors_Valid() const{
    return m_errors_isValid;
}

QList<OAIDbv0_0_39_warning> OAIDbv0_0_39_diag::getWarnings() const {
    return m_warnings;
}
void OAIDbv0_0_39_diag::setWarnings(const QList<OAIDbv0_0_39_warning> &warnings) {
    m_warnings = warnings;
    m_warnings_isSet = true;
}

bool OAIDbv0_0_39_diag::is_warnings_Set() const{
    return m_warnings_isSet;
}

bool OAIDbv0_0_39_diag::is_warnings_Valid() const{
    return m_warnings_isValid;
}

OAIV0_0_39_stats_rec OAIDbv0_0_39_diag::getStatistics() const {
    return m_statistics;
}
void OAIDbv0_0_39_diag::setStatistics(const OAIV0_0_39_stats_rec &statistics) {
    m_statistics = statistics;
    m_statistics_isSet = true;
}

bool OAIDbv0_0_39_diag::is_statistics_Set() const{
    return m_statistics_isSet;
}

bool OAIDbv0_0_39_diag::is_statistics_Valid() const{
    return m_statistics_isValid;
}

bool OAIDbv0_0_39_diag::isSet() const {
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

        if (m_statistics.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDbv0_0_39_diag::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI