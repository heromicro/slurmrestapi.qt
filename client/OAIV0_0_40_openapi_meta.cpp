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

#include "OAIV0_0_40_openapi_meta.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_40_openapi_meta::OAIV0_0_40_openapi_meta(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_openapi_meta::OAIV0_0_40_openapi_meta() {
    this->initializeModel();
}

OAIV0_0_40_openapi_meta::~OAIV0_0_40_openapi_meta() {}

void OAIV0_0_40_openapi_meta::initializeModel() {

    m_plugin_isSet = false;
    m_plugin_isValid = false;

    m_client_isSet = false;
    m_client_isValid = false;

    m_command_isSet = false;
    m_command_isValid = false;

    m_slurm_isSet = false;
    m_slurm_isValid = false;
}

void OAIV0_0_40_openapi_meta::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_openapi_meta::fromJsonObject(QJsonObject json) {

    m_plugin_isValid = ::OpenAPI::fromJsonValue(m_plugin, json[QString("plugin")]);
    m_plugin_isSet = !json[QString("plugin")].isNull() && m_plugin_isValid;

    m_client_isValid = ::OpenAPI::fromJsonValue(m_client, json[QString("client")]);
    m_client_isSet = !json[QString("client")].isNull() && m_client_isValid;

    m_command_isValid = ::OpenAPI::fromJsonValue(m_command, json[QString("command")]);
    m_command_isSet = !json[QString("command")].isNull() && m_command_isValid;

    m_slurm_isValid = ::OpenAPI::fromJsonValue(m_slurm, json[QString("slurm")]);
    m_slurm_isSet = !json[QString("slurm")].isNull() && m_slurm_isValid;
}

QString OAIV0_0_40_openapi_meta::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_openapi_meta::asJsonObject() const {
    QJsonObject obj;
    if (m_plugin.isSet()) {
        obj.insert(QString("plugin"), ::OpenAPI::toJsonValue(m_plugin));
    }
    if (m_client.isSet()) {
        obj.insert(QString("client"), ::OpenAPI::toJsonValue(m_client));
    }
    if (m_command.size() > 0) {
        obj.insert(QString("command"), ::OpenAPI::toJsonValue(m_command));
    }
    if (m_slurm.isSet()) {
        obj.insert(QString("slurm"), ::OpenAPI::toJsonValue(m_slurm));
    }
    return obj;
}

OAIV0_0_40_openapi_meta_plugin OAIV0_0_40_openapi_meta::getPlugin() const {
    return m_plugin;
}
void OAIV0_0_40_openapi_meta::setPlugin(const OAIV0_0_40_openapi_meta_plugin &plugin) {
    m_plugin = plugin;
    m_plugin_isSet = true;
}

bool OAIV0_0_40_openapi_meta::is_plugin_Set() const{
    return m_plugin_isSet;
}

bool OAIV0_0_40_openapi_meta::is_plugin_Valid() const{
    return m_plugin_isValid;
}

OAIV0_0_40_openapi_meta_client OAIV0_0_40_openapi_meta::getClient() const {
    return m_client;
}
void OAIV0_0_40_openapi_meta::setClient(const OAIV0_0_40_openapi_meta_client &client) {
    m_client = client;
    m_client_isSet = true;
}

bool OAIV0_0_40_openapi_meta::is_client_Set() const{
    return m_client_isSet;
}

bool OAIV0_0_40_openapi_meta::is_client_Valid() const{
    return m_client_isValid;
}

QList<QString> OAIV0_0_40_openapi_meta::getCommand() const {
    return m_command;
}
void OAIV0_0_40_openapi_meta::setCommand(const QList<QString> &command) {
    m_command = command;
    m_command_isSet = true;
}

bool OAIV0_0_40_openapi_meta::is_command_Set() const{
    return m_command_isSet;
}

bool OAIV0_0_40_openapi_meta::is_command_Valid() const{
    return m_command_isValid;
}

OAIV0_0_40_openapi_meta_slurm OAIV0_0_40_openapi_meta::getSlurm() const {
    return m_slurm;
}
void OAIV0_0_40_openapi_meta::setSlurm(const OAIV0_0_40_openapi_meta_slurm &slurm) {
    m_slurm = slurm;
    m_slurm_isSet = true;
}

bool OAIV0_0_40_openapi_meta::is_slurm_Set() const{
    return m_slurm_isSet;
}

bool OAIV0_0_40_openapi_meta::is_slurm_Valid() const{
    return m_slurm_isValid;
}

bool OAIV0_0_40_openapi_meta::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_plugin.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_client.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_command.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_slurm.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_openapi_meta::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
