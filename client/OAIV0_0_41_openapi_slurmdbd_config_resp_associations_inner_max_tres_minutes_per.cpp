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

#include "OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per::OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per::OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per() {
    this->initializeModel();
}

OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per::~OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per() {}

void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per::initializeModel() {

    m_job_isSet = false;
    m_job_isValid = false;
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per::fromJsonObject(QJsonObject json) {

    m_job_isValid = ::hm:slurm:client::fromJsonValue(m_job, json[QString("job")]);
    m_job_isSet = !json[QString("job")].isNull() && m_job_isValid;
}

QString OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per::asJsonObject() const {
    QJsonObject obj;
    if (m_job.size() > 0) {
        obj.insert(QString("job"), ::hm:slurm:client::toJsonValue(m_job));
    }
    return obj;
}

QList<OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner> OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per::getJob() const {
    return m_job;
}
void OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per::setJob(const QList<OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner> &job) {
    m_job = job;
    m_job_isSet = true;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per::is_job_Set() const{
    return m_job_isSet;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per::is_job_Valid() const{
    return m_job_isValid;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_job.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner_max_tres_minutes_per::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
