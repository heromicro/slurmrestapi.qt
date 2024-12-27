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

#include "OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock::OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock::OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock() {
    this->initializeModel();
}

OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock::~OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock() {}

void OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock::initializeModel() {

    m_per_isSet = false;
    m_per_isValid = false;
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock::fromJsonObject(QJsonObject json) {

    m_per_isValid = ::hm:slurm:client::fromJsonValue(m_per, json[QString("per")]);
    m_per_isSet = !json[QString("per")].isNull() && m_per_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock::asJsonObject() const {
    QJsonObject obj;
    if (m_per.isSet()) {
        obj.insert(QString("per"), ::hm:slurm:client::toJsonValue(m_per));
    }
    return obj;
}

OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock::getPer() const {
    return m_per;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock::setPer(const OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock_per &per) {
    m_per = per;
    m_per_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock::is_per_Set() const{
    return m_per_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock::is_per_Valid() const{
    return m_per_isValid;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_per.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_wall_clock::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
