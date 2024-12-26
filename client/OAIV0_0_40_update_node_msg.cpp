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

#include "OAIV0_0_40_update_node_msg.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_40_update_node_msg::OAIV0_0_40_update_node_msg(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_update_node_msg::OAIV0_0_40_update_node_msg() {
    this->initializeModel();
}

OAIV0_0_40_update_node_msg::~OAIV0_0_40_update_node_msg() {}

void OAIV0_0_40_update_node_msg::initializeModel() {

    m_comment_isSet = false;
    m_comment_isValid = false;

    m_cpu_bind_isSet = false;
    m_cpu_bind_isValid = false;

    m_extra_isSet = false;
    m_extra_isValid = false;

    m_features_isSet = false;
    m_features_isValid = false;

    m_features_act_isSet = false;
    m_features_act_isValid = false;

    m_gres_isSet = false;
    m_gres_isValid = false;

    m_address_isSet = false;
    m_address_isValid = false;

    m_hostname_isSet = false;
    m_hostname_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_state_isSet = false;
    m_state_isValid = false;

    m_reason_isSet = false;
    m_reason_isValid = false;

    m_reason_uid_isSet = false;
    m_reason_uid_isValid = false;

    m_resume_after_isSet = false;
    m_resume_after_isValid = false;

    m_weight_isSet = false;
    m_weight_isValid = false;
}

void OAIV0_0_40_update_node_msg::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_update_node_msg::fromJsonObject(QJsonObject json) {

    m_comment_isValid = ::OpenAPI::fromJsonValue(m_comment, json[QString("comment")]);
    m_comment_isSet = !json[QString("comment")].isNull() && m_comment_isValid;

    m_cpu_bind_isValid = ::OpenAPI::fromJsonValue(m_cpu_bind, json[QString("cpu_bind")]);
    m_cpu_bind_isSet = !json[QString("cpu_bind")].isNull() && m_cpu_bind_isValid;

    m_extra_isValid = ::OpenAPI::fromJsonValue(m_extra, json[QString("extra")]);
    m_extra_isSet = !json[QString("extra")].isNull() && m_extra_isValid;

    m_features_isValid = ::OpenAPI::fromJsonValue(m_features, json[QString("features")]);
    m_features_isSet = !json[QString("features")].isNull() && m_features_isValid;

    m_features_act_isValid = ::OpenAPI::fromJsonValue(m_features_act, json[QString("features_act")]);
    m_features_act_isSet = !json[QString("features_act")].isNull() && m_features_act_isValid;

    m_gres_isValid = ::OpenAPI::fromJsonValue(m_gres, json[QString("gres")]);
    m_gres_isSet = !json[QString("gres")].isNull() && m_gres_isValid;

    m_address_isValid = ::OpenAPI::fromJsonValue(m_address, json[QString("address")]);
    m_address_isSet = !json[QString("address")].isNull() && m_address_isValid;

    m_hostname_isValid = ::OpenAPI::fromJsonValue(m_hostname, json[QString("hostname")]);
    m_hostname_isSet = !json[QString("hostname")].isNull() && m_hostname_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_state_isValid = ::OpenAPI::fromJsonValue(m_state, json[QString("state")]);
    m_state_isSet = !json[QString("state")].isNull() && m_state_isValid;

    m_reason_isValid = ::OpenAPI::fromJsonValue(m_reason, json[QString("reason")]);
    m_reason_isSet = !json[QString("reason")].isNull() && m_reason_isValid;

    m_reason_uid_isValid = ::OpenAPI::fromJsonValue(m_reason_uid, json[QString("reason_uid")]);
    m_reason_uid_isSet = !json[QString("reason_uid")].isNull() && m_reason_uid_isValid;

    m_resume_after_isValid = ::OpenAPI::fromJsonValue(m_resume_after, json[QString("resume_after")]);
    m_resume_after_isSet = !json[QString("resume_after")].isNull() && m_resume_after_isValid;

    m_weight_isValid = ::OpenAPI::fromJsonValue(m_weight, json[QString("weight")]);
    m_weight_isSet = !json[QString("weight")].isNull() && m_weight_isValid;
}

QString OAIV0_0_40_update_node_msg::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_update_node_msg::asJsonObject() const {
    QJsonObject obj;
    if (m_comment_isSet) {
        obj.insert(QString("comment"), ::OpenAPI::toJsonValue(m_comment));
    }
    if (m_cpu_bind_isSet) {
        obj.insert(QString("cpu_bind"), ::OpenAPI::toJsonValue(m_cpu_bind));
    }
    if (m_extra_isSet) {
        obj.insert(QString("extra"), ::OpenAPI::toJsonValue(m_extra));
    }
    if (m_features.size() > 0) {
        obj.insert(QString("features"), ::OpenAPI::toJsonValue(m_features));
    }
    if (m_features_act.size() > 0) {
        obj.insert(QString("features_act"), ::OpenAPI::toJsonValue(m_features_act));
    }
    if (m_gres_isSet) {
        obj.insert(QString("gres"), ::OpenAPI::toJsonValue(m_gres));
    }
    if (m_address.size() > 0) {
        obj.insert(QString("address"), ::OpenAPI::toJsonValue(m_address));
    }
    if (m_hostname.size() > 0) {
        obj.insert(QString("hostname"), ::OpenAPI::toJsonValue(m_hostname));
    }
    if (m_name.size() > 0) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_state.size() > 0) {
        obj.insert(QString("state"), ::OpenAPI::toJsonValue(m_state));
    }
    if (m_reason_isSet) {
        obj.insert(QString("reason"), ::OpenAPI::toJsonValue(m_reason));
    }
    if (m_reason_uid_isSet) {
        obj.insert(QString("reason_uid"), ::OpenAPI::toJsonValue(m_reason_uid));
    }
    if (m_resume_after.isSet()) {
        obj.insert(QString("resume_after"), ::OpenAPI::toJsonValue(m_resume_after));
    }
    if (m_weight.isSet()) {
        obj.insert(QString("weight"), ::OpenAPI::toJsonValue(m_weight));
    }
    return obj;
}

QString OAIV0_0_40_update_node_msg::getComment() const {
    return m_comment;
}
void OAIV0_0_40_update_node_msg::setComment(const QString &comment) {
    m_comment = comment;
    m_comment_isSet = true;
}

bool OAIV0_0_40_update_node_msg::is_comment_Set() const{
    return m_comment_isSet;
}

bool OAIV0_0_40_update_node_msg::is_comment_Valid() const{
    return m_comment_isValid;
}

qint32 OAIV0_0_40_update_node_msg::getCpuBind() const {
    return m_cpu_bind;
}
void OAIV0_0_40_update_node_msg::setCpuBind(const qint32 &cpu_bind) {
    m_cpu_bind = cpu_bind;
    m_cpu_bind_isSet = true;
}

bool OAIV0_0_40_update_node_msg::is_cpu_bind_Set() const{
    return m_cpu_bind_isSet;
}

bool OAIV0_0_40_update_node_msg::is_cpu_bind_Valid() const{
    return m_cpu_bind_isValid;
}

QString OAIV0_0_40_update_node_msg::getExtra() const {
    return m_extra;
}
void OAIV0_0_40_update_node_msg::setExtra(const QString &extra) {
    m_extra = extra;
    m_extra_isSet = true;
}

bool OAIV0_0_40_update_node_msg::is_extra_Set() const{
    return m_extra_isSet;
}

bool OAIV0_0_40_update_node_msg::is_extra_Valid() const{
    return m_extra_isValid;
}

QList<QString> OAIV0_0_40_update_node_msg::getFeatures() const {
    return m_features;
}
void OAIV0_0_40_update_node_msg::setFeatures(const QList<QString> &features) {
    m_features = features;
    m_features_isSet = true;
}

bool OAIV0_0_40_update_node_msg::is_features_Set() const{
    return m_features_isSet;
}

bool OAIV0_0_40_update_node_msg::is_features_Valid() const{
    return m_features_isValid;
}

QList<QString> OAIV0_0_40_update_node_msg::getFeaturesAct() const {
    return m_features_act;
}
void OAIV0_0_40_update_node_msg::setFeaturesAct(const QList<QString> &features_act) {
    m_features_act = features_act;
    m_features_act_isSet = true;
}

bool OAIV0_0_40_update_node_msg::is_features_act_Set() const{
    return m_features_act_isSet;
}

bool OAIV0_0_40_update_node_msg::is_features_act_Valid() const{
    return m_features_act_isValid;
}

QString OAIV0_0_40_update_node_msg::getGres() const {
    return m_gres;
}
void OAIV0_0_40_update_node_msg::setGres(const QString &gres) {
    m_gres = gres;
    m_gres_isSet = true;
}

bool OAIV0_0_40_update_node_msg::is_gres_Set() const{
    return m_gres_isSet;
}

bool OAIV0_0_40_update_node_msg::is_gres_Valid() const{
    return m_gres_isValid;
}

QList<QString> OAIV0_0_40_update_node_msg::getAddress() const {
    return m_address;
}
void OAIV0_0_40_update_node_msg::setAddress(const QList<QString> &address) {
    m_address = address;
    m_address_isSet = true;
}

bool OAIV0_0_40_update_node_msg::is_address_Set() const{
    return m_address_isSet;
}

bool OAIV0_0_40_update_node_msg::is_address_Valid() const{
    return m_address_isValid;
}

QList<QString> OAIV0_0_40_update_node_msg::getHostname() const {
    return m_hostname;
}
void OAIV0_0_40_update_node_msg::setHostname(const QList<QString> &hostname) {
    m_hostname = hostname;
    m_hostname_isSet = true;
}

bool OAIV0_0_40_update_node_msg::is_hostname_Set() const{
    return m_hostname_isSet;
}

bool OAIV0_0_40_update_node_msg::is_hostname_Valid() const{
    return m_hostname_isValid;
}

QList<QString> OAIV0_0_40_update_node_msg::getName() const {
    return m_name;
}
void OAIV0_0_40_update_node_msg::setName(const QList<QString> &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIV0_0_40_update_node_msg::is_name_Set() const{
    return m_name_isSet;
}

bool OAIV0_0_40_update_node_msg::is_name_Valid() const{
    return m_name_isValid;
}

QList<QString> OAIV0_0_40_update_node_msg::getState() const {
    return m_state;
}
void OAIV0_0_40_update_node_msg::setState(const QList<QString> &state) {
    m_state = state;
    m_state_isSet = true;
}

bool OAIV0_0_40_update_node_msg::is_state_Set() const{
    return m_state_isSet;
}

bool OAIV0_0_40_update_node_msg::is_state_Valid() const{
    return m_state_isValid;
}

QString OAIV0_0_40_update_node_msg::getReason() const {
    return m_reason;
}
void OAIV0_0_40_update_node_msg::setReason(const QString &reason) {
    m_reason = reason;
    m_reason_isSet = true;
}

bool OAIV0_0_40_update_node_msg::is_reason_Set() const{
    return m_reason_isSet;
}

bool OAIV0_0_40_update_node_msg::is_reason_Valid() const{
    return m_reason_isValid;
}

QString OAIV0_0_40_update_node_msg::getReasonUid() const {
    return m_reason_uid;
}
void OAIV0_0_40_update_node_msg::setReasonUid(const QString &reason_uid) {
    m_reason_uid = reason_uid;
    m_reason_uid_isSet = true;
}

bool OAIV0_0_40_update_node_msg::is_reason_uid_Set() const{
    return m_reason_uid_isSet;
}

bool OAIV0_0_40_update_node_msg::is_reason_uid_Valid() const{
    return m_reason_uid_isValid;
}

OAIV0_0_40_uint32_no_val OAIV0_0_40_update_node_msg::getResumeAfter() const {
    return m_resume_after;
}
void OAIV0_0_40_update_node_msg::setResumeAfter(const OAIV0_0_40_uint32_no_val &resume_after) {
    m_resume_after = resume_after;
    m_resume_after_isSet = true;
}

bool OAIV0_0_40_update_node_msg::is_resume_after_Set() const{
    return m_resume_after_isSet;
}

bool OAIV0_0_40_update_node_msg::is_resume_after_Valid() const{
    return m_resume_after_isValid;
}

OAIV0_0_40_uint32_no_val OAIV0_0_40_update_node_msg::getWeight() const {
    return m_weight;
}
void OAIV0_0_40_update_node_msg::setWeight(const OAIV0_0_40_uint32_no_val &weight) {
    m_weight = weight;
    m_weight_isSet = true;
}

bool OAIV0_0_40_update_node_msg::is_weight_Set() const{
    return m_weight_isSet;
}

bool OAIV0_0_40_update_node_msg::is_weight_Valid() const{
    return m_weight_isValid;
}

bool OAIV0_0_40_update_node_msg::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_comment_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cpu_bind_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_extra_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_features.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_features_act.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_gres_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_address.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_hostname.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_name.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_state.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_reason_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reason_uid_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_resume_after.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_weight.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_update_node_msg::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
