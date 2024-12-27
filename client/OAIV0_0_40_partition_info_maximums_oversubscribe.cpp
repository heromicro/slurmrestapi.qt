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

#include "OAIV0_0_40_partition_info_maximums_oversubscribe.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_40_partition_info_maximums_oversubscribe::OAIV0_0_40_partition_info_maximums_oversubscribe(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_partition_info_maximums_oversubscribe::OAIV0_0_40_partition_info_maximums_oversubscribe() {
    this->initializeModel();
}

OAIV0_0_40_partition_info_maximums_oversubscribe::~OAIV0_0_40_partition_info_maximums_oversubscribe() {}

void OAIV0_0_40_partition_info_maximums_oversubscribe::initializeModel() {

    m_jobs_isSet = false;
    m_jobs_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;
}

void OAIV0_0_40_partition_info_maximums_oversubscribe::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_partition_info_maximums_oversubscribe::fromJsonObject(QJsonObject json) {

    m_jobs_isValid = ::hm:slurm:client::fromJsonValue(m_jobs, json[QString("jobs")]);
    m_jobs_isSet = !json[QString("jobs")].isNull() && m_jobs_isValid;

    m_flags_isValid = ::hm:slurm:client::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;
}

QString OAIV0_0_40_partition_info_maximums_oversubscribe::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_partition_info_maximums_oversubscribe::asJsonObject() const {
    QJsonObject obj;
    if (m_jobs_isSet) {
        obj.insert(QString("jobs"), ::hm:slurm:client::toJsonValue(m_jobs));
    }
    if (m_flags.size() > 0) {
        obj.insert(QString("flags"), ::hm:slurm:client::toJsonValue(m_flags));
    }
    return obj;
}

qint32 OAIV0_0_40_partition_info_maximums_oversubscribe::getJobs() const {
    return m_jobs;
}
void OAIV0_0_40_partition_info_maximums_oversubscribe::setJobs(const qint32 &jobs) {
    m_jobs = jobs;
    m_jobs_isSet = true;
}

bool OAIV0_0_40_partition_info_maximums_oversubscribe::is_jobs_Set() const{
    return m_jobs_isSet;
}

bool OAIV0_0_40_partition_info_maximums_oversubscribe::is_jobs_Valid() const{
    return m_jobs_isValid;
}

QList<QString> OAIV0_0_40_partition_info_maximums_oversubscribe::getFlags() const {
    return m_flags;
}
void OAIV0_0_40_partition_info_maximums_oversubscribe::setFlags(const QList<QString> &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIV0_0_40_partition_info_maximums_oversubscribe::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIV0_0_40_partition_info_maximums_oversubscribe::is_flags_Valid() const{
    return m_flags_isValid;
}

bool OAIV0_0_40_partition_info_maximums_oversubscribe::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_jobs_isSet) {
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

bool OAIV0_0_40_partition_info_maximums_oversubscribe::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
