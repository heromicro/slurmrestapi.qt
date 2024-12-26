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

#include "OAIV0_0_40_assoc_max_tres_minutes.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_40_assoc_max_tres_minutes::OAIV0_0_40_assoc_max_tres_minutes(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_assoc_max_tres_minutes::OAIV0_0_40_assoc_max_tres_minutes() {
    this->initializeModel();
}

OAIV0_0_40_assoc_max_tres_minutes::~OAIV0_0_40_assoc_max_tres_minutes() {}

void OAIV0_0_40_assoc_max_tres_minutes::initializeModel() {

    m_total_isSet = false;
    m_total_isValid = false;

    m_per_isSet = false;
    m_per_isValid = false;
}

void OAIV0_0_40_assoc_max_tres_minutes::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_assoc_max_tres_minutes::fromJsonObject(QJsonObject json) {

    m_total_isValid = ::OpenAPI::fromJsonValue(m_total, json[QString("total")]);
    m_total_isSet = !json[QString("total")].isNull() && m_total_isValid;

    m_per_isValid = ::OpenAPI::fromJsonValue(m_per, json[QString("per")]);
    m_per_isSet = !json[QString("per")].isNull() && m_per_isValid;
}

QString OAIV0_0_40_assoc_max_tres_minutes::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_assoc_max_tres_minutes::asJsonObject() const {
    QJsonObject obj;
    if (m_total.size() > 0) {
        obj.insert(QString("total"), ::OpenAPI::toJsonValue(m_total));
    }
    if (m_per.isSet()) {
        obj.insert(QString("per"), ::OpenAPI::toJsonValue(m_per));
    }
    return obj;
}

QList<OAIV0_0_40_tres> OAIV0_0_40_assoc_max_tres_minutes::getTotal() const {
    return m_total;
}
void OAIV0_0_40_assoc_max_tres_minutes::setTotal(const QList<OAIV0_0_40_tres> &total) {
    m_total = total;
    m_total_isSet = true;
}

bool OAIV0_0_40_assoc_max_tres_minutes::is_total_Set() const{
    return m_total_isSet;
}

bool OAIV0_0_40_assoc_max_tres_minutes::is_total_Valid() const{
    return m_total_isValid;
}

OAIV0_0_40_qos_limits_min_tres_per OAIV0_0_40_assoc_max_tres_minutes::getPer() const {
    return m_per;
}
void OAIV0_0_40_assoc_max_tres_minutes::setPer(const OAIV0_0_40_qos_limits_min_tres_per &per) {
    m_per = per;
    m_per_isSet = true;
}

bool OAIV0_0_40_assoc_max_tres_minutes::is_per_Set() const{
    return m_per_isSet;
}

bool OAIV0_0_40_assoc_max_tres_minutes::is_per_Valid() const{
    return m_per_isValid;
}

bool OAIV0_0_40_assoc_max_tres_minutes::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_total.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_per.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_assoc_max_tres_minutes::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI