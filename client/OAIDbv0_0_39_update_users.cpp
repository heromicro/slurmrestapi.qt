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

#include "OAIDbv0_0_39_update_users.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIDbv0_0_39_update_users::OAIDbv0_0_39_update_users(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDbv0_0_39_update_users::OAIDbv0_0_39_update_users() {
    this->initializeModel();
}

OAIDbv0_0_39_update_users::~OAIDbv0_0_39_update_users() {}

void OAIDbv0_0_39_update_users::initializeModel() {

    m_users_isSet = false;
    m_users_isValid = false;
}

void OAIDbv0_0_39_update_users::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDbv0_0_39_update_users::fromJsonObject(QJsonObject json) {

    m_users_isValid = ::hm:slurm:client::fromJsonValue(m_users, json[QString("users")]);
    m_users_isSet = !json[QString("users")].isNull() && m_users_isValid;
}

QString OAIDbv0_0_39_update_users::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDbv0_0_39_update_users::asJsonObject() const {
    QJsonObject obj;
    if (m_users.size() > 0) {
        obj.insert(QString("users"), ::hm:slurm:client::toJsonValue(m_users));
    }
    return obj;
}

QList<OAIV0_0_39_user> OAIDbv0_0_39_update_users::getUsers() const {
    return m_users;
}
void OAIDbv0_0_39_update_users::setUsers(const QList<OAIV0_0_39_user> &users) {
    m_users = users;
    m_users_isSet = true;
}

bool OAIDbv0_0_39_update_users::is_users_Set() const{
    return m_users_isSet;
}

bool OAIDbv0_0_39_update_users::is_users_Valid() const{
    return m_users_isValid;
}

bool OAIDbv0_0_39_update_users::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_users.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDbv0_0_39_update_users::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client