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

#include "OAIV0_0_40_kill_jobs_resp_job_federation.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_40_kill_jobs_resp_job_federation::OAIV0_0_40_kill_jobs_resp_job_federation(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_kill_jobs_resp_job_federation::OAIV0_0_40_kill_jobs_resp_job_federation() {
    this->initializeModel();
}

OAIV0_0_40_kill_jobs_resp_job_federation::~OAIV0_0_40_kill_jobs_resp_job_federation() {}

void OAIV0_0_40_kill_jobs_resp_job_federation::initializeModel() {

    m_sibling_isSet = false;
    m_sibling_isValid = false;
}

void OAIV0_0_40_kill_jobs_resp_job_federation::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_kill_jobs_resp_job_federation::fromJsonObject(QJsonObject json) {

    m_sibling_isValid = ::OpenAPI::fromJsonValue(m_sibling, json[QString("sibling")]);
    m_sibling_isSet = !json[QString("sibling")].isNull() && m_sibling_isValid;
}

QString OAIV0_0_40_kill_jobs_resp_job_federation::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_kill_jobs_resp_job_federation::asJsonObject() const {
    QJsonObject obj;
    if (m_sibling_isSet) {
        obj.insert(QString("sibling"), ::OpenAPI::toJsonValue(m_sibling));
    }
    return obj;
}

QString OAIV0_0_40_kill_jobs_resp_job_federation::getSibling() const {
    return m_sibling;
}
void OAIV0_0_40_kill_jobs_resp_job_federation::setSibling(const QString &sibling) {
    m_sibling = sibling;
    m_sibling_isSet = true;
}

bool OAIV0_0_40_kill_jobs_resp_job_federation::is_sibling_Set() const{
    return m_sibling_isSet;
}

bool OAIV0_0_40_kill_jobs_resp_job_federation::is_sibling_Valid() const{
    return m_sibling_isValid;
}

bool OAIV0_0_40_kill_jobs_resp_job_federation::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_sibling_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_kill_jobs_resp_job_federation::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
