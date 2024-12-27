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
 * OAIV0_0_40_openapi_meta_client.h
 *
 * 
 */

#ifndef OAIV0_0_40_openapi_meta_client_H
#define OAIV0_0_40_openapi_meta_client_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {

class OAIV0_0_40_openapi_meta_client : public OAIObject {
public:
    OAIV0_0_40_openapi_meta_client();
    OAIV0_0_40_openapi_meta_client(QString json);
    ~OAIV0_0_40_openapi_meta_client() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSource() const;
    void setSource(const QString &source);
    bool is_source_Set() const;
    bool is_source_Valid() const;

    QString getUser() const;
    void setUser(const QString &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    QString getGroup() const;
    void setGroup(const QString &group);
    bool is_group_Set() const;
    bool is_group_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_source;
    bool m_source_isSet;
    bool m_source_isValid;

    QString m_user;
    bool m_user_isSet;
    bool m_user_isValid;

    QString m_group;
    bool m_group_isSet;
    bool m_group_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_40_openapi_meta_client)

#endif // OAIV0_0_40_openapi_meta_client_H
