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

#include "OAIV0_0_40_openapi_error.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_40_openapi_error::OAIV0_0_40_openapi_error(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_openapi_error::OAIV0_0_40_openapi_error() {
    this->initializeModel();
}

OAIV0_0_40_openapi_error::~OAIV0_0_40_openapi_error() {}

void OAIV0_0_40_openapi_error::initializeModel() {

    m_description_isSet = false;
    m_description_isValid = false;

    m_error_number_isSet = false;
    m_error_number_isValid = false;

    m_error_isSet = false;
    m_error_isValid = false;

    m_source_isSet = false;
    m_source_isValid = false;
}

void OAIV0_0_40_openapi_error::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_openapi_error::fromJsonObject(QJsonObject json) {

    m_description_isValid = ::OpenAPI::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_error_number_isValid = ::OpenAPI::fromJsonValue(m_error_number, json[QString("error_number")]);
    m_error_number_isSet = !json[QString("error_number")].isNull() && m_error_number_isValid;

    m_error_isValid = ::OpenAPI::fromJsonValue(m_error, json[QString("error")]);
    m_error_isSet = !json[QString("error")].isNull() && m_error_isValid;

    m_source_isValid = ::OpenAPI::fromJsonValue(m_source, json[QString("source")]);
    m_source_isSet = !json[QString("source")].isNull() && m_source_isValid;
}

QString OAIV0_0_40_openapi_error::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_openapi_error::asJsonObject() const {
    QJsonObject obj;
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(m_description));
    }
    if (m_error_number_isSet) {
        obj.insert(QString("error_number"), ::OpenAPI::toJsonValue(m_error_number));
    }
    if (m_error_isSet) {
        obj.insert(QString("error"), ::OpenAPI::toJsonValue(m_error));
    }
    if (m_source_isSet) {
        obj.insert(QString("source"), ::OpenAPI::toJsonValue(m_source));
    }
    return obj;
}

QString OAIV0_0_40_openapi_error::getDescription() const {
    return m_description;
}
void OAIV0_0_40_openapi_error::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIV0_0_40_openapi_error::is_description_Set() const{
    return m_description_isSet;
}

bool OAIV0_0_40_openapi_error::is_description_Valid() const{
    return m_description_isValid;
}

qint32 OAIV0_0_40_openapi_error::getErrorNumber() const {
    return m_error_number;
}
void OAIV0_0_40_openapi_error::setErrorNumber(const qint32 &error_number) {
    m_error_number = error_number;
    m_error_number_isSet = true;
}

bool OAIV0_0_40_openapi_error::is_error_number_Set() const{
    return m_error_number_isSet;
}

bool OAIV0_0_40_openapi_error::is_error_number_Valid() const{
    return m_error_number_isValid;
}

QString OAIV0_0_40_openapi_error::getError() const {
    return m_error;
}
void OAIV0_0_40_openapi_error::setError(const QString &error) {
    m_error = error;
    m_error_isSet = true;
}

bool OAIV0_0_40_openapi_error::is_error_Set() const{
    return m_error_isSet;
}

bool OAIV0_0_40_openapi_error::is_error_Valid() const{
    return m_error_isValid;
}

QString OAIV0_0_40_openapi_error::getSource() const {
    return m_source;
}
void OAIV0_0_40_openapi_error::setSource(const QString &source) {
    m_source = source;
    m_source_isSet = true;
}

bool OAIV0_0_40_openapi_error::is_source_Set() const{
    return m_source_isSet;
}

bool OAIV0_0_40_openapi_error::is_source_Valid() const{
    return m_source_isValid;
}

bool OAIV0_0_40_openapi_error::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_error_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_error_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_source_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_openapi_error::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
