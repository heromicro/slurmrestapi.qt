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

#include "OAIV0_0_40_openapi_meta_slurm.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_40_openapi_meta_slurm::OAIV0_0_40_openapi_meta_slurm(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_openapi_meta_slurm::OAIV0_0_40_openapi_meta_slurm() {
    this->initializeModel();
}

OAIV0_0_40_openapi_meta_slurm::~OAIV0_0_40_openapi_meta_slurm() {}

void OAIV0_0_40_openapi_meta_slurm::initializeModel() {

    m_version_isSet = false;
    m_version_isValid = false;

    m_release_isSet = false;
    m_release_isValid = false;

    m_cluster_isSet = false;
    m_cluster_isValid = false;
}

void OAIV0_0_40_openapi_meta_slurm::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_openapi_meta_slurm::fromJsonObject(QJsonObject json) {

    m_version_isValid = ::OpenAPI::fromJsonValue(m_version, json[QString("version")]);
    m_version_isSet = !json[QString("version")].isNull() && m_version_isValid;

    m_release_isValid = ::OpenAPI::fromJsonValue(m_release, json[QString("release")]);
    m_release_isSet = !json[QString("release")].isNull() && m_release_isValid;

    m_cluster_isValid = ::OpenAPI::fromJsonValue(m_cluster, json[QString("cluster")]);
    m_cluster_isSet = !json[QString("cluster")].isNull() && m_cluster_isValid;
}

QString OAIV0_0_40_openapi_meta_slurm::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_openapi_meta_slurm::asJsonObject() const {
    QJsonObject obj;
    if (m_version.isSet()) {
        obj.insert(QString("version"), ::OpenAPI::toJsonValue(m_version));
    }
    if (m_release_isSet) {
        obj.insert(QString("release"), ::OpenAPI::toJsonValue(m_release));
    }
    if (m_cluster_isSet) {
        obj.insert(QString("cluster"), ::OpenAPI::toJsonValue(m_cluster));
    }
    return obj;
}

OAIV0_0_40_openapi_meta_slurm_version OAIV0_0_40_openapi_meta_slurm::getVersion() const {
    return m_version;
}
void OAIV0_0_40_openapi_meta_slurm::setVersion(const OAIV0_0_40_openapi_meta_slurm_version &version) {
    m_version = version;
    m_version_isSet = true;
}

bool OAIV0_0_40_openapi_meta_slurm::is_version_Set() const{
    return m_version_isSet;
}

bool OAIV0_0_40_openapi_meta_slurm::is_version_Valid() const{
    return m_version_isValid;
}

QString OAIV0_0_40_openapi_meta_slurm::getRelease() const {
    return m_release;
}
void OAIV0_0_40_openapi_meta_slurm::setRelease(const QString &release) {
    m_release = release;
    m_release_isSet = true;
}

bool OAIV0_0_40_openapi_meta_slurm::is_release_Set() const{
    return m_release_isSet;
}

bool OAIV0_0_40_openapi_meta_slurm::is_release_Valid() const{
    return m_release_isValid;
}

QString OAIV0_0_40_openapi_meta_slurm::getCluster() const {
    return m_cluster;
}
void OAIV0_0_40_openapi_meta_slurm::setCluster(const QString &cluster) {
    m_cluster = cluster;
    m_cluster_isSet = true;
}

bool OAIV0_0_40_openapi_meta_slurm::is_cluster_Set() const{
    return m_cluster_isSet;
}

bool OAIV0_0_40_openapi_meta_slurm::is_cluster_Valid() const{
    return m_cluster_isValid;
}

bool OAIV0_0_40_openapi_meta_slurm::isSet() const {
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

        if (m_cluster_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_openapi_meta_slurm::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI