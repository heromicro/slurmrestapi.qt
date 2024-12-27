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

#include "OAIV0_0_39_user.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_39_user::OAIV0_0_39_user(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_user::OAIV0_0_39_user() {
    this->initializeModel();
}

OAIV0_0_39_user::~OAIV0_0_39_user() {}

void OAIV0_0_39_user::initializeModel() {

    m_administrator_level_isSet = false;
    m_administrator_level_isValid = false;

    m_associations_isSet = false;
    m_associations_isValid = false;

    m_coordinators_isSet = false;
    m_coordinators_isValid = false;

    m_r_default_isSet = false;
    m_r_default_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_old_name_isSet = false;
    m_old_name_isValid = false;

    m_wckeys_isSet = false;
    m_wckeys_isValid = false;
}

void OAIV0_0_39_user::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_user::fromJsonObject(QJsonObject json) {

    m_administrator_level_isValid = ::hm:slurm:client::fromJsonValue(m_administrator_level, json[QString("administrator_level")]);
    m_administrator_level_isSet = !json[QString("administrator_level")].isNull() && m_administrator_level_isValid;

    m_associations_isValid = ::hm:slurm:client::fromJsonValue(m_associations, json[QString("associations")]);
    m_associations_isSet = !json[QString("associations")].isNull() && m_associations_isValid;

    m_coordinators_isValid = ::hm:slurm:client::fromJsonValue(m_coordinators, json[QString("coordinators")]);
    m_coordinators_isSet = !json[QString("coordinators")].isNull() && m_coordinators_isValid;

    m_r_default_isValid = ::hm:slurm:client::fromJsonValue(m_r_default, json[QString("default")]);
    m_r_default_isSet = !json[QString("default")].isNull() && m_r_default_isValid;

    m_flags_isValid = ::hm:slurm:client::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_name_isValid = ::hm:slurm:client::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_old_name_isValid = ::hm:slurm:client::fromJsonValue(m_old_name, json[QString("old_name")]);
    m_old_name_isSet = !json[QString("old_name")].isNull() && m_old_name_isValid;

    m_wckeys_isValid = ::hm:slurm:client::fromJsonValue(m_wckeys, json[QString("wckeys")]);
    m_wckeys_isSet = !json[QString("wckeys")].isNull() && m_wckeys_isValid;
}

QString OAIV0_0_39_user::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_user::asJsonObject() const {
    QJsonObject obj;
    if (m_administrator_level.size() > 0) {
        obj.insert(QString("administrator_level"), ::hm:slurm:client::toJsonValue(m_administrator_level));
    }
    if (m_associations.size() > 0) {
        obj.insert(QString("associations"), ::hm:slurm:client::toJsonValue(m_associations));
    }
    if (m_coordinators.size() > 0) {
        obj.insert(QString("coordinators"), ::hm:slurm:client::toJsonValue(m_coordinators));
    }
    if (m_r_default.isSet()) {
        obj.insert(QString("default"), ::hm:slurm:client::toJsonValue(m_r_default));
    }
    if (m_flags.size() > 0) {
        obj.insert(QString("flags"), ::hm:slurm:client::toJsonValue(m_flags));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::hm:slurm:client::toJsonValue(m_name));
    }
    if (m_old_name_isSet) {
        obj.insert(QString("old_name"), ::hm:slurm:client::toJsonValue(m_old_name));
    }
    if (m_wckeys.size() > 0) {
        obj.insert(QString("wckeys"), ::hm:slurm:client::toJsonValue(m_wckeys));
    }
    return obj;
}

QList<QString> OAIV0_0_39_user::getAdministratorLevel() const {
    return m_administrator_level;
}
void OAIV0_0_39_user::setAdministratorLevel(const QList<QString> &administrator_level) {
    m_administrator_level = administrator_level;
    m_administrator_level_isSet = true;
}

bool OAIV0_0_39_user::is_administrator_level_Set() const{
    return m_administrator_level_isSet;
}

bool OAIV0_0_39_user::is_administrator_level_Valid() const{
    return m_administrator_level_isValid;
}

QList<OAIV0_0_39_assoc_short> OAIV0_0_39_user::getAssociations() const {
    return m_associations;
}
void OAIV0_0_39_user::setAssociations(const QList<OAIV0_0_39_assoc_short> &associations) {
    m_associations = associations;
    m_associations_isSet = true;
}

bool OAIV0_0_39_user::is_associations_Set() const{
    return m_associations_isSet;
}

bool OAIV0_0_39_user::is_associations_Valid() const{
    return m_associations_isValid;
}

QList<OAIV0_0_39_coord> OAIV0_0_39_user::getCoordinators() const {
    return m_coordinators;
}
void OAIV0_0_39_user::setCoordinators(const QList<OAIV0_0_39_coord> &coordinators) {
    m_coordinators = coordinators;
    m_coordinators_isSet = true;
}

bool OAIV0_0_39_user::is_coordinators_Set() const{
    return m_coordinators_isSet;
}

bool OAIV0_0_39_user::is_coordinators_Valid() const{
    return m_coordinators_isValid;
}

OAIV0_0_39_user_default OAIV0_0_39_user::getRDefault() const {
    return m_r_default;
}
void OAIV0_0_39_user::setRDefault(const OAIV0_0_39_user_default &r_default) {
    m_r_default = r_default;
    m_r_default_isSet = true;
}

bool OAIV0_0_39_user::is_r_default_Set() const{
    return m_r_default_isSet;
}

bool OAIV0_0_39_user::is_r_default_Valid() const{
    return m_r_default_isValid;
}

QList<QString> OAIV0_0_39_user::getFlags() const {
    return m_flags;
}
void OAIV0_0_39_user::setFlags(const QList<QString> &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIV0_0_39_user::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIV0_0_39_user::is_flags_Valid() const{
    return m_flags_isValid;
}

QString OAIV0_0_39_user::getName() const {
    return m_name;
}
void OAIV0_0_39_user::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIV0_0_39_user::is_name_Set() const{
    return m_name_isSet;
}

bool OAIV0_0_39_user::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIV0_0_39_user::getOldName() const {
    return m_old_name;
}
void OAIV0_0_39_user::setOldName(const QString &old_name) {
    m_old_name = old_name;
    m_old_name_isSet = true;
}

bool OAIV0_0_39_user::is_old_name_Set() const{
    return m_old_name_isSet;
}

bool OAIV0_0_39_user::is_old_name_Valid() const{
    return m_old_name_isValid;
}

QList<OAIV0_0_39_wckey> OAIV0_0_39_user::getWckeys() const {
    return m_wckeys;
}
void OAIV0_0_39_user::setWckeys(const QList<OAIV0_0_39_wckey> &wckeys) {
    m_wckeys = wckeys;
    m_wckeys_isSet = true;
}

bool OAIV0_0_39_user::is_wckeys_Set() const{
    return m_wckeys_isSet;
}

bool OAIV0_0_39_user::is_wckeys_Valid() const{
    return m_wckeys_isValid;
}

bool OAIV0_0_39_user::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_administrator_level.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_associations.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_coordinators.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_r_default.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_old_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_wckeys.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_user::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && true;
}

} // namespace hm:slurm:client
