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

#include "OAIV0_0_40_cluster_rec_controller.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_40_cluster_rec_controller::OAIV0_0_40_cluster_rec_controller(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_cluster_rec_controller::OAIV0_0_40_cluster_rec_controller() {
    this->initializeModel();
}

OAIV0_0_40_cluster_rec_controller::~OAIV0_0_40_cluster_rec_controller() {}

void OAIV0_0_40_cluster_rec_controller::initializeModel() {

    m_host_isSet = false;
    m_host_isValid = false;

    m_port_isSet = false;
    m_port_isValid = false;
}

void OAIV0_0_40_cluster_rec_controller::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_cluster_rec_controller::fromJsonObject(QJsonObject json) {

    m_host_isValid = ::OpenAPI::fromJsonValue(m_host, json[QString("host")]);
    m_host_isSet = !json[QString("host")].isNull() && m_host_isValid;

    m_port_isValid = ::OpenAPI::fromJsonValue(m_port, json[QString("port")]);
    m_port_isSet = !json[QString("port")].isNull() && m_port_isValid;
}

QString OAIV0_0_40_cluster_rec_controller::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_cluster_rec_controller::asJsonObject() const {
    QJsonObject obj;
    if (m_host_isSet) {
        obj.insert(QString("host"), ::OpenAPI::toJsonValue(m_host));
    }
    if (m_port_isSet) {
        obj.insert(QString("port"), ::OpenAPI::toJsonValue(m_port));
    }
    return obj;
}

QString OAIV0_0_40_cluster_rec_controller::getHost() const {
    return m_host;
}
void OAIV0_0_40_cluster_rec_controller::setHost(const QString &host) {
    m_host = host;
    m_host_isSet = true;
}

bool OAIV0_0_40_cluster_rec_controller::is_host_Set() const{
    return m_host_isSet;
}

bool OAIV0_0_40_cluster_rec_controller::is_host_Valid() const{
    return m_host_isValid;
}

qint32 OAIV0_0_40_cluster_rec_controller::getPort() const {
    return m_port;
}
void OAIV0_0_40_cluster_rec_controller::setPort(const qint32 &port) {
    m_port = port;
    m_port_isSet = true;
}

bool OAIV0_0_40_cluster_rec_controller::is_port_Set() const{
    return m_port_isSet;
}

bool OAIV0_0_40_cluster_rec_controller::is_port_Valid() const{
    return m_port_isValid;
}

bool OAIV0_0_40_cluster_rec_controller::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_host_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_port_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_cluster_rec_controller::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI