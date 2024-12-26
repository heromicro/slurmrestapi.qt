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

#include "OAIV0_0_39_assoc_short.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_assoc_short::OAIV0_0_39_assoc_short(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_assoc_short::OAIV0_0_39_assoc_short() {
    this->initializeModel();
}

OAIV0_0_39_assoc_short::~OAIV0_0_39_assoc_short() {}

void OAIV0_0_39_assoc_short::initializeModel() {

    m_account_isSet = false;
    m_account_isValid = false;

    m_cluster_isSet = false;
    m_cluster_isValid = false;

    m_partition_isSet = false;
    m_partition_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;
}

void OAIV0_0_39_assoc_short::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_assoc_short::fromJsonObject(QJsonObject json) {

    m_account_isValid = ::OpenAPI::fromJsonValue(m_account, json[QString("account")]);
    m_account_isSet = !json[QString("account")].isNull() && m_account_isValid;

    m_cluster_isValid = ::OpenAPI::fromJsonValue(m_cluster, json[QString("cluster")]);
    m_cluster_isSet = !json[QString("cluster")].isNull() && m_cluster_isValid;

    m_partition_isValid = ::OpenAPI::fromJsonValue(m_partition, json[QString("partition")]);
    m_partition_isSet = !json[QString("partition")].isNull() && m_partition_isValid;

    m_user_isValid = ::OpenAPI::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;
}

QString OAIV0_0_39_assoc_short::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_assoc_short::asJsonObject() const {
    QJsonObject obj;
    if (m_account_isSet) {
        obj.insert(QString("account"), ::OpenAPI::toJsonValue(m_account));
    }
    if (m_cluster_isSet) {
        obj.insert(QString("cluster"), ::OpenAPI::toJsonValue(m_cluster));
    }
    if (m_partition_isSet) {
        obj.insert(QString("partition"), ::OpenAPI::toJsonValue(m_partition));
    }
    if (m_user_isSet) {
        obj.insert(QString("user"), ::OpenAPI::toJsonValue(m_user));
    }
    return obj;
}

QString OAIV0_0_39_assoc_short::getAccount() const {
    return m_account;
}
void OAIV0_0_39_assoc_short::setAccount(const QString &account) {
    m_account = account;
    m_account_isSet = true;
}

bool OAIV0_0_39_assoc_short::is_account_Set() const{
    return m_account_isSet;
}

bool OAIV0_0_39_assoc_short::is_account_Valid() const{
    return m_account_isValid;
}

QString OAIV0_0_39_assoc_short::getCluster() const {
    return m_cluster;
}
void OAIV0_0_39_assoc_short::setCluster(const QString &cluster) {
    m_cluster = cluster;
    m_cluster_isSet = true;
}

bool OAIV0_0_39_assoc_short::is_cluster_Set() const{
    return m_cluster_isSet;
}

bool OAIV0_0_39_assoc_short::is_cluster_Valid() const{
    return m_cluster_isValid;
}

QString OAIV0_0_39_assoc_short::getPartition() const {
    return m_partition;
}
void OAIV0_0_39_assoc_short::setPartition(const QString &partition) {
    m_partition = partition;
    m_partition_isSet = true;
}

bool OAIV0_0_39_assoc_short::is_partition_Set() const{
    return m_partition_isSet;
}

bool OAIV0_0_39_assoc_short::is_partition_Valid() const{
    return m_partition_isValid;
}

QString OAIV0_0_39_assoc_short::getUser() const {
    return m_user;
}
void OAIV0_0_39_assoc_short::setUser(const QString &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIV0_0_39_assoc_short::is_user_Set() const{
    return m_user_isSet;
}

bool OAIV0_0_39_assoc_short::is_user_Valid() const{
    return m_user_isValid;
}

bool OAIV0_0_39_assoc_short::isSet() const {
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

        if (m_partition_isSet) {
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

bool OAIV0_0_39_assoc_short::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_isValid && true;
}

} // namespace OpenAPI
