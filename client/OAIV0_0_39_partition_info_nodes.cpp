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

#include "OAIV0_0_39_partition_info_nodes.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_partition_info_nodes::OAIV0_0_39_partition_info_nodes(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_partition_info_nodes::OAIV0_0_39_partition_info_nodes() {
    this->initializeModel();
}

OAIV0_0_39_partition_info_nodes::~OAIV0_0_39_partition_info_nodes() {}

void OAIV0_0_39_partition_info_nodes::initializeModel() {

    m_total_isSet = false;
    m_total_isValid = false;
}

void OAIV0_0_39_partition_info_nodes::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_partition_info_nodes::fromJsonObject(QJsonObject json) {

    m_total_isValid = ::OpenAPI::fromJsonValue(m_total, json[QString("total")]);
    m_total_isSet = !json[QString("total")].isNull() && m_total_isValid;
}

QString OAIV0_0_39_partition_info_nodes::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_partition_info_nodes::asJsonObject() const {
    QJsonObject obj;
    if (m_total_isSet) {
        obj.insert(QString("total"), ::OpenAPI::toJsonValue(m_total));
    }
    return obj;
}

qint32 OAIV0_0_39_partition_info_nodes::getTotal() const {
    return m_total;
}
void OAIV0_0_39_partition_info_nodes::setTotal(const qint32 &total) {
    m_total = total;
    m_total_isSet = true;
}

bool OAIV0_0_39_partition_info_nodes::is_total_Set() const{
    return m_total_isSet;
}

bool OAIV0_0_39_partition_info_nodes::is_total_Valid() const{
    return m_total_isValid;
}

bool OAIV0_0_39_partition_info_nodes::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_total_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_partition_info_nodes::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
