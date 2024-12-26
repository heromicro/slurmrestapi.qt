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

#include "OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time() {
    this->initializeModel();
}

OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::~OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time() {}

void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::initializeModel() {

    m_elapsed_isSet = false;
    m_elapsed_isValid = false;

    m_end_isSet = false;
    m_end_isValid = false;

    m_start_isSet = false;
    m_start_isValid = false;

    m_suspended_isSet = false;
    m_suspended_isValid = false;

    m_system_isSet = false;
    m_system_isValid = false;

    m_total_isSet = false;
    m_total_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;
}

void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::fromJsonObject(QJsonObject json) {

    m_elapsed_isValid = ::OpenAPI::fromJsonValue(m_elapsed, json[QString("elapsed")]);
    m_elapsed_isSet = !json[QString("elapsed")].isNull() && m_elapsed_isValid;

    m_end_isValid = ::OpenAPI::fromJsonValue(m_end, json[QString("end")]);
    m_end_isSet = !json[QString("end")].isNull() && m_end_isValid;

    m_start_isValid = ::OpenAPI::fromJsonValue(m_start, json[QString("start")]);
    m_start_isSet = !json[QString("start")].isNull() && m_start_isValid;

    m_suspended_isValid = ::OpenAPI::fromJsonValue(m_suspended, json[QString("suspended")]);
    m_suspended_isSet = !json[QString("suspended")].isNull() && m_suspended_isValid;

    m_system_isValid = ::OpenAPI::fromJsonValue(m_system, json[QString("system")]);
    m_system_isSet = !json[QString("system")].isNull() && m_system_isValid;

    m_total_isValid = ::OpenAPI::fromJsonValue(m_total, json[QString("total")]);
    m_total_isSet = !json[QString("total")].isNull() && m_total_isValid;

    m_user_isValid = ::OpenAPI::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::asJsonObject() const {
    QJsonObject obj;
    if (m_elapsed_isSet) {
        obj.insert(QString("elapsed"), ::OpenAPI::toJsonValue(m_elapsed));
    }
    if (m_end.isSet()) {
        obj.insert(QString("end"), ::OpenAPI::toJsonValue(m_end));
    }
    if (m_start.isSet()) {
        obj.insert(QString("start"), ::OpenAPI::toJsonValue(m_start));
    }
    if (m_suspended_isSet) {
        obj.insert(QString("suspended"), ::OpenAPI::toJsonValue(m_suspended));
    }
    if (m_system.isSet()) {
        obj.insert(QString("system"), ::OpenAPI::toJsonValue(m_system));
    }
    if (m_total.isSet()) {
        obj.insert(QString("total"), ::OpenAPI::toJsonValue(m_total));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::OpenAPI::toJsonValue(m_user));
    }
    return obj;
}

qint32 OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::getElapsed() const {
    return m_elapsed;
}
void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::setElapsed(const qint32 &elapsed) {
    m_elapsed = elapsed;
    m_elapsed_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::is_elapsed_Set() const{
    return m_elapsed_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::is_elapsed_Valid() const{
    return m_elapsed_isValid;
}

OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time_end OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::getEnd() const {
    return m_end;
}
void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::setEnd(const OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time_end &end) {
    m_end = end;
    m_end_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::is_end_Set() const{
    return m_end_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::is_end_Valid() const{
    return m_end_isValid;
}

OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time_start OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::getStart() const {
    return m_start;
}
void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::setStart(const OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time_start &start) {
    m_start = start;
    m_start_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::is_start_Set() const{
    return m_start_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::is_start_Valid() const{
    return m_start_isValid;
}

qint32 OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::getSuspended() const {
    return m_suspended;
}
void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::setSuspended(const qint32 &suspended) {
    m_suspended = suspended;
    m_suspended_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::is_suspended_Set() const{
    return m_suspended_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::is_suspended_Valid() const{
    return m_suspended_isValid;
}

OAIV0_0_40_step_time_system OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::getSystem() const {
    return m_system;
}
void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::setSystem(const OAIV0_0_40_step_time_system &system) {
    m_system = system;
    m_system_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::is_system_Set() const{
    return m_system_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::is_system_Valid() const{
    return m_system_isValid;
}

OAIV0_0_40_step_time_total OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::getTotal() const {
    return m_total;
}
void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::setTotal(const OAIV0_0_40_step_time_total &total) {
    m_total = total;
    m_total_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::is_total_Set() const{
    return m_total_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::is_total_Valid() const{
    return m_total_isValid;
}

OAIV0_0_40_step_time_user OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::getUser() const {
    return m_user;
}
void OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::setUser(const OAIV0_0_40_step_time_user &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::is_user_Set() const{
    return m_user_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::is_user_Valid() const{
    return m_user_isValid;
}

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_elapsed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_end.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_start.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_suspended_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_system.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_total.isSet()) {
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

bool OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_time::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI