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

#include "OAIV0_0_39_acct_gather_energy.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_acct_gather_energy::OAIV0_0_39_acct_gather_energy(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_acct_gather_energy::OAIV0_0_39_acct_gather_energy() {
    this->initializeModel();
}

OAIV0_0_39_acct_gather_energy::~OAIV0_0_39_acct_gather_energy() {}

void OAIV0_0_39_acct_gather_energy::initializeModel() {

    m_average_watts_isSet = false;
    m_average_watts_isValid = false;

    m_base_consumed_energy_isSet = false;
    m_base_consumed_energy_isValid = false;

    m_consumed_energy_isSet = false;
    m_consumed_energy_isValid = false;

    m_current_watts_isSet = false;
    m_current_watts_isValid = false;

    m_previous_consumed_energy_isSet = false;
    m_previous_consumed_energy_isValid = false;

    m_last_collected_isSet = false;
    m_last_collected_isValid = false;
}

void OAIV0_0_39_acct_gather_energy::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_acct_gather_energy::fromJsonObject(QJsonObject json) {

    m_average_watts_isValid = ::OpenAPI::fromJsonValue(m_average_watts, json[QString("average_watts")]);
    m_average_watts_isSet = !json[QString("average_watts")].isNull() && m_average_watts_isValid;

    m_base_consumed_energy_isValid = ::OpenAPI::fromJsonValue(m_base_consumed_energy, json[QString("base_consumed_energy")]);
    m_base_consumed_energy_isSet = !json[QString("base_consumed_energy")].isNull() && m_base_consumed_energy_isValid;

    m_consumed_energy_isValid = ::OpenAPI::fromJsonValue(m_consumed_energy, json[QString("consumed_energy")]);
    m_consumed_energy_isSet = !json[QString("consumed_energy")].isNull() && m_consumed_energy_isValid;

    m_current_watts_isValid = ::OpenAPI::fromJsonValue(m_current_watts, json[QString("current_watts")]);
    m_current_watts_isSet = !json[QString("current_watts")].isNull() && m_current_watts_isValid;

    m_previous_consumed_energy_isValid = ::OpenAPI::fromJsonValue(m_previous_consumed_energy, json[QString("previous_consumed_energy")]);
    m_previous_consumed_energy_isSet = !json[QString("previous_consumed_energy")].isNull() && m_previous_consumed_energy_isValid;

    m_last_collected_isValid = ::OpenAPI::fromJsonValue(m_last_collected, json[QString("last_collected")]);
    m_last_collected_isSet = !json[QString("last_collected")].isNull() && m_last_collected_isValid;
}

QString OAIV0_0_39_acct_gather_energy::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_acct_gather_energy::asJsonObject() const {
    QJsonObject obj;
    if (m_average_watts_isSet) {
        obj.insert(QString("average_watts"), ::OpenAPI::toJsonValue(m_average_watts));
    }
    if (m_base_consumed_energy_isSet) {
        obj.insert(QString("base_consumed_energy"), ::OpenAPI::toJsonValue(m_base_consumed_energy));
    }
    if (m_consumed_energy_isSet) {
        obj.insert(QString("consumed_energy"), ::OpenAPI::toJsonValue(m_consumed_energy));
    }
    if (m_current_watts.isSet()) {
        obj.insert(QString("current_watts"), ::OpenAPI::toJsonValue(m_current_watts));
    }
    if (m_previous_consumed_energy_isSet) {
        obj.insert(QString("previous_consumed_energy"), ::OpenAPI::toJsonValue(m_previous_consumed_energy));
    }
    if (m_last_collected_isSet) {
        obj.insert(QString("last_collected"), ::OpenAPI::toJsonValue(m_last_collected));
    }
    return obj;
}

qint32 OAIV0_0_39_acct_gather_energy::getAverageWatts() const {
    return m_average_watts;
}
void OAIV0_0_39_acct_gather_energy::setAverageWatts(const qint32 &average_watts) {
    m_average_watts = average_watts;
    m_average_watts_isSet = true;
}

bool OAIV0_0_39_acct_gather_energy::is_average_watts_Set() const{
    return m_average_watts_isSet;
}

bool OAIV0_0_39_acct_gather_energy::is_average_watts_Valid() const{
    return m_average_watts_isValid;
}

qint64 OAIV0_0_39_acct_gather_energy::getBaseConsumedEnergy() const {
    return m_base_consumed_energy;
}
void OAIV0_0_39_acct_gather_energy::setBaseConsumedEnergy(const qint64 &base_consumed_energy) {
    m_base_consumed_energy = base_consumed_energy;
    m_base_consumed_energy_isSet = true;
}

bool OAIV0_0_39_acct_gather_energy::is_base_consumed_energy_Set() const{
    return m_base_consumed_energy_isSet;
}

bool OAIV0_0_39_acct_gather_energy::is_base_consumed_energy_Valid() const{
    return m_base_consumed_energy_isValid;
}

qint64 OAIV0_0_39_acct_gather_energy::getConsumedEnergy() const {
    return m_consumed_energy;
}
void OAIV0_0_39_acct_gather_energy::setConsumedEnergy(const qint64 &consumed_energy) {
    m_consumed_energy = consumed_energy;
    m_consumed_energy_isSet = true;
}

bool OAIV0_0_39_acct_gather_energy::is_consumed_energy_Set() const{
    return m_consumed_energy_isSet;
}

bool OAIV0_0_39_acct_gather_energy::is_consumed_energy_Valid() const{
    return m_consumed_energy_isValid;
}

OAIV0_0_39_uint32_no_val OAIV0_0_39_acct_gather_energy::getCurrentWatts() const {
    return m_current_watts;
}
void OAIV0_0_39_acct_gather_energy::setCurrentWatts(const OAIV0_0_39_uint32_no_val &current_watts) {
    m_current_watts = current_watts;
    m_current_watts_isSet = true;
}

bool OAIV0_0_39_acct_gather_energy::is_current_watts_Set() const{
    return m_current_watts_isSet;
}

bool OAIV0_0_39_acct_gather_energy::is_current_watts_Valid() const{
    return m_current_watts_isValid;
}

qint64 OAIV0_0_39_acct_gather_energy::getPreviousConsumedEnergy() const {
    return m_previous_consumed_energy;
}
void OAIV0_0_39_acct_gather_energy::setPreviousConsumedEnergy(const qint64 &previous_consumed_energy) {
    m_previous_consumed_energy = previous_consumed_energy;
    m_previous_consumed_energy_isSet = true;
}

bool OAIV0_0_39_acct_gather_energy::is_previous_consumed_energy_Set() const{
    return m_previous_consumed_energy_isSet;
}

bool OAIV0_0_39_acct_gather_energy::is_previous_consumed_energy_Valid() const{
    return m_previous_consumed_energy_isValid;
}

qint64 OAIV0_0_39_acct_gather_energy::getLastCollected() const {
    return m_last_collected;
}
void OAIV0_0_39_acct_gather_energy::setLastCollected(const qint64 &last_collected) {
    m_last_collected = last_collected;
    m_last_collected_isSet = true;
}

bool OAIV0_0_39_acct_gather_energy::is_last_collected_Set() const{
    return m_last_collected_isSet;
}

bool OAIV0_0_39_acct_gather_energy::is_last_collected_Valid() const{
    return m_last_collected_isValid;
}

bool OAIV0_0_39_acct_gather_energy::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_average_watts_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_base_consumed_energy_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_consumed_energy_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_current_watts.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_previous_consumed_energy_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_collected_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_acct_gather_energy::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI