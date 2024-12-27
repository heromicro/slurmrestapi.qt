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
 * OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_H
#define OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_H

#include <QJsonObject>

#include "OAIV0_0_40_accounting_allocated.h"
#include "OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_40_accounting_allocated;
class OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES;

class OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner();
    OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_40_accounting_allocated getAllocated() const;
    void setAllocated(const OAIV0_0_40_accounting_allocated &allocated);
    bool is_allocated_Set() const;
    bool is_allocated_Valid() const;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    qint64 getStart() const;
    void setStart(const qint64 &start);
    bool is_start_Set() const;
    bool is_start_Valid() const;

    OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES getTres() const;
    void setTres(const OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES &tres);
    bool is_tres_Set() const;
    bool is_tres_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_40_accounting_allocated m_allocated;
    bool m_allocated_isSet;
    bool m_allocated_isValid;

    qint32 m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    qint64 m_start;
    bool m_start_isSet;
    bool m_start_isValid;

    OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_TRES m_tres;
    bool m_tres_isSet;
    bool m_tres_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner)

#endif // OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner_accounting_inner_H
