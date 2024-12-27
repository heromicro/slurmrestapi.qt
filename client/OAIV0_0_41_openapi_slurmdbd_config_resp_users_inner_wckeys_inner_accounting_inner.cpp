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

#include "OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner() {
    this->initializeModel();
}

OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::~OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner() {}

void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::initializeModel() {

    m_allocated_isSet = false;
    m_allocated_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_start_isSet = false;
    m_start_isValid = false;

    m_tres_isSet = false;
    m_tres_isValid = false;
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::fromJsonObject(QJsonObject json) {

    m_allocated_isValid = ::hm:slurm:client::fromJsonValue(m_allocated, json[QString("allocated")]);
    m_allocated_isSet = !json[QString("allocated")].isNull() && m_allocated_isValid;

    m_id_isValid = ::hm:slurm:client::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_start_isValid = ::hm:slurm:client::fromJsonValue(m_start, json[QString("start")]);
    m_start_isSet = !json[QString("start")].isNull() && m_start_isValid;

    m_tres_isValid = ::hm:slurm:client::fromJsonValue(m_tres, json[QString("TRES")]);
    m_tres_isSet = !json[QString("TRES")].isNull() && m_tres_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_allocated.isSet()) {
        obj.insert(QString("allocated"), ::hm:slurm:client::toJsonValue(m_allocated));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::hm:slurm:client::toJsonValue(m_id));
    }
    if (m_start_isSet) {
        obj.insert(QString("start"), ::hm:slurm:client::toJsonValue(m_start));
    }
    if (m_tres.isSet()) {
        obj.insert(QString("TRES"), ::hm:slurm:client::toJsonValue(m_tres));
    }
    return obj;
}

OAIV0_0_40_accounting_allocated OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::getAllocated() const {
    return m_allocated;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::setAllocated(const OAIV0_0_40_accounting_allocated &allocated) {
    m_allocated = allocated;
    m_allocated_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::is_allocated_Set() const{
    return m_allocated_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::is_allocated_Valid() const{
    return m_allocated_isValid;
}

qint32 OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::getId() const {
    return m_id;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::is_id_Set() const{
    return m_id_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::is_id_Valid() const{
    return m_id_isValid;
}

qint64 OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::getStart() const {
    return m_start;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::setStart(const qint64 &start) {
    m_start = start;
    m_start_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::is_start_Set() const{
    return m_start_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::is_start_Valid() const{
    return m_start_isValid;
}

OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::getTres() const {
    return m_tres;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::setTres(const OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES &tres) {
    m_tres = tres;
    m_tres_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::is_tres_Set() const{
    return m_tres_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::is_tres_Valid() const{
    return m_tres_isValid;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_allocated.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_start_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tres.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
