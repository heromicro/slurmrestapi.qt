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

#include "OAIV0_0_40_assoc_max_tres_group.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_40_assoc_max_tres_group::OAIV0_0_40_assoc_max_tres_group(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_assoc_max_tres_group::OAIV0_0_40_assoc_max_tres_group() {
    this->initializeModel();
}

OAIV0_0_40_assoc_max_tres_group::~OAIV0_0_40_assoc_max_tres_group() {}

void OAIV0_0_40_assoc_max_tres_group::initializeModel() {

    m_minutes_isSet = false;
    m_minutes_isValid = false;

    m_active_isSet = false;
    m_active_isValid = false;
}

void OAIV0_0_40_assoc_max_tres_group::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_assoc_max_tres_group::fromJsonObject(QJsonObject json) {

    m_minutes_isValid = ::hm:slurm:client::fromJsonValue(m_minutes, json[QString("minutes")]);
    m_minutes_isSet = !json[QString("minutes")].isNull() && m_minutes_isValid;

    m_active_isValid = ::hm:slurm:client::fromJsonValue(m_active, json[QString("active")]);
    m_active_isSet = !json[QString("active")].isNull() && m_active_isValid;
}

QString OAIV0_0_40_assoc_max_tres_group::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_assoc_max_tres_group::asJsonObject() const {
    QJsonObject obj;
    if (m_minutes.size() > 0) {
        obj.insert(QString("minutes"), ::hm:slurm:client::toJsonValue(m_minutes));
    }
    if (m_active.size() > 0) {
        obj.insert(QString("active"), ::hm:slurm:client::toJsonValue(m_active));
    }
    return obj;
}

QList<OAIV0_0_40_tres> OAIV0_0_40_assoc_max_tres_group::getMinutes() const {
    return m_minutes;
}
void OAIV0_0_40_assoc_max_tres_group::setMinutes(const QList<OAIV0_0_40_tres> &minutes) {
    m_minutes = minutes;
    m_minutes_isSet = true;
}

bool OAIV0_0_40_assoc_max_tres_group::is_minutes_Set() const{
    return m_minutes_isSet;
}

bool OAIV0_0_40_assoc_max_tres_group::is_minutes_Valid() const{
    return m_minutes_isValid;
}

QList<OAIV0_0_40_tres> OAIV0_0_40_assoc_max_tres_group::getActive() const {
    return m_active;
}
void OAIV0_0_40_assoc_max_tres_group::setActive(const QList<OAIV0_0_40_tres> &active) {
    m_active = active;
    m_active_isSet = true;
}

bool OAIV0_0_40_assoc_max_tres_group::is_active_Set() const{
    return m_active_isSet;
}

bool OAIV0_0_40_assoc_max_tres_group::is_active_Valid() const{
    return m_active_isValid;
}

bool OAIV0_0_40_assoc_max_tres_group::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_minutes.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_active.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_assoc_max_tres_group::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
