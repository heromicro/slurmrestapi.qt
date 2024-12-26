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

#include "OAIV0_0_39_reservation_info_purge_completed.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_reservation_info_purge_completed::OAIV0_0_39_reservation_info_purge_completed(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_reservation_info_purge_completed::OAIV0_0_39_reservation_info_purge_completed() {
    this->initializeModel();
}

OAIV0_0_39_reservation_info_purge_completed::~OAIV0_0_39_reservation_info_purge_completed() {}

void OAIV0_0_39_reservation_info_purge_completed::initializeModel() {

    m_time_isSet = false;
    m_time_isValid = false;
}

void OAIV0_0_39_reservation_info_purge_completed::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_reservation_info_purge_completed::fromJsonObject(QJsonObject json) {

    m_time_isValid = ::OpenAPI::fromJsonValue(m_time, json[QString("time")]);
    m_time_isSet = !json[QString("time")].isNull() && m_time_isValid;
}

QString OAIV0_0_39_reservation_info_purge_completed::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_reservation_info_purge_completed::asJsonObject() const {
    QJsonObject obj;
    if (m_time.isSet()) {
        obj.insert(QString("time"), ::OpenAPI::toJsonValue(m_time));
    }
    return obj;
}

OAIV0_0_39_uint32_no_val OAIV0_0_39_reservation_info_purge_completed::getTime() const {
    return m_time;
}
void OAIV0_0_39_reservation_info_purge_completed::setTime(const OAIV0_0_39_uint32_no_val &time) {
    m_time = time;
    m_time_isSet = true;
}

bool OAIV0_0_39_reservation_info_purge_completed::is_time_Set() const{
    return m_time_isSet;
}

bool OAIV0_0_39_reservation_info_purge_completed::is_time_Valid() const{
    return m_time_isValid;
}

bool OAIV0_0_39_reservation_info_purge_completed::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_time.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_reservation_info_purge_completed::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
