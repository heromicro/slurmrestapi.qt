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

#include "OAIV0_0_40_openapi_warning.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_40_openapi_warning::OAIV0_0_40_openapi_warning(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_openapi_warning::OAIV0_0_40_openapi_warning() {
    this->initializeModel();
}

OAIV0_0_40_openapi_warning::~OAIV0_0_40_openapi_warning() {}

void OAIV0_0_40_openapi_warning::initializeModel() {

    m_description_isSet = false;
    m_description_isValid = false;

    m_source_isSet = false;
    m_source_isValid = false;
}

void OAIV0_0_40_openapi_warning::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_openapi_warning::fromJsonObject(QJsonObject json) {

    m_description_isValid = ::hm:slurm:client::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_source_isValid = ::hm:slurm:client::fromJsonValue(m_source, json[QString("source")]);
    m_source_isSet = !json[QString("source")].isNull() && m_source_isValid;
}

QString OAIV0_0_40_openapi_warning::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_openapi_warning::asJsonObject() const {
    QJsonObject obj;
    if (m_description_isSet) {
        obj.insert(QString("description"), ::hm:slurm:client::toJsonValue(m_description));
    }
    if (m_source_isSet) {
        obj.insert(QString("source"), ::hm:slurm:client::toJsonValue(m_source));
    }
    return obj;
}

QString OAIV0_0_40_openapi_warning::getDescription() const {
    return m_description;
}
void OAIV0_0_40_openapi_warning::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIV0_0_40_openapi_warning::is_description_Set() const{
    return m_description_isSet;
}

bool OAIV0_0_40_openapi_warning::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIV0_0_40_openapi_warning::getSource() const {
    return m_source;
}
void OAIV0_0_40_openapi_warning::setSource(const QString &source) {
    m_source = source;
    m_source_isSet = true;
}

bool OAIV0_0_40_openapi_warning::is_source_Set() const{
    return m_source_isSet;
}

bool OAIV0_0_40_openapi_warning::is_source_Valid() const{
    return m_source_isValid;
}

bool OAIV0_0_40_openapi_warning::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_description_isSet) {
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

bool OAIV0_0_40_openapi_warning::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client