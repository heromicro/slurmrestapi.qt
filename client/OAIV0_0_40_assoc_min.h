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
 * OAIV0_0_40_assoc_min.h
 *
 * 
 */

#ifndef OAIV0_0_40_assoc_min_H
#define OAIV0_0_40_assoc_min_H

#include <QJsonObject>

#include "OAIV0_0_40_uint32_no_val.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_40_uint32_no_val;

class OAIV0_0_40_assoc_min : public OAIObject {
public:
    OAIV0_0_40_assoc_min();
    OAIV0_0_40_assoc_min(QString json);
    ~OAIV0_0_40_assoc_min() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_40_uint32_no_val getPriorityThreshold() const;
    void setPriorityThreshold(const OAIV0_0_40_uint32_no_val &priority_threshold);
    bool is_priority_threshold_Set() const;
    bool is_priority_threshold_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_40_uint32_no_val m_priority_threshold;
    bool m_priority_threshold_isSet;
    bool m_priority_threshold_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_40_assoc_min)

#endif // OAIV0_0_40_assoc_min_H
