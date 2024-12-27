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
 * OAIV0_0_40_openapi_users_add_cond_resp.h
 *
 * 
 */

#ifndef OAIV0_0_40_openapi_users_add_cond_resp_H
#define OAIV0_0_40_openapi_users_add_cond_resp_H

#include <QJsonObject>

#include "OAIV0_0_40_openapi_error.h"
#include "OAIV0_0_40_openapi_meta.h"
#include "OAIV0_0_40_openapi_warning.h"
#include "OAIV0_0_40_user_short.h"
#include "OAIV0_0_40_users_add_cond.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_40_users_add_cond;
class OAIV0_0_40_user_short;
class OAIV0_0_40_openapi_meta;
class OAIV0_0_40_openapi_error;
class OAIV0_0_40_openapi_warning;

class OAIV0_0_40_openapi_users_add_cond_resp : public OAIObject {
public:
    OAIV0_0_40_openapi_users_add_cond_resp();
    OAIV0_0_40_openapi_users_add_cond_resp(QString json);
    ~OAIV0_0_40_openapi_users_add_cond_resp() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_40_users_add_cond getAssociationCondition() const;
    void setAssociationCondition(const OAIV0_0_40_users_add_cond &association_condition);
    bool is_association_condition_Set() const;
    bool is_association_condition_Valid() const;

    OAIV0_0_40_user_short getUser() const;
    void setUser(const OAIV0_0_40_user_short &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    OAIV0_0_40_openapi_meta getMeta() const;
    void setMeta(const OAIV0_0_40_openapi_meta &meta);
    bool is_meta_Set() const;
    bool is_meta_Valid() const;

    QList<OAIV0_0_40_openapi_error> getErrors() const;
    void setErrors(const QList<OAIV0_0_40_openapi_error> &errors);
    bool is_errors_Set() const;
    bool is_errors_Valid() const;

    QList<OAIV0_0_40_openapi_warning> getWarnings() const;
    void setWarnings(const QList<OAIV0_0_40_openapi_warning> &warnings);
    bool is_warnings_Set() const;
    bool is_warnings_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_40_users_add_cond m_association_condition;
    bool m_association_condition_isSet;
    bool m_association_condition_isValid;

    OAIV0_0_40_user_short m_user;
    bool m_user_isSet;
    bool m_user_isValid;

    OAIV0_0_40_openapi_meta m_meta;
    bool m_meta_isSet;
    bool m_meta_isValid;

    QList<OAIV0_0_40_openapi_error> m_errors;
    bool m_errors_isSet;
    bool m_errors_isValid;

    QList<OAIV0_0_40_openapi_warning> m_warnings;
    bool m_warnings_isSet;
    bool m_warnings_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_40_openapi_users_add_cond_resp)

#endif // OAIV0_0_40_openapi_users_add_cond_resp_H