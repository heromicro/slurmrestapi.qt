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

#include "OAIV0_0_39_assoc.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_assoc::OAIV0_0_39_assoc(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_assoc::OAIV0_0_39_assoc() {
    this->initializeModel();
}

OAIV0_0_39_assoc::~OAIV0_0_39_assoc() {}

void OAIV0_0_39_assoc::initializeModel() {

    m_account_isSet = false;
    m_account_isValid = false;

    m_cluster_isSet = false;
    m_cluster_isValid = false;

    m_r_default_isSet = false;
    m_r_default_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_max_isSet = false;
    m_max_isValid = false;

    m_is_default_isSet = false;
    m_is_default_isValid = false;

    m_min_isSet = false;
    m_min_isValid = false;

    m_parent_account_isSet = false;
    m_parent_account_isValid = false;

    m_partition_isSet = false;
    m_partition_isValid = false;

    m_priority_isSet = false;
    m_priority_isValid = false;

    m_qos_isSet = false;
    m_qos_isValid = false;

    m_shares_raw_isSet = false;
    m_shares_raw_isValid = false;

    m_usage_isSet = false;
    m_usage_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;
}

void OAIV0_0_39_assoc::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_assoc::fromJsonObject(QJsonObject json) {

    m_account_isValid = ::OpenAPI::fromJsonValue(m_account, json[QString("account")]);
    m_account_isSet = !json[QString("account")].isNull() && m_account_isValid;

    m_cluster_isValid = ::OpenAPI::fromJsonValue(m_cluster, json[QString("cluster")]);
    m_cluster_isSet = !json[QString("cluster")].isNull() && m_cluster_isValid;

    m_r_default_isValid = ::OpenAPI::fromJsonValue(m_r_default, json[QString("default")]);
    m_r_default_isSet = !json[QString("default")].isNull() && m_r_default_isValid;

    m_flags_isValid = ::OpenAPI::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_max_isValid = ::OpenAPI::fromJsonValue(m_max, json[QString("max")]);
    m_max_isSet = !json[QString("max")].isNull() && m_max_isValid;

    m_is_default_isValid = ::OpenAPI::fromJsonValue(m_is_default, json[QString("is_default")]);
    m_is_default_isSet = !json[QString("is_default")].isNull() && m_is_default_isValid;

    m_min_isValid = ::OpenAPI::fromJsonValue(m_min, json[QString("min")]);
    m_min_isSet = !json[QString("min")].isNull() && m_min_isValid;

    m_parent_account_isValid = ::OpenAPI::fromJsonValue(m_parent_account, json[QString("parent_account")]);
    m_parent_account_isSet = !json[QString("parent_account")].isNull() && m_parent_account_isValid;

    m_partition_isValid = ::OpenAPI::fromJsonValue(m_partition, json[QString("partition")]);
    m_partition_isSet = !json[QString("partition")].isNull() && m_partition_isValid;

    m_priority_isValid = ::OpenAPI::fromJsonValue(m_priority, json[QString("priority")]);
    m_priority_isSet = !json[QString("priority")].isNull() && m_priority_isValid;

    m_qos_isValid = ::OpenAPI::fromJsonValue(m_qos, json[QString("qos")]);
    m_qos_isSet = !json[QString("qos")].isNull() && m_qos_isValid;

    m_shares_raw_isValid = ::OpenAPI::fromJsonValue(m_shares_raw, json[QString("shares_raw")]);
    m_shares_raw_isSet = !json[QString("shares_raw")].isNull() && m_shares_raw_isValid;

    m_usage_isValid = ::OpenAPI::fromJsonValue(m_usage, json[QString("usage")]);
    m_usage_isSet = !json[QString("usage")].isNull() && m_usage_isValid;

    m_user_isValid = ::OpenAPI::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;
}

