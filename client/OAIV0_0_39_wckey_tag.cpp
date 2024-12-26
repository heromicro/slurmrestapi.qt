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

#include "OAIV0_0_39_wckey_tag.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_wckey_tag::OAIV0_0_39_wckey_tag(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_wckey_tag::OAIV0_0_39_wckey_tag() {
    this->initializeModel();
}

OAIV0_0_39_wckey_tag::~OAIV0_0_39_wckey_tag() {}

void OAIV0_0_39_wckey_tag::initializeModel() {

    m_wckey_isSet = false;
    m_wckey_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;
}

void OAIV0_0_39_wckey_tag::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_wckey_tag::fromJsonObject(QJsonObject json) {

    m_wckey_isValid = ::OpenAPI::fromJsonValue(m_wckey, json[QString("wckey")]);
    m_wckey_isSet = !json[QString("wckey")].isNull() && m_wckey_isValid;

    m_flags_isValid = ::OpenAPI::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;
}

QString OAIV0_0_39_wckey_tag::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_wckey_tag::asJsonObject() const {
    QJsonObject obj;
    if (m_wckey_isSet) {
        obj.insert(QString("wckey"), ::OpenAPI::toJsonValue(m_wckey));
    }
    if (m_flags.size() > 0) {
        obj.insert(QString("flags"), ::OpenAPI::toJsonValue(m_flags));
    }
    return obj;
}

QString OAIV0_0_39_wckey_tag::getWckey() const {
    return m_wckey;
}
void OAIV0_0_39_wckey_tag::setWckey(const QString &wckey) {
    m_wckey = wckey;
    m_wckey_isSet = true;
}

bool OAIV0_0_39_wckey_tag::is_wckey_Set() const{
    return m_wckey_isSet;
}

bool OAIV0_0_39_wckey_tag::is_wckey_Valid() const{
    return m_wckey_isValid;
}

QList<QString> OAIV0_0_39_wckey_tag::getFlags() const {
    return m_flags;
}
void OAIV0_0_39_wckey_tag::setFlags(const QList<QString> &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIV0_0_39_wckey_tag::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIV0_0_39_wckey_tag::is_flags_Valid() const{
    return m_flags_isValid;
}

bool OAIV0_0_39_wckey_tag::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_wckey_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_wckey_tag::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
