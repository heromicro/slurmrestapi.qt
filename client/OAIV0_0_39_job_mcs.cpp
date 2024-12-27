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

#include "OAIV0_0_39_job_mcs.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_39_job_mcs::OAIV0_0_39_job_mcs(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_job_mcs::OAIV0_0_39_job_mcs() {
    this->initializeModel();
}

OAIV0_0_39_job_mcs::~OAIV0_0_39_job_mcs() {}

void OAIV0_0_39_job_mcs::initializeModel() {

    m_label_isSet = false;
    m_label_isValid = false;
}

void OAIV0_0_39_job_mcs::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_job_mcs::fromJsonObject(QJsonObject json) {

    m_label_isValid = ::hm:slurm:client::fromJsonValue(m_label, json[QString("label")]);
    m_label_isSet = !json[QString("label")].isNull() && m_label_isValid;
}

QString OAIV0_0_39_job_mcs::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_job_mcs::asJsonObject() const {
    QJsonObject obj;
    if (m_label_isSet) {
        obj.insert(QString("label"), ::hm:slurm:client::toJsonValue(m_label));
    }
    return obj;
}

QString OAIV0_0_39_job_mcs::getLabel() const {
    return m_label;
}
void OAIV0_0_39_job_mcs::setLabel(const QString &label) {
    m_label = label;
    m_label_isSet = true;
}

bool OAIV0_0_39_job_mcs::is_label_Set() const{
    return m_label_isSet;
}

bool OAIV0_0_39_job_mcs::is_label_Valid() const{
    return m_label_isValid;
}

bool OAIV0_0_39_job_mcs::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_label_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_job_mcs::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client