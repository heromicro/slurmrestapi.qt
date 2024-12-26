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

#include "OAIV0_0_41_openapi_licenses_resp_licenses_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_41_openapi_licenses_resp_licenses_inner::OAIV0_0_41_openapi_licenses_resp_licenses_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_licenses_resp_licenses_inner::OAIV0_0_41_openapi_licenses_resp_licenses_inner() {
    this->initializeModel();
}

OAIV0_0_41_openapi_licenses_resp_licenses_inner::~OAIV0_0_41_openapi_licenses_resp_licenses_inner() {}

void OAIV0_0_41_openapi_licenses_resp_licenses_inner::initializeModel() {

    m_license_name_isSet = false;
    m_license_name_isValid = false;

    m_total_isSet = false;
    m_total_isValid = false;

    m_used_isSet = false;
    m_used_isValid = false;

    m_free_isSet = false;
    m_free_isValid = false;

    m_remote_isSet = false;
    m_remote_isValid = false;

    m_reserved_isSet = false;
    m_reserved_isValid = false;

    m_last_consumed_isSet = false;
    m_last_consumed_isValid = false;

    m_last_deficit_isSet = false;
    m_last_deficit_isValid = false;

    m_last_update_isSet = false;
    m_last_update_isValid = false;
}

void OAIV0_0_41_openapi_licenses_resp_licenses_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_licenses_resp_licenses_inner::fromJsonObject(QJsonObject json) {

    m_license_name_isValid = ::OpenAPI::fromJsonValue(m_license_name, json[QString("LicenseName")]);
    m_license_name_isSet = !json[QString("LicenseName")].isNull() && m_license_name_isValid;

    m_total_isValid = ::OpenAPI::fromJsonValue(m_total, json[QString("Total")]);
    m_total_isSet = !json[QString("Total")].isNull() && m_total_isValid;

    m_used_isValid = ::OpenAPI::fromJsonValue(m_used, json[QString("Used")]);
    m_used_isSet = !json[QString("Used")].isNull() && m_used_isValid;

    m_free_isValid = ::OpenAPI::fromJsonValue(m_free, json[QString("Free")]);
    m_free_isSet = !json[QString("Free")].isNull() && m_free_isValid;

    m_remote_isValid = ::OpenAPI::fromJsonValue(m_remote, json[QString("Remote")]);
    m_remote_isSet = !json[QString("Remote")].isNull() && m_remote_isValid;

    m_reserved_isValid = ::OpenAPI::fromJsonValue(m_reserved, json[QString("Reserved")]);
    m_reserved_isSet = !json[QString("Reserved")].isNull() && m_reserved_isValid;

    m_last_consumed_isValid = ::OpenAPI::fromJsonValue(m_last_consumed, json[QString("LastConsumed")]);
    m_last_consumed_isSet = !json[QString("LastConsumed")].isNull() && m_last_consumed_isValid;

    m_last_deficit_isValid = ::OpenAPI::fromJsonValue(m_last_deficit, json[QString("LastDeficit")]);
    m_last_deficit_isSet = !json[QString("LastDeficit")].isNull() && m_last_deficit_isValid;

    m_last_update_isValid = ::OpenAPI::fromJsonValue(m_last_update, json[QString("LastUpdate")]);
    m_last_update_isSet = !json[QString("LastUpdate")].isNull() && m_last_update_isValid;
}

QString OAIV0_0_41_openapi_licenses_resp_licenses_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_licenses_resp_licenses_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_license_name_isSet) {
        obj.insert(QString("LicenseName"), ::OpenAPI::toJsonValue(m_license_name));
    }
    if (m_total_isSet) {
        obj.insert(QString("Total"), ::OpenAPI::toJsonValue(m_total));
    }
    if (m_used_isSet) {
        obj.insert(QString("Used"), ::OpenAPI::toJsonValue(m_used));
    }
    if (m_free_isSet) {
        obj.insert(QString("Free"), ::OpenAPI::toJsonValue(m_free));
    }
    if (m_remote_isSet) {
        obj.insert(QString("Remote"), ::OpenAPI::toJsonValue(m_remote));
    }
    if (m_reserved_isSet) {
        obj.insert(QString("Reserved"), ::OpenAPI::toJsonValue(m_reserved));
    }
    if (m_last_consumed_isSet) {
        obj.insert(QString("LastConsumed"), ::OpenAPI::toJsonValue(m_last_consumed));
    }
    if (m_last_deficit_isSet) {
        obj.insert(QString("LastDeficit"), ::OpenAPI::toJsonValue(m_last_deficit));
    }
    if (m_last_update_isSet) {
        obj.insert(QString("LastUpdate"), ::OpenAPI::toJsonValue(m_last_update));
    }
    return obj;
}

