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

#include "OAIV0_0_39_meta.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_39_meta::OAIV0_0_39_meta(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_meta::OAIV0_0_39_meta() {
    this->initializeModel();
}

OAIV0_0_39_meta::~OAIV0_0_39_meta() {}

void OAIV0_0_39_meta::initializeModel() {

    m_plugin_isSet = false;
    m_plugin_isValid = false;

    m_slurm_isSet = false;
    m_slurm_isValid = false;
}

void OAIV0_0_39_meta::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_meta::fromJsonObject(QJsonObject json) {

    m_plugin_isValid = ::hm:slurm:client::fromJsonValue(m_plugin, json[QString("plugin")]);
    m_plugin_isSet = !json[QString("plugin")].isNull() && m_plugin_isValid;

    m_slurm_isValid = ::hm:slurm:client::fromJsonValue(m_slurm, json[QString("Slurm")]);
    m_slurm_isSet = !json[QString("Slurm")].isNull() && m_slurm_isValid;
}

QString OAIV0_0_39_meta::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_meta::asJsonObject() const {
    QJsonObject obj;
    if (m_plugin.isSet()) {
        obj.insert(QString("plugin"), ::hm:slurm:client::toJsonValue(m_plugin));
    }
    if (m_slurm.isSet()) {
        obj.insert(QString("Slurm"), ::hm:slurm:client::toJsonValue(m_slurm));
    }
    return obj;
}

OAIDbv0_0_39_meta_plugin OAIV0_0_39_meta::getPlugin() const {
    return m_plugin;
}
void OAIV0_0_39_meta::setPlugin(const OAIDbv0_0_39_meta_plugin &plugin) {
    m_plugin = plugin;
    m_plugin_isSet = true;
}

bool OAIV0_0_39_meta::is_plugin_Set() const{
    return m_plugin_isSet;
}

bool OAIV0_0_39_meta::is_plugin_Valid() const{
    return m_plugin_isValid;
}

OAIDbv0_0_39_meta_Slurm OAIV0_0_39_meta::getSlurm() const {
    return m_slurm;
}
void OAIV0_0_39_meta::setSlurm(const OAIDbv0_0_39_meta_Slurm &slurm) {
    m_slurm = slurm;
    m_slurm_isSet = true;
}

bool OAIV0_0_39_meta::is_slurm_Set() const{
    return m_slurm_isSet;
}

bool OAIV0_0_39_meta::is_slurm_Valid() const{
    return m_slurm_isValid;
}

bool OAIV0_0_39_meta::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_plugin.isSet()) {
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

bool OAIV0_0_39_meta::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
