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

/*
 * OAIV0_0_39_cron_entry.h
 *
 * 
 */

#ifndef OAIV0_0_39_cron_entry_H
#define OAIV0_0_39_cron_entry_H

#include <QJsonObject>

#include "OAIV0_0_39_cron_entry_line.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_39_cron_entry_line;

class OAIV0_0_39_cron_entry : public OAIObject {
public:
    OAIV0_0_39_cron_entry();
    OAIV0_0_39_cron_entry(QString json);
    ~OAIV0_0_39_cron_entry() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<QString> getFlags() const;
    void setFlags(const QList<QString> &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    QString getMinute() const;
    void setMinute(const QString &minute);
    bool is_minute_Set() const;
    bool is_minute_Valid() const;

    QString getHour() const;
    void setHour(const QString &hour);
    bool is_hour_Set() const;
    bool is_hour_Valid() const;

    QString getDayOfMonth() const;
    void setDayOfMonth(const QString &day_of_month);
    bool is_day_of_month_Set() const;
    bool is_day_of_month_Valid() const;

    QString getMonth() const;
    void setMonth(const QString &month);
    bool is_month_Set() const;
    bool is_month_Valid() const;

    QString getDayOfWeek() const;
    void setDayOfWeek(const QString &day_of_week);
    bool is_day_of_week_Set() const;
    bool is_day_of_week_Valid() const;

    QString getSpecification() const;
    void setSpecification(const QString &specification);
    bool is_specification_Set() const;
    bool is_specification_Valid() const;

    QString getCommand() const;
    void setCommand(const QString &command);
    bool is_command_Set() const;
    bool is_command_Valid() const;

    OAIV0_0_39_cron_entry_line getLine() const;
    void setLine(const OAIV0_0_39_cron_entry_line &line);
    bool is_line_Set() const;
    bool is_line_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<QString> m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;

    QString m_minute;
    bool m_minute_isSet;
    bool m_minute_isValid;

    QString m_hour;
    bool m_hour_isSet;
    bool m_hour_isValid;

    QString m_day_of_month;
    bool m_day_of_month_isSet;
    bool m_day_of_month_isValid;

    QString m_month;
    bool m_month_isSet;
    bool m_month_isValid;

    QString m_day_of_week;
    bool m_day_of_week_isSet;
    bool m_day_of_week_isValid;

    QString m_specification;
    bool m_specification_isSet;
    bool m_specification_isValid;

    QString m_command;
    bool m_command_isSet;
    bool m_command_isValid;

    OAIV0_0_39_cron_entry_line m_line;
    bool m_line_isSet;
    bool m_line_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_39_cron_entry)

#endif // OAIV0_0_39_cron_entry_H
