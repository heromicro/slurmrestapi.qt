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

#include "OAIV0_0_41_openapi_partition_resp.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_41_openapi_partition_resp::OAIV0_0_41_openapi_partition_resp(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_partition_resp::OAIV0_0_41_openapi_partition_resp() {
    this->initializeModel();
}

OAIV0_0_41_openapi_partition_resp::~OAIV0_0_41_openapi_partition_resp() {}

void OAIV0_0_41_openapi_partition_resp::initializeModel() {

    m_partitions_isSet = false;
    m_partitions_isValid = false;

    m_last_update_isSet = false;
    m_last_update_isValid = false;

    m_meta_isSet = false;
    m_meta_isValid = false;

    m_errors_isSet = false;
    m_errors_isValid = false;

    m_warnings_isSet = false;
    m_warnings_isValid = false;
}

void OAIV0_0_41_openapi_partition_resp::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_partition_resp::fromJsonObject(QJsonObject json) {

    m_partitions_isValid = ::OpenAPI::fromJsonValue(m_partitions, json[QString("partitions")]);
    m_partitions_isSet = !json[QString("partitions")].isNull() && m_partitions_isValid;

    m_last_update_isValid = ::OpenAPI::fromJsonValue(m_last_update, json[QString("last_update")]);
    m_last_update_isSet = !json[QString("last_update")].isNull() && m_last_update_isValid;

    m_meta_isValid = ::OpenAPI::fromJsonValue(m_meta, json[QString("meta")]);
    m_meta_isSet = !json[QString("meta")].isNull() && m_meta_isValid;

    m_errors_isValid = ::OpenAPI::fromJsonValue(m_errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;

    m_warnings_isValid = ::OpenAPI::fromJsonValue(m_warnings, json[QString("warnings")]);
    m_warnings_isSet = !json[QString("warnings")].isNull() && m_warnings_isValid;
}

QString OAIV0_0_41_openapi_partition_resp::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_partition_resp::asJsonObject() const {
    QJsonObject obj;
    if (m_partitions.size() > 0) {
        obj.insert(QString("partitions"), ::OpenAPI::toJsonValue(m_partitions));
    }
    if (m_last_update.isSet()) {
        obj.insert(QString("last_update"), ::OpenAPI::toJsonValue(m_last_update));
    }
    if (m_meta.isSet()) {
        obj.insert(QString("meta"), ::OpenAPI::toJsonValue(m_meta));
    }
    if (m_errors.size() > 0) {
        obj.insert(QString("errors"), ::OpenAPI::toJsonValue(m_errors));
    }
    if (m_warnings.size() > 0) {
        obj.insert(QString("warnings"), ::OpenAPI::toJsonValue(m_warnings));
    }
    return obj;
}

QList<OAIV0_0_41_openapi_partition_resp_partitions_inner> OAIV0_0_41_openapi_partition_resp::getPartitions() const {
    return m_partitions;
}
void OAIV0_0_41_openapi_partition_resp::setPartitions(const QList<OAIV0_0_41_openapi_partition_resp_partitions_inner> &partitions) {
    m_partitions = partitions;
    m_partitions_isSet = true;
}

bool OAIV0_0_41_openapi_partition_resp::is_partitions_Set() const{
    return m_partitions_isSet;
}

bool OAIV0_0_41_openapi_partition_resp::is_partitions_Valid() const{
    return m_partitions_isValid;
}

OAIV0_0_41_openapi_partition_resp_last_update OAIV0_0_41_openapi_partition_resp::getLastUpdate() const {
    return m_last_update;
}
void OAIV0_0_41_openapi_partition_resp::setLastUpdate(const OAIV0_0_41_openapi_partition_resp_last_update &last_update) {
    m_last_update = last_update;
    m_last_update_isSet = true;
}

bool OAIV0_0_41_openapi_partition_resp::is_last_update_Set() const{
    return m_last_update_isSet;
}

bool OAIV0_0_41_openapi_partition_resp::is_last_update_Valid() const{
    return m_last_update_isValid;
}

OAIV0_0_41_openapi_shares_resp_meta OAIV0_0_41_openapi_partition_resp::getMeta() const {
    return m_meta;
}
void OAIV0_0_41_openapi_partition_resp::setMeta(const OAIV0_0_41_openapi_shares_resp_meta &meta) {
    m_meta = meta;
    m_meta_isSet = true;
}

bool OAIV0_0_41_openapi_partition_resp::is_meta_Set() const{
    return m_meta_isSet;
}

bool OAIV0_0_41_openapi_partition_resp::is_meta_Valid() const{
    return m_meta_isValid;
}

QList<OAIV0_0_41_openapi_shares_resp_errors_inner> OAIV0_0_41_openapi_partition_resp::getErrors() const {
    return m_errors;
}
void OAIV0_0_41_openapi_partition_resp::setErrors(const QList<OAIV0_0_41_openapi_shares_resp_errors_inner> &errors) {
    m_errors = errors;
    m_errors_isSet = true;
}

bool OAIV0_0_41_openapi_partition_resp::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAIV0_0_41_openapi_partition_resp::is_errors_Valid() const{
    return m_errors_isValid;
}

QList<OAIV0_0_41_openapi_shares_resp_warnings_inner> OAIV0_0_41_openapi_partition_resp::getWarnings() const {
    return m_warnings;
}
void OAIV0_0_41_openapi_partition_resp::setWarnings(const QList<OAIV0_0_41_openapi_shares_resp_warnings_inner> &warnings) {
    m_warnings = warnings;
    m_warnings_isSet = true;
}

bool OAIV0_0_41_openapi_partition_resp::is_warnings_Set() const{
    return m_warnings_isSet;
}

bool OAIV0_0_41_openapi_partition_resp::is_warnings_Valid() const{
    return m_warnings_isValid;
}

bool OAIV0_0_41_openapi_partition_resp::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_partitions.size() > 0) {
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

bool OAIV0_0_41_openapi_partition_resp::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_partitions_isValid && m_last_update_isValid && true;
}

} // namespace OpenAPI
