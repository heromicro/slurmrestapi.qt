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

#include "OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node() {
    this->initializeModel();
}

OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::~OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node() {}

void OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::initializeModel() {

    m_r_set_isSet = false;
    m_r_set_isValid = false;

    m_infinite_isSet = false;
    m_infinite_isValid = false;

    m_number_isSet = false;
    m_number_isValid = false;
}

void OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::fromJsonObject(QJsonObject json) {

    m_r_set_isValid = ::hm:slurm:client::fromJsonValue(m_r_set, json[QString("set")]);
    m_r_set_isSet = !json[QString("set")].isNull() && m_r_set_isValid;

    m_infinite_isValid = ::hm:slurm:client::fromJsonValue(m_infinite, json[QString("infinite")]);
    m_infinite_isSet = !json[QString("infinite")].isNull() && m_infinite_isValid;

    m_number_isValid = ::hm:slurm:client::fromJsonValue(m_number, json[QString("number")]);
    m_number_isSet = !json[QString("number")].isNull() && m_number_isValid;
}

QString OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::asJsonObject() const {
    QJsonObject obj;
    if (m_r_set_isSet) {
        obj.insert(QString("set"), ::hm:slurm:client::toJsonValue(m_r_set));
    }
    if (m_infinite_isSet) {
        obj.insert(QString("infinite"), ::hm:slurm:client::toJsonValue(m_infinite));
    }
    if (m_number_isSet) {
        obj.insert(QString("number"), ::hm:slurm:client::toJsonValue(m_number));
    }
    return obj;
}

bool OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::isRSet() const {
    return m_r_set;
}
void OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::setRSet(const bool &r_set) {
    m_r_set = r_set;
    m_r_set_isSet = true;
}

bool OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::is_r_set_Set() const{
    return m_r_set_isSet;
}

bool OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::is_r_set_Valid() const{
    return m_r_set_isValid;
}

bool OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::isInfinite() const {
    return m_infinite;
}
void OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::setInfinite(const bool &infinite) {
    m_infinite = infinite;
    m_infinite_isSet = true;
}

bool OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::is_infinite_Set() const{
    return m_infinite_isSet;
}

bool OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::is_infinite_Valid() const{
    return m_infinite_isValid;
}

qint64 OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::getNumber() const {
    return m_number;
}
void OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::setNumber(const qint64 &number) {
    m_number = number;
    m_number_isSet = true;
}

bool OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::is_number_Set() const{
    return m_number_isSet;
}

bool OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::is_number_Valid() const{
    return m_number_isValid;
}

bool OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_r_set_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_infinite_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_number_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_partition_resp_partitions_inner_maximums_partition_memory_per_node::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
