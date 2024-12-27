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

#include "OAIV0_0_40_job_reservation.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_40_job_reservation::OAIV0_0_40_job_reservation(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_40_job_reservation::OAIV0_0_40_job_reservation() {
    this->initializeModel();
}

OAIV0_0_40_job_reservation::~OAIV0_0_40_job_reservation() {}

void OAIV0_0_40_job_reservation::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;
}

void OAIV0_0_40_job_reservation::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_40_job_reservation::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::hm:slurm:client::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::hm:slurm:client::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;
}

QString OAIV0_0_40_job_reservation::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_40_job_reservation::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::hm:slurm:client::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::hm:slurm:client::toJsonValue(m_name));
    }
    return obj;
}

qint32 OAIV0_0_40_job_reservation::getId() const {
    return m_id;
}
void OAIV0_0_40_job_reservation::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIV0_0_40_job_reservation::is_id_Set() const{
    return m_id_isSet;
}

bool OAIV0_0_40_job_reservation::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIV0_0_40_job_reservation::getName() const {
    return m_name;
}
void OAIV0_0_40_job_reservation::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIV0_0_40_job_reservation::is_name_Set() const{
    return m_name_isSet;
}

bool OAIV0_0_40_job_reservation::is_name_Valid() const{
    return m_name_isValid;
}

bool OAIV0_0_40_job_reservation::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_40_job_reservation::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
