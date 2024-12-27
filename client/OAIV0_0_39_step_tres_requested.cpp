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

#include "OAIV0_0_39_step_tres_requested.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_39_step_tres_requested::OAIV0_0_39_step_tres_requested(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_step_tres_requested::OAIV0_0_39_step_tres_requested() {
    this->initializeModel();
}

OAIV0_0_39_step_tres_requested::~OAIV0_0_39_step_tres_requested() {}

void OAIV0_0_39_step_tres_requested::initializeModel() {

    m_max_isSet = false;
    m_max_isValid = false;

    m_min_isSet = false;
    m_min_isValid = false;

    m_average_isSet = false;
    m_average_isValid = false;

    m_total_isSet = false;
    m_total_isValid = false;
}

void OAIV0_0_39_step_tres_requested::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_step_tres_requested::fromJsonObject(QJsonObject json) {

    m_max_isValid = ::hm:slurm:client::fromJsonValue(m_max, json[QString("max")]);
    m_max_isSet = !json[QString("max")].isNull() && m_max_isValid;

    m_min_isValid = ::hm:slurm:client::fromJsonValue(m_min, json[QString("min")]);
    m_min_isSet = !json[QString("min")].isNull() && m_min_isValid;

    m_average_isValid = ::hm:slurm:client::fromJsonValue(m_average, json[QString("average")]);
    m_average_isSet = !json[QString("average")].isNull() && m_average_isValid;

    m_total_isValid = ::hm:slurm:client::fromJsonValue(m_total, json[QString("total")]);
    m_total_isSet = !json[QString("total")].isNull() && m_total_isValid;
}

QString OAIV0_0_39_step_tres_requested::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_step_tres_requested::asJsonObject() const {
    QJsonObject obj;
    if (m_max.size() > 0) {
        obj.insert(QString("max"), ::hm:slurm:client::toJsonValue(m_max));
    }
    if (m_min.size() > 0) {
        obj.insert(QString("min"), ::hm:slurm:client::toJsonValue(m_min));
    }
    if (m_average.size() > 0) {
        obj.insert(QString("average"), ::hm:slurm:client::toJsonValue(m_average));
    }
    if (m_total.size() > 0) {
        obj.insert(QString("total"), ::hm:slurm:client::toJsonValue(m_total));
    }
    return obj;
}

QList<OAIV0_0_39_tres> OAIV0_0_39_step_tres_requested::getMax() const {
    return m_max;
}
void OAIV0_0_39_step_tres_requested::setMax(const QList<OAIV0_0_39_tres> &max) {
    m_max = max;
    m_max_isSet = true;
}

bool OAIV0_0_39_step_tres_requested::is_max_Set() const{
    return m_max_isSet;
}

bool OAIV0_0_39_step_tres_requested::is_max_Valid() const{
    return m_max_isValid;
}

QList<OAIV0_0_39_tres> OAIV0_0_39_step_tres_requested::getMin() const {
    return m_min;
}
void OAIV0_0_39_step_tres_requested::setMin(const QList<OAIV0_0_39_tres> &min) {
    m_min = min;
    m_min_isSet = true;
}

bool OAIV0_0_39_step_tres_requested::is_min_Set() const{
    return m_min_isSet;
}

bool OAIV0_0_39_step_tres_requested::is_min_Valid() const{
    return m_min_isValid;
}

QList<OAIV0_0_39_tres> OAIV0_0_39_step_tres_requested::getAverage() const {
    return m_average;
}
void OAIV0_0_39_step_tres_requested::setAverage(const QList<OAIV0_0_39_tres> &average) {
    m_average = average;
    m_average_isSet = true;
}

bool OAIV0_0_39_step_tres_requested::is_average_Set() const{
    return m_average_isSet;
}

bool OAIV0_0_39_step_tres_requested::is_average_Valid() const{
    return m_average_isValid;
}

QList<OAIV0_0_39_tres> OAIV0_0_39_step_tres_requested::getTotal() const {
    return m_total;
}
void OAIV0_0_39_step_tres_requested::setTotal(const QList<OAIV0_0_39_tres> &total) {
    m_total = total;
    m_total_isSet = true;
}

bool OAIV0_0_39_step_tres_requested::is_total_Set() const{
    return m_total_isSet;
}

bool OAIV0_0_39_step_tres_requested::is_total_Valid() const{
    return m_total_isValid;
}

bool OAIV0_0_39_step_tres_requested::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_max.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_min.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_average.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_total.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_step_tres_requested::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
