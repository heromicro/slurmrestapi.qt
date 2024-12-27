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

#include "OAIV0_0_39_partition_info_qos.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_39_partition_info_qos::OAIV0_0_39_partition_info_qos(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_partition_info_qos::OAIV0_0_39_partition_info_qos() {
    this->initializeModel();
}

OAIV0_0_39_partition_info_qos::~OAIV0_0_39_partition_info_qos() {}

void OAIV0_0_39_partition_info_qos::initializeModel() {

    m_allowed_isSet = false;
    m_allowed_isValid = false;

    m_deny_isSet = false;
    m_deny_isValid = false;

    m_assigned_isSet = false;
    m_assigned_isValid = false;
}

void OAIV0_0_39_partition_info_qos::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_partition_info_qos::fromJsonObject(QJsonObject json) {

    m_allowed_isValid = ::hm:slurm:client::fromJsonValue(m_allowed, json[QString("allowed")]);
    m_allowed_isSet = !json[QString("allowed")].isNull() && m_allowed_isValid;

    m_deny_isValid = ::hm:slurm:client::fromJsonValue(m_deny, json[QString("deny")]);
    m_deny_isSet = !json[QString("deny")].isNull() && m_deny_isValid;

    m_assigned_isValid = ::hm:slurm:client::fromJsonValue(m_assigned, json[QString("assigned")]);
    m_assigned_isSet = !json[QString("assigned")].isNull() && m_assigned_isValid;
}

QString OAIV0_0_39_partition_info_qos::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_partition_info_qos::asJsonObject() const {
    QJsonObject obj;
    if (m_allowed_isSet) {
        obj.insert(QString("allowed"), ::hm:slurm:client::toJsonValue(m_allowed));
    }
    if (m_deny_isSet) {
        obj.insert(QString("deny"), ::hm:slurm:client::toJsonValue(m_deny));
    }
    if (m_assigned_isSet) {
        obj.insert(QString("assigned"), ::hm:slurm:client::toJsonValue(m_assigned));
    }
    return obj;
}

QString OAIV0_0_39_partition_info_qos::getAllowed() const {
    return m_allowed;
}
void OAIV0_0_39_partition_info_qos::setAllowed(const QString &allowed) {
    m_allowed = allowed;
    m_allowed_isSet = true;
}

bool OAIV0_0_39_partition_info_qos::is_allowed_Set() const{
    return m_allowed_isSet;
}

bool OAIV0_0_39_partition_info_qos::is_allowed_Valid() const{
    return m_allowed_isValid;
}

QString OAIV0_0_39_partition_info_qos::getDeny() const {
    return m_deny;
}
void OAIV0_0_39_partition_info_qos::setDeny(const QString &deny) {
    m_deny = deny;
    m_deny_isSet = true;
}

bool OAIV0_0_39_partition_info_qos::is_deny_Set() const{
    return m_deny_isSet;
}

bool OAIV0_0_39_partition_info_qos::is_deny_Valid() const{
    return m_deny_isValid;
}

QString OAIV0_0_39_partition_info_qos::getAssigned() const {
    return m_assigned;
}
void OAIV0_0_39_partition_info_qos::setAssigned(const QString &assigned) {
    m_assigned = assigned;
    m_assigned_isSet = true;
}

bool OAIV0_0_39_partition_info_qos::is_assigned_Set() const{
    return m_assigned_isSet;
}

bool OAIV0_0_39_partition_info_qos::is_assigned_Valid() const{
    return m_assigned_isValid;
}

bool OAIV0_0_39_partition_info_qos::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_allowed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_deny_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_assigned_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_partition_info_qos::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
