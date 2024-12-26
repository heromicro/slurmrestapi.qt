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

#include "OAIV0_0_39_step_statistics.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_step_statistics::OAIV0_0_39_step_statistics(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_step_statistics::OAIV0_0_39_step_statistics() {
    this->initializeModel();
}

OAIV0_0_39_step_statistics::~OAIV0_0_39_step_statistics() {}

void OAIV0_0_39_step_statistics::initializeModel() {

    m_cpu_isSet = false;
    m_cpu_isValid = false;

    m_energy_isSet = false;
    m_energy_isValid = false;
}

void OAIV0_0_39_step_statistics::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_step_statistics::fromJsonObject(QJsonObject json) {

    m_cpu_isValid = ::OpenAPI::fromJsonValue(m_cpu, json[QString("CPU")]);
    m_cpu_isSet = !json[QString("CPU")].isNull() && m_cpu_isValid;

    m_energy_isValid = ::OpenAPI::fromJsonValue(m_energy, json[QString("energy")]);
    m_energy_isSet = !json[QString("energy")].isNull() && m_energy_isValid;
}

QString OAIV0_0_39_step_statistics::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_step_statistics::asJsonObject() const {
    QJsonObject obj;
    if (m_cpu.isSet()) {
        obj.insert(QString("CPU"), ::OpenAPI::toJsonValue(m_cpu));
    }
    if (m_energy.isSet()) {
        obj.insert(QString("energy"), ::OpenAPI::toJsonValue(m_energy));
    }
    return obj;
}

OAIV0_0_39_step_statistics_CPU OAIV0_0_39_step_statistics::getCpu() const {
    return m_cpu;
}
void OAIV0_0_39_step_statistics::setCpu(const OAIV0_0_39_step_statistics_CPU &cpu) {
    m_cpu = cpu;
    m_cpu_isSet = true;
}

bool OAIV0_0_39_step_statistics::is_cpu_Set() const{
    return m_cpu_isSet;
}

bool OAIV0_0_39_step_statistics::is_cpu_Valid() const{
    return m_cpu_isValid;
}

OAIV0_0_39_step_statistics_energy OAIV0_0_39_step_statistics::getEnergy() const {
    return m_energy;
}
void OAIV0_0_39_step_statistics::setEnergy(const OAIV0_0_39_step_statistics_energy &energy) {
    m_energy = energy;
    m_energy_isSet = true;
}

bool OAIV0_0_39_step_statistics::is_energy_Set() const{
    return m_energy_isSet;
}

bool OAIV0_0_39_step_statistics::is_energy_Valid() const{
    return m_energy_isValid;
}

bool OAIV0_0_39_step_statistics::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_cpu.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_energy.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_step_statistics::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI