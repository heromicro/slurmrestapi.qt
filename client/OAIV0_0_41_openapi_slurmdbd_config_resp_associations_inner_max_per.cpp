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

#include "OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per::OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per::OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per() {
    this->initializeModel();
}

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per::~OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per() {}

void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per::initializeModel() {

    m_account_isSet = false;
    m_account_isValid = false;
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per::fromJsonObject(QJsonObject json) {

    m_account_isValid = ::OpenAPI::fromJsonValue(m_account, json[QString("account")]);
    m_account_isSet = !json[QString("account")].isNull() && m_account_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per::asJsonObject() const {
    QJsonObject obj;
    if (m_account.isSet()) {
        obj.insert(QString("account"), ::OpenAPI::toJsonValue(m_account));
    }
    return obj;
}

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per::getAccount() const {
    return m_account;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per::setAccount(const OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per_account &account) {
    m_account = account;
    m_account_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per::is_account_Set() const{
    return m_account_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per::is_account_Valid() const{
    return m_account_isValid;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_account.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_per::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI