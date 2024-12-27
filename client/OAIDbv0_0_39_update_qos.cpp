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

#include "OAIDbv0_0_39_update_qos.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIDbv0_0_39_update_qos::OAIDbv0_0_39_update_qos(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDbv0_0_39_update_qos::OAIDbv0_0_39_update_qos() {
    this->initializeModel();
}

OAIDbv0_0_39_update_qos::~OAIDbv0_0_39_update_qos() {}

void OAIDbv0_0_39_update_qos::initializeModel() {

    m_qos_isSet = false;
    m_qos_isValid = false;
}

void OAIDbv0_0_39_update_qos::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDbv0_0_39_update_qos::fromJsonObject(QJsonObject json) {

    m_qos_isValid = ::hm:slurm:client::fromJsonValue(m_qos, json[QString("qos")]);
    m_qos_isSet = !json[QString("qos")].isNull() && m_qos_isValid;
}

QString OAIDbv0_0_39_update_qos::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDbv0_0_39_update_qos::asJsonObject() const {
    QJsonObject obj;
    if (m_qos.size() > 0) {
        obj.insert(QString("qos"), ::hm:slurm:client::toJsonValue(m_qos));
    }
    return obj;
}

QList<OAIV0_0_39_qos> OAIDbv0_0_39_update_qos::getQos() const {
    return m_qos;
}
void OAIDbv0_0_39_update_qos::setQos(const QList<OAIV0_0_39_qos> &qos) {
    m_qos = qos;
    m_qos_isSet = true;
}

bool OAIDbv0_0_39_update_qos::is_qos_Set() const{
    return m_qos_isSet;
}

bool OAIDbv0_0_39_update_qos::is_qos_Valid() const{
    return m_qos_isValid;
}

bool OAIDbv0_0_39_update_qos::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_qos.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDbv0_0_39_update_qos::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
