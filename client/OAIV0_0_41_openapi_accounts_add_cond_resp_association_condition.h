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
 * OAIV0_0_41_openapi_accounts_add_cond_resp_association_condition.h
 *
 * CSV list of accounts, association limits and options, CSV list of clusters
 */

#ifndef OAIV0_0_41_openapi_accounts_add_cond_resp_association_condition_H
#define OAIV0_0_41_openapi_accounts_add_cond_resp_association_condition_H

#include <QJsonObject>

#include "OAIV0_0_41_openapi_users_add_cond_resp_association_condition_association.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_41_openapi_users_add_cond_resp_association_condition_association;

class OAIV0_0_41_openapi_accounts_add_cond_resp_association_condition : public OAIObject {
public:
    OAIV0_0_41_openapi_accounts_add_cond_resp_association_condition();
    OAIV0_0_41_openapi_accounts_add_cond_resp_association_condition(QString json);
    ~OAIV0_0_41_openapi_accounts_add_cond_resp_association_condition() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<QString> getAccounts() const;
    void setAccounts(const QList<QString> &accounts);
    bool is_accounts_Set() const;
    bool is_accounts_Valid() const;

    OAIV0_0_41_openapi_users_add_cond_resp_association_condition_association getAssociation() const;
    void setAssociation(const OAIV0_0_41_openapi_users_add_cond_resp_association_condition_association &association);
    bool is_association_Set() const;
    bool is_association_Valid() const;

    QList<QString> getClusters() const;
    void setClusters(const QList<QString> &clusters);
    bool is_clusters_Set() const;
    bool is_clusters_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<QString> m_accounts;
    bool m_accounts_isSet;
    bool m_accounts_isValid;

    OAIV0_0_41_openapi_users_add_cond_resp_association_condition_association m_association;
    bool m_association_isSet;
    bool m_association_isValid;

    QList<QString> m_clusters;
    bool m_clusters_isSet;
    bool m_clusters_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_41_openapi_accounts_add_cond_resp_association_condition)

#endif // OAIV0_0_41_openapi_accounts_add_cond_resp_association_condition_H
