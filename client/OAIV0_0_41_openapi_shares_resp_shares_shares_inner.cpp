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

#include "OAIV0_0_41_openapi_shares_resp_shares_shares_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_41_openapi_shares_resp_shares_shares_inner::OAIV0_0_41_openapi_shares_resp_shares_shares_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_shares_resp_shares_shares_inner::OAIV0_0_41_openapi_shares_resp_shares_shares_inner() {
    this->initializeModel();
}

OAIV0_0_41_openapi_shares_resp_shares_shares_inner::~OAIV0_0_41_openapi_shares_resp_shares_shares_inner() {}

void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_cluster_isSet = false;
    m_cluster_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_parent_isSet = false;
    m_parent_isValid = false;

    m_partition_isSet = false;
    m_partition_isValid = false;

    m_shares_normalized_isSet = false;
    m_shares_normalized_isValid = false;

    m_shares_isSet = false;
    m_shares_isValid = false;

    m_tres_isSet = false;
    m_tres_isValid = false;

    m_effective_usage_isSet = false;
    m_effective_usage_isValid = false;

    m_usage_normalized_isSet = false;
    m_usage_normalized_isValid = false;

    m_usage_isSet = false;
    m_usage_isValid = false;

    m_fairshare_isSet = false;
    m_fairshare_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;
}

void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::hm:slurm:client::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_cluster_isValid = ::hm:slurm:client::fromJsonValue(m_cluster, json[QString("cluster")]);
    m_cluster_isSet = !json[QString("cluster")].isNull() && m_cluster_isValid;

    m_name_isValid = ::hm:slurm:client::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_parent_isValid = ::hm:slurm:client::fromJsonValue(m_parent, json[QString("parent")]);
    m_parent_isSet = !json[QString("parent")].isNull() && m_parent_isValid;

    m_partition_isValid = ::hm:slurm:client::fromJsonValue(m_partition, json[QString("partition")]);
    m_partition_isSet = !json[QString("partition")].isNull() && m_partition_isValid;

    m_shares_normalized_isValid = ::hm:slurm:client::fromJsonValue(m_shares_normalized, json[QString("shares_normalized")]);
    m_shares_normalized_isSet = !json[QString("shares_normalized")].isNull() && m_shares_normalized_isValid;

    m_shares_isValid = ::hm:slurm:client::fromJsonValue(m_shares, json[QString("shares")]);
    m_shares_isSet = !json[QString("shares")].isNull() && m_shares_isValid;

    m_tres_isValid = ::hm:slurm:client::fromJsonValue(m_tres, json[QString("tres")]);
    m_tres_isSet = !json[QString("tres")].isNull() && m_tres_isValid;

    m_effective_usage_isValid = ::hm:slurm:client::fromJsonValue(m_effective_usage, json[QString("effective_usage")]);
    m_effective_usage_isSet = !json[QString("effective_usage")].isNull() && m_effective_usage_isValid;

    m_usage_normalized_isValid = ::hm:slurm:client::fromJsonValue(m_usage_normalized, json[QString("usage_normalized")]);
    m_usage_normalized_isSet = !json[QString("usage_normalized")].isNull() && m_usage_normalized_isValid;

    m_usage_isValid = ::hm:slurm:client::fromJsonValue(m_usage, json[QString("usage")]);
    m_usage_isSet = !json[QString("usage")].isNull() && m_usage_isValid;

    m_fairshare_isValid = ::hm:slurm:client::fromJsonValue(m_fairshare, json[QString("fairshare")]);
    m_fairshare_isSet = !json[QString("fairshare")].isNull() && m_fairshare_isValid;

    m_type_isValid = ::hm:slurm:client::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;
}

QString OAIV0_0_41_openapi_shares_resp_shares_shares_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_shares_resp_shares_shares_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::hm:slurm:client::toJsonValue(m_id));
    }
    if (m_cluster_isSet) {
        obj.insert(QString("cluster"), ::hm:slurm:client::toJsonValue(m_cluster));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::hm:slurm:client::toJsonValue(m_name));
    }
    if (m_parent_isSet) {
        obj.insert(QString("parent"), ::hm:slurm:client::toJsonValue(m_parent));
    }
    if (m_partition_isSet) {
        obj.insert(QString("partition"), ::hm:slurm:client::toJsonValue(m_partition));
    }
    if (m_shares_normalized.isSet()) {
        obj.insert(QString("shares_normalized"), ::hm:slurm:client::toJsonValue(m_shares_normalized));
    }
    if (m_shares.isSet()) {
        obj.insert(QString("shares"), ::hm:slurm:client::toJsonValue(m_shares));
    }
    if (m_tres.isSet()) {
        obj.insert(QString("tres"), ::hm:slurm:client::toJsonValue(m_tres));
    }
    if (m_effective_usage_isSet) {
        obj.insert(QString("effective_usage"), ::hm:slurm:client::toJsonValue(m_effective_usage));
    }
    if (m_usage_normalized.isSet()) {
        obj.insert(QString("usage_normalized"), ::hm:slurm:client::toJsonValue(m_usage_normalized));
    }
    if (m_usage_isSet) {
        obj.insert(QString("usage"), ::hm:slurm:client::toJsonValue(m_usage));
    }
    if (m_fairshare.isSet()) {
        obj.insert(QString("fairshare"), ::hm:slurm:client::toJsonValue(m_fairshare));
    }
    if (m_type.size() > 0) {
        obj.insert(QString("type"), ::hm:slurm:client::toJsonValue(m_type));
    }
    return obj;
}

