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

#include "OAIV0_0_40_wckey_tag_struct.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_40_wckey_tag_struct::OAIV0_0_40_wckey_tag_struct(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_wckey_tag_struct::OAIV0_0_40_wckey_tag_struct() {
    this->initializeModel();
}

OAIV0_0_40_wckey_tag_struct::~OAIV0_0_40_wckey_tag_struct() {}

void OAIV0_0_40_wckey_tag_struct::initializeModel() {

    m_wckey_isSet = false;
    m_wckey_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;
}

void OAIV0_0_40_wckey_tag_struct::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_wckey_tag_struct::fromJsonObject(QJsonObject json) {

    m_wckey_isValid = ::hm:slurm:client::fromJsonValue(m_wckey, json[QString("wckey")]);
    m_wckey_isSet = !json[QString("wckey")].isNull() && m_wckey_isValid;

    m_flags_isValid = ::hm:slurm:client::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;
}

QString OAIV0_0_40_wckey_tag_struct::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_wckey_tag_struct::asJsonObject() const {
    QJsonObject obj;
    if (m_wckey_isSet) {
        obj.insert(QString("wckey"), ::hm:slurm:client::toJsonValue(m_wckey));
    }
    if (m_flags.size() > 0) {
        obj.insert(QString("flags"), ::hm:slurm:client::toJsonValue(m_flags));
    }
    return obj;
}

QString OAIV0_0_40_wckey_tag_struct::getWckey() const {
    return m_wckey;
}
void OAIV0_0_40_wckey_tag_struct::setWckey(const QString &wckey) {
    m_wckey = wckey;
    m_wckey_isSet = true;
}

bool OAIV0_0_40_wckey_tag_struct::is_wckey_Set() const{
    return m_wckey_isSet;
}

bool OAIV0_0_40_wckey_tag_struct::is_wckey_Valid() const{
    return m_wckey_isValid;
}

QList<QString> OAIV0_0_40_wckey_tag_struct::getFlags() const {
    return m_flags;
}
void OAIV0_0_40_wckey_tag_struct::setFlags(const QList<QString> &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIV0_0_40_wckey_tag_struct::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIV0_0_40_wckey_tag_struct::is_flags_Valid() const{
    return m_flags_isValid;
}

bool OAIV0_0_40_wckey_tag_struct::isSet() const {
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

bool OAIV0_0_40_wckey_tag_struct::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_wckey_isValid && m_flags_isValid && true;
}

} // namespace hm:slurm:client
