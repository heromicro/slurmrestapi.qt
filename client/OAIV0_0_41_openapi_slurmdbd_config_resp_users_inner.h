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
 * OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_H
#define OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_H

#include <QJsonObject>

#include "OAIV0_0_40_user_default.h"
#include "OAIV0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner.h"
#include "OAIV0_0_41_openapi_slurmdbd_config_resp_accounts_inner_coordinators_inner.h"
#include "OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner;
class OAIV0_0_41_openapi_slurmdbd_config_resp_accounts_inner_coordinators_inner;
class OAIV0_0_40_user_default;
class OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner;

class OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner();
    OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<QString> getAdministratorLevel() const;
    void setAdministratorLevel(const QList<QString> &administrator_level);
    bool is_administrator_level_Set() const;
    bool is_administrator_level_Valid() const;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner> getAssociations() const;
    void setAssociations(const QList<OAIV0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner> &associations);
    bool is_associations_Set() const;
    bool is_associations_Valid() const;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_accounts_inner_coordinators_inner> getCoordinators() const;
    void setCoordinators(const QList<OAIV0_0_41_openapi_slurmdbd_config_resp_accounts_inner_coordinators_inner> &coordinators);
    bool is_coordinators_Set() const;
    bool is_coordinators_Valid() const;

    OAIV0_0_40_user_default getRDefault() const;
    void setRDefault(const OAIV0_0_40_user_default &r_default);
    bool is_r_default_Set() const;
    bool is_r_default_Valid() const;

    QList<QString> getFlags() const;
    void setFlags(const QList<QString> &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getOldName() const;
    void setOldName(const QString &old_name);
    bool is_old_name_Set() const;
    bool is_old_name_Valid() const;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner> getWckeys() const;
    void setWckeys(const QList<OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner> &wckeys);
    bool is_wckeys_Set() const;
    bool is_wckeys_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<QString> m_administrator_level;
    bool m_administrator_level_isSet;
    bool m_administrator_level_isValid;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_accounts_inner_associations_inner> m_associations;
    bool m_associations_isSet;
    bool m_associations_isValid;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_accounts_inner_coordinators_inner> m_coordinators;
    bool m_coordinators_isSet;
    bool m_coordinators_isValid;

    OAIV0_0_40_user_default m_r_default;
    bool m_r_default_isSet;
    bool m_r_default_isValid;

    QList<QString> m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_old_name;
    bool m_old_name_isSet;
    bool m_old_name_isValid;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner> m_wckeys;
    bool m_wckeys_isSet;
    bool m_wckeys_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner)

#endif // OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_H
