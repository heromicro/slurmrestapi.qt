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

#include "OAIV0_0_41_job_desc_msg_rlimits.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIV0_0_41_job_desc_msg_rlimits::OAIV0_0_41_job_desc_msg_rlimits(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_job_desc_msg_rlimits::OAIV0_0_41_job_desc_msg_rlimits() {
    this->initializeModel();
}

OAIV0_0_41_job_desc_msg_rlimits::~OAIV0_0_41_job_desc_msg_rlimits() {}

void OAIV0_0_41_job_desc_msg_rlimits::initializeModel() {

    m_cpu_isSet = false;
    m_cpu_isValid = false;

    m_fsize_isSet = false;
    m_fsize_isValid = false;

    m_data_isSet = false;
    m_data_isValid = false;

    m_stack_isSet = false;
    m_stack_isValid = false;

    m_core_isSet = false;
    m_core_isValid = false;

    m_rss_isSet = false;
    m_rss_isValid = false;

    m_nproc_isSet = false;
    m_nproc_isValid = false;

    m_nofile_isSet = false;
    m_nofile_isValid = false;

    m_memlock_isSet = false;
    m_memlock_isValid = false;

    m_as_isSet = false;
    m_as_isValid = false;
}

void OAIV0_0_41_job_desc_msg_rlimits::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_job_desc_msg_rlimits::fromJsonObject(QJsonObject json) {

    m_cpu_isValid = ::OpenAPI::fromJsonValue(m_cpu, json[QString("cpu")]);
    m_cpu_isSet = !json[QString("cpu")].isNull() && m_cpu_isValid;

    m_fsize_isValid = ::OpenAPI::fromJsonValue(m_fsize, json[QString("fsize")]);
    m_fsize_isSet = !json[QString("fsize")].isNull() && m_fsize_isValid;

    m_data_isValid = ::OpenAPI::fromJsonValue(m_data, json[QString("data")]);
    m_data_isSet = !json[QString("data")].isNull() && m_data_isValid;

    m_stack_isValid = ::OpenAPI::fromJsonValue(m_stack, json[QString("stack")]);
    m_stack_isSet = !json[QString("stack")].isNull() && m_stack_isValid;

    m_core_isValid = ::OpenAPI::fromJsonValue(m_core, json[QString("core")]);
    m_core_isSet = !json[QString("core")].isNull() && m_core_isValid;

    m_rss_isValid = ::OpenAPI::fromJsonValue(m_rss, json[QString("rss")]);
    m_rss_isSet = !json[QString("rss")].isNull() && m_rss_isValid;

    m_nproc_isValid = ::OpenAPI::fromJsonValue(m_nproc, json[QString("nproc")]);
    m_nproc_isSet = !json[QString("nproc")].isNull() && m_nproc_isValid;

    m_nofile_isValid = ::OpenAPI::fromJsonValue(m_nofile, json[QString("nofile")]);
    m_nofile_isSet = !json[QString("nofile")].isNull() && m_nofile_isValid;

    m_memlock_isValid = ::OpenAPI::fromJsonValue(m_memlock, json[QString("memlock")]);
    m_memlock_isSet = !json[QString("memlock")].isNull() && m_memlock_isValid;

    m_as_isValid = ::OpenAPI::fromJsonValue(m_as, json[QString("as")]);
    m_as_isSet = !json[QString("as")].isNull() && m_as_isValid;
}

QString OAIV0_0_41_job_desc_msg_rlimits::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_job_desc_msg_rlimits::asJsonObject() const {
    QJsonObject obj;
    if (m_cpu.isSet()) {
        obj.insert(QString("cpu"), ::OpenAPI::toJsonValue(m_cpu));
    }
    if (m_fsize.isSet()) {
        obj.insert(QString("fsize"), ::OpenAPI::toJsonValue(m_fsize));
    }
    if (m_data.isSet()) {
        obj.insert(QString("data"), ::OpenAPI::toJsonValue(m_data));
    }
    if (m_stack.isSet()) {
        obj.insert(QString("stack"), ::OpenAPI::toJsonValue(m_stack));
    }
    if (m_core.isSet()) {
        obj.insert(QString("core"), ::OpenAPI::toJsonValue(m_core));
    }
    if (m_rss.isSet()) {
        obj.insert(QString("rss"), ::OpenAPI::toJsonValue(m_rss));
    }
    if (m_nproc.isSet()) {
        obj.insert(QString("nproc"), ::OpenAPI::toJsonValue(m_nproc));
    }
    if (m_nofile.isSet()) {
        obj.insert(QString("nofile"), ::OpenAPI::toJsonValue(m_nofile));
    }
    if (m_memlock.isSet()) {
        obj.insert(QString("memlock"), ::OpenAPI::toJsonValue(m_memlock));
    }
    if (m_as.isSet()) {
        obj.insert(QString("as"), ::OpenAPI::toJsonValue(m_as));
    }
    return obj;
}

