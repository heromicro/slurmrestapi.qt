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
 * OAIV0_0_40_job_desc_msg_rlimits.h
 *
 * 
 */

#ifndef OAIV0_0_40_job_desc_msg_rlimits_H
#define OAIV0_0_40_job_desc_msg_rlimits_H

#include <QJsonObject>

#include "OAIV0_0_40_uint64_no_val.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_40_uint64_no_val;

class OAIV0_0_40_job_desc_msg_rlimits : public OAIObject {
public:
    OAIV0_0_40_job_desc_msg_rlimits();
    OAIV0_0_40_job_desc_msg_rlimits(QString json);
    ~OAIV0_0_40_job_desc_msg_rlimits() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_40_uint64_no_val getCpu() const;
    void setCpu(const OAIV0_0_40_uint64_no_val &cpu);
    bool is_cpu_Set() const;
    bool is_cpu_Valid() const;

    OAIV0_0_40_uint64_no_val getFsize() const;
    void setFsize(const OAIV0_0_40_uint64_no_val &fsize);
    bool is_fsize_Set() const;
    bool is_fsize_Valid() const;

    OAIV0_0_40_uint64_no_val getData() const;
    void setData(const OAIV0_0_40_uint64_no_val &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    OAIV0_0_40_uint64_no_val getStack() const;
    void setStack(const OAIV0_0_40_uint64_no_val &stack);
    bool is_stack_Set() const;
    bool is_stack_Valid() const;

    OAIV0_0_40_uint64_no_val getCore() const;
    void setCore(const OAIV0_0_40_uint64_no_val &core);
    bool is_core_Set() const;
    bool is_core_Valid() const;

    OAIV0_0_40_uint64_no_val getRss() const;
    void setRss(const OAIV0_0_40_uint64_no_val &rss);
    bool is_rss_Set() const;
    bool is_rss_Valid() const;

    OAIV0_0_40_uint64_no_val getNproc() const;
    void setNproc(const OAIV0_0_40_uint64_no_val &nproc);
    bool is_nproc_Set() const;
    bool is_nproc_Valid() const;

    OAIV0_0_40_uint64_no_val getNofile() const;
    void setNofile(const OAIV0_0_40_uint64_no_val &nofile);
    bool is_nofile_Set() const;
    bool is_nofile_Valid() const;

    OAIV0_0_40_uint64_no_val getMemlock() const;
    void setMemlock(const OAIV0_0_40_uint64_no_val &memlock);
    bool is_memlock_Set() const;
    bool is_memlock_Valid() const;

    OAIV0_0_40_uint64_no_val getAs() const;
    void setAs(const OAIV0_0_40_uint64_no_val &as);
    bool is_as_Set() const;
    bool is_as_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_40_uint64_no_val m_cpu;
    bool m_cpu_isSet;
    bool m_cpu_isValid;

    OAIV0_0_40_uint64_no_val m_fsize;
    bool m_fsize_isSet;
    bool m_fsize_isValid;

    OAIV0_0_40_uint64_no_val m_data;
    bool m_data_isSet;
    bool m_data_isValid;

    OAIV0_0_40_uint64_no_val m_stack;
    bool m_stack_isSet;
    bool m_stack_isValid;

    OAIV0_0_40_uint64_no_val m_core;
    bool m_core_isSet;
    bool m_core_isValid;

    OAIV0_0_40_uint64_no_val m_rss;
    bool m_rss_isSet;
    bool m_rss_isValid;

    OAIV0_0_40_uint64_no_val m_nproc;
    bool m_nproc_isSet;
    bool m_nproc_isValid;

    OAIV0_0_40_uint64_no_val m_nofile;
    bool m_nofile_isSet;
    bool m_nofile_isValid;

    OAIV0_0_40_uint64_no_val m_memlock;
    bool m_memlock_isSet;
    bool m_memlock_isValid;

    OAIV0_0_40_uint64_no_val m_as;
    bool m_as_isSet;
    bool m_as_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_40_job_desc_msg_rlimits)

#endif // OAIV0_0_40_job_desc_msg_rlimits_H
