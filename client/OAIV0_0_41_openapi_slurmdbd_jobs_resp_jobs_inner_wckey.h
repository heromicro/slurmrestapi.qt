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
 * OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_wckey.h
 *
 * Workload characterization key
 */

#ifndef OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_wckey_H
#define OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_wckey_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_wckey : public OAIObject {
public:
    OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_wckey();
    OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_wckey(QString json);
    ~OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_wckey() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getWckey() const;
    void setWckey(const QString &wckey);
    bool is_wckey_Set() const;
    bool is_wckey_Valid() const;

    QList<QString> getFlags() const;
    void setFlags(const QList<QString> &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_wckey;
    bool m_wckey_isSet;
    bool m_wckey_isValid;

    QList<QString> m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_wckey)

#endif // OAIV0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_wckey_H