qint32 OAIV0_0_41_openapi_shares_resp_shares_shares_inner::getId() const {
    return m_id;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_id_Set() const{
    return m_id_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIV0_0_41_openapi_shares_resp_shares_shares_inner::getCluster() const {
    return m_cluster;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::setCluster(const QString &cluster) {
    m_cluster = cluster;
    m_cluster_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_cluster_Set() const{
    return m_cluster_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_cluster_Valid() const{
    return m_cluster_isValid;
}

QString OAIV0_0_41_openapi_shares_resp_shares_shares_inner::getName() const {
    return m_name;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_name_Set() const{
    return m_name_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIV0_0_41_openapi_shares_resp_shares_shares_inner::getParent() const {
    return m_parent;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::setParent(const QString &parent) {
    m_parent = parent;
    m_parent_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_parent_Set() const{
    return m_parent_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_parent_Valid() const{
    return m_parent_isValid;
}

QString OAIV0_0_41_openapi_shares_resp_shares_shares_inner::getPartition() const {
    return m_partition;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::setPartition(const QString &partition) {
    m_partition = partition;
    m_partition_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_partition_Set() const{
    return m_partition_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_partition_Valid() const{
    return m_partition_isValid;
}

OAIV0_0_41_openapi_shares_resp_shares_shares_inner_shares_normalized OAIV0_0_41_openapi_shares_resp_shares_shares_inner::getSharesNormalized() const {
    return m_shares_normalized;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::setSharesNormalized(const OAIV0_0_41_openapi_shares_resp_shares_shares_inner_shares_normalized &shares_normalized) {
    m_shares_normalized = shares_normalized;
    m_shares_normalized_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_shares_normalized_Set() const{
    return m_shares_normalized_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_shares_normalized_Valid() const{
    return m_shares_normalized_isValid;
}

OAIV0_0_41_openapi_shares_resp_shares_shares_inner_shares OAIV0_0_41_openapi_shares_resp_shares_shares_inner::getShares() const {
    return m_shares;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::setShares(const OAIV0_0_41_openapi_shares_resp_shares_shares_inner_shares &shares) {
    m_shares = shares;
    m_shares_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_shares_Set() const{
    return m_shares_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_shares_Valid() const{
    return m_shares_isValid;
}

OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres OAIV0_0_41_openapi_shares_resp_shares_shares_inner::getTres() const {
    return m_tres;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::setTres(const OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres &tres) {
    m_tres = tres;
    m_tres_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_tres_Set() const{
    return m_tres_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_tres_Valid() const{
    return m_tres_isValid;
}

double OAIV0_0_41_openapi_shares_resp_shares_shares_inner::getEffectiveUsage() const {
    return m_effective_usage;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::setEffectiveUsage(const double &effective_usage) {
    m_effective_usage = effective_usage;
    m_effective_usage_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_effective_usage_Set() const{
    return m_effective_usage_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_effective_usage_Valid() const{
    return m_effective_usage_isValid;
}

OAIV0_0_41_openapi_shares_resp_shares_shares_inner_usage_normalized OAIV0_0_41_openapi_shares_resp_shares_shares_inner::getUsageNormalized() const {
    return m_usage_normalized;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::setUsageNormalized(const OAIV0_0_41_openapi_shares_resp_shares_shares_inner_usage_normalized &usage_normalized) {
    m_usage_normalized = usage_normalized;
    m_usage_normalized_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_usage_normalized_Set() const{
    return m_usage_normalized_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_usage_normalized_Valid() const{
    return m_usage_normalized_isValid;
}

qint64 OAIV0_0_41_openapi_shares_resp_shares_shares_inner::getUsage() const {
    return m_usage;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::setUsage(const qint64 &usage) {
    m_usage = usage;
    m_usage_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_usage_Set() const{
    return m_usage_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_usage_Valid() const{
    return m_usage_isValid;
}

OAIV0_0_40_assoc_shares_obj_wrap_fairshare OAIV0_0_41_openapi_shares_resp_shares_shares_inner::getFairshare() const {
    return m_fairshare;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::setFairshare(const OAIV0_0_40_assoc_shares_obj_wrap_fairshare &fairshare) {
    m_fairshare = fairshare;
    m_fairshare_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_fairshare_Set() const{
    return m_fairshare_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_fairshare_Valid() const{
    return m_fairshare_isValid;
}

QList<QString> OAIV0_0_41_openapi_shares_resp_shares_shares_inner::getType() const {
    return m_type;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner::setType(const QList<QString> &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_type_Set() const{
    return m_type_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::is_type_Valid() const{
    return m_type_isValid;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cluster_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_parent_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_partition_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_shares_normalized.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_shares.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_tres.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_effective_usage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_usage_normalized.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_usage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fairshare.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_type.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client