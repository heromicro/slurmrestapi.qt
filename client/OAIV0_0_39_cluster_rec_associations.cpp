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

#include "OAIV0_0_39_cluster_rec_associations.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_39_cluster_rec_associations::OAIV0_0_39_cluster_rec_associations(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_39_cluster_rec_associations::OAIV0_0_39_cluster_rec_associations() {
    this->initializeModel();
}

OAIV0_0_39_cluster_rec_associations::~OAIV0_0_39_cluster_rec_associations() {}

void OAIV0_0_39_cluster_rec_associations::initializeModel() {

    m_root_isSet = false;
    m_root_isValid = false;
}

void OAIV0_0_39_cluster_rec_associations::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_39_cluster_rec_associations::fromJsonObject(QJsonObject json) {

    m_root_isValid = ::OpenAPI::fromJsonValue(m_root, json[QString("root")]);
    m_root_isSet = !json[QString("root")].isNull() && m_root_isValid;
}

QString OAIV0_0_39_cluster_rec_associations::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_39_cluster_rec_associations::asJsonObject() const {
    QJsonObject obj;
    if (m_root.isSet()) {
        obj.insert(QString("root"), ::OpenAPI::toJsonValue(m_root));
    }
    return obj;
}

OAIV0_0_39_assoc_short OAIV0_0_39_cluster_rec_associations::getRoot() const {
    return m_root;
}
void OAIV0_0_39_cluster_rec_associations::setRoot(const OAIV0_0_39_assoc_short &root) {
    m_root = root;
    m_root_isSet = true;
}

bool OAIV0_0_39_cluster_rec_associations::is_root_Set() const{
    return m_root_isSet;
}

bool OAIV0_0_39_cluster_rec_associations::is_root_Valid() const{
    return m_root_isValid;
}

bool OAIV0_0_39_cluster_rec_associations::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_root.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_39_cluster_rec_associations::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
