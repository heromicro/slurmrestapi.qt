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

#include "OAIDbv0_0_39_meta_Slurm_version.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDbv0_0_39_meta_Slurm_version::OAIDbv0_0_39_meta_Slurm_version(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDbv0_0_39_meta_Slurm_version::OAIDbv0_0_39_meta_Slurm_version() {
    this->initializeModel();
}

OAIDbv0_0_39_meta_Slurm_version::~OAIDbv0_0_39_meta_Slurm_version() {}

void OAIDbv0_0_39_meta_Slurm_version::initializeModel() {

    m_major_isSet = false;
    m_major_isValid = false;

    m_micro_isSet = false;
    m_micro_isValid = false;

    m_minor_isSet = false;
    m_minor_isValid = false;
}

void OAIDbv0_0_39_meta_Slurm_version::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDbv0_0_39_meta_Slurm_version::fromJsonObject(QJsonObject json) {

    m_major_isValid = ::OpenAPI::fromJsonValue(m_major, json[QString("major")]);
    m_major_isSet = !json[QString("major")].isNull() && m_major_isValid;

    m_micro_isValid = ::OpenAPI::fromJsonValue(m_micro, json[QString("micro")]);
    m_micro_isSet = !json[QString("micro")].isNull() && m_micro_isValid;

    m_minor_isValid = ::OpenAPI::fromJsonValue(m_minor, json[QString("minor")]);
    m_minor_isSet = !json[QString("minor")].isNull() && m_minor_isValid;
}

QString OAIDbv0_0_39_meta_Slurm_version::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDbv0_0_39_meta_Slurm_version::asJsonObject() const {
    QJsonObject obj;
    if (m_major_isSet) {
        obj.insert(QString("major"), ::OpenAPI::toJsonValue(m_major));
    }
    if (m_micro_isSet) {
        obj.insert(QString("micro"), ::OpenAPI::toJsonValue(m_micro));
    }
    if (m_minor_isSet) {
        obj.insert(QString("minor"), ::OpenAPI::toJsonValue(m_minor));
    }
    return obj;
}

qint32 OAIDbv0_0_39_meta_Slurm_version::getMajor() const {
    return m_major;
}
void OAIDbv0_0_39_meta_Slurm_version::setMajor(const qint32 &major) {
    m_major = major;
    m_major_isSet = true;
}

bool OAIDbv0_0_39_meta_Slurm_version::is_major_Set() const{
    return m_major_isSet;
}

bool OAIDbv0_0_39_meta_Slurm_version::is_major_Valid() const{
    return m_major_isValid;
}

qint32 OAIDbv0_0_39_meta_Slurm_version::getMicro() const {
    return m_micro;
}
void OAIDbv0_0_39_meta_Slurm_version::setMicro(const qint32 &micro) {
    m_micro = micro;
    m_micro_isSet = true;
}

bool OAIDbv0_0_39_meta_Slurm_version::is_micro_Set() const{
    return m_micro_isSet;
}

bool OAIDbv0_0_39_meta_Slurm_version::is_micro_Valid() const{
    return m_micro_isValid;
}

qint32 OAIDbv0_0_39_meta_Slurm_version::getMinor() const {
    return m_minor;
}
void OAIDbv0_0_39_meta_Slurm_version::setMinor(const qint32 &minor) {
    m_minor = minor;
    m_minor_isSet = true;
}

bool OAIDbv0_0_39_meta_Slurm_version::is_minor_Set() const{
    return m_minor_isSet;
}

bool OAIDbv0_0_39_meta_Slurm_version::is_minor_Valid() const{
    return m_minor_isValid;
}

bool OAIDbv0_0_39_meta_Slurm_version::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_major_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_micro_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_minor_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDbv0_0_39_meta_Slurm_version::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
