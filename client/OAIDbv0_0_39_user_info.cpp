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

#include "OAIDbv0_0_39_user_info.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIDbv0_0_39_user_info::OAIDbv0_0_39_user_info(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDbv0_0_39_user_info::OAIDbv0_0_39_user_info() {
    this->initializeModel();
}

OAIDbv0_0_39_user_info::~OAIDbv0_0_39_user_info() {}

void OAIDbv0_0_39_user_info::initializeModel() {

    m_meta_isSet = false;
    m_meta_isValid = false;

    m_errors_isSet = false;
    m_errors_isValid = false;

    m_warnings_isSet = false;
    m_warnings_isValid = false;

    m_users_isSet = false;
    m_users_isValid = false;
}

void OAIDbv0_0_39_user_info::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDbv0_0_39_user_info::fromJsonObject(QJsonObject json) {

    m_meta_isValid = ::hm:slurm:client::fromJsonValue(m_meta, json[QString("meta")]);
    m_meta_isSet = !json[QString("meta")].isNull() && m_meta_isValid;

    m_errors_isValid = ::hm:slurm:client::fromJsonValue(m_errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;

    m_warnings_isValid = ::hm:slurm:client::fromJsonValue(m_warnings, json[QString("warnings")]);
    m_warnings_isSet = !json[QString("warnings")].isNull() && m_warnings_isValid;

    m_users_isValid = ::hm:slurm:client::fromJsonValue(m_users, json[QString("users")]);
    m_users_isSet = !json[QString("users")].isNull() && m_users_isValid;
}

QString OAIDbv0_0_39_user_info::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDbv0_0_39_user_info::asJsonObject() const {
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
    if (m_users.size() > 0) {
        obj.insert(QString("users"), ::hm:slurm:client::toJsonValue(m_users));
    }
    return obj;
}

OAIDbv0_0_39_meta OAIDbv0_0_39_user_info::getMeta() const {
    return m_meta;
}
void OAIDbv0_0_39_user_info::setMeta(const OAIDbv0_0_39_meta &meta) {
    m_meta = meta;
    m_meta_isSet = true;
}

bool OAIDbv0_0_39_user_info::is_meta_Set() const{
    return m_meta_isSet;
}

bool OAIDbv0_0_39_user_info::is_meta_Valid() const{
    return m_meta_isValid;
}

QList<OAIDbv0_0_39_error> OAIDbv0_0_39_user_info::getErrors() const {
    return m_errors;
}
void OAIDbv0_0_39_user_info::setErrors(const QList<OAIDbv0_0_39_error> &errors) {
    m_errors = errors;
    m_errors_isSet = true;
}

bool OAIDbv0_0_39_user_info::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAIDbv0_0_39_user_info::is_errors_Valid() const{
    return m_errors_isValid;
}

QList<OAIDbv0_0_39_warning> OAIDbv0_0_39_user_info::getWarnings() const {
    return m_warnings;
}
void OAIDbv0_0_39_user_info::setWarnings(const QList<OAIDbv0_0_39_warning> &warnings) {
    m_warnings = warnings;
    m_warnings_isSet = true;
}

bool OAIDbv0_0_39_user_info::is_warnings_Set() const{
    return m_warnings_isSet;
}

bool OAIDbv0_0_39_user_info::is_warnings_Valid() const{
    return m_warnings_isValid;
}

QList<OAIV0_0_39_user> OAIDbv0_0_39_user_info::getUsers() const {
    return m_users;
}
void OAIDbv0_0_39_user_info::setUsers(const QList<OAIV0_0_39_user> &users) {
    m_users = users;
    m_users_isSet = true;
}

bool OAIDbv0_0_39_user_info::is_users_Set() const{
    return m_users_isSet;
}

bool OAIDbv0_0_39_user_info::is_users_Valid() const{
    return m_users_isValid;
}

bool OAIDbv0_0_39_user_info::isSet() const {
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

        if (m_users.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDbv0_0_39_user_info::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client