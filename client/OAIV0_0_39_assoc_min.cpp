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

#include "OAIV0_0_39_assoc_min.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_assoc_min::OAIV0_0_39_assoc_min(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_assoc_min::OAIV0_0_39_assoc_min() {
    this->initializeModel();
}

OAIV0_0_39_assoc_min::~OAIV0_0_39_assoc_min() {}

void OAIV0_0_39_assoc_min::initializeModel() {

    m_priority_threshold_isSet = false;
    m_priority_threshold_isValid = false;
}

void OAIV0_0_39_assoc_min::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_assoc_min::fromJsonObject(QJsonObject json) {

    m_priority_threshold_isValid = ::OpenAPI::fromJsonValue(m_priority_threshold, json[QString("priority_threshold")]);
    m_priority_threshold_isSet = !json[QString("priority_threshold")].isNull() && m_priority_threshold_isValid;
}

QString OAIV0_0_39_assoc_min::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_assoc_min::asJsonObject() const {
    QJsonObject obj;
    if (m_priority_threshold.isSet()) {
        obj.insert(QString("priority_threshold"), ::OpenAPI::toJsonValue(m_priority_threshold));
    }
    return obj;
}

OAIV0_0_39_uint32_no_val OAIV0_0_39_assoc_min::getPriorityThreshold() const {
    return m_priority_threshold;
}
void OAIV0_0_39_assoc_min::setPriorityThreshold(const OAIV0_0_39_uint32_no_val &priority_threshold) {
    m_priority_threshold = priority_threshold;
    m_priority_threshold_isSet = true;
}

bool OAIV0_0_39_assoc_min::is_priority_threshold_Set() const{
    return m_priority_threshold_isSet;
}

bool OAIV0_0_39_assoc_min::is_priority_threshold_Valid() const{
    return m_priority_threshold_isValid;
}

bool OAIV0_0_39_assoc_min::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_priority_threshold.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_assoc_min::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
