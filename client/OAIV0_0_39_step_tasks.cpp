/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIV0_0_39_step_tasks.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_step_tasks::OAIV0_0_39_step_tasks(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_step_tasks::OAIV0_0_39_step_tasks() {
    this->initializeModel();
}

OAIV0_0_39_step_tasks::~OAIV0_0_39_step_tasks() {}

void OAIV0_0_39_step_tasks::initializeModel() {

    m_count_isSet = false;
    m_count_isValid = false;
}

void OAIV0_0_39_step_tasks::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_step_tasks::fromJsonObject(QJsonObject json) {

    m_count_isValid = ::OpenAPI::fromJsonValue(m_count, json[QString("count")]);
    m_count_isSet = !json[QString("count")].isNull() && m_count_isValid;
}

QString OAIV0_0_39_step_tasks::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_step_tasks::asJsonObject() const {
    QJsonObject obj;
    if (m_count_isSet) {
        obj.insert(QString("count"), ::OpenAPI::toJsonValue(m_count));
    }
    return obj;
}

qint32 OAIV0_0_39_step_tasks::getCount() const {
    return m_count;
}
void OAIV0_0_39_step_tasks::setCount(const qint32 &count) {
    m_count = count;
    m_count_isSet = true;
}

bool OAIV0_0_39_step_tasks::is_count_Set() const{
    return m_count_isSet;
}

bool OAIV0_0_39_step_tasks::is_count_Valid() const{
    return m_count_isValid;
}

bool OAIV0_0_39_step_tasks::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_step_tasks::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
