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
 * OAIV0_0_39_step_time.h
 *
 * 
 */

#ifndef OAIV0_0_39_step_time_H
#define OAIV0_0_39_step_time_H

#include <QJsonObject>

#include "OAIV0_0_39_step_time_system.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_39_step_time_system;

class OAIV0_0_39_step_time : public OAIObject {
public:
    OAIV0_0_39_step_time();
    OAIV0_0_39_step_time(QString json);
    ~OAIV0_0_39_step_time() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getElapsed() const;
    void setElapsed(const qint32 &elapsed);
    bool is_elapsed_Set() const;
    bool is_elapsed_Valid() const;

    qint64 getEnd() const;
    void setEnd(const qint64 &end);
    bool is_end_Set() const;
    bool is_end_Valid() const;

    qint64 getStart() const;
    void setStart(const qint64 &start);
    bool is_start_Set() const;
    bool is_start_Valid() const;

    qint32 getSuspended() const;
    void setSuspended(const qint32 &suspended);
    bool is_suspended_Set() const;
    bool is_suspended_Valid() const;

    OAIV0_0_39_step_time_system getSystem() const;
    void setSystem(const OAIV0_0_39_step_time_system &system);
    bool is_system_Set() const;
    bool is_system_Valid() const;

    OAIV0_0_39_step_time_system getTotal() const;
    void setTotal(const OAIV0_0_39_step_time_system &total);
    bool is_total_Set() const;
    bool is_total_Valid() const;

    OAIV0_0_39_step_time_system getUser() const;
    void setUser(const OAIV0_0_39_step_time_system &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_elapsed;
    bool m_elapsed_isSet;
    bool m_elapsed_isValid;

    qint64 m_end;
    bool m_end_isSet;
    bool m_end_isValid;

    qint64 m_start;
    bool m_start_isSet;
    bool m_start_isValid;

    qint32 m_suspended;
    bool m_suspended_isSet;
    bool m_suspended_isValid;

    OAIV0_0_39_step_time_system m_system;
    bool m_system_isSet;
    bool m_system_isValid;

    OAIV0_0_39_step_time_system m_total;
    bool m_total_isSet;
    bool m_total_isValid;

    OAIV0_0_39_step_time_system m_user;
    bool m_user_isSet;
    bool m_user_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_39_step_time)

#endif // OAIV0_0_39_step_time_H
