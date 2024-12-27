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

#include "OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per() {
    this->initializeModel();
}

OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::~OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per() {}

void OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::initializeModel() {

    m_account_isSet = false;
    m_account_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::fromJsonObject(QJsonObject json) {

    m_account_isValid = ::hm:slurm:client::fromJsonValue(m_account, json[QString("account")]);
    m_account_isSet = !json[QString("account")].isNull() && m_account_isValid;

    m_user_isValid = ::hm:slurm:client::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::asJsonObject() const {
    QJsonObject obj;
    if (m_account.isSet()) {
        obj.insert(QString("account"), ::hm:slurm:client::toJsonValue(m_account));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::hm:slurm:client::toJsonValue(m_user));
    }
    return obj;
}

OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per_account OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::getAccount() const {
    return m_account;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::setAccount(const OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per_account &account) {
    m_account = account;
    m_account_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::is_account_Set() const{
    return m_account_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::is_account_Valid() const{
    return m_account_isValid;
}

OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per_user OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::getUser() const {
    return m_user;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::setUser(const OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per_user &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::is_user_Set() const{
    return m_user_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::is_user_Valid() const{
    return m_user_isValid;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_account.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_jobs_active_jobs_per::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
