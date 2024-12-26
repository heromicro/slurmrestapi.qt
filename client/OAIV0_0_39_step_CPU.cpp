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

#include "OAIV0_0_39_step_CPU.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_step_CPU::OAIV0_0_39_step_CPU(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_step_CPU::OAIV0_0_39_step_CPU() {
    this->initializeModel();
}

OAIV0_0_39_step_CPU::~OAIV0_0_39_step_CPU() {}

void OAIV0_0_39_step_CPU::initializeModel() {

    m_governor_isSet = false;
    m_governor_isValid = false;
}

void OAIV0_0_39_step_CPU::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_step_CPU::fromJsonObject(QJsonObject json) {

    m_governor_isValid = ::OpenAPI::fromJsonValue(m_governor, json[QString("governor")]);
    m_governor_isSet = !json[QString("governor")].isNull() && m_governor_isValid;
}

QString OAIV0_0_39_step_CPU::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_step_CPU::asJsonObject() const {
    QJsonObject obj;
    if (m_governor_isSet) {
        obj.insert(QString("governor"), ::OpenAPI::toJsonValue(m_governor));
    }
    return obj;
}

QString OAIV0_0_39_step_CPU::getGovernor() const {
    return m_governor;
}
void OAIV0_0_39_step_CPU::setGovernor(const QString &governor) {
    m_governor = governor;
    m_governor_isSet = true;
}

bool OAIV0_0_39_step_CPU::is_governor_Set() const{
    return m_governor_isSet;
}

bool OAIV0_0_39_step_CPU::is_governor_Valid() const{
    return m_governor_isValid;
}

bool OAIV0_0_39_step_CPU::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_governor_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_step_CPU::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
