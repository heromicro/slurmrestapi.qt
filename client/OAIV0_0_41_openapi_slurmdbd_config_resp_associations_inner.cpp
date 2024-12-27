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

#include "OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner() {
    this->initializeModel();
}

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::~OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner() {}

void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::initializeModel() {

    m_accounting_isSet = false;
    m_accounting_isValid = false;

    m_account_isSet = false;
    m_account_isValid = false;

    m_cluster_isSet = false;
    m_cluster_isValid = false;

    m_comment_isSet = false;
    m_comment_isValid = false;

    m_r_default_isSet = false;
    m_r_default_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_max_isSet = false;
    m_max_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_is_default_isSet = false;
    m_is_default_isValid = false;

    m_lineage_isSet = false;
    m_lineage_isValid = false;

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

    m_user_isSet = false;
    m_user_isValid = false;
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::fromJsonObject(QJsonObject json) {

    m_accounting_isValid = ::hm:slurm:client::fromJsonValue(m_accounting, json[QString("accounting")]);
    m_accounting_isSet = !json[QString("accounting")].isNull() && m_accounting_isValid;

    m_account_isValid = ::hm:slurm:client::fromJsonValue(m_account, json[QString("account")]);
    m_account_isSet = !json[QString("account")].isNull() && m_account_isValid;

    m_cluster_isValid = ::hm:slurm:client::fromJsonValue(m_cluster, json[QString("cluster")]);
    m_cluster_isSet = !json[QString("cluster")].isNull() && m_cluster_isValid;

    m_comment_isValid = ::hm:slurm:client::fromJsonValue(m_comment, json[QString("comment")]);
    m_comment_isSet = !json[QString("comment")].isNull() && m_comment_isValid;

    m_r_default_isValid = ::hm:slurm:client::fromJsonValue(m_r_default, json[QString("default")]);
    m_r_default_isSet = !json[QString("default")].isNull() && m_r_default_isValid;

    m_flags_isValid = ::hm:slurm:client::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_max_isValid = ::hm:slurm:client::fromJsonValue(m_max, json[QString("max")]);
    m_max_isSet = !json[QString("max")].isNull() && m_max_isValid;

    m_id_isValid = ::hm:slurm:client::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_is_default_isValid = ::hm:slurm:client::fromJsonValue(m_is_default, json[QString("is_default")]);
    m_is_default_isSet = !json[QString("is_default")].isNull() && m_is_default_isValid;

    m_lineage_isValid = ::hm:slurm:client::fromJsonValue(m_lineage, json[QString("lineage")]);
    m_lineage_isSet = !json[QString("lineage")].isNull() && m_lineage_isValid;

    m_min_isValid = ::hm:slurm:client::fromJsonValue(m_min, json[QString("min")]);
    m_min_isSet = !json[QString("min")].isNull() && m_min_isValid;

    m_parent_account_isValid = ::hm:slurm:client::fromJsonValue(m_parent_account, json[QString("parent_account")]);
    m_parent_account_isSet = !json[QString("parent_account")].isNull() && m_parent_account_isValid;

    m_partition_isValid = ::hm:slurm:client::fromJsonValue(m_partition, json[QString("partition")]);
    m_partition_isSet = !json[QString("partition")].isNull() && m_partition_isValid;

    m_priority_isValid = ::hm:slurm:client::fromJsonValue(m_priority, json[QString("priority")]);
    m_priority_isSet = !json[QString("priority")].isNull() && m_priority_isValid;

    m_qos_isValid = ::hm:slurm:client::fromJsonValue(m_qos, json[QString("qos")]);
    m_qos_isSet = !json[QString("qos")].isNull() && m_qos_isValid;

    m_shares_raw_isValid = ::hm:slurm:client::fromJsonValue(m_shares_raw, json[QString("shares_raw")]);
    m_shares_raw_isSet = !json[QString("shares_raw")].isNull() && m_shares_raw_isValid;

    m_user_isValid = ::hm:slurm:client::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_accounting.size() > 0) {
        obj.insert(QString("accounting"), ::hm:slurm:client::toJsonValue(m_accounting));
    }
    if (m_account_isSet) {
        obj.insert(QString("account"), ::hm:slurm:client::toJsonValue(m_account));
    }
    if (m_cluster_isSet) {
        obj.insert(QString("cluster"), ::hm:slurm:client::toJsonValue(m_cluster));
    }
    if (m_comment_isSet) {
        obj.insert(QString("comment"), ::hm:slurm:client::toJsonValue(m_comment));
    }
    if (m_r_default.isSet()) {
        obj.insert(QString("default"), ::hm:slurm:client::toJsonValue(m_r_default));
    }
    if (m_flags.size() > 0) {
        obj.insert(QString("flags"), ::hm:slurm:client::toJsonValue(m_flags));
    }
    if (m_max.isSet()) {
        obj.insert(QString("max"), ::hm:slurm:client::toJsonValue(m_max));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::hm:slurm:client::toJsonValue(m_id));
    }
    if (m_is_default_isSet) {
        obj.insert(QString("is_default"), ::hm:slurm:client::toJsonValue(m_is_default));
    }
    if (m_lineage_isSet) {
        obj.insert(QString("lineage"), ::hm:slurm:client::toJsonValue(m_lineage));
    }
    if (m_min.isSet()) {
        obj.insert(QString("min"), ::hm:slurm:client::toJsonValue(m_min));
    }
    if (m_parent_account_isSet) {
        obj.insert(QString("parent_account"), ::hm:slurm:client::toJsonValue(m_parent_account));
    }
    if (m_partition_isSet) {
        obj.insert(QString("partition"), ::hm:slurm:client::toJsonValue(m_partition));
    }
    if (m_priority.isSet()) {
        obj.insert(QString("priority"), ::hm:slurm:client::toJsonValue(m_priority));
    }
    if (m_qos.size() > 0) {
        obj.insert(QString("qos"), ::hm:slurm:client::toJsonValue(m_qos));
    }
    if (m_shares_raw_isSet) {
        obj.insert(QString("shares_raw"), ::hm:slurm:client::toJsonValue(m_shares_raw));
    }
    if (m_user_isSet) {
        obj.insert(QString("user"), ::hm:slurm:client::toJsonValue(m_user));
    }
    return obj;
}

