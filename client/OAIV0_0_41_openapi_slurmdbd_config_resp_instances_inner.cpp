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

#include "OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner() {
    this->initializeModel();
}

OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::~OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner() {}

void OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::initializeModel() {

    m_cluster_isSet = false;
    m_cluster_isValid = false;

    m_extra_isSet = false;
    m_extra_isValid = false;

    m_instance_id_isSet = false;
    m_instance_id_isValid = false;

    m_instance_type_isSet = false;
    m_instance_type_isValid = false;

    m_node_name_isSet = false;
    m_node_name_isValid = false;

    m_time_isSet = false;
    m_time_isValid = false;
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::fromJsonObject(QJsonObject json) {

    m_cluster_isValid = ::OpenAPI::fromJsonValue(m_cluster, json[QString("cluster")]);
    m_cluster_isSet = !json[QString("cluster")].isNull() && m_cluster_isValid;

    m_extra_isValid = ::OpenAPI::fromJsonValue(m_extra, json[QString("extra")]);
    m_extra_isSet = !json[QString("extra")].isNull() && m_extra_isValid;

    m_instance_id_isValid = ::OpenAPI::fromJsonValue(m_instance_id, json[QString("instance_id")]);
    m_instance_id_isSet = !json[QString("instance_id")].isNull() && m_instance_id_isValid;

    m_instance_type_isValid = ::OpenAPI::fromJsonValue(m_instance_type, json[QString("instance_type")]);
    m_instance_type_isSet = !json[QString("instance_type")].isNull() && m_instance_type_isValid;

    m_node_name_isValid = ::OpenAPI::fromJsonValue(m_node_name, json[QString("node_name")]);
    m_node_name_isSet = !json[QString("node_name")].isNull() && m_node_name_isValid;

    m_time_isValid = ::OpenAPI::fromJsonValue(m_time, json[QString("time")]);
    m_time_isSet = !json[QString("time")].isNull() && m_time_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_cluster_isSet) {
        obj.insert(QString("cluster"), ::OpenAPI::toJsonValue(m_cluster));
    }
    if (m_extra_isSet) {
        obj.insert(QString("extra"), ::OpenAPI::toJsonValue(m_extra));
    }
    if (m_instance_id_isSet) {
        obj.insert(QString("instance_id"), ::OpenAPI::toJsonValue(m_instance_id));
    }
    if (m_instance_type_isSet) {
        obj.insert(QString("instance_type"), ::OpenAPI::toJsonValue(m_instance_type));
    }
    if (m_node_name_isSet) {
        obj.insert(QString("node_name"), ::OpenAPI::toJsonValue(m_node_name));
    }
    if (m_time.isSet()) {
        obj.insert(QString("time"), ::OpenAPI::toJsonValue(m_time));
    }
    return obj;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::getCluster() const {
    return m_cluster;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::setCluster(const QString &cluster) {
    m_cluster = cluster;
    m_cluster_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::is_cluster_Set() const{
    return m_cluster_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::is_cluster_Valid() const{
    return m_cluster_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::getExtra() const {
    return m_extra;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::setExtra(const QString &extra) {
    m_extra = extra;
    m_extra_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::is_extra_Set() const{
    return m_extra_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::is_extra_Valid() const{
    return m_extra_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::getInstanceId() const {
    return m_instance_id;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::setInstanceId(const QString &instance_id) {
    m_instance_id = instance_id;
    m_instance_id_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::is_instance_id_Set() const{
    return m_instance_id_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::is_instance_id_Valid() const{
    return m_instance_id_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::getInstanceType() const {
    return m_instance_type;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::setInstanceType(const QString &instance_type) {
    m_instance_type = instance_type;
    m_instance_type_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::is_instance_type_Set() const{
    return m_instance_type_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::is_instance_type_Valid() const{
    return m_instance_type_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::getNodeName() const {
    return m_node_name;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::setNodeName(const QString &node_name) {
    m_node_name = node_name;
    m_node_name_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::is_node_name_Set() const{
    return m_node_name_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::is_node_name_Valid() const{
    return m_node_name_isValid;
}

OAIV0_0_40_instance_time OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::getTime() const {
    return m_time;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::setTime(const OAIV0_0_40_instance_time &time) {
    m_time = time;
    m_time_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::is_time_Set() const{
    return m_time_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::is_time_Valid() const{
    return m_time_isValid;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_cluster_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_extra_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_instance_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_instance_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_node_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_time.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI