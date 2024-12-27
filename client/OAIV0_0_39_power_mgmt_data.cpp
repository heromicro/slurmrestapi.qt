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

#include "OAIV0_0_39_power_mgmt_data.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_power_mgmt_data::OAIV0_0_39_power_mgmt_data(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_power_mgmt_data::OAIV0_0_39_power_mgmt_data() {
    this->initializeModel();
}

OAIV0_0_39_power_mgmt_data::~OAIV0_0_39_power_mgmt_data() {}

void OAIV0_0_39_power_mgmt_data::initializeModel() {

    m_maximum_watts_isSet = false;
    m_maximum_watts_isValid = false;

    m_current_watts_isSet = false;
    m_current_watts_isValid = false;

    m_total_energy_isSet = false;
    m_total_energy_isValid = false;

    m_new_maximum_watts_isSet = false;
    m_new_maximum_watts_isValid = false;

    m_peak_watts_isSet = false;
    m_peak_watts_isValid = false;

    m_lowest_watts_isSet = false;
    m_lowest_watts_isValid = false;

    m_new_job_time_isSet = false;
    m_new_job_time_isValid = false;

    m_state_isSet = false;
    m_state_isValid = false;

    m_time_start_day_isSet = false;
    m_time_start_day_isValid = false;
}

void OAIV0_0_39_power_mgmt_data::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_power_mgmt_data::fromJsonObject(QJsonObject json) {

    m_maximum_watts_isValid = ::OpenAPI::fromJsonValue(m_maximum_watts, json[QString("maximum_watts")]);
    m_maximum_watts_isSet = !json[QString("maximum_watts")].isNull() && m_maximum_watts_isValid;

    m_current_watts_isValid = ::OpenAPI::fromJsonValue(m_current_watts, json[QString("current_watts")]);
    m_current_watts_isSet = !json[QString("current_watts")].isNull() && m_current_watts_isValid;

    m_total_energy_isValid = ::OpenAPI::fromJsonValue(m_total_energy, json[QString("total_energy")]);
    m_total_energy_isSet = !json[QString("total_energy")].isNull() && m_total_energy_isValid;

    m_new_maximum_watts_isValid = ::OpenAPI::fromJsonValue(m_new_maximum_watts, json[QString("new_maximum_watts")]);
    m_new_maximum_watts_isSet = !json[QString("new_maximum_watts")].isNull() && m_new_maximum_watts_isValid;

    m_peak_watts_isValid = ::OpenAPI::fromJsonValue(m_peak_watts, json[QString("peak_watts")]);
    m_peak_watts_isSet = !json[QString("peak_watts")].isNull() && m_peak_watts_isValid;

    m_lowest_watts_isValid = ::OpenAPI::fromJsonValue(m_lowest_watts, json[QString("lowest_watts")]);
    m_lowest_watts_isSet = !json[QString("lowest_watts")].isNull() && m_lowest_watts_isValid;

    m_new_job_time_isValid = ::OpenAPI::fromJsonValue(m_new_job_time, json[QString("new_job_time")]);
    m_new_job_time_isSet = !json[QString("new_job_time")].isNull() && m_new_job_time_isValid;

    m_state_isValid = ::OpenAPI::fromJsonValue(m_state, json[QString("state")]);
    m_state_isSet = !json[QString("state")].isNull() && m_state_isValid;

    m_time_start_day_isValid = ::OpenAPI::fromJsonValue(m_time_start_day, json[QString("time_start_day")]);
    m_time_start_day_isSet = !json[QString("time_start_day")].isNull() && m_time_start_day_isValid;
}

QString OAIV0_0_39_power_mgmt_data::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_power_mgmt_data::asJsonObject() const {
    QJsonObject obj;
    if (m_maximum_watts.isSet()) {
        obj.insert(QString("maximum_watts"), ::OpenAPI::toJsonValue(m_maximum_watts));
    }
    if (m_current_watts_isSet) {
        obj.insert(QString("current_watts"), ::OpenAPI::toJsonValue(m_current_watts));
    }
    if (m_total_energy_isSet) {
        obj.insert(QString("total_energy"), ::OpenAPI::toJsonValue(m_total_energy));
    }
    if (m_new_maximum_watts_isSet) {
        obj.insert(QString("new_maximum_watts"), ::OpenAPI::toJsonValue(m_new_maximum_watts));
    }
    if (m_peak_watts_isSet) {
        obj.insert(QString("peak_watts"), ::OpenAPI::toJsonValue(m_peak_watts));
    }
    if (m_lowest_watts_isSet) {
        obj.insert(QString("lowest_watts"), ::OpenAPI::toJsonValue(m_lowest_watts));
    }
    if (m_new_job_time_isSet) {
        obj.insert(QString("new_job_time"), ::OpenAPI::toJsonValue(m_new_job_time));
    }
    if (m_state_isSet) {
        obj.insert(QString("state"), ::OpenAPI::toJsonValue(m_state));
    }
    if (m_time_start_day_isSet) {
        obj.insert(QString("time_start_day"), ::OpenAPI::toJsonValue(m_time_start_day));
    }
    return obj;
}

OAIV0_0_39_uint32_no_val OAIV0_0_39_power_mgmt_data::getMaximumWatts() const {
    return m_maximum_watts;
}
void OAIV0_0_39_power_mgmt_data::setMaximumWatts(const OAIV0_0_39_uint32_no_val &maximum_watts) {
    m_maximum_watts = maximum_watts;
    m_maximum_watts_isSet = true;
}

bool OAIV0_0_39_power_mgmt_data::is_maximum_watts_Set() const{
    return m_maximum_watts_isSet;
}

bool OAIV0_0_39_power_mgmt_data::is_maximum_watts_Valid() const{
    return m_maximum_watts_isValid;
}

qint32 OAIV0_0_39_power_mgmt_data::getCurrentWatts() const {
    return m_current_watts;
}
void OAIV0_0_39_power_mgmt_data::setCurrentWatts(const qint32 &current_watts) {
    m_current_watts = current_watts;
    m_current_watts_isSet = true;
}

bool OAIV0_0_39_power_mgmt_data::is_current_watts_Set() const{
    return m_current_watts_isSet;
}

bool OAIV0_0_39_power_mgmt_data::is_current_watts_Valid() const{
    return m_current_watts_isValid;
}

qint64 OAIV0_0_39_power_mgmt_data::getTotalEnergy() const {
    return m_total_energy;
}
void OAIV0_0_39_power_mgmt_data::setTotalEnergy(const qint64 &total_energy) {
    m_total_energy = total_energy;
    m_total_energy_isSet = true;
}

bool OAIV0_0_39_power_mgmt_data::is_total_energy_Set() const{
    return m_total_energy_isSet;
}

bool OAIV0_0_39_power_mgmt_data::is_total_energy_Valid() const{
    return m_total_energy_isValid;
}

qint32 OAIV0_0_39_power_mgmt_data::getNewMaximumWatts() const {
    return m_new_maximum_watts;
}
void OAIV0_0_39_power_mgmt_data::setNewMaximumWatts(const qint32 &new_maximum_watts) {
    m_new_maximum_watts = new_maximum_watts;
    m_new_maximum_watts_isSet = true;
}

bool OAIV0_0_39_power_mgmt_data::is_new_maximum_watts_Set() const{
    return m_new_maximum_watts_isSet;
}

bool OAIV0_0_39_power_mgmt_data::is_new_maximum_watts_Valid() const{
    return m_new_maximum_watts_isValid;
}

qint32 OAIV0_0_39_power_mgmt_data::getPeakWatts() const {
    return m_peak_watts;
}
void OAIV0_0_39_power_mgmt_data::setPeakWatts(const qint32 &peak_watts) {
    m_peak_watts = peak_watts;
    m_peak_watts_isSet = true;
}

bool OAIV0_0_39_power_mgmt_data::is_peak_watts_Set() const{
    return m_peak_watts_isSet;
}

bool OAIV0_0_39_power_mgmt_data::is_peak_watts_Valid() const{
    return m_peak_watts_isValid;
}

qint32 OAIV0_0_39_power_mgmt_data::getLowestWatts() const {
    return m_lowest_watts;
}
void OAIV0_0_39_power_mgmt_data::setLowestWatts(const qint32 &lowest_watts) {
    m_lowest_watts = lowest_watts;
    m_lowest_watts_isSet = true;
}

bool OAIV0_0_39_power_mgmt_data::is_lowest_watts_Set() const{
    return m_lowest_watts_isSet;
}

bool OAIV0_0_39_power_mgmt_data::is_lowest_watts_Valid() const{
    return m_lowest_watts_isValid;
}

qint64 OAIV0_0_39_power_mgmt_data::getNewJobTime() const {
    return m_new_job_time;
}
void OAIV0_0_39_power_mgmt_data::setNewJobTime(const qint64 &new_job_time) {
    m_new_job_time = new_job_time;
    m_new_job_time_isSet = true;
}

bool OAIV0_0_39_power_mgmt_data::is_new_job_time_Set() const{
    return m_new_job_time_isSet;
}

bool OAIV0_0_39_power_mgmt_data::is_new_job_time_Valid() const{
    return m_new_job_time_isValid;
}

qint32 OAIV0_0_39_power_mgmt_data::getState() const {
    return m_state;
}
void OAIV0_0_39_power_mgmt_data::setState(const qint32 &state) {
    m_state = state;
    m_state_isSet = true;
}

bool OAIV0_0_39_power_mgmt_data::is_state_Set() const{
    return m_state_isSet;
}

bool OAIV0_0_39_power_mgmt_data::is_state_Valid() const{
    return m_state_isValid;
}

qint64 OAIV0_0_39_power_mgmt_data::getTimeStartDay() const {
    return m_time_start_day;
}
void OAIV0_0_39_power_mgmt_data::setTimeStartDay(const qint64 &time_start_day) {
    m_time_start_day = time_start_day;
    m_time_start_day_isSet = true;
}

bool OAIV0_0_39_power_mgmt_data::is_time_start_day_Set() const{
    return m_time_start_day_isSet;
}

bool OAIV0_0_39_power_mgmt_data::is_time_start_day_Valid() const{
    return m_time_start_day_isValid;
}

bool OAIV0_0_39_power_mgmt_data::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_maximum_watts.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_current_watts_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_energy_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_new_maximum_watts_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_peak_watts_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_lowest_watts_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_new_job_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_state_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_time_start_day_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_power_mgmt_data::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI