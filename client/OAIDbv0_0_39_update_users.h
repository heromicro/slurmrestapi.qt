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
 * OAIDbv0_0_39_update_users.h
 *
 * 
 */

#ifndef OAIDbv0_0_39_update_users_H
#define OAIDbv0_0_39_update_users_H

#include <QJsonObject>

#include "OAIV0_0_39_user.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_39_user;

class OAIDbv0_0_39_update_users : public OAIObject {
public:
    OAIDbv0_0_39_update_users();
    OAIDbv0_0_39_update_users(QString json);
    ~OAIDbv0_0_39_update_users() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIV0_0_39_user> getUsers() const;
    void setUsers(const QList<OAIV0_0_39_user> &users);
    bool is_users_Set() const;
    bool is_users_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIV0_0_39_user> m_users;
    bool m_users_isSet;
    bool m_users_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIDbv0_0_39_update_users)

#endif // OAIDbv0_0_39_update_users_H
