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

#include "OAIV0_0_40_job_comment.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_40_job_comment::OAIV0_0_40_job_comment(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_job_comment::OAIV0_0_40_job_comment() {
    this->initializeModel();
}

OAIV0_0_40_job_comment::~OAIV0_0_40_job_comment() {}

void OAIV0_0_40_job_comment::initializeModel() {

    m_administrator_isSet = false;
    m_administrator_isValid = false;

    m_job_isSet = false;
    m_job_isValid = false;

    m_system_isSet = false;
    m_system_isValid = false;
}

void OAIV0_0_40_job_comment::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_job_comment::fromJsonObject(QJsonObject json) {

    m_administrator_isValid = ::hm:slurm:client::fromJsonValue(m_administrator, json[QString("administrator")]);
    m_administrator_isSet = !json[QString("administrator")].isNull() && m_administrator_isValid;

    m_job_isValid = ::hm:slurm:client::fromJsonValue(m_job, json[QString("job")]);
    m_job_isSet = !json[QString("job")].isNull() && m_job_isValid;

    m_system_isValid = ::hm:slurm:client::fromJsonValue(m_system, json[QString("system")]);
    m_system_isSet = !json[QString("system")].isNull() && m_system_isValid;
}

QString OAIV0_0_40_job_comment::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_job_comment::asJsonObject() const {
    QJsonObject obj;
    if (m_administrator_isSet) {
        obj.insert(QString("administrator"), ::hm:slurm:client::toJsonValue(m_administrator));
    }
    if (m_job_isSet) {
        obj.insert(QString("job"), ::hm:slurm:client::toJsonValue(m_job));
    }
    if (m_system_isSet) {
        obj.insert(QString("system"), ::hm:slurm:client::toJsonValue(m_system));
    }
    return obj;
}

QString OAIV0_0_40_job_comment::getAdministrator() const {
    return m_administrator;
}
void OAIV0_0_40_job_comment::setAdministrator(const QString &administrator) {
    m_administrator = administrator;
    m_administrator_isSet = true;
}

bool OAIV0_0_40_job_comment::is_administrator_Set() const{
    return m_administrator_isSet;
}

bool OAIV0_0_40_job_comment::is_administrator_Valid() const{
    return m_administrator_isValid;
}

QString OAIV0_0_40_job_comment::getJob() const {
    return m_job;
}
void OAIV0_0_40_job_comment::setJob(const QString &job) {
    m_job = job;
    m_job_isSet = true;
}

bool OAIV0_0_40_job_comment::is_job_Set() const{
    return m_job_isSet;
}

bool OAIV0_0_40_job_comment::is_job_Valid() const{
    return m_job_isValid;
}

QString OAIV0_0_40_job_comment::getSystem() const {
    return m_system;
}
void OAIV0_0_40_job_comment::setSystem(const QString &system) {
    m_system = system;
    m_system_isSet = true;
}

bool OAIV0_0_40_job_comment::is_system_Set() const{
    return m_system_isSet;
}

bool OAIV0_0_40_job_comment::is_system_Valid() const{
    return m_system_isValid;
}

bool OAIV0_0_40_job_comment::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_administrator_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_job_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_system_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_job_comment::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
