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

#include "OAIDbv0_0_39_warning.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDbv0_0_39_warning::OAIDbv0_0_39_warning(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDbv0_0_39_warning::OAIDbv0_0_39_warning() {
    this->initializeModel();
}

OAIDbv0_0_39_warning::~OAIDbv0_0_39_warning() {}

void OAIDbv0_0_39_warning::initializeModel() {

    m_warning_isSet = false;
    m_warning_isValid = false;

    m_source_isSet = false;
    m_source_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;
}

void OAIDbv0_0_39_warning::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDbv0_0_39_warning::fromJsonObject(QJsonObject json) {

    m_warning_isValid = ::OpenAPI::fromJsonValue(m_warning, json[QString("warning")]);
    m_warning_isSet = !json[QString("warning")].isNull() && m_warning_isValid;

    m_source_isValid = ::OpenAPI::fromJsonValue(m_source, json[QString("source")]);
    m_source_isSet = !json[QString("source")].isNull() && m_source_isValid;

    m_description_isValid = ::OpenAPI::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;
}

QString OAIDbv0_0_39_warning::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDbv0_0_39_warning::asJsonObject() const {
    QJsonObject obj;
    if (m_warning_isSet) {
        obj.insert(QString("warning"), ::OpenAPI::toJsonValue(m_warning));
    }
    if (m_source_isSet) {
        obj.insert(QString("source"), ::OpenAPI::toJsonValue(m_source));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(m_description));
    }
    return obj;
}

QString OAIDbv0_0_39_warning::getWarning() const {
    return m_warning;
}
void OAIDbv0_0_39_warning::setWarning(const QString &warning) {
    m_warning = warning;
    m_warning_isSet = true;
}

bool OAIDbv0_0_39_warning::is_warning_Set() const{
    return m_warning_isSet;
}

bool OAIDbv0_0_39_warning::is_warning_Valid() const{
    return m_warning_isValid;
}

QString OAIDbv0_0_39_warning::getSource() const {
    return m_source;
}
void OAIDbv0_0_39_warning::setSource(const QString &source) {
    m_source = source;
    m_source_isSet = true;
}

bool OAIDbv0_0_39_warning::is_source_Set() const{
    return m_source_isSet;
}

bool OAIDbv0_0_39_warning::is_source_Valid() const{
    return m_source_isValid;
}

QString OAIDbv0_0_39_warning::getDescription() const {
    return m_description;
}
void OAIDbv0_0_39_warning::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIDbv0_0_39_warning::is_description_Set() const{
    return m_description_isSet;
}

bool OAIDbv0_0_39_warning::is_description_Valid() const{
    return m_description_isValid;
}

bool OAIDbv0_0_39_warning::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_warning_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_source_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDbv0_0_39_warning::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
