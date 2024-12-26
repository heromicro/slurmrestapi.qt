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

#include "OAIDbv0_0_39_tres_update.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDbv0_0_39_tres_update::OAIDbv0_0_39_tres_update(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDbv0_0_39_tres_update::OAIDbv0_0_39_tres_update() {
    this->initializeModel();
}

OAIDbv0_0_39_tres_update::~OAIDbv0_0_39_tres_update() {}

void OAIDbv0_0_39_tres_update::initializeModel() {

    m_tres_isSet = false;
    m_tres_isValid = false;
}

void OAIDbv0_0_39_tres_update::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDbv0_0_39_tres_update::fromJsonObject(QJsonObject json) {

    m_tres_isValid = ::OpenAPI::fromJsonValue(m_tres, json[QString("tres")]);
    m_tres_isSet = !json[QString("tres")].isNull() && m_tres_isValid;
}

QString OAIDbv0_0_39_tres_update::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDbv0_0_39_tres_update::asJsonObject() const {
    QJsonObject obj;
    if (m_tres.size() > 0) {
        obj.insert(QString("tres"), ::OpenAPI::toJsonValue(m_tres));
    }
    return obj;
}

QList<OAIV0_0_39_tres> OAIDbv0_0_39_tres_update::getTres() const {
    return m_tres;
}
void OAIDbv0_0_39_tres_update::setTres(const QList<OAIV0_0_39_tres> &tres) {
    m_tres = tres;
    m_tres_isSet = true;
}

bool OAIDbv0_0_39_tres_update::is_tres_Set() const{
    return m_tres_isSet;
}

bool OAIDbv0_0_39_tres_update::is_tres_Valid() const{
    return m_tres_isValid;
}

bool OAIDbv0_0_39_tres_update::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_tres.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDbv0_0_39_tres_update::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
