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

#include "OAIV0_0_39_assoc_usage.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_assoc_usage::OAIV0_0_39_assoc_usage(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_assoc_usage::OAIV0_0_39_assoc_usage() {
    this->initializeModel();
}

OAIV0_0_39_assoc_usage::~OAIV0_0_39_assoc_usage() {}

void OAIV0_0_39_assoc_usage::initializeModel() {

    m_accrue_job_count_isSet = false;
    m_accrue_job_count_isValid = false;

    m_group_used_wallclock_isSet = false;
    m_group_used_wallclock_isValid = false;

    m_fairshare_factor_isSet = false;
    m_fairshare_factor_isValid = false;

    m_fairshare_shares_isSet = false;
    m_fairshare_shares_isValid = false;

    m_normalized_priority_isSet = false;
    m_normalized_priority_isValid = false;

    m_normalized_shares_isSet = false;
    m_normalized_shares_isValid = false;

    m_effective_normalized_usage_isSet = false;
    m_effective_normalized_usage_isValid = false;

    m_normalized_usage_isSet = false;
    m_normalized_usage_isValid = false;

    m_raw_usage_isSet = false;
    m_raw_usage_isValid = false;

    m_active_jobs_isSet = false;
    m_active_jobs_isValid = false;

    m_job_count_isSet = false;
    m_job_count_isValid = false;

    m_fairshare_level_isSet = false;
    m_fairshare_level_isValid = false;
}

void OAIV0_0_39_assoc_usage::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_assoc_usage::fromJsonObject(QJsonObject json) {

    m_accrue_job_count_isValid = ::OpenAPI::fromJsonValue(m_accrue_job_count, json[QString("accrue_job_count")]);
    m_accrue_job_count_isSet = !json[QString("accrue_job_count")].isNull() && m_accrue_job_count_isValid;

    m_group_used_wallclock_isValid = ::OpenAPI::fromJsonValue(m_group_used_wallclock, json[QString("group_used_wallclock")]);
    m_group_used_wallclock_isSet = !json[QString("group_used_wallclock")].isNull() && m_group_used_wallclock_isValid;

    m_fairshare_factor_isValid = ::OpenAPI::fromJsonValue(m_fairshare_factor, json[QString("fairshare_factor")]);
    m_fairshare_factor_isSet = !json[QString("fairshare_factor")].isNull() && m_fairshare_factor_isValid;

    m_fairshare_shares_isValid = ::OpenAPI::fromJsonValue(m_fairshare_shares, json[QString("fairshare_shares")]);
    m_fairshare_shares_isSet = !json[QString("fairshare_shares")].isNull() && m_fairshare_shares_isValid;

    m_normalized_priority_isValid = ::OpenAPI::fromJsonValue(m_normalized_priority, json[QString("normalized_priority")]);
    m_normalized_priority_isSet = !json[QString("normalized_priority")].isNull() && m_normalized_priority_isValid;

    m_normalized_shares_isValid = ::OpenAPI::fromJsonValue(m_normalized_shares, json[QString("normalized_shares")]);
    m_normalized_shares_isSet = !json[QString("normalized_shares")].isNull() && m_normalized_shares_isValid;

    m_effective_normalized_usage_isValid = ::OpenAPI::fromJsonValue(m_effective_normalized_usage, json[QString("effective_normalized_usage")]);
    m_effective_normalized_usage_isSet = !json[QString("effective_normalized_usage")].isNull() && m_effective_normalized_usage_isValid;

    m_normalized_usage_isValid = ::OpenAPI::fromJsonValue(m_normalized_usage, json[QString("normalized_usage")]);
    m_normalized_usage_isSet = !json[QString("normalized_usage")].isNull() && m_normalized_usage_isValid;

    m_raw_usage_isValid = ::OpenAPI::fromJsonValue(m_raw_usage, json[QString("raw_usage")]);
    m_raw_usage_isSet = !json[QString("raw_usage")].isNull() && m_raw_usage_isValid;

    m_active_jobs_isValid = ::OpenAPI::fromJsonValue(m_active_jobs, json[QString("active_jobs")]);
    m_active_jobs_isSet = !json[QString("active_jobs")].isNull() && m_active_jobs_isValid;

    m_job_count_isValid = ::OpenAPI::fromJsonValue(m_job_count, json[QString("job_count")]);
    m_job_count_isSet = !json[QString("job_count")].isNull() && m_job_count_isValid;

    m_fairshare_level_isValid = ::OpenAPI::fromJsonValue(m_fairshare_level, json[QString("fairshare_level")]);
    m_fairshare_level_isSet = !json[QString("fairshare_level")].isNull() && m_fairshare_level_isValid;
}

