/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIV0_0_39_job_comment.h
 *
 * 
 */

#ifndef OAIV0_0_39_job_comment_H
#define OAIV0_0_39_job_comment_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV0_0_39_job_comment : public OAIObject {
public:
    OAIV0_0_39_job_comment();
    OAIV0_0_39_job_comment(QString json);
    ~OAIV0_0_39_job_comment() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSystem() const;
    void setSystem(const QString &system);
    bool is_system_Set() const;
    bool is_system_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_system;
    bool m_system_isSet;
    bool m_system_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_39_job_comment)

#endif // OAIV0_0_39_job_comment_H