QList<OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner> OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getAccounting() const {
    return m_accounting;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setAccounting(const QList<OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner> &accounting) {
    m_accounting = accounting;
    m_accounting_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_accounting_Set() const{
    return m_accounting_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_accounting_Valid() const{
    return m_accounting_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getAccount() const {
    return m_account;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setAccount(const QString &account) {
    m_account = account;
    m_account_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_account_Set() const{
    return m_account_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_account_Valid() const{
    return m_account_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getCluster() const {
    return m_cluster;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setCluster(const QString &cluster) {
    m_cluster = cluster;
    m_cluster_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_cluster_Set() const{
    return m_cluster_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_cluster_Valid() const{
    return m_cluster_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getComment() const {
    return m_comment;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setComment(const QString &comment) {
    m_comment = comment;
    m_comment_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_comment_Set() const{
    return m_comment_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_comment_Valid() const{
    return m_comment_isValid;
}

OAIV0_0_40_assoc_default OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getRDefault() const {
    return m_r_default;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setRDefault(const OAIV0_0_40_assoc_default &r_default) {
    m_r_default = r_default;
    m_r_default_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_r_default_Set() const{
    return m_r_default_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_r_default_Valid() const{
    return m_r_default_isValid;
}

QList<QString> OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getFlags() const {
    return m_flags;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setFlags(const QList<QString> &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_flags_Valid() const{
    return m_flags_isValid;
}

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getMax() const {
    return m_max;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setMax(const OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max &max) {
    m_max = max;
    m_max_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_max_Set() const{
    return m_max_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_max_Valid() const{
    return m_max_isValid;
}

qint32 OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getId() const {
    return m_id;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_id_Set() const{
    return m_id_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_id_Valid() const{
    return m_id_isValid;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::isIsDefault() const {
    return m_is_default;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setIsDefault(const bool &is_default) {
    m_is_default = is_default;
    m_is_default_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_is_default_Set() const{
    return m_is_default_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_is_default_Valid() const{
    return m_is_default_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getLineage() const {
    return m_lineage;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setLineage(const QString &lineage) {
    m_lineage = lineage;
    m_lineage_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_lineage_Set() const{
    return m_lineage_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_lineage_Valid() const{
    return m_lineage_isValid;
}

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_min OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getMin() const {
    return m_min;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setMin(const OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_min &min) {
    m_min = min;
    m_min_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_min_Set() const{
    return m_min_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_min_Valid() const{
    return m_min_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getParentAccount() const {
    return m_parent_account;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setParentAccount(const QString &parent_account) {
    m_parent_account = parent_account;
    m_parent_account_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_parent_account_Set() const{
    return m_parent_account_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_parent_account_Valid() const{
    return m_parent_account_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getPartition() const {
    return m_partition;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setPartition(const QString &partition) {
    m_partition = partition;
    m_partition_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_partition_Set() const{
    return m_partition_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_partition_Valid() const{
    return m_partition_isValid;
}

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_priority OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getPriority() const {
    return m_priority;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setPriority(const OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_priority &priority) {
    m_priority = priority;
    m_priority_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_priority_Set() const{
    return m_priority_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_priority_Valid() const{
    return m_priority_isValid;
}

QList<QString> OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getQos() const {
    return m_qos;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setQos(const QList<QString> &qos) {
    m_qos = qos;
    m_qos_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_qos_Set() const{
    return m_qos_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_qos_Valid() const{
    return m_qos_isValid;
}

qint32 OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getSharesRaw() const {
    return m_shares_raw;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setSharesRaw(const qint32 &shares_raw) {
    m_shares_raw = shares_raw;
    m_shares_raw_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_shares_raw_Set() const{
    return m_shares_raw_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_shares_raw_Valid() const{
    return m_shares_raw_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::getUser() const {
    return m_user;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::setUser(const QString &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_user_Set() const{
    return m_user_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::is_user_Valid() const{
    return m_user_isValid;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_accounting.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_account_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cluster_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_comment_isSet) {
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

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_lineage_isSet) {
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

        if (m_user_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_isValid && true;
}

} // namespace hm:slurm:client
