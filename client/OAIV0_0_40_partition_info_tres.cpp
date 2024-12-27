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

#include "OAIV0_0_40_partition_info_tres.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_40_partition_info_tres::OAIV0_0_40_partition_info_tres(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_partition_info_tres::OAIV0_0_40_partition_info_tres() {
    this->initializeModel();
}

OAIV0_0_40_partition_info_tres::~OAIV0_0_40_partition_info_tres() {}

void OAIV0_0_40_partition_info_tres::initializeModel() {

    m_billing_weights_isSet = false;
    m_billing_weights_isValid = false;

    m_configured_isSet = false;
    m_configured_isValid = false;
}

void OAIV0_0_40_partition_info_tres::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_partition_info_tres::fromJsonObject(QJsonObject json) {

    m_billing_weights_isValid = ::hm:slurm:client::fromJsonValue(m_billing_weights, json[QString("billing_weights")]);
    m_billing_weights_isSet = !json[QString("billing_weights")].isNull() && m_billing_weights_isValid;

    m_configured_isValid = ::hm:slurm:client::fromJsonValue(m_configured, json[QString("configured")]);
    m_configured_isSet = !json[QString("configured")].isNull() && m_configured_isValid;
}

QString OAIV0_0_40_partition_info_tres::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_partition_info_tres::asJsonObject() const {
    QJsonObject obj;
    if (m_billing_weights_isSet) {
        obj.insert(QString("billing_weights"), ::hm:slurm:client::toJsonValue(m_billing_weights));
    }
    if (m_configured_isSet) {
        obj.insert(QString("configured"), ::hm:slurm:client::toJsonValue(m_configured));
    }
    return obj;
}

QString OAIV0_0_40_partition_info_tres::getBillingWeights() const {
    return m_billing_weights;
}
void OAIV0_0_40_partition_info_tres::setBillingWeights(const QString &billing_weights) {
    m_billing_weights = billing_weights;
    m_billing_weights_isSet = true;
}

bool OAIV0_0_40_partition_info_tres::is_billing_weights_Set() const{
    return m_billing_weights_isSet;
}

bool OAIV0_0_40_partition_info_tres::is_billing_weights_Valid() const{
    return m_billing_weights_isValid;
}

QString OAIV0_0_40_partition_info_tres::getConfigured() const {
    return m_configured;
}
void OAIV0_0_40_partition_info_tres::setConfigured(const QString &configured) {
    m_configured = configured;
    m_configured_isSet = true;
}

bool OAIV0_0_40_partition_info_tres::is_configured_Set() const{
    return m_configured_isSet;
}

bool OAIV0_0_40_partition_info_tres::is_configured_Valid() const{
    return m_configured_isValid;
}

bool OAIV0_0_40_partition_info_tres::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_billing_weights_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_configured_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_partition_info_tres::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
