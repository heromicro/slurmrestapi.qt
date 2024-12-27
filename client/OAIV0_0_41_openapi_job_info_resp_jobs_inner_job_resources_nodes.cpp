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

#include "OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes() {
    this->initializeModel();
}

OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::~OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes() {}

void OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::initializeModel() {

    m_count_isSet = false;
    m_count_isValid = false;

    m_select_type_isSet = false;
    m_select_type_isValid = false;

    m_list_isSet = false;
    m_list_isValid = false;

    m_whole_isSet = false;
    m_whole_isValid = false;

    m_allocation_isSet = false;
    m_allocation_isValid = false;
}

void OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::fromJsonObject(QJsonObject json) {

    m_count_isValid = ::hm:slurm:client::fromJsonValue(m_count, json[QString("count")]);
    m_count_isSet = !json[QString("count")].isNull() && m_count_isValid;

    m_select_type_isValid = ::hm:slurm:client::fromJsonValue(m_select_type, json[QString("select_type")]);
    m_select_type_isSet = !json[QString("select_type")].isNull() && m_select_type_isValid;

    m_list_isValid = ::hm:slurm:client::fromJsonValue(m_list, json[QString("list")]);
    m_list_isSet = !json[QString("list")].isNull() && m_list_isValid;

    m_whole_isValid = ::hm:slurm:client::fromJsonValue(m_whole, json[QString("whole")]);
    m_whole_isSet = !json[QString("whole")].isNull() && m_whole_isValid;

    m_allocation_isValid = ::hm:slurm:client::fromJsonValue(m_allocation, json[QString("allocation")]);
    m_allocation_isSet = !json[QString("allocation")].isNull() && m_allocation_isValid;
}

QString OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::asJsonObject() const {
    QJsonObject obj;
    if (m_count_isSet) {
        obj.insert(QString("count"), ::hm:slurm:client::toJsonValue(m_count));
    }
    if (m_select_type.size() > 0) {
        obj.insert(QString("select_type"), ::hm:slurm:client::toJsonValue(m_select_type));
    }
    if (m_list_isSet) {
        obj.insert(QString("list"), ::hm:slurm:client::toJsonValue(m_list));
    }
    if (m_whole_isSet) {
        obj.insert(QString("whole"), ::hm:slurm:client::toJsonValue(m_whole));
    }
    if (m_allocation.size() > 0) {
        obj.insert(QString("allocation"), ::hm:slurm:client::toJsonValue(m_allocation));
    }
    return obj;
}

qint32 OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::getCount() const {
    return m_count;
}
void OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::setCount(const qint32 &count) {
    m_count = count;
    m_count_isSet = true;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::is_count_Set() const{
    return m_count_isSet;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::is_count_Valid() const{
    return m_count_isValid;
}

QList<QString> OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::getSelectType() const {
    return m_select_type;
}
void OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::setSelectType(const QList<QString> &select_type) {
    m_select_type = select_type;
    m_select_type_isSet = true;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::is_select_type_Set() const{
    return m_select_type_isSet;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::is_select_type_Valid() const{
    return m_select_type_isValid;
}

QString OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::getList() const {
    return m_list;
}
void OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::setList(const QString &list) {
    m_list = list;
    m_list_isSet = true;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::is_list_Set() const{
    return m_list_isSet;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::is_list_Valid() const{
    return m_list_isValid;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::isWhole() const {
    return m_whole;
}
void OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::setWhole(const bool &whole) {
    m_whole = whole;
    m_whole_isSet = true;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::is_whole_Set() const{
    return m_whole_isSet;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::is_whole_Valid() const{
    return m_whole_isValid;
}

QList<OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner> OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::getAllocation() const {
    return m_allocation;
}
void OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::setAllocation(const QList<OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes_allocation_inner> &allocation) {
    m_allocation = allocation;
    m_allocation_isSet = true;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::is_allocation_Set() const{
    return m_allocation_isSet;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::is_allocation_Valid() const{
    return m_allocation_isValid;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_select_type.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_list_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_whole_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_allocation.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_openapi_job_info_resp_jobs_inner_job_resources_nodes::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
