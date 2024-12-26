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

#include "OAIDbv0_0_39_wckey_info.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDbv0_0_39_wckey_info::OAIDbv0_0_39_wckey_info(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDbv0_0_39_wckey_info::OAIDbv0_0_39_wckey_info() {
    this->initializeModel();
}

OAIDbv0_0_39_wckey_info::~OAIDbv0_0_39_wckey_info() {}

void OAIDbv0_0_39_wckey_info::initializeModel() {

    m_meta_isSet = false;
    m_meta_isValid = false;

    m_errors_isSet = false;
    m_errors_isValid = false;

    m_wckeys_isSet = false;
    m_wckeys_isValid = false;
}

void OAIDbv0_0_39_wckey_info::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDbv0_0_39_wckey_info::fromJsonObject(QJsonObject json) {

    m_meta_isValid = ::OpenAPI::fromJsonValue(m_meta, json[QString("meta")]);
    m_meta_isSet = !json[QString("meta")].isNull() && m_meta_isValid;

    m_errors_isValid = ::OpenAPI::fromJsonValue(m_errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;

    m_wckeys_isValid = ::OpenAPI::fromJsonValue(m_wckeys, json[QString("wckeys")]);
    m_wckeys_isSet = !json[QString("wckeys")].isNull() && m_wckeys_isValid;
}

QString OAIDbv0_0_39_wckey_info::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDbv0_0_39_wckey_info::asJsonObject() const {
    QJsonObject obj;
    if (m_meta.isSet()) {
        obj.insert(QString("meta"), ::OpenAPI::toJsonValue(m_meta));
    }
    if (m_errors.size() > 0) {
        obj.insert(QString("errors"), ::OpenAPI::toJsonValue(m_errors));
    }
    if (m_wckeys.size() > 0) {
        obj.insert(QString("wckeys"), ::OpenAPI::toJsonValue(m_wckeys));
    }
    return obj;
}

OAIDbv0_0_39_meta OAIDbv0_0_39_wckey_info::getMeta() const {
    return m_meta;
}
void OAIDbv0_0_39_wckey_info::setMeta(const OAIDbv0_0_39_meta &meta) {
    m_meta = meta;
    m_meta_isSet = true;
}

bool OAIDbv0_0_39_wckey_info::is_meta_Set() const{
    return m_meta_isSet;
}

bool OAIDbv0_0_39_wckey_info::is_meta_Valid() const{
    return m_meta_isValid;
}

QList<OAIDbv0_0_39_error> OAIDbv0_0_39_wckey_info::getErrors() const {
    return m_errors;
}
void OAIDbv0_0_39_wckey_info::setErrors(const QList<OAIDbv0_0_39_error> &errors) {
    m_errors = errors;
    m_errors_isSet = true;
}

bool OAIDbv0_0_39_wckey_info::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAIDbv0_0_39_wckey_info::is_errors_Valid() const{
    return m_errors_isValid;
}

QList<OAIV0_0_39_wckey> OAIDbv0_0_39_wckey_info::getWckeys() const {
    return m_wckeys;
}
void OAIDbv0_0_39_wckey_info::setWckeys(const QList<OAIV0_0_39_wckey> &wckeys) {
    m_wckeys = wckeys;
    m_wckeys_isSet = true;
}

bool OAIDbv0_0_39_wckey_info::is_wckeys_Set() const{
    return m_wckeys_isSet;
}

bool OAIDbv0_0_39_wckey_info::is_wckeys_Valid() const{
    return m_wckeys_isValid;
}

bool OAIDbv0_0_39_wckey_info::isSet() const {
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

        if (m_wckeys.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDbv0_0_39_wckey_info::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
