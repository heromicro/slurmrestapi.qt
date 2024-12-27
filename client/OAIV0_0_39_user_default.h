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
 * OAIV0_0_39_user_default.h
 *
 * 
 */

#ifndef OAIV0_0_39_user_default_H
#define OAIV0_0_39_user_default_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {

class OAIV0_0_39_user_default : public OAIObject {
public:
    OAIV0_0_39_user_default();
    OAIV0_0_39_user_default(QString json);
    ~OAIV0_0_39_user_default() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAccount() const;
    void setAccount(const QString &account);
    bool is_account_Set() const;
    bool is_account_Valid() const;

    QString getWckey() const;
    void setWckey(const QString &wckey);
    bool is_wckey_Set() const;
    bool is_wckey_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_account;
    bool m_account_isSet;
    bool m_account_isValid;

    QString m_wckey;
    bool m_wckey_isSet;
    bool m_wckey_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_39_user_default)

#endif // OAIV0_0_39_user_default_H
