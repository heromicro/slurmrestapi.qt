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

#include "OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES() {
    this->initializeModel();
}

OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::~OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES() {}

void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_count_isSet = false;
    m_count_isValid = false;
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::OpenAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_count_isValid = ::OpenAPI::fromJsonValue(m_count, json[QString("count")]);
    m_count_isSet = !json[QString("count")].isNull() && m_count_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(m_type));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_count_isSet) {
        obj.insert(QString("count"), ::OpenAPI::toJsonValue(m_count));
    }
    return obj;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::getType() const {
    return m_type;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::is_type_Set() const{
    return m_type_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::getName() const {
    return m_name;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::is_name_Set() const{
    return m_name_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::getId() const {
    return m_id;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::is_id_Set() const{
    return m_id_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::is_id_Valid() const{
    return m_id_isValid;
}

qint64 OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::getCount() const {
    return m_count;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::setCount(const qint64 &count) {
    m_count = count;
    m_count_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::is_count_Set() const{
    return m_count_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::is_count_Valid() const{
    return m_count_isValid;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && true;
}

} // namespace OpenAPI