OAIV0_0_41_job_desc_msg_rlimits_cpu OAIV0_0_41_job_desc_msg_rlimits::getCpu() const {
    return m_cpu;
}
void OAIV0_0_41_job_desc_msg_rlimits::setCpu(const OAIV0_0_41_job_desc_msg_rlimits_cpu &cpu) {
    m_cpu = cpu;
    m_cpu_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_cpu_Set() const{
    return m_cpu_isSet;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_cpu_Valid() const{
    return m_cpu_isValid;
}

OAIV0_0_41_job_desc_msg_rlimits_fsize OAIV0_0_41_job_desc_msg_rlimits::getFsize() const {
    return m_fsize;
}
void OAIV0_0_41_job_desc_msg_rlimits::setFsize(const OAIV0_0_41_job_desc_msg_rlimits_fsize &fsize) {
    m_fsize = fsize;
    m_fsize_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_fsize_Set() const{
    return m_fsize_isSet;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_fsize_Valid() const{
    return m_fsize_isValid;
}

OAIV0_0_41_job_desc_msg_rlimits_data OAIV0_0_41_job_desc_msg_rlimits::getData() const {
    return m_data;
}
void OAIV0_0_41_job_desc_msg_rlimits::setData(const OAIV0_0_41_job_desc_msg_rlimits_data &data) {
    m_data = data;
    m_data_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_data_Set() const{
    return m_data_isSet;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_data_Valid() const{
    return m_data_isValid;
}

OAIV0_0_41_job_desc_msg_rlimits_stack OAIV0_0_41_job_desc_msg_rlimits::getStack() const {
    return m_stack;
}
void OAIV0_0_41_job_desc_msg_rlimits::setStack(const OAIV0_0_41_job_desc_msg_rlimits_stack &stack) {
    m_stack = stack;
    m_stack_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_stack_Set() const{
    return m_stack_isSet;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_stack_Valid() const{
    return m_stack_isValid;
}

OAIV0_0_41_job_desc_msg_rlimits_core OAIV0_0_41_job_desc_msg_rlimits::getCore() const {
    return m_core;
}
void OAIV0_0_41_job_desc_msg_rlimits::setCore(const OAIV0_0_41_job_desc_msg_rlimits_core &core) {
    m_core = core;
    m_core_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_core_Set() const{
    return m_core_isSet;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_core_Valid() const{
    return m_core_isValid;
}

OAIV0_0_41_job_desc_msg_rlimits_rss OAIV0_0_41_job_desc_msg_rlimits::getRss() const {
    return m_rss;
}
void OAIV0_0_41_job_desc_msg_rlimits::setRss(const OAIV0_0_41_job_desc_msg_rlimits_rss &rss) {
    m_rss = rss;
    m_rss_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_rss_Set() const{
    return m_rss_isSet;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_rss_Valid() const{
    return m_rss_isValid;
}

OAIV0_0_41_job_desc_msg_rlimits_nproc OAIV0_0_41_job_desc_msg_rlimits::getNproc() const {
    return m_nproc;
}
void OAIV0_0_41_job_desc_msg_rlimits::setNproc(const OAIV0_0_41_job_desc_msg_rlimits_nproc &nproc) {
    m_nproc = nproc;
    m_nproc_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_nproc_Set() const{
    return m_nproc_isSet;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_nproc_Valid() const{
    return m_nproc_isValid;
}

OAIV0_0_41_job_desc_msg_rlimits_nofile OAIV0_0_41_job_desc_msg_rlimits::getNofile() const {
    return m_nofile;
}
void OAIV0_0_41_job_desc_msg_rlimits::setNofile(const OAIV0_0_41_job_desc_msg_rlimits_nofile &nofile) {
    m_nofile = nofile;
    m_nofile_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_nofile_Set() const{
    return m_nofile_isSet;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_nofile_Valid() const{
    return m_nofile_isValid;
}

OAIV0_0_41_job_desc_msg_rlimits_memlock OAIV0_0_41_job_desc_msg_rlimits::getMemlock() const {
    return m_memlock;
}
void OAIV0_0_41_job_desc_msg_rlimits::setMemlock(const OAIV0_0_41_job_desc_msg_rlimits_memlock &memlock) {
    m_memlock = memlock;
    m_memlock_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_memlock_Set() const{
    return m_memlock_isSet;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_memlock_Valid() const{
    return m_memlock_isValid;
}

OAIV0_0_41_job_desc_msg_rlimits_as OAIV0_0_41_job_desc_msg_rlimits::getAs() const {
    return m_as;
}
void OAIV0_0_41_job_desc_msg_rlimits::setAs(const OAIV0_0_41_job_desc_msg_rlimits_as &as) {
    m_as = as;
    m_as_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_as_Set() const{
    return m_as_isSet;
}

bool OAIV0_0_41_job_desc_msg_rlimits::is_as_Valid() const{
    return m_as_isValid;
}

bool OAIV0_0_41_job_desc_msg_rlimits::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_cpu.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fsize.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_stack.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_core.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_rss.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_nproc.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_nofile.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_memlock.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_as.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_job_desc_msg_rlimits::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI