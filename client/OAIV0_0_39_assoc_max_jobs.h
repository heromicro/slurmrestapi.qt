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
 * OAIV0_0_39_assoc_max_jobs.h
 *
 * 
 */

#ifndef OAIV0_0_39_assoc_max_jobs_H
#define OAIV0_0_39_assoc_max_jobs_H

#include <QJsonObject>

#include "OAIV0_0_39_assoc_max_jobs_per.h"
#include "OAIV0_0_39_uint32_no_val.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_39_assoc_max_jobs_per;
class OAIV0_0_39_uint32_no_val;

class OAIV0_0_39_assoc_max_jobs : public OAIObject {
public:
    OAIV0_0_39_assoc_max_jobs();
    OAIV0_0_39_assoc_max_jobs(QString json);
    ~OAIV0_0_39_assoc_max_jobs() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_39_assoc_max_jobs_per getPer() const;
    void setPer(const OAIV0_0_39_assoc_max_jobs_per &per);
    bool is_per_Set() const;
    bool is_per_Valid() const;

    OAIV0_0_39_uint32_no_val getActive() const;
    void setActive(const OAIV0_0_39_uint32_no_val &active);
    bool is_active_Set() const;
    bool is_active_Valid() const;

    OAIV0_0_39_uint32_no_val getAccruing() const;
    void setAccruing(const OAIV0_0_39_uint32_no_val &accruing);
    bool is_accruing_Set() const;
    bool is_accruing_Valid() const;

    OAIV0_0_39_uint32_no_val getTotal() const;
    void setTotal(const OAIV0_0_39_uint32_no_val &total);
    bool is_total_Set() const;
    bool is_total_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_39_assoc_max_jobs_per m_per;
    bool m_per_isSet;
    bool m_per_isValid;

    OAIV0_0_39_uint32_no_val m_active;
    bool m_active_isSet;
    bool m_active_isValid;

    OAIV0_0_39_uint32_no_val m_accruing;
    bool m_accruing_isSet;
    bool m_accruing_isValid;

    OAIV0_0_39_uint32_no_val m_total;
    bool m_total_isSet;
    bool m_total_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_39_assoc_max_jobs)

#endif // OAIV0_0_39_assoc_max_jobs_H
