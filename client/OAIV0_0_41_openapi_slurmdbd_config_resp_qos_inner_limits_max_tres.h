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
 * OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres_H
#define OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres_minutes.h"
#include "OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres_per.h"
#include "OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner;
class OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres_minutes;
class OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres_per;

class OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres();
    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner> getTotal() const;
    void setTotal(const QList<OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner> &total);
    bool is_total_Set() const;
    bool is_total_Valid() const;

    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres_minutes getMinutes() const;
    void setMinutes(const OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres_minutes &minutes);
    bool is_minutes_Set() const;
    bool is_minutes_Valid() const;

    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres_per getPer() const;
    void setPer(const OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres_per &per);
    bool is_per_Set() const;
    bool is_per_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner> m_total;
    bool m_total_isSet;
    bool m_total_isValid;

    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres_minutes m_minutes;
    bool m_minutes_isSet;
    bool m_minutes_isValid;

    OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres_per m_per;
    bool m_per_isSet;
    bool m_per_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres)

#endif // OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner_limits_max_tres_H
