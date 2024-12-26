/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIV0_0_39_tres.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_tres::OAIV0_0_39_tres(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_tres::OAIV0_0_39_tres() {
    this->initializeModel();
}

OAIV0_0_39_tres::~OAIV0_0_39_tres() {}

void OAIV0_0_39_tres::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_count_isSet = false;
    m_count_isValid = false;
}

void OAIV0_0_39_tres::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_tres::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::OpenAPI::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_count_isValid = ::OpenAPI::fromJsonValue(m_count, json[QString("count")]);
    m_count_isSet = !json[QString("count")].isNull() && m_count_isValid;
}

QString OAIV0_0_39_tres::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_tres::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(m_type));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_count_isSet) {
        obj.insert(QString("count"), ::OpenAPI::toJsonValue(m_count));
    }
    return obj;
}

QString OAIV0_0_39_tres::getType() const {
    return m_type;
}
void OAIV0_0_39_tres::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIV0_0_39_tres::is_type_Set() const{
    return m_type_isSet;
}

bool OAIV0_0_39_tres::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIV0_0_39_tres::getName() const {
    return m_name;
}
void OAIV0_0_39_tres::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIV0_0_39_tres::is_name_Set() const{
    return m_name_isSet;
}

bool OAIV0_0_39_tres::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAIV0_0_39_tres::getId() const {
    return m_id;
}
void OAIV0_0_39_tres::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIV0_0_39_tres::is_id_Set() const{
    return m_id_isSet;
}

bool OAIV0_0_39_tres::is_id_Valid() const{
    return m_id_isValid;
}

qint64 OAIV0_0_39_tres::getCount() const {
    return m_count;
}
void OAIV0_0_39_tres::setCount(const qint64 &count) {
    m_count = count;
    m_count_isSet = true;
}

bool OAIV0_0_39_tres::is_count_Set() const{
    return m_count_isSet;
}

bool OAIV0_0_39_tres::is_count_Valid() const{
    return m_count_isValid;
}

bool OAIV0_0_39_tres::isSet() const {
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

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_tres::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && true;
}

} // namespace OpenAPI
