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

#include "OAIV0_0_39_partition_info_priority.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_partition_info_priority::OAIV0_0_39_partition_info_priority(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_partition_info_priority::OAIV0_0_39_partition_info_priority() {
    this->initializeModel();
}

OAIV0_0_39_partition_info_priority::~OAIV0_0_39_partition_info_priority() {}

void OAIV0_0_39_partition_info_priority::initializeModel() {

    m_tier_isSet = false;
    m_tier_isValid = false;
}

void OAIV0_0_39_partition_info_priority::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_partition_info_priority::fromJsonObject(QJsonObject json) {

    m_tier_isValid = ::OpenAPI::fromJsonValue(m_tier, json[QString("tier")]);
    m_tier_isSet = !json[QString("tier")].isNull() && m_tier_isValid;
}

QString OAIV0_0_39_partition_info_priority::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_partition_info_priority::asJsonObject() const {
    QJsonObject obj;
    if (m_tier_isSet) {
        obj.insert(QString("tier"), ::OpenAPI::toJsonValue(m_tier));
    }
    return obj;
}

qint32 OAIV0_0_39_partition_info_priority::getTier() const {
    return m_tier;
}
void OAIV0_0_39_partition_info_priority::setTier(const qint32 &tier) {
    m_tier = tier;
    m_tier_isSet = true;
}

bool OAIV0_0_39_partition_info_priority::is_tier_Set() const{
    return m_tier_isSet;
}

bool OAIV0_0_39_partition_info_priority::is_tier_Valid() const{
    return m_tier_isValid;
}

bool OAIV0_0_39_partition_info_priority::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_tier_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_partition_info_priority::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