QString OAIV0_0_41_openapi_licenses_resp_licenses_inner::getLicenseName() const {
    return m_license_name;
}
void OAIV0_0_41_openapi_licenses_resp_licenses_inner::setLicenseName(const QString &license_name) {
    m_license_name = license_name;
    m_license_name_isSet = true;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_license_name_Set() const{
    return m_license_name_isSet;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_license_name_Valid() const{
    return m_license_name_isValid;
}

qint32 OAIV0_0_41_openapi_licenses_resp_licenses_inner::getTotal() const {
    return m_total;
}
void OAIV0_0_41_openapi_licenses_resp_licenses_inner::setTotal(const qint32 &total) {
    m_total = total;
    m_total_isSet = true;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_total_Set() const{
    return m_total_isSet;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_total_Valid() const{
    return m_total_isValid;
}

qint32 OAIV0_0_41_openapi_licenses_resp_licenses_inner::getUsed() const {
    return m_used;
}
void OAIV0_0_41_openapi_licenses_resp_licenses_inner::setUsed(const qint32 &used) {
    m_used = used;
    m_used_isSet = true;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_used_Set() const{
    return m_used_isSet;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_used_Valid() const{
    return m_used_isValid;
}

qint32 OAIV0_0_41_openapi_licenses_resp_licenses_inner::getFree() const {
    return m_free;
}
void OAIV0_0_41_openapi_licenses_resp_licenses_inner::setFree(const qint32 &free) {
    m_free = free;
    m_free_isSet = true;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_free_Set() const{
    return m_free_isSet;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_free_Valid() const{
    return m_free_isValid;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::isRemote() const {
    return m_remote;
}
void OAIV0_0_41_openapi_licenses_resp_licenses_inner::setRemote(const bool &remote) {
    m_remote = remote;
    m_remote_isSet = true;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_remote_Set() const{
    return m_remote_isSet;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_remote_Valid() const{
    return m_remote_isValid;
}

qint32 OAIV0_0_41_openapi_licenses_resp_licenses_inner::getReserved() const {
    return m_reserved;
}
void OAIV0_0_41_openapi_licenses_resp_licenses_inner::setReserved(const qint32 &reserved) {
    m_reserved = reserved;
    m_reserved_isSet = true;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_reserved_Set() const{
    return m_reserved_isSet;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_reserved_Valid() const{
    return m_reserved_isValid;
}

qint32 OAIV0_0_41_openapi_licenses_resp_licenses_inner::getLastConsumed() const {
    return m_last_consumed;
}
void OAIV0_0_41_openapi_licenses_resp_licenses_inner::setLastConsumed(const qint32 &last_consumed) {
    m_last_consumed = last_consumed;
    m_last_consumed_isSet = true;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_last_consumed_Set() const{
    return m_last_consumed_isSet;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_last_consumed_Valid() const{
    return m_last_consumed_isValid;
}

qint32 OAIV0_0_41_openapi_licenses_resp_licenses_inner::getLastDeficit() const {
    return m_last_deficit;
}
void OAIV0_0_41_openapi_licenses_resp_licenses_inner::setLastDeficit(const qint32 &last_deficit) {
    m_last_deficit = last_deficit;
    m_last_deficit_isSet = true;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_last_deficit_Set() const{
    return m_last_deficit_isSet;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_last_deficit_Valid() const{
    return m_last_deficit_isValid;
}

qint64 OAIV0_0_41_openapi_licenses_resp_licenses_inner::getLastUpdate() const {
    return m_last_update;
}
void OAIV0_0_41_openapi_licenses_resp_licenses_inner::setLastUpdate(const qint64 &last_update) {
    m_last_update = last_update;
    m_last_update_isSet = true;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_last_update_Set() const{
    return m_last_update_isSet;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::is_last_update_Valid() const{
    return m_last_update_isValid;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_license_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_used_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_free_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_remote_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reserved_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_consumed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_deficit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_update_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_licenses_resp_licenses_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
