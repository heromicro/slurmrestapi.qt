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
 * OAIV0_0_41_openapi_slurmdbd_config_resp.h
 *
 * 
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_config_resp_H
#define OAIV0_0_41_openapi_slurmdbd_config_resp_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_shares_resp_errors_inner.h"
#include "OAIV0_0_41_openapi_shares_resp_meta.h"
#include "OAIV0_0_41_openapi_shares_resp_warnings_inner.h"
#include "OAIV0_0_41_openapi_slurmdbd_config_resp_accounts_inner.h"
#include "OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner.h"
#include "OAIV0_0_41_openapi_slurmdbd_config_resp_clusters_inner.h"
#include "OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner.h"
#include "OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner.h"
#include "OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner.h"
#include "OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner.h"
#include "OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_41_openapi_slurmdbd_config_resp_clusters_inner;
class OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner;
class OAIV0_0_41_openapi_slurmdbd_config_resp_accounts_inner;
class OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner;
class OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner;
class OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner;
class OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner;
class OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner;
class OAIV0_0_41_openapi_shares_resp_meta;
class OAIV0_0_41_openapi_shares_resp_errors_inner;
class OAIV0_0_41_openapi_shares_resp_warnings_inner;

class OAIV0_0_41_openapi_slurmdbd_config_resp : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_config_resp();
    OAIV0_0_41_openapi_slurmdbd_config_resp(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_config_resp() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_clusters_inner> getClusters() const;
    void setClusters(const QList<OAIV0_0_41_openapi_slurmdbd_config_resp_clusters_inner> &clusters);
    bool is_clusters_Set() const;
    bool is_clusters_Valid() const;

    QList<OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner> getTres() const;
    void setTres(const QList<OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner> &tres);
    bool is_tres_Set() const;
    bool is_tres_Valid() const;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_accounts_inner> getAccounts() const;
    void setAccounts(const QList<OAIV0_0_41_openapi_slurmdbd_config_resp_accounts_inner> &accounts);
    bool is_accounts_Set() const;
    bool is_accounts_Valid() const;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner> getUsers() const;
    void setUsers(const QList<OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner> &users);
    bool is_users_Set() const;
    bool is_users_Valid() const;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner> getQos() const;
    void setQos(const QList<OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner> &qos);
    bool is_qos_Set() const;
    bool is_qos_Valid() const;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner> getWckeys() const;
    void setWckeys(const QList<OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner> &wckeys);
    bool is_wckeys_Set() const;
    bool is_wckeys_Valid() const;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner> getAssociations() const;
    void setAssociations(const QList<OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner> &associations);
    bool is_associations_Set() const;
    bool is_associations_Valid() const;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner> getInstances() const;
    void setInstances(const QList<OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner> &instances);
    bool is_instances_Set() const;
    bool is_instances_Valid() const;

    OAIV0_0_41_openapi_shares_resp_meta getMeta() const;
    void setMeta(const OAIV0_0_41_openapi_shares_resp_meta &meta);
    bool is_meta_Set() const;
    bool is_meta_Valid() const;

    QList<OAIV0_0_41_openapi_shares_resp_errors_inner> getErrors() const;
    void setErrors(const QList<OAIV0_0_41_openapi_shares_resp_errors_inner> &errors);
    bool is_errors_Set() const;
    bool is_errors_Valid() const;

    QList<OAIV0_0_41_openapi_shares_resp_warnings_inner> getWarnings() const;
    void setWarnings(const QList<OAIV0_0_41_openapi_shares_resp_warnings_inner> &warnings);
    bool is_warnings_Set() const;
    bool is_warnings_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_clusters_inner> m_clusters;
    bool m_clusters_isSet;
    bool m_clusters_isValid;

    QList<OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner> m_tres;
    bool m_tres_isSet;
    bool m_tres_isValid;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_accounts_inner> m_accounts;
    bool m_accounts_isSet;
    bool m_accounts_isValid;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner> m_users;
    bool m_users_isSet;
    bool m_users_isValid;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_qos_inner> m_qos;
    bool m_qos_isSet;
    bool m_qos_isValid;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_users_inner_wckeys_inner> m_wckeys;
    bool m_wckeys_isSet;
    bool m_wckeys_isValid;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_associations_inner> m_associations;
    bool m_associations_isSet;
    bool m_associations_isValid;

    QList<OAIV0_0_41_openapi_slurmdbd_config_resp_instances_inner> m_instances;
    bool m_instances_isSet;
    bool m_instances_isValid;

    OAIV0_0_41_openapi_shares_resp_meta m_meta;
    bool m_meta_isSet;
    bool m_meta_isValid;

    QList<OAIV0_0_41_openapi_shares_resp_errors_inner> m_errors;
    bool m_errors_isSet;
    bool m_errors_isValid;

    QList<OAIV0_0_41_openapi_shares_resp_warnings_inner> m_warnings;
    bool m_warnings_isSet;
    bool m_warnings_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_41_openapi_slurmdbd_config_resp)

#endif // OAIV0_0_41_openapi_slurmdbd_config_resp_H