QString OAIV0_0_39_assoc_usage::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_assoc_usage::asJsonObject() const {
    QJsonObject obj;
    if (m_accrue_job_count_isSet) {
        obj.insert(QString("accrue_job_count"), ::OpenAPI::toJsonValue(m_accrue_job_count));
    }
    if (m_group_used_wallclock_isSet) {
        obj.insert(QString("group_used_wallclock"), ::OpenAPI::toJsonValue(m_group_used_wallclock));
    }
    if (m_fairshare_factor_isSet) {
        obj.insert(QString("fairshare_factor"), ::OpenAPI::toJsonValue(m_fairshare_factor));
    }
    if (m_fairshare_shares_isSet) {
        obj.insert(QString("fairshare_shares"), ::OpenAPI::toJsonValue(m_fairshare_shares));
    }
    if (m_normalized_priority_isSet) {
        obj.insert(QString("normalized_priority"), ::OpenAPI::toJsonValue(m_normalized_priority));
    }
    if (m_normalized_shares_isSet) {
        obj.insert(QString("normalized_shares"), ::OpenAPI::toJsonValue(m_normalized_shares));
    }
    if (m_effective_normalized_usage_isSet) {
        obj.insert(QString("effective_normalized_usage"), ::OpenAPI::toJsonValue(m_effective_normalized_usage));
    }
    if (m_normalized_usage_isSet) {
        obj.insert(QString("normalized_usage"), ::OpenAPI::toJsonValue(m_normalized_usage));
    }
    if (m_raw_usage_isSet) {
        obj.insert(QString("raw_usage"), ::OpenAPI::toJsonValue(m_raw_usage));
    }
    if (m_active_jobs_isSet) {
        obj.insert(QString("active_jobs"), ::OpenAPI::toJsonValue(m_active_jobs));
    }
    if (m_job_count_isSet) {
        obj.insert(QString("job_count"), ::OpenAPI::toJsonValue(m_job_count));
    }
    if (m_fairshare_level_isSet) {
        obj.insert(QString("fairshare_level"), ::OpenAPI::toJsonValue(m_fairshare_level));
    }
    return obj;
}

qint32 OAIV0_0_39_assoc_usage::getAccrueJobCount() const {
    return m_accrue_job_count;
}
void OAIV0_0_39_assoc_usage::setAccrueJobCount(const qint32 &accrue_job_count) {
    m_accrue_job_count = accrue_job_count;
    m_accrue_job_count_isSet = true;
}

bool OAIV0_0_39_assoc_usage::is_accrue_job_count_Set() const{
    return m_accrue_job_count_isSet;
}

bool OAIV0_0_39_assoc_usage::is_accrue_job_count_Valid() const{
    return m_accrue_job_count_isValid;
}

double OAIV0_0_39_assoc_usage::getGroupUsedWallclock() const {
    return m_group_used_wallclock;
}
void OAIV0_0_39_assoc_usage::setGroupUsedWallclock(const double &group_used_wallclock) {
    m_group_used_wallclock = group_used_wallclock;
    m_group_used_wallclock_isSet = true;
}

bool OAIV0_0_39_assoc_usage::is_group_used_wallclock_Set() const{
    return m_group_used_wallclock_isSet;
}

bool OAIV0_0_39_assoc_usage::is_group_used_wallclock_Valid() const{
    return m_group_used_wallclock_isValid;
}

double OAIV0_0_39_assoc_usage::getFairshareFactor() const {
    return m_fairshare_factor;
}
void OAIV0_0_39_assoc_usage::setFairshareFactor(const double &fairshare_factor) {
    m_fairshare_factor = fairshare_factor;
    m_fairshare_factor_isSet = true;
}

bool OAIV0_0_39_assoc_usage::is_fairshare_factor_Set() const{
    return m_fairshare_factor_isSet;
}

bool OAIV0_0_39_assoc_usage::is_fairshare_factor_Valid() const{
    return m_fairshare_factor_isValid;
}

qint32 OAIV0_0_39_assoc_usage::getFairshareShares() const {
    return m_fairshare_shares;
}
void OAIV0_0_39_assoc_usage::setFairshareShares(const qint32 &fairshare_shares) {
    m_fairshare_shares = fairshare_shares;
    m_fairshare_shares_isSet = true;
}

bool OAIV0_0_39_assoc_usage::is_fairshare_shares_Set() const{
    return m_fairshare_shares_isSet;
}

bool OAIV0_0_39_assoc_usage::is_fairshare_shares_Valid() const{
    return m_fairshare_shares_isValid;
}

double OAIV0_0_39_assoc_usage::getNormalizedPriority() const {
    return m_normalized_priority;
}
void OAIV0_0_39_assoc_usage::setNormalizedPriority(const double &normalized_priority) {
    m_normalized_priority = normalized_priority;
    m_normalized_priority_isSet = true;
}

