/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIDbv0_0_39_config_info.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDbv0_0_39_config_info::OAIDbv0_0_39_config_info(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDbv0_0_39_config_info::OAIDbv0_0_39_config_info() {
    this->initializeModel();
}

OAIDbv0_0_39_config_info::~OAIDbv0_0_39_config_info() {}

void OAIDbv0_0_39_config_info::initializeModel() {

    m_meta_isSet = false;
    m_meta_isValid = false;

    m_errors_isSet = false;
    m_errors_isValid = false;

    m_warnings_isSet = false;
    m_warnings_isValid = false;

    m_tres_isSet = false;
    m_tres_isValid = false;

    m_accounts_isSet = false;
    m_accounts_isValid = false;

    m_associations_isSet = false;
    m_associations_isValid = false;

    m_users_isSet = false;
    m_users_isValid = false;

    m_qos_isSet = false;
    m_qos_isValid = false;

    m_wckeys_isSet = false;
    m_wckeys_isValid = false;

    m_clusters_isSet = false;
    m_clusters_isValid = false;
}

void OAIDbv0_0_39_config_info::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDbv0_0_39_config_info::fromJsonObject(QJsonObject json) {

    m_meta_isValid = ::OpenAPI::fromJsonValue(m_meta, json[QString("meta")]);
    m_meta_isSet = !json[QString("meta")].isNull() && m_meta_isValid;

    m_errors_isValid = ::OpenAPI::fromJsonValue(m_errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;

    m_warnings_isValid = ::OpenAPI::fromJsonValue(m_warnings, json[QString("warnings")]);
    m_warnings_isSet = !json[QString("warnings")].isNull() && m_warnings_isValid;

    m_tres_isValid = ::OpenAPI::fromJsonValue(m_tres, json[QString("tres")]);
    m_tres_isSet = !json[QString("tres")].isNull() && m_tres_isValid;

    m_accounts_isValid = ::OpenAPI::fromJsonValue(m_accounts, json[QString("accounts")]);
    m_accounts_isSet = !json[QString("accounts")].isNull() && m_accounts_isValid;

    m_associations_isValid = ::OpenAPI::fromJsonValue(m_associations, json[QString("associations")]);
    m_associations_isSet = !json[QString("associations")].isNull() && m_associations_isValid;

    m_users_isValid = ::OpenAPI::fromJsonValue(m_users, json[QString("users")]);
    m_users_isSet = !json[QString("users")].isNull() && m_users_isValid;

    m_qos_isValid = ::OpenAPI::fromJsonValue(m_qos, json[QString("qos")]);
    m_qos_isSet = !json[QString("qos")].isNull() && m_qos_isValid;

    m_wckeys_isValid = ::OpenAPI::fromJsonValue(m_wckeys, json[QString("wckeys")]);
    m_wckeys_isSet = !json[QString("wckeys")].isNull() && m_wckeys_isValid;

    m_clusters_isValid = ::OpenAPI::fromJsonValue(m_clusters, json[QString("clusters")]);
    m_clusters_isSet = !json[QString("clusters")].isNull() && m_clusters_isValid;
}

QString OAIDbv0_0_39_config_info::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDbv0_0_39_config_info::asJsonObject() const {
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
    if (m_tres.size() > 0) {
        obj.insert(QString("tres"), ::OpenAPI::toJsonValue(m_tres));
    }
    if (m_accounts.size() > 0) {
        obj.insert(QString("accounts"), ::OpenAPI::toJsonValue(m_accounts));
    }
    if (m_associations.size() > 0) {
        obj.insert(QString("associations"), ::OpenAPI::toJsonValue(m_associations));
    }
    if (m_users.size() > 0) {
        obj.insert(QString("users"), ::OpenAPI::toJsonValue(m_users));
    }
    if (m_qos.size() > 0) {
        obj.insert(QString("qos"), ::OpenAPI::toJsonValue(m_qos));
    }
    if (m_wckeys.size() > 0) {
        obj.insert(QString("wckeys"), ::OpenAPI::toJsonValue(m_wckeys));
    }
    if (m_clusters.size() > 0) {
        obj.insert(QString("clusters"), ::OpenAPI::toJsonValue(m_clusters));
    }
    return obj;
}

OAIDbv0_0_39_meta OAIDbv0_0_39_config_info::getMeta() const {
    return m_meta;
}
void OAIDbv0_0_39_config_info::setMeta(const OAIDbv0_0_39_meta &meta) {
    m_meta = meta;
    m_meta_isSet = true;
}

bool OAIDbv0_0_39_config_info::is_meta_Set() const{
    return m_meta_isSet;
}

bool OAIDbv0_0_39_config_info::is_meta_Valid() const{
    return m_meta_isValid;
}

QList<OAIDbv0_0_39_error> OAIDbv0_0_39_config_info::getErrors() const {
    return m_errors;
}
void OAIDbv0_0_39_config_info::setErrors(const QList<OAIDbv0_0_39_error> &errors) {
    m_errors = errors;
    m_errors_isSet = true;
}

bool OAIDbv0_0_39_config_info::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAIDbv0_0_39_config_info::is_errors_Valid() const{
    return m_errors_isValid;
}

QList<OAIDbv0_0_39_warning> OAIDbv0_0_39_config_info::getWarnings() const {
    return m_warnings;
}
void OAIDbv0_0_39_config_info::setWarnings(const QList<OAIDbv0_0_39_warning> &warnings) {
    m_warnings = warnings;
    m_warnings_isSet = true;
}

bool OAIDbv0_0_39_config_info::is_warnings_Set() const{
    return m_warnings_isSet;
}

bool OAIDbv0_0_39_config_info::is_warnings_Valid() const{
    return m_warnings_isValid;
}

QList<OAIV0_0_39_tres> OAIDbv0_0_39_config_info::getTres() const {
    return m_tres;
}
void OAIDbv0_0_39_config_info::setTres(const QList<OAIV0_0_39_tres> &tres) {
    m_tres = tres;
    m_tres_isSet = true;
}

bool OAIDbv0_0_39_config_info::is_tres_Set() const{
    return m_tres_isSet;
}

bool OAIDbv0_0_39_config_info::is_tres_Valid() const{
    return m_tres_isValid;
}

QList<OAIV0_0_39_account> OAIDbv0_0_39_config_info::getAccounts() const {
    return m_accounts;
}
void OAIDbv0_0_39_config_info::setAccounts(const QList<OAIV0_0_39_account> &accounts) {
    m_accounts = accounts;
    m_accounts_isSet = true;
}

bool OAIDbv0_0_39_config_info::is_accounts_Set() const{
    return m_accounts_isSet;
}

bool OAIDbv0_0_39_config_info::is_accounts_Valid() const{
    return m_accounts_isValid;
}

QList<OAIV0_0_39_assoc> OAIDbv0_0_39_config_info::getAssociations() const {
    return m_associations;
}
void OAIDbv0_0_39_config_info::setAssociations(const QList<OAIV0_0_39_assoc> &associations) {
    m_associations = associations;
    m_associations_isSet = true;
}

bool OAIDbv0_0_39_config_info::is_associations_Set() const{
    return m_associations_isSet;
}

bool OAIDbv0_0_39_config_info::is_associations_Valid() const{
    return m_associations_isValid;
}

QList<OAIV0_0_39_user> OAIDbv0_0_39_config_info::getUsers() const {
    return m_users;
}
void OAIDbv0_0_39_config_info::setUsers(const QList<OAIV0_0_39_user> &users) {
    m_users = users;
    m_users_isSet = true;
}

bool OAIDbv0_0_39_config_info::is_users_Set() const{
    return m_users_isSet;
}

bool OAIDbv0_0_39_config_info::is_users_Valid() const{
    return m_users_isValid;
}

QList<OAIV0_0_39_qos> OAIDbv0_0_39_config_info::getQos() const {
    return m_qos;
}
void OAIDbv0_0_39_config_info::setQos(const QList<OAIV0_0_39_qos> &qos) {
    m_qos = qos;
    m_qos_isSet = true;
}

bool OAIDbv0_0_39_config_info::is_qos_Set() const{
    return m_qos_isSet;
}

bool OAIDbv0_0_39_config_info::is_qos_Valid() const{
    return m_qos_isValid;
}

QList<OAIV0_0_39_wckey> OAIDbv0_0_39_config_info::getWckeys() const {
    return m_wckeys;
}
void OAIDbv0_0_39_config_info::setWckeys(const QList<OAIV0_0_39_wckey> &wckeys) {
    m_wckeys = wckeys;
    m_wckeys_isSet = true;
}

bool OAIDbv0_0_39_config_info::is_wckeys_Set() const{
    return m_wckeys_isSet;
}

bool OAIDbv0_0_39_config_info::is_wckeys_Valid() const{
    return m_wckeys_isValid;
}

QList<OAIV0_0_39_cluster_rec> OAIDbv0_0_39_config_info::getClusters() const {
    return m_clusters;
}
void OAIDbv0_0_39_config_info::setClusters(const QList<OAIV0_0_39_cluster_rec> &clusters) {
    m_clusters = clusters;
    m_clusters_isSet = true;
}

bool OAIDbv0_0_39_config_info::is_clusters_Set() const{
    return m_clusters_isSet;
}

bool OAIDbv0_0_39_config_info::is_clusters_Valid() const{
    return m_clusters_isValid;
}

bool OAIDbv0_0_39_config_info::isSet() const {
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

        if (m_tres.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_accounts.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_associations.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_users.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_qos.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_wckeys.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_clusters.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDbv0_0_39_config_info::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
