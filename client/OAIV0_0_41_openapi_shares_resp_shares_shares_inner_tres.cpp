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

#include "OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres() {
    this->initializeModel();
}

OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::~OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres() {}

void OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::initializeModel() {

    m_run_seconds_isSet = false;
    m_run_seconds_isValid = false;

    m_group_minutes_isSet = false;
    m_group_minutes_isValid = false;

    m_usage_isSet = false;
    m_usage_isValid = false;
}

void OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::fromJsonObject(QJsonObject json) {

    m_run_seconds_isValid = ::OpenAPI::fromJsonValue(m_run_seconds, json[QString("run_seconds")]);
    m_run_seconds_isSet = !json[QString("run_seconds")].isNull() && m_run_seconds_isValid;

    m_group_minutes_isValid = ::OpenAPI::fromJsonValue(m_group_minutes, json[QString("group_minutes")]);
    m_group_minutes_isSet = !json[QString("group_minutes")].isNull() && m_group_minutes_isValid;

    m_usage_isValid = ::OpenAPI::fromJsonValue(m_usage, json[QString("usage")]);
    m_usage_isSet = !json[QString("usage")].isNull() && m_usage_isValid;
}

QString OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::asJsonObject() const {
    QJsonObject obj;
    if (m_run_seconds.size() > 0) {
        obj.insert(QString("run_seconds"), ::OpenAPI::toJsonValue(m_run_seconds));
    }
    if (m_group_minutes.size() > 0) {
        obj.insert(QString("group_minutes"), ::OpenAPI::toJsonValue(m_group_minutes));
    }
    if (m_usage.size() > 0) {
        obj.insert(QString("usage"), ::OpenAPI::toJsonValue(m_usage));
    }
    return obj;
}

QList<OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner> OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::getRunSeconds() const {
    return m_run_seconds;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::setRunSeconds(const QList<OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner> &run_seconds) {
    m_run_seconds = run_seconds;
    m_run_seconds_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::is_run_seconds_Set() const{
    return m_run_seconds_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::is_run_seconds_Valid() const{
    return m_run_seconds_isValid;
}

QList<OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner> OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::getGroupMinutes() const {
    return m_group_minutes;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::setGroupMinutes(const QList<OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner> &group_minutes) {
    m_group_minutes = group_minutes;
    m_group_minutes_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::is_group_minutes_Set() const{
    return m_group_minutes_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::is_group_minutes_Valid() const{
    return m_group_minutes_isValid;
}

QList<OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres_usage_inner> OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::getUsage() const {
    return m_usage;
}
void OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::setUsage(const QList<OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres_usage_inner> &usage) {
    m_usage = usage;
    m_usage_isSet = true;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::is_usage_Set() const{
    return m_usage_isSet;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::is_usage_Valid() const{
    return m_usage_isValid;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_run_seconds.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_group_minutes.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_usage.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_shares_resp_shares_shares_inner_tres::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