bool OAIV0_0_39_assoc_usage::is_normalized_priority_Set() const{
    return m_normalized_priority_isSet;
}

bool OAIV0_0_39_assoc_usage::is_normalized_priority_Valid() const{
    return m_normalized_priority_isValid;
}

double OAIV0_0_39_assoc_usage::getNormalizedShares() const {
    return m_normalized_shares;
}
void OAIV0_0_39_assoc_usage::setNormalizedShares(const double &normalized_shares) {
    m_normalized_shares = normalized_shares;
    m_normalized_shares_isSet = true;
}

bool OAIV0_0_39_assoc_usage::is_normalized_shares_Set() const{
    return m_normalized_shares_isSet;
}

bool OAIV0_0_39_assoc_usage::is_normalized_shares_Valid() const{
    return m_normalized_shares_isValid;
}

double OAIV0_0_39_assoc_usage::getEffectiveNormalizedUsage() const {
    return m_effective_normalized_usage;
}
void OAIV0_0_39_assoc_usage::setEffectiveNormalizedUsage(const double &effective_normalized_usage) {
    m_effective_normalized_usage = effective_normalized_usage;
    m_effective_normalized_usage_isSet = true;
}

bool OAIV0_0_39_assoc_usage::is_effective_normalized_usage_Set() const{
    return m_effective_normalized_usage_isSet;
}

bool OAIV0_0_39_assoc_usage::is_effective_normalized_usage_Valid() const{
    return m_effective_normalized_usage_isValid;
}

double OAIV0_0_39_assoc_usage::getNormalizedUsage() const {
    return m_normalized_usage;
}
void OAIV0_0_39_assoc_usage::setNormalizedUsage(const double &normalized_usage) {
    m_normalized_usage = normalized_usage;
    m_normalized_usage_isSet = true;
}

bool OAIV0_0_39_assoc_usage::is_normalized_usage_Set() const{
    return m_normalized_usage_isSet;
}

bool OAIV0_0_39_assoc_usage::is_normalized_usage_Valid() const{
    return m_normalized_usage_isValid;
}

double OAIV0_0_39_assoc_usage::getRawUsage() const {
    return m_raw_usage;
}
void OAIV0_0_39_assoc_usage::setRawUsage(const double &raw_usage) {
    m_raw_usage = raw_usage;
    m_raw_usage_isSet = true;
}

bool OAIV0_0_39_assoc_usage::is_raw_usage_Set() const{
    return m_raw_usage_isSet;
}

bool OAIV0_0_39_assoc_usage::is_raw_usage_Valid() const{
    return m_raw_usage_isValid;
}

qint32 OAIV0_0_39_assoc_usage::getActiveJobs() const {
    return m_active_jobs;
}
void OAIV0_0_39_assoc_usage::setActiveJobs(const qint32 &active_jobs) {
    m_active_jobs = active_jobs;
    m_active_jobs_isSet = true;
}

bool OAIV0_0_39_assoc_usage::is_active_jobs_Set() const{
    return m_active_jobs_isSet;
}

bool OAIV0_0_39_assoc_usage::is_active_jobs_Valid() const{
    return m_active_jobs_isValid;
}

qint32 OAIV0_0_39_assoc_usage::getJobCount() const {
    return m_job_count;
}
void OAIV0_0_39_assoc_usage::setJobCount(const qint32 &job_count) {
    m_job_count = job_count;
    m_job_count_isSet = true;
}

bool OAIV0_0_39_assoc_usage::is_job_count_Set() const{
    return m_job_count_isSet;
}

bool OAIV0_0_39_assoc_usage::is_job_count_Valid() const{
    return m_job_count_isValid;
}

double OAIV0_0_39_assoc_usage::getFairshareLevel() const {
    return m_fairshare_level;
}
void OAIV0_0_39_assoc_usage::setFairshareLevel(const double &fairshare_level) {
    m_fairshare_level = fairshare_level;
    m_fairshare_level_isSet = true;
}

bool OAIV0_0_39_assoc_usage::is_fairshare_level_Set() const{
    return m_fairshare_level_isSet;
}

bool OAIV0_0_39_assoc_usage::is_fairshare_level_Valid() const{
    return m_fairshare_level_isValid;
}

bool OAIV0_0_39_assoc_usage::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_accrue_job_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_group_used_wallclock_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fairshare_factor_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fairshare_shares_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_normalized_priority_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_normalized_shares_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_effective_normalized_usage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_normalized_usage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_raw_usage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_active_jobs_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_job_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fairshare_level_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_assoc_usage::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI