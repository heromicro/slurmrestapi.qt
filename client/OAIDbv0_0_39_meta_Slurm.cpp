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

#include "OAIDbv0_0_39_meta_Slurm.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIDbv0_0_39_meta_Slurm::OAIDbv0_0_39_meta_Slurm(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDbv0_0_39_meta_Slurm::OAIDbv0_0_39_meta_Slurm() {
    this->initializeModel();
}

OAIDbv0_0_39_meta_Slurm::~OAIDbv0_0_39_meta_Slurm() {}

void OAIDbv0_0_39_meta_Slurm::initializeModel() {

    m_version_isSet = false;
    m_version_isValid = false;

    m_release_isSet = false;
    m_release_isValid = false;
}

void OAIDbv0_0_39_meta_Slurm::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDbv0_0_39_meta_Slurm::fromJsonObject(QJsonObject json) {

    m_version_isValid = ::hm:slurm:client::fromJsonValue(m_version, json[QString("version")]);
    m_version_isSet = !json[QString("version")].isNull() && m_version_isValid;

    m_release_isValid = ::hm:slurm:client::fromJsonValue(m_release, json[QString("release")]);
    m_release_isSet = !json[QString("release")].isNull() && m_release_isValid;
}

QString OAIDbv0_0_39_meta_Slurm::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDbv0_0_39_meta_Slurm::asJsonObject() const {
    QJsonObject obj;
    if (m_version.isSet()) {
        obj.insert(QString("version"), ::hm:slurm:client::toJsonValue(m_version));
    }
    if (m_release_isSet) {
        obj.insert(QString("release"), ::hm:slurm:client::toJsonValue(m_release));
    }
    return obj;
}

OAIDbv0_0_39_meta_Slurm_version OAIDbv0_0_39_meta_Slurm::getVersion() const {
    return m_version;
}
void OAIDbv0_0_39_meta_Slurm::setVersion(const OAIDbv0_0_39_meta_Slurm_version &version) {
    m_version = version;
    m_version_isSet = true;
}

bool OAIDbv0_0_39_meta_Slurm::is_version_Set() const{
    return m_version_isSet;
}

bool OAIDbv0_0_39_meta_Slurm::is_version_Valid() const{
    return m_version_isValid;
}

QString OAIDbv0_0_39_meta_Slurm::getRelease() const {
    return m_release;
}
void OAIDbv0_0_39_meta_Slurm::setRelease(const QString &release) {
    m_release = release;
    m_release_isSet = true;
}

bool OAIDbv0_0_39_meta_Slurm::is_release_Set() const{
    return m_release_isSet;
}

bool OAIDbv0_0_39_meta_Slurm::is_release_Valid() const{
    return m_release_isValid;
}

bool OAIDbv0_0_39_meta_Slurm::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_version.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_release_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDbv0_0_39_meta_Slurm::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
