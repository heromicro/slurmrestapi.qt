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

#include "OAIV0_0_40_assoc_max_jobs.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_40_assoc_max_jobs::OAIV0_0_40_assoc_max_jobs(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_assoc_max_jobs::OAIV0_0_40_assoc_max_jobs() {
    this->initializeModel();
}

OAIV0_0_40_assoc_max_jobs::~OAIV0_0_40_assoc_max_jobs() {}

void OAIV0_0_40_assoc_max_jobs::initializeModel() {

    m_per_isSet = false;
    m_per_isValid = false;

    m_active_isSet = false;
    m_active_isValid = false;

    m_accruing_isSet = false;
    m_accruing_isValid = false;

    m_total_isSet = false;
    m_total_isValid = false;
}

void OAIV0_0_40_assoc_max_jobs::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_assoc_max_jobs::fromJsonObject(QJsonObject json) {

    m_per_isValid = ::OpenAPI::fromJsonValue(m_per, json[QString("per")]);
    m_per_isSet = !json[QString("per")].isNull() && m_per_isValid;

    m_active_isValid = ::OpenAPI::fromJsonValue(m_active, json[QString("active")]);
    m_active_isSet = !json[QString("active")].isNull() && m_active_isValid;

    m_accruing_isValid = ::OpenAPI::fromJsonValue(m_accruing, json[QString("accruing")]);
    m_accruing_isSet = !json[QString("accruing")].isNull() && m_accruing_isValid;

    m_total_isValid = ::OpenAPI::fromJsonValue(m_total, json[QString("total")]);
    m_total_isSet = !json[QString("total")].isNull() && m_total_isValid;
}

QString OAIV0_0_40_assoc_max_jobs::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_assoc_max_jobs::asJsonObject() const {
    QJsonObject obj;
    if (m_per.isSet()) {
        obj.insert(QString("per"), ::OpenAPI::toJsonValue(m_per));
    }
    if (m_active.isSet()) {
        obj.insert(QString("active"), ::OpenAPI::toJsonValue(m_active));
    }
    if (m_accruing.isSet()) {
        obj.insert(QString("accruing"), ::OpenAPI::toJsonValue(m_accruing));
    }
    if (m_total.isSet()) {
        obj.insert(QString("total"), ::OpenAPI::toJsonValue(m_total));
    }
    return obj;
}

OAIV0_0_40_assoc_max_jobs_per OAIV0_0_40_assoc_max_jobs::getPer() const {
    return m_per;
}
void OAIV0_0_40_assoc_max_jobs::setPer(const OAIV0_0_40_assoc_max_jobs_per &per) {
    m_per = per;
    m_per_isSet = true;
}

bool OAIV0_0_40_assoc_max_jobs::is_per_Set() const{
    return m_per_isSet;
}

bool OAIV0_0_40_assoc_max_jobs::is_per_Valid() const{
    return m_per_isValid;
}

OAIV0_0_40_uint32_no_val OAIV0_0_40_assoc_max_jobs::getActive() const {
    return m_active;
}
void OAIV0_0_40_assoc_max_jobs::setActive(const OAIV0_0_40_uint32_no_val &active) {
    m_active = active;
    m_active_isSet = true;
}

bool OAIV0_0_40_assoc_max_jobs::is_active_Set() const{
    return m_active_isSet;
}

bool OAIV0_0_40_assoc_max_jobs::is_active_Valid() const{
    return m_active_isValid;
}

OAIV0_0_40_uint32_no_val OAIV0_0_40_assoc_max_jobs::getAccruing() const {
    return m_accruing;
}
void OAIV0_0_40_assoc_max_jobs::setAccruing(const OAIV0_0_40_uint32_no_val &accruing) {
    m_accruing = accruing;
    m_accruing_isSet = true;
}

bool OAIV0_0_40_assoc_max_jobs::is_accruing_Set() const{
    return m_accruing_isSet;
}

bool OAIV0_0_40_assoc_max_jobs::is_accruing_Valid() const{
    return m_accruing_isValid;
}

OAIV0_0_40_uint32_no_val OAIV0_0_40_assoc_max_jobs::getTotal() const {
    return m_total;
}
void OAIV0_0_40_assoc_max_jobs::setTotal(const OAIV0_0_40_uint32_no_val &total) {
    m_total = total;
    m_total_isSet = true;
}

bool OAIV0_0_40_assoc_max_jobs::is_total_Set() const{
    return m_total_isSet;
}

bool OAIV0_0_40_assoc_max_jobs::is_total_Valid() const{
    return m_total_isValid;
}

bool OAIV0_0_40_assoc_max_jobs::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_per.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_active.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_accruing.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_total.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_assoc_max_jobs::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
