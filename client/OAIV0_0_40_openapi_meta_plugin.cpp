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

#include "OAIV0_0_40_openapi_meta_plugin.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_40_openapi_meta_plugin::OAIV0_0_40_openapi_meta_plugin(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_openapi_meta_plugin::OAIV0_0_40_openapi_meta_plugin() {
    this->initializeModel();
}

OAIV0_0_40_openapi_meta_plugin::~OAIV0_0_40_openapi_meta_plugin() {}

void OAIV0_0_40_openapi_meta_plugin::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_data_parser_isSet = false;
    m_data_parser_isValid = false;

    m_accounting_storage_isSet = false;
    m_accounting_storage_isValid = false;
}

void OAIV0_0_40_openapi_meta_plugin::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_openapi_meta_plugin::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::hm:slurm:client::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_name_isValid = ::hm:slurm:client::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_data_parser_isValid = ::hm:slurm:client::fromJsonValue(m_data_parser, json[QString("data_parser")]);
    m_data_parser_isSet = !json[QString("data_parser")].isNull() && m_data_parser_isValid;

    m_accounting_storage_isValid = ::hm:slurm:client::fromJsonValue(m_accounting_storage, json[QString("accounting_storage")]);
    m_accounting_storage_isSet = !json[QString("accounting_storage")].isNull() && m_accounting_storage_isValid;
}

QString OAIV0_0_40_openapi_meta_plugin::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_openapi_meta_plugin::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::hm:slurm:client::toJsonValue(m_type));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::hm:slurm:client::toJsonValue(m_name));
    }
    if (m_data_parser_isSet) {
        obj.insert(QString("data_parser"), ::hm:slurm:client::toJsonValue(m_data_parser));
    }
    if (m_accounting_storage_isSet) {
        obj.insert(QString("accounting_storage"), ::hm:slurm:client::toJsonValue(m_accounting_storage));
    }
    return obj;
}

QString OAIV0_0_40_openapi_meta_plugin::getType() const {
    return m_type;
}
void OAIV0_0_40_openapi_meta_plugin::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIV0_0_40_openapi_meta_plugin::is_type_Set() const{
    return m_type_isSet;
}

bool OAIV0_0_40_openapi_meta_plugin::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIV0_0_40_openapi_meta_plugin::getName() const {
    return m_name;
}
void OAIV0_0_40_openapi_meta_plugin::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIV0_0_40_openapi_meta_plugin::is_name_Set() const{
    return m_name_isSet;
}

bool OAIV0_0_40_openapi_meta_plugin::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIV0_0_40_openapi_meta_plugin::getDataParser() const {
    return m_data_parser;
}
void OAIV0_0_40_openapi_meta_plugin::setDataParser(const QString &data_parser) {
    m_data_parser = data_parser;
    m_data_parser_isSet = true;
}

bool OAIV0_0_40_openapi_meta_plugin::is_data_parser_Set() const{
    return m_data_parser_isSet;
}

bool OAIV0_0_40_openapi_meta_plugin::is_data_parser_Valid() const{
    return m_data_parser_isValid;
}

QString OAIV0_0_40_openapi_meta_plugin::getAccountingStorage() const {
    return m_accounting_storage;
}
void OAIV0_0_40_openapi_meta_plugin::setAccountingStorage(const QString &accounting_storage) {
    m_accounting_storage = accounting_storage;
    m_accounting_storage_isSet = true;
}

bool OAIV0_0_40_openapi_meta_plugin::is_accounting_storage_Set() const{
    return m_accounting_storage_isSet;
}

bool OAIV0_0_40_openapi_meta_plugin::is_accounting_storage_Valid() const{
    return m_accounting_storage_isValid;
}

bool OAIV0_0_40_openapi_meta_plugin::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_data_parser_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_accounting_storage_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_openapi_meta_plugin::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
