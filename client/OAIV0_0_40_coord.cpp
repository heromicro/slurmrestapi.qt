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

#include "OAIV0_0_40_coord.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_40_coord::OAIV0_0_40_coord(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_coord::OAIV0_0_40_coord() {
    this->initializeModel();
}

OAIV0_0_40_coord::~OAIV0_0_40_coord() {}

void OAIV0_0_40_coord::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_direct_isSet = false;
    m_direct_isValid = false;
}

void OAIV0_0_40_coord::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_coord::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::hm:slurm:client::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_direct_isValid = ::hm:slurm:client::fromJsonValue(m_direct, json[QString("direct")]);
    m_direct_isSet = !json[QString("direct")].isNull() && m_direct_isValid;
}

QString OAIV0_0_40_coord::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_coord::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::hm:slurm:client::toJsonValue(m_name));
    }
    if (m_direct_isSet) {
        obj.insert(QString("direct"), ::hm:slurm:client::toJsonValue(m_direct));
    }
    return obj;
}

QString OAIV0_0_40_coord::getName() const {
    return m_name;
}
void OAIV0_0_40_coord::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIV0_0_40_coord::is_name_Set() const{
    return m_name_isSet;
}

bool OAIV0_0_40_coord::is_name_Valid() const{
    return m_name_isValid;
}

bool OAIV0_0_40_coord::isDirect() const {
    return m_direct;
}
void OAIV0_0_40_coord::setDirect(const bool &direct) {
    m_direct = direct;
    m_direct_isSet = true;
}

bool OAIV0_0_40_coord::is_direct_Set() const{
    return m_direct_isSet;
}

bool OAIV0_0_40_coord::is_direct_Valid() const{
    return m_direct_isValid;
}

bool OAIV0_0_40_coord::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_direct_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_coord::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && true;
}

} // namespace hm:slurm:client
