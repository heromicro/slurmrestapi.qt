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

#include "OAIV0_0_39_reservation_core_spec.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_39_reservation_core_spec::OAIV0_0_39_reservation_core_spec(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_reservation_core_spec::OAIV0_0_39_reservation_core_spec() {
    this->initializeModel();
}

OAIV0_0_39_reservation_core_spec::~OAIV0_0_39_reservation_core_spec() {}

void OAIV0_0_39_reservation_core_spec::initializeModel() {

    m_node_isSet = false;
    m_node_isValid = false;

    m_core_isSet = false;
    m_core_isValid = false;
}

void OAIV0_0_39_reservation_core_spec::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_reservation_core_spec::fromJsonObject(QJsonObject json) {

    m_node_isValid = ::hm:slurm:client::fromJsonValue(m_node, json[QString("node")]);
    m_node_isSet = !json[QString("node")].isNull() && m_node_isValid;

    m_core_isValid = ::hm:slurm:client::fromJsonValue(m_core, json[QString("core")]);
    m_core_isSet = !json[QString("core")].isNull() && m_core_isValid;
}

QString OAIV0_0_39_reservation_core_spec::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_reservation_core_spec::asJsonObject() const {
    QJsonObject obj;
    if (m_node_isSet) {
        obj.insert(QString("node"), ::hm:slurm:client::toJsonValue(m_node));
    }
    if (m_core_isSet) {
        obj.insert(QString("core"), ::hm:slurm:client::toJsonValue(m_core));
    }
    return obj;
}

QString OAIV0_0_39_reservation_core_spec::getNode() const {
    return m_node;
}
void OAIV0_0_39_reservation_core_spec::setNode(const QString &node) {
    m_node = node;
    m_node_isSet = true;
}

bool OAIV0_0_39_reservation_core_spec::is_node_Set() const{
    return m_node_isSet;
}

bool OAIV0_0_39_reservation_core_spec::is_node_Valid() const{
    return m_node_isValid;
}

QString OAIV0_0_39_reservation_core_spec::getCore() const {
    return m_core;
}
void OAIV0_0_39_reservation_core_spec::setCore(const QString &core) {
    m_core = core;
    m_core_isSet = true;
}

bool OAIV0_0_39_reservation_core_spec::is_core_Set() const{
    return m_core_isSet;
}

bool OAIV0_0_39_reservation_core_spec::is_core_Valid() const{
    return m_core_isValid;
}

bool OAIV0_0_39_reservation_core_spec::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_node_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_core_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_reservation_core_spec::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client