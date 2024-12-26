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

#include "OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner() {
    this->initializeModel();
}

OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::~OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner() {}

void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::initializeModel() {

    m_accounting_isSet = false;
    m_accounting_isValid = false;

    m_cluster_isSet = false;
    m_cluster_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::fromJsonObject(QJsonObject json) {

    m_accounting_isValid = ::OpenAPI::fromJsonValue(m_accounting, json[QString("accounting")]);
    m_accounting_isSet = !json[QString("accounting")].isNull() && m_accounting_isValid;

    m_cluster_isValid = ::OpenAPI::fromJsonValue(m_cluster, json[QString("cluster")]);
    m_cluster_isSet = !json[QString("cluster")].isNull() && m_cluster_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_user_isValid = ::OpenAPI::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_flags_isValid = ::OpenAPI::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_accounting.size() > 0) {
        obj.insert(QString("accounting"), ::OpenAPI::toJsonValue(m_accounting));
    }
    if (m_cluster_isSet) {
        obj.insert(QString("cluster"), ::OpenAPI::toJsonValue(m_cluster));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_user_isSet) {
        obj.insert(QString("user"), ::OpenAPI::toJsonValue(m_user));
    }
    if (m_flags.size() > 0) {
        obj.insert(QString("flags"), ::OpenAPI::toJsonValue(m_flags));
    }
    return obj;
}

QList<OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner> OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::getAccounting() const {
    return m_accounting;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::setAccounting(const QList<OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner> &accounting) {
    m_accounting = accounting;
    m_accounting_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::is_accounting_Set() const{
    return m_accounting_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::is_accounting_Valid() const{
    return m_accounting_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::getCluster() const {
    return m_cluster;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::setCluster(const QString &cluster) {
    m_cluster = cluster;
    m_cluster_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::is_cluster_Set() const{
    return m_cluster_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::is_cluster_Valid() const{
    return m_cluster_isValid;
}

qint32 OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::getId() const {
    return m_id;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::is_id_Set() const{
    return m_id_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::getName() const {
    return m_name;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::is_name_Set() const{
    return m_name_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::getUser() const {
    return m_user;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::setUser(const QString &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::is_user_Set() const{
    return m_user_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::is_user_Valid() const{
    return m_user_isValid;
}

QList<QString> OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::getFlags() const {
    return m_flags;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::setFlags(const QList<QString> &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::is_flags_Valid() const{
    return m_flags_isValid;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_accounting.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_cluster_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_cluster_isValid && m_name_isValid && m_user_isValid && true;
}

} // namespace OpenAPI
