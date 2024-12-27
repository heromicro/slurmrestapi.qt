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

#include "OAIV0_0_39_assoc_default.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_39_assoc_default::OAIV0_0_39_assoc_default(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_assoc_default::OAIV0_0_39_assoc_default() {
    this->initializeModel();
}

OAIV0_0_39_assoc_default::~OAIV0_0_39_assoc_default() {}

void OAIV0_0_39_assoc_default::initializeModel() {

    m_qos_isSet = false;
    m_qos_isValid = false;
}

void OAIV0_0_39_assoc_default::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_assoc_default::fromJsonObject(QJsonObject json) {

    m_qos_isValid = ::hm:slurm:client::fromJsonValue(m_qos, json[QString("qos")]);
    m_qos_isSet = !json[QString("qos")].isNull() && m_qos_isValid;
}

QString OAIV0_0_39_assoc_default::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_assoc_default::asJsonObject() const {
    QJsonObject obj;
    if (m_qos_isSet) {
        obj.insert(QString("qos"), ::hm:slurm:client::toJsonValue(m_qos));
    }
    return obj;
}

QString OAIV0_0_39_assoc_default::getQos() const {
    return m_qos;
}
void OAIV0_0_39_assoc_default::setQos(const QString &qos) {
    m_qos = qos;
    m_qos_isSet = true;
}

bool OAIV0_0_39_assoc_default::is_qos_Set() const{
    return m_qos_isSet;
}

bool OAIV0_0_39_assoc_default::is_qos_Valid() const{
    return m_qos_isValid;
}

bool OAIV0_0_39_assoc_default::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_qos_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_assoc_default::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client