QString OAIV0_0_39_assoc::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_assoc::asJsonObject() const {
    QJsonObject obj;
    if (m_account_isSet) {
        obj.insert(QString("account"), ::OpenAPI::toJsonValue(m_account));
    }
    if (m_cluster_isSet) {
        obj.insert(QString("cluster"), ::OpenAPI::toJsonValue(m_cluster));
    }
    if (m_r_default.isSet()) {
        obj.insert(QString("default"), ::OpenAPI::toJsonValue(m_r_default));
    }
    if (m_flags.size() > 0) {
        obj.insert(QString("flags"), ::OpenAPI::toJsonValue(m_flags));
    }
    if (m_max.isSet()) {
        obj.insert(QString("max"), ::OpenAPI::toJsonValue(m_max));
    }
    if (m_is_default_isSet) {
        obj.insert(QString("is_default"), ::OpenAPI::toJsonValue(m_is_default));
    }
    if (m_min.isSet()) {
        obj.insert(QString("min"), ::OpenAPI::toJsonValue(m_min));
    }
    if (m_parent_account_isSet) {
        obj.insert(QString("parent_account"), ::OpenAPI::toJsonValue(m_parent_account));
    }
    if (m_partition_isSet) {
        obj.insert(QString("partition"), ::OpenAPI::toJsonValue(m_partition));
    }
    if (m_priority.isSet()) {
        obj.insert(QString("priority"), ::OpenAPI::toJsonValue(m_priority));
    }
    if (m_qos.size() > 0) {
        obj.insert(QString("qos"), ::OpenAPI::toJsonValue(m_qos));
    }
    if (m_shares_raw_isSet) {
        obj.insert(QString("shares_raw"), ::OpenAPI::toJsonValue(m_shares_raw));
    }
    if (m_usage.isSet()) {
        obj.insert(QString("usage"), ::OpenAPI::toJsonValue(m_usage));
    }
    if (m_user_isSet) {
        obj.insert(QString("user"), ::OpenAPI::toJsonValue(m_user));
    }
    return obj;
}

QString OAIV0_0_39_assoc::getAccount() const {
    return m_account;
}
void OAIV0_0_39_assoc::setAccount(const QString &account) {
    m_account = account;
    m_account_isSet = true;
}

bool OAIV0_0_39_assoc::is_account_Set() const{
    return m_account_isSet;
}

bool OAIV0_0_39_assoc::is_account_Valid() const{
    return m_account_isValid;
}

QString OAIV0_0_39_assoc::getCluster() const {
    return m_cluster;
}
void OAIV0_0_39_assoc::setCluster(const QString &cluster) {
    m_cluster = cluster;
    m_cluster_isSet = true;
}

bool OAIV0_0_39_assoc::is_cluster_Set() const{
    return m_cluster_isSet;
}

bool OAIV0_0_39_assoc::is_cluster_Valid() const{
    return m_cluster_isValid;
}

OAIV0_0_39_assoc_default OAIV0_0_39_assoc::getRDefault() const {
    return m_r_default;
}
void OAIV0_0_39_assoc::setRDefault(const OAIV0_0_39_assoc_default &r_default) {
    m_r_default = r_default;
    m_r_default_isSet = true;
}

bool OAIV0_0_39_assoc::is_r_default_Set() const{
    return m_r_default_isSet;
}

bool OAIV0_0_39_assoc::is_r_default_Valid() const{
    return m_r_default_isValid;
}

