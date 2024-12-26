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
 * OAIV0_0_39_assoc_max_jobs.h
 *
 * 
 */

#ifndef OAIV0_0_39_assoc_max_jobs_H
#define OAIV0_0_39_assoc_max_jobs_H

#include <QJsonObject>

#include "OAIV0_0_39_assoc_max_jobs_per.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_39_assoc_max_jobs_per;

class OAIV0_0_39_assoc_max_jobs : public OAIObject {
public:
    OAIV0_0_39_assoc_max_jobs();
    OAIV0_0_39_assoc_max_jobs(QString json);
    ~OAIV0_0_39_assoc_max_jobs() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_39_assoc_max_jobs_per getPer() const;
    void setPer(const OAIV0_0_39_assoc_max_jobs_per &per);
    bool is_per_Set() const;
    bool is_per_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_39_assoc_max_jobs_per m_per;
    bool m_per_isSet;
    bool m_per_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_39_assoc_max_jobs)

#endif // OAIV0_0_39_assoc_max_jobs_H
