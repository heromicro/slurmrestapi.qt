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

#include "OAIV0_0_39_reservations_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_39_reservations_response::OAIV0_0_39_reservations_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_reservations_response::OAIV0_0_39_reservations_response() {
    this->initializeModel();
}

OAIV0_0_39_reservations_response::~OAIV0_0_39_reservations_response() {}

void OAIV0_0_39_reservations_response::initializeModel() {

    m_meta_isSet = false;
    m_meta_isValid = false;

    m_errors_isSet = false;
    m_errors_isValid = false;

    m_warnings_isSet = false;
    m_warnings_isValid = false;

    m_reservations_isSet = false;
    m_reservations_isValid = false;
}

void OAIV0_0_39_reservations_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_reservations_response::fromJsonObject(QJsonObject json) {

    m_meta_isValid = ::hm:slurm:client::fromJsonValue(m_meta, json[QString("meta")]);
    m_meta_isSet = !json[QString("meta")].isNull() && m_meta_isValid;

    m_errors_isValid = ::hm:slurm:client::fromJsonValue(m_errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;

    m_warnings_isValid = ::hm:slurm:client::fromJsonValue(m_warnings, json[QString("warnings")]);
    m_warnings_isSet = !json[QString("warnings")].isNull() && m_warnings_isValid;

    m_reservations_isValid = ::hm:slurm:client::fromJsonValue(m_reservations, json[QString("reservations")]);
    m_reservations_isSet = !json[QString("reservations")].isNull() && m_reservations_isValid;
}

QString OAIV0_0_39_reservations_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_reservations_response::asJsonObject() const {
    QJsonObject obj;
    if (m_meta.isSet()) {
        obj.insert(QString("meta"), ::hm:slurm:client::toJsonValue(m_meta));
    }
    if (m_errors.size() > 0) {
        obj.insert(QString("errors"), ::hm:slurm:client::toJsonValue(m_errors));
    }
    if (m_warnings.size() > 0) {
        obj.insert(QString("warnings"), ::hm:slurm:client::toJsonValue(m_warnings));
    }
    if (m_reservations.size() > 0) {
        obj.insert(QString("reservations"), ::hm:slurm:client::toJsonValue(m_reservations));
    }
    return obj;
}

OAIV0_0_39_meta OAIV0_0_39_reservations_response::getMeta() const {
    return m_meta;
}
void OAIV0_0_39_reservations_response::setMeta(const OAIV0_0_39_meta &meta) {
    m_meta = meta;
    m_meta_isSet = true;
}

bool OAIV0_0_39_reservations_response::is_meta_Set() const{
    return m_meta_isSet;
}

bool OAIV0_0_39_reservations_response::is_meta_Valid() const{
    return m_meta_isValid;
}

QList<OAIV0_0_39_error> OAIV0_0_39_reservations_response::getErrors() const {
    return m_errors;
}
void OAIV0_0_39_reservations_response::setErrors(const QList<OAIV0_0_39_error> &errors) {
    m_errors = errors;
    m_errors_isSet = true;
}

bool OAIV0_0_39_reservations_response::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAIV0_0_39_reservations_response::is_errors_Valid() const{
    return m_errors_isValid;
}

QList<OAIV0_0_39_warning> OAIV0_0_39_reservations_response::getWarnings() const {
    return m_warnings;
}
void OAIV0_0_39_reservations_response::setWarnings(const QList<OAIV0_0_39_warning> &warnings) {
    m_warnings = warnings;
    m_warnings_isSet = true;
}

bool OAIV0_0_39_reservations_response::is_warnings_Set() const{
    return m_warnings_isSet;
}

bool OAIV0_0_39_reservations_response::is_warnings_Valid() const{
    return m_warnings_isValid;
}

QList<OAIV0_0_39_reservation_info> OAIV0_0_39_reservations_response::getReservations() const {
    return m_reservations;
}
void OAIV0_0_39_reservations_response::setReservations(const QList<OAIV0_0_39_reservation_info> &reservations) {
    m_reservations = reservations;
    m_reservations_isSet = true;
}

bool OAIV0_0_39_reservations_response::is_reservations_Set() const{
    return m_reservations_isSet;
}

bool OAIV0_0_39_reservations_response::is_reservations_Valid() const{
    return m_reservations_isValid;
}

bool OAIV0_0_39_reservations_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_meta.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_errors.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_warnings.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_reservations.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_reservations_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
