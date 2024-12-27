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
 * OAIV0_0_40_process_exit_code_verbose_signal.h
 *
 * 
 */

#ifndef OAIV0_0_40_process_exit_code_verbose_signal_H
#define OAIV0_0_40_process_exit_code_verbose_signal_H

#include <QJsonObject>

#include "OAIV0_0_40_uint16_no_val.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_40_uint16_no_val;

class OAIV0_0_40_process_exit_code_verbose_signal : public OAIObject {
public:
    OAIV0_0_40_process_exit_code_verbose_signal();
    OAIV0_0_40_process_exit_code_verbose_signal(QString json);
    ~OAIV0_0_40_process_exit_code_verbose_signal() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_40_uint16_no_val getId() const;
    void setId(const OAIV0_0_40_uint16_no_val &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_40_uint16_no_val m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_40_process_exit_code_verbose_signal)

#endif // OAIV0_0_40_process_exit_code_verbose_signal_H