QList<QString> OAIV0_0_39_assoc::getFlags() const {
    return m_flags;
}
void OAIV0_0_39_assoc::setFlags(const QList<QString> &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIV0_0_39_assoc::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIV0_0_39_assoc::is_flags_Valid() const{
    return m_flags_isValid;
}

OAIV0_0_39_assoc_max OAIV0_0_39_assoc::getMax() const {
    return m_max;
}
void OAIV0_0_39_assoc::setMax(const OAIV0_0_39_assoc_max &max) {
    m_max = max;
    m_max_isSet = true;
}

bool OAIV0_0_39_assoc::is_max_Set() const{
    return m_max_isSet;
}

bool OAIV0_0_39_assoc::is_max_Valid() const{
    return m_max_isValid;
}

bool OAIV0_0_39_assoc::isIsDefault() const {
    return m_is_default;
}
void OAIV0_0_39_assoc::setIsDefault(const bool &is_default) {
    m_is_default = is_default;
    m_is_default_isSet = true;
}

bool OAIV0_0_39_assoc::is_is_default_Set() const{
    return m_is_default_isSet;
}

bool OAIV0_0_39_assoc::is_is_default_Valid() const{
    return m_is_default_isValid;
}

OAIV0_0_39_assoc_min OAIV0_0_39_assoc::getMin() const {
    return m_min;
}
void OAIV0_0_39_assoc::setMin(const OAIV0_0_39_assoc_min &min) {
    m_min = min;
    m_min_isSet = true;
}

bool OAIV0_0_39_assoc::is_min_Set() const{
    return m_min_isSet;
}

bool OAIV0_0_39_assoc::is_min_Valid() const{
    return m_min_isValid;
}

QString OAIV0_0_39_assoc::getParentAccount() const {
    return m_parent_account;
}
void OAIV0_0_39_assoc::setParentAccount(const QString &parent_account) {
    m_parent_account = parent_account;
    m_parent_account_isSet = true;
}

bool OAIV0_0_39_assoc::is_parent_account_Set() const{
    return m_parent_account_isSet;
}

bool OAIV0_0_39_assoc::is_parent_account_Valid() const{
    return m_parent_account_isValid;
}

QString OAIV0_0_39_assoc::getPartition() const {
    return m_partition;
}
void OAIV0_0_39_assoc::setPartition(const QString &partition) {
    m_partition = partition;
    m_partition_isSet = true;
}

bool OAIV0_0_39_assoc::is_partition_Set() const{
    return m_partition_isSet;
}

bool OAIV0_0_39_assoc::is_partition_Valid() const{
    return m_partition_isValid;
}

OAIV0_0_39_uint32_no_val OAIV0_0_39_assoc::getPriority() const {
    return m_priority;
}
void OAIV0_0_39_assoc::setPriority(const OAIV0_0_39_uint32_no_val &priority) {
    m_priority = priority;
    m_priority_isSet = true;
}

bool OAIV0_0_39_assoc::is_priority_Set() const{
    return m_priority_isSet;
}

bool OAIV0_0_39_assoc::is_priority_Valid() const{
    return m_priority_isValid;
}

QList<QString> OAIV0_0_39_assoc::getQos() const {
    return m_qos;
}
void OAIV0_0_39_assoc::setQos(const QList<QString> &qos) {
    m_qos = qos;
    m_qos_isSet = true;
}

bool OAIV0_0_39_assoc::is_qos_Set() const{
    return m_qos_isSet;
}

bool OAIV0_0_39_assoc::is_qos_Valid() const{
    return m_qos_isValid;
}

qint32 OAIV0_0_39_assoc::getSharesRaw() const {
    return m_shares_raw;
}
void OAIV0_0_39_assoc::setSharesRaw(const qint32 &shares_raw) {
    m_shares_raw = shares_raw;
    m_shares_raw_isSet = true;
}

bool OAIV0_0_39_assoc::is_shares_raw_Set() const{
    return m_shares_raw_isSet;
}

bool OAIV0_0_39_assoc::is_shares_raw_Valid() const{
    return m_shares_raw_isValid;
}

OAIV0_0_39_assoc_usage OAIV0_0_39_assoc::getUsage() const {
    return m_usage;
}
void OAIV0_0_39_assoc::setUsage(const OAIV0_0_39_assoc_usage &usage) {
    m_usage = usage;
    m_usage_isSet = true;
}

bool OAIV0_0_39_assoc::is_usage_Set() const{
    return m_usage_isSet;
}

bool OAIV0_0_39_assoc::is_usage_Valid() const{
    return m_usage_isValid;
}

QString OAIV0_0_39_assoc::getUser() const {
    return m_user;
}
void OAIV0_0_39_assoc::setUser(const QString &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIV0_0_39_assoc::is_user_Set() const{
    return m_user_isSet;
}

bool OAIV0_0_39_assoc::is_user_Valid() const{
    return m_user_isValid;
}

bool OAIV0_0_39_assoc::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_account_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cluster_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_r_default.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_max.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_min.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_parent_account_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_partition_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_priority.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_qos.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_shares_raw_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_usage.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_assoc::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_isValid && true;
}

} // namespace OpenAPI
