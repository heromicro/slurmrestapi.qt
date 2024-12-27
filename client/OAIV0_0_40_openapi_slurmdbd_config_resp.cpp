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

#include "OAIV0_0_40_openapi_slurmdbd_config_resp.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_40_openapi_slurmdbd_config_resp::OAIV0_0_40_openapi_slurmdbd_config_resp(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_openapi_slurmdbd_config_resp::OAIV0_0_40_openapi_slurmdbd_config_resp() {
    this->initializeModel();
}

OAIV0_0_40_openapi_slurmdbd_config_resp::~OAIV0_0_40_openapi_slurmdbd_config_resp() {}

void OAIV0_0_40_openapi_slurmdbd_config_resp::initializeModel() {

    m_clusters_isSet = false;
    m_clusters_isValid = false;

    m_tres_isSet = false;
    m_tres_isValid = false;

    m_accounts_isSet = false;
    m_accounts_isValid = false;

    m_users_isSet = false;
    m_users_isValid = false;

    m_qos_isSet = false;
    m_qos_isValid = false;

    m_wckeys_isSet = false;
    m_wckeys_isValid = false;

    m_associations_isSet = false;
    m_associations_isValid = false;

    m_instances_isSet = false;
    m_instances_isValid = false;

    m_meta_isSet = false;
    m_meta_isValid = false;

    m_errors_isSet = false;
    m_errors_isValid = false;

    m_warnings_isSet = false;
    m_warnings_isValid = false;
}

void OAIV0_0_40_openapi_slurmdbd_config_resp::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_openapi_slurmdbd_config_resp::fromJsonObject(QJsonObject json) {

    m_clusters_isValid = ::hm:slurm:client::fromJsonValue(m_clusters, json[QString("clusters")]);
    m_clusters_isSet = !json[QString("clusters")].isNull() && m_clusters_isValid;

    m_tres_isValid = ::hm:slurm:client::fromJsonValue(m_tres, json[QString("tres")]);
    m_tres_isSet = !json[QString("tres")].isNull() && m_tres_isValid;

    m_accounts_isValid = ::hm:slurm:client::fromJsonValue(m_accounts, json[QString("accounts")]);
    m_accounts_isSet = !json[QString("accounts")].isNull() && m_accounts_isValid;

    m_users_isValid = ::hm:slurm:client::fromJsonValue(m_users, json[QString("users")]);
    m_users_isSet = !json[QString("users")].isNull() && m_users_isValid;

    m_qos_isValid = ::hm:slurm:client::fromJsonValue(m_qos, json[QString("qos")]);
    m_qos_isSet = !json[QString("qos")].isNull() && m_qos_isValid;

    m_wckeys_isValid = ::hm:slurm:client::fromJsonValue(m_wckeys, json[QString("wckeys")]);
    m_wckeys_isSet = !json[QString("wckeys")].isNull() && m_wckeys_isValid;

    m_associations_isValid = ::hm:slurm:client::fromJsonValue(m_associations, json[QString("associations")]);
    m_associations_isSet = !json[QString("associations")].isNull() && m_associations_isValid;

    m_instances_isValid = ::hm:slurm:client::fromJsonValue(m_instances, json[QString("instances")]);
    m_instances_isSet = !json[QString("instances")].isNull() && m_instances_isValid;

    m_meta_isValid = ::hm:slurm:client::fromJsonValue(m_meta, json[QString("meta")]);
    m_meta_isSet = !json[QString("meta")].isNull() && m_meta_isValid;

    m_errors_isValid = ::hm:slurm:client::fromJsonValue(m_errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;

    m_warnings_isValid = ::hm:slurm:client::fromJsonValue(m_warnings, json[QString("warnings")]);
    m_warnings_isSet = !json[QString("warnings")].isNull() && m_warnings_isValid;
}

QString OAIV0_0_40_openapi_slurmdbd_config_resp::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_openapi_slurmdbd_config_resp::asJsonObject() const {
    QJsonObject obj;
    if (m_clusters.size() > 0) {
        obj.insert(QString("clusters"), ::hm:slurm:client::toJsonValue(m_clusters));
    }
    if (m_tres.size() > 0) {
        obj.insert(QString("tres"), ::hm:slurm:client::toJsonValue(m_tres));
    }
    if (m_accounts.size() > 0) {
        obj.insert(QString("accounts"), ::hm:slurm:client::toJsonValue(m_accounts));
    }
    if (m_users.size() > 0) {
        obj.insert(QString("users"), ::hm:slurm:client::toJsonValue(m_users));
    }
    if (m_qos.size() > 0) {
        obj.insert(QString("qos"), ::hm:slurm:client::toJsonValue(m_qos));
    }
    if (m_wckeys.size() > 0) {
        obj.insert(QString("wckeys"), ::hm:slurm:client::toJsonValue(m_wckeys));
    }
    if (m_associations.size() > 0) {
        obj.insert(QString("associations"), ::hm:slurm:client::toJsonValue(m_associations));
    }
    if (m_instances.size() > 0) {
        obj.insert(QString("instances"), ::hm:slurm:client::toJsonValue(m_instances));
    }
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

QList<OAIV0_0_40_cluster_rec> OAIV0_0_40_openapi_slurmdbd_config_resp::getClusters() const {
    return m_clusters;
}
void OAIV0_0_40_openapi_slurmdbd_config_resp::setClusters(const QList<OAIV0_0_40_cluster_rec> &clusters) {
    m_clusters = clusters;
    m_clusters_isSet = true;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_clusters_Set() const{
    return m_clusters_isSet;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_clusters_Valid() const{
    return m_clusters_isValid;
}

QList<OAIV0_0_40_tres> OAIV0_0_40_openapi_slurmdbd_config_resp::getTres() const {
    return m_tres;
}
void OAIV0_0_40_openapi_slurmdbd_config_resp::setTres(const QList<OAIV0_0_40_tres> &tres) {
    m_tres = tres;
    m_tres_isSet = true;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_tres_Set() const{
    return m_tres_isSet;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_tres_Valid() const{
    return m_tres_isValid;
}

QList<OAIV0_0_40_account> OAIV0_0_40_openapi_slurmdbd_config_resp::getAccounts() const {
    return m_accounts;
}
void OAIV0_0_40_openapi_slurmdbd_config_resp::setAccounts(const QList<OAIV0_0_40_account> &accounts) {
    m_accounts = accounts;
    m_accounts_isSet = true;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_accounts_Set() const{
    return m_accounts_isSet;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_accounts_Valid() const{
    return m_accounts_isValid;
}

QList<OAIV0_0_40_user> OAIV0_0_40_openapi_slurmdbd_config_resp::getUsers() const {
    return m_users;
}
void OAIV0_0_40_openapi_slurmdbd_config_resp::setUsers(const QList<OAIV0_0_40_user> &users) {
    m_users = users;
    m_users_isSet = true;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_users_Set() const{
    return m_users_isSet;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_users_Valid() const{
    return m_users_isValid;
}

QList<OAIV0_0_40_qos> OAIV0_0_40_openapi_slurmdbd_config_resp::getQos() const {
    return m_qos;
}
void OAIV0_0_40_openapi_slurmdbd_config_resp::setQos(const QList<OAIV0_0_40_qos> &qos) {
    m_qos = qos;
    m_qos_isSet = true;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_qos_Set() const{
    return m_qos_isSet;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_qos_Valid() const{
    return m_qos_isValid;
}

QList<OAIV0_0_40_wckey> OAIV0_0_40_openapi_slurmdbd_config_resp::getWckeys() const {
    return m_wckeys;
}
void OAIV0_0_40_openapi_slurmdbd_config_resp::setWckeys(const QList<OAIV0_0_40_wckey> &wckeys) {
    m_wckeys = wckeys;
    m_wckeys_isSet = true;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_wckeys_Set() const{
    return m_wckeys_isSet;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_wckeys_Valid() const{
    return m_wckeys_isValid;
}

QList<OAIV0_0_40_assoc> OAIV0_0_40_openapi_slurmdbd_config_resp::getAssociations() const {
    return m_associations;
}
void OAIV0_0_40_openapi_slurmdbd_config_resp::setAssociations(const QList<OAIV0_0_40_assoc> &associations) {
    m_associations = associations;
    m_associations_isSet = true;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_associations_Set() const{
    return m_associations_isSet;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_associations_Valid() const{
    return m_associations_isValid;
}

QList<OAIV0_0_40_instance> OAIV0_0_40_openapi_slurmdbd_config_resp::getInstances() const {
    return m_instances;
}
void OAIV0_0_40_openapi_slurmdbd_config_resp::setInstances(const QList<OAIV0_0_40_instance> &instances) {
    m_instances = instances;
    m_instances_isSet = true;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_instances_Set() const{
    return m_instances_isSet;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_instances_Valid() const{
    return m_instances_isValid;
}

OAIV0_0_40_openapi_meta OAIV0_0_40_openapi_slurmdbd_config_resp::getMeta() const {
    return m_meta;
}
void OAIV0_0_40_openapi_slurmdbd_config_resp::setMeta(const OAIV0_0_40_openapi_meta &meta) {
    m_meta = meta;
    m_meta_isSet = true;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_meta_Set() const{
    return m_meta_isSet;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_meta_Valid() const{
    return m_meta_isValid;
}

QList<OAIV0_0_40_openapi_error> OAIV0_0_40_openapi_slurmdbd_config_resp::getErrors() const {
    return m_errors;
}
void OAIV0_0_40_openapi_slurmdbd_config_resp::setErrors(const QList<OAIV0_0_40_openapi_error> &errors) {
    m_errors = errors;
    m_errors_isSet = true;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_errors_Valid() const{
    return m_errors_isValid;
}

QList<OAIV0_0_40_openapi_warning> OAIV0_0_40_openapi_slurmdbd_config_resp::getWarnings() const {
    return m_warnings;
}
void OAIV0_0_40_openapi_slurmdbd_config_resp::setWarnings(const QList<OAIV0_0_40_openapi_warning> &warnings) {
    m_warnings = warnings;
    m_warnings_isSet = true;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_warnings_Set() const{
    return m_warnings_isSet;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::is_warnings_Valid() const{
    return m_warnings_isValid;
}

bool OAIV0_0_40_openapi_slurmdbd_config_resp::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_clusters.size() > 0) {
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

        if (m_associations.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_instances.size() > 0) {
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

bool OAIV0_0_40_openapi_slurmdbd_config_resp::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client