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

#include "OAIV0_0_40_partition_info_minimums.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_40_partition_info_minimums::OAIV0_0_40_partition_info_minimums(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_partition_info_minimums::OAIV0_0_40_partition_info_minimums() {
    this->initializeModel();
}

OAIV0_0_40_partition_info_minimums::~OAIV0_0_40_partition_info_minimums() {}

void OAIV0_0_40_partition_info_minimums::initializeModel() {

    m_nodes_isSet = false;
    m_nodes_isValid = false;
}

void OAIV0_0_40_partition_info_minimums::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_partition_info_minimums::fromJsonObject(QJsonObject json) {

    m_nodes_isValid = ::OpenAPI::fromJsonValue(m_nodes, json[QString("nodes")]);
    m_nodes_isSet = !json[QString("nodes")].isNull() && m_nodes_isValid;
}

QString OAIV0_0_40_partition_info_minimums::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_partition_info_minimums::asJsonObject() const {
    QJsonObject obj;
    if (m_nodes_isSet) {
        obj.insert(QString("nodes"), ::OpenAPI::toJsonValue(m_nodes));
    }
    return obj;
}

qint32 OAIV0_0_40_partition_info_minimums::getNodes() const {
    return m_nodes;
}
void OAIV0_0_40_partition_info_minimums::setNodes(const qint32 &nodes) {
    m_nodes = nodes;
    m_nodes_isSet = true;
}

bool OAIV0_0_40_partition_info_minimums::is_nodes_Set() const{
    return m_nodes_isSet;
}

bool OAIV0_0_40_partition_info_minimums::is_nodes_Valid() const{
    return m_nodes_isValid;
}

bool OAIV0_0_40_partition_info_minimums::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_nodes_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_partition_info_minimums::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
