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

#include "OAIV0_0_39_accounting_allocated.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_39_accounting_allocated::OAIV0_0_39_accounting_allocated(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_accounting_allocated::OAIV0_0_39_accounting_allocated() {
    this->initializeModel();
}

OAIV0_0_39_accounting_allocated::~OAIV0_0_39_accounting_allocated() {}

void OAIV0_0_39_accounting_allocated::initializeModel() {

    m_seconds_isSet = false;
    m_seconds_isValid = false;
}

void OAIV0_0_39_accounting_allocated::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_accounting_allocated::fromJsonObject(QJsonObject json) {

    m_seconds_isValid = ::hm:slurm:client::fromJsonValue(m_seconds, json[QString("seconds")]);
    m_seconds_isSet = !json[QString("seconds")].isNull() && m_seconds_isValid;
}

QString OAIV0_0_39_accounting_allocated::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_accounting_allocated::asJsonObject() const {
    QJsonObject obj;
    if (m_seconds_isSet) {
        obj.insert(QString("seconds"), ::hm:slurm:client::toJsonValue(m_seconds));
    }
    return obj;
}

qint64 OAIV0_0_39_accounting_allocated::getSeconds() const {
    return m_seconds;
}
void OAIV0_0_39_accounting_allocated::setSeconds(const qint64 &seconds) {
    m_seconds = seconds;
    m_seconds_isSet = true;
}

bool OAIV0_0_39_accounting_allocated::is_seconds_Set() const{
    return m_seconds_isSet;
}

bool OAIV0_0_39_accounting_allocated::is_seconds_Valid() const{
    return m_seconds_isValid;
}

bool OAIV0_0_39_accounting_allocated::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_seconds_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_accounting_allocated::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
