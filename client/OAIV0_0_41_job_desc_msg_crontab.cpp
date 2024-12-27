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

#include "OAIV0_0_41_job_desc_msg_crontab.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace hm:slurm:client {

OAIV0_0_41_job_desc_msg_crontab::OAIV0_0_41_job_desc_msg_crontab(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIV0_0_41_job_desc_msg_crontab::OAIV0_0_41_job_desc_msg_crontab() {
    this->initializeModel();
}

OAIV0_0_41_job_desc_msg_crontab::~OAIV0_0_41_job_desc_msg_crontab() {}

void OAIV0_0_41_job_desc_msg_crontab::initializeModel() {

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_minute_isSet = false;
    m_minute_isValid = false;

    m_hour_isSet = false;
    m_hour_isValid = false;

    m_day_of_month_isSet = false;
    m_day_of_month_isValid = false;

    m_month_isSet = false;
    m_month_isValid = false;

    m_day_of_week_isSet = false;
    m_day_of_week_isValid = false;

    m_specification_isSet = false;
    m_specification_isValid = false;

    m_command_isSet = false;
    m_command_isValid = false;

    m_line_isSet = false;
    m_line_isValid = false;
}

void OAIV0_0_41_job_desc_msg_crontab::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIV0_0_41_job_desc_msg_crontab::fromJsonObject(QJsonObject json) {

    m_flags_isValid = ::hm:slurm:client::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_minute_isValid = ::hm:slurm:client::fromJsonValue(m_minute, json[QString("minute")]);
    m_minute_isSet = !json[QString("minute")].isNull() && m_minute_isValid;

    m_hour_isValid = ::hm:slurm:client::fromJsonValue(m_hour, json[QString("hour")]);
    m_hour_isSet = !json[QString("hour")].isNull() && m_hour_isValid;

    m_day_of_month_isValid = ::hm:slurm:client::fromJsonValue(m_day_of_month, json[QString("day_of_month")]);
    m_day_of_month_isSet = !json[QString("day_of_month")].isNull() && m_day_of_month_isValid;

    m_month_isValid = ::hm:slurm:client::fromJsonValue(m_month, json[QString("month")]);
    m_month_isSet = !json[QString("month")].isNull() && m_month_isValid;

    m_day_of_week_isValid = ::hm:slurm:client::fromJsonValue(m_day_of_week, json[QString("day_of_week")]);
    m_day_of_week_isSet = !json[QString("day_of_week")].isNull() && m_day_of_week_isValid;

    m_specification_isValid = ::hm:slurm:client::fromJsonValue(m_specification, json[QString("specification")]);
    m_specification_isSet = !json[QString("specification")].isNull() && m_specification_isValid;

    m_command_isValid = ::hm:slurm:client::fromJsonValue(m_command, json[QString("command")]);
    m_command_isSet = !json[QString("command")].isNull() && m_command_isValid;

    m_line_isValid = ::hm:slurm:client::fromJsonValue(m_line, json[QString("line")]);
    m_line_isSet = !json[QString("line")].isNull() && m_line_isValid;
}

QString OAIV0_0_41_job_desc_msg_crontab::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIV0_0_41_job_desc_msg_crontab::asJsonObject() const {
    QJsonObject obj;
    if (m_flags.size() > 0) {
        obj.insert(QString("flags"), ::hm:slurm:client::toJsonValue(m_flags));
    }
    if (m_minute_isSet) {
        obj.insert(QString("minute"), ::hm:slurm:client::toJsonValue(m_minute));
    }
    if (m_hour_isSet) {
        obj.insert(QString("hour"), ::hm:slurm:client::toJsonValue(m_hour));
    }
    if (m_day_of_month_isSet) {
        obj.insert(QString("day_of_month"), ::hm:slurm:client::toJsonValue(m_day_of_month));
    }
    if (m_month_isSet) {
        obj.insert(QString("month"), ::hm:slurm:client::toJsonValue(m_month));
    }
    if (m_day_of_week_isSet) {
        obj.insert(QString("day_of_week"), ::hm:slurm:client::toJsonValue(m_day_of_week));
    }
    if (m_specification_isSet) {
        obj.insert(QString("specification"), ::hm:slurm:client::toJsonValue(m_specification));
    }
    if (m_command_isSet) {
        obj.insert(QString("command"), ::hm:slurm:client::toJsonValue(m_command));
    }
    if (m_line.isSet()) {
        obj.insert(QString("line"), ::hm:slurm:client::toJsonValue(m_line));
    }
    return obj;
}

QList<QString> OAIV0_0_41_job_desc_msg_crontab::getFlags() const {
    return m_flags;
}
void OAIV0_0_41_job_desc_msg_crontab::setFlags(const QList<QString> &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_flags_Valid() const{
    return m_flags_isValid;
}

QString OAIV0_0_41_job_desc_msg_crontab::getMinute() const {
    return m_minute;
}
void OAIV0_0_41_job_desc_msg_crontab::setMinute(const QString &minute) {
    m_minute = minute;
    m_minute_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_minute_Set() const{
    return m_minute_isSet;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_minute_Valid() const{
    return m_minute_isValid;
}

QString OAIV0_0_41_job_desc_msg_crontab::getHour() const {
    return m_hour;
}
void OAIV0_0_41_job_desc_msg_crontab::setHour(const QString &hour) {
    m_hour = hour;
    m_hour_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_hour_Set() const{
    return m_hour_isSet;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_hour_Valid() const{
    return m_hour_isValid;
}

QString OAIV0_0_41_job_desc_msg_crontab::getDayOfMonth() const {
    return m_day_of_month;
}
void OAIV0_0_41_job_desc_msg_crontab::setDayOfMonth(const QString &day_of_month) {
    m_day_of_month = day_of_month;
    m_day_of_month_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_day_of_month_Set() const{
    return m_day_of_month_isSet;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_day_of_month_Valid() const{
    return m_day_of_month_isValid;
}

QString OAIV0_0_41_job_desc_msg_crontab::getMonth() const {
    return m_month;
}
void OAIV0_0_41_job_desc_msg_crontab::setMonth(const QString &month) {
    m_month = month;
    m_month_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_month_Set() const{
    return m_month_isSet;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_month_Valid() const{
    return m_month_isValid;
}

QString OAIV0_0_41_job_desc_msg_crontab::getDayOfWeek() const {
    return m_day_of_week;
}
void OAIV0_0_41_job_desc_msg_crontab::setDayOfWeek(const QString &day_of_week) {
    m_day_of_week = day_of_week;
    m_day_of_week_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_day_of_week_Set() const{
    return m_day_of_week_isSet;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_day_of_week_Valid() const{
    return m_day_of_week_isValid;
}

QString OAIV0_0_41_job_desc_msg_crontab::getSpecification() const {
    return m_specification;
}
void OAIV0_0_41_job_desc_msg_crontab::setSpecification(const QString &specification) {
    m_specification = specification;
    m_specification_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_specification_Set() const{
    return m_specification_isSet;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_specification_Valid() const{
    return m_specification_isValid;
}

QString OAIV0_0_41_job_desc_msg_crontab::getCommand() const {
    return m_command;
}
void OAIV0_0_41_job_desc_msg_crontab::setCommand(const QString &command) {
    m_command = command;
    m_command_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_command_Set() const{
    return m_command_isSet;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_command_Valid() const{
    return m_command_isValid;
}

OAIV0_0_40_cron_entry_line OAIV0_0_41_job_desc_msg_crontab::getLine() const {
    return m_line;
}
void OAIV0_0_41_job_desc_msg_crontab::setLine(const OAIV0_0_40_cron_entry_line &line) {
    m_line = line;
    m_line_isSet = true;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_line_Set() const{
    return m_line_isSet;
}

bool OAIV0_0_41_job_desc_msg_crontab::is_line_Valid() const{
    return m_line_isValid;
}

bool OAIV0_0_41_job_desc_msg_crontab::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_flags.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_minute_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_hour_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_day_of_month_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_month_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_day_of_week_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_specification_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_command_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_line.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIV0_0_41_job_desc_msg_crontab::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace hm:slurm:client
