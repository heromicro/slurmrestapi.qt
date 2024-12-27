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

#include "OAIV0_0_40_shares_resp_msg.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_40_shares_resp_msg::OAIV0_0_40_shares_resp_msg(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_shares_resp_msg::OAIV0_0_40_shares_resp_msg() {
    this->initializeModel();
}

OAIV0_0_40_shares_resp_msg::~OAIV0_0_40_shares_resp_msg() {}

void OAIV0_0_40_shares_resp_msg::initializeModel() {

    m_shares_isSet = false;
    m_shares_isValid = false;

    m_total_shares_isSet = false;
    m_total_shares_isValid = false;
}

void OAIV0_0_40_shares_resp_msg::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_shares_resp_msg::fromJsonObject(QJsonObject json) {

    m_shares_isValid = ::hm:slurm:client::fromJsonValue(m_shares, json[QString("shares")]);
    m_shares_isSet = !json[QString("shares")].isNull() && m_shares_isValid;

    m_total_shares_isValid = ::hm:slurm:client::fromJsonValue(m_total_shares, json[QString("total_shares")]);
    m_total_shares_isSet = !json[QString("total_shares")].isNull() && m_total_shares_isValid;
}

QString OAIV0_0_40_shares_resp_msg::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_shares_resp_msg::asJsonObject() const {
    QJsonObject obj;
    if (m_shares.size() > 0) {
        obj.insert(QString("shares"), ::hm:slurm:client::toJsonValue(m_shares));
    }
    if (m_total_shares_isSet) {
        obj.insert(QString("total_shares"), ::hm:slurm:client::toJsonValue(m_total_shares));
    }
    return obj;
}

QList<OAIV0_0_40_assoc_shares_obj_wrap> OAIV0_0_40_shares_resp_msg::getShares() const {
    return m_shares;
}
void OAIV0_0_40_shares_resp_msg::setShares(const QList<OAIV0_0_40_assoc_shares_obj_wrap> &shares) {
    m_shares = shares;
    m_shares_isSet = true;
}

bool OAIV0_0_40_shares_resp_msg::is_shares_Set() const{
    return m_shares_isSet;
}

bool OAIV0_0_40_shares_resp_msg::is_shares_Valid() const{
    return m_shares_isValid;
}

qint64 OAIV0_0_40_shares_resp_msg::getTotalShares() const {
    return m_total_shares;
}
void OAIV0_0_40_shares_resp_msg::setTotalShares(const qint64 &total_shares) {
    m_total_shares = total_shares;
    m_total_shares_isSet = true;
}

bool OAIV0_0_40_shares_resp_msg::is_total_shares_Set() const{
    return m_total_shares_isSet;
}

bool OAIV0_0_40_shares_resp_msg::is_total_shares_Valid() const{
    return m_total_shares_isValid;
}

bool OAIV0_0_40_shares_resp_msg::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_shares.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_shares_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_shares_resp_msg::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client