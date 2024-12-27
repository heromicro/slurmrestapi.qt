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

#include "OAIV0_0_40_partition_info_timeouts.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_40_partition_info_timeouts::OAIV0_0_40_partition_info_timeouts(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_partition_info_timeouts::OAIV0_0_40_partition_info_timeouts() {
    this->initializeModel();
}

OAIV0_0_40_partition_info_timeouts::~OAIV0_0_40_partition_info_timeouts() {}

void OAIV0_0_40_partition_info_timeouts::initializeModel() {

    m_resume_isSet = false;
    m_resume_isValid = false;

    m_suspend_isSet = false;
    m_suspend_isValid = false;
}

void OAIV0_0_40_partition_info_timeouts::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_partition_info_timeouts::fromJsonObject(QJsonObject json) {

    m_resume_isValid = ::hm:slurm:client::fromJsonValue(m_resume, json[QString("resume")]);
    m_resume_isSet = !json[QString("resume")].isNull() && m_resume_isValid;

    m_suspend_isValid = ::hm:slurm:client::fromJsonValue(m_suspend, json[QString("suspend")]);
    m_suspend_isSet = !json[QString("suspend")].isNull() && m_suspend_isValid;
}

QString OAIV0_0_40_partition_info_timeouts::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_partition_info_timeouts::asJsonObject() const {
    QJsonObject obj;
    if (m_resume.isSet()) {
        obj.insert(QString("resume"), ::hm:slurm:client::toJsonValue(m_resume));
    }
    if (m_suspend.isSet()) {
        obj.insert(QString("suspend"), ::hm:slurm:client::toJsonValue(m_suspend));
    }
    return obj;
}

OAIV0_0_40_uint16_no_val OAIV0_0_40_partition_info_timeouts::getResume() const {
    return m_resume;
}
void OAIV0_0_40_partition_info_timeouts::setResume(const OAIV0_0_40_uint16_no_val &resume) {
    m_resume = resume;
    m_resume_isSet = true;
}

bool OAIV0_0_40_partition_info_timeouts::is_resume_Set() const{
    return m_resume_isSet;
}

bool OAIV0_0_40_partition_info_timeouts::is_resume_Valid() const{
    return m_resume_isValid;
}

OAIV0_0_40_uint16_no_val OAIV0_0_40_partition_info_timeouts::getSuspend() const {
    return m_suspend;
}
void OAIV0_0_40_partition_info_timeouts::setSuspend(const OAIV0_0_40_uint16_no_val &suspend) {
    m_suspend = suspend;
    m_suspend_isSet = true;
}

bool OAIV0_0_40_partition_info_timeouts::is_suspend_Set() const{
    return m_suspend_isSet;
}

bool OAIV0_0_40_partition_info_timeouts::is_suspend_Valid() const{
    return m_suspend_isValid;
}

bool OAIV0_0_40_partition_info_timeouts::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_resume.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_suspend.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_partition_info_timeouts::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
