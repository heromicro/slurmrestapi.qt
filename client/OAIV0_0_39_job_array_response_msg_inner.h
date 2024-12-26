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
 * OAIV0_0_39_job_array_response_msg_inner.h
 *
 * ArrayJob
 */

#ifndef OAIV0_0_39_job_array_response_msg_inner_H
#define OAIV0_0_39_job_array_response_msg_inner_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV0_0_39_job_array_response_msg_inner : public OAIObject {
public:
    OAIV0_0_39_job_array_response_msg_inner();
    OAIV0_0_39_job_array_response_msg_inner(QString json);
    ~OAIV0_0_39_job_array_response_msg_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getJobId() const;
    void setJobId(const qint32 &job_id);
    bool is_job_id_Set() const;
    bool is_job_id_Valid() const;

    qint32 getErrorCode() const;
    void setErrorCode(const qint32 &error_code);
    bool is_error_code_Set() const;
    bool is_error_code_Valid() const;

    QString getError() const;
    void setError(const QString &error);
    bool is_error_Set() const;
    bool is_error_Valid() const;

    QString getWhy() const;
    void setWhy(const QString &why);
    bool is_why_Set() const;
    bool is_why_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_job_id;
    bool m_job_id_isSet;
    bool m_job_id_isValid;

    qint32 m_error_code;
    bool m_error_code_isSet;
    bool m_error_code_isValid;

    QString m_error;
    bool m_error_isSet;
    bool m_error_isValid;

    QString m_why;
    bool m_why_isSet;
    bool m_why_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_39_job_array_response_msg_inner)

#endif // OAIV0_0_39_job_array_response_msg_inner_H
