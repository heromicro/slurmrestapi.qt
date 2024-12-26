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
 * OAIV0_0_40_step_tres_requested.h
 *
 * 
 */

#ifndef OAIV0_0_40_step_tres_requested_H
#define OAIV0_0_40_step_tres_requested_H

#include <QJsonObject>

#include "OAIV0_0_40_tres.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_40_tres;

class OAIV0_0_40_step_tres_requested : public OAIObject {
public:
    OAIV0_0_40_step_tres_requested();
    OAIV0_0_40_step_tres_requested(QString json);
    ~OAIV0_0_40_step_tres_requested() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIV0_0_40_tres> getMax() const;
    void setMax(const QList<OAIV0_0_40_tres> &max);
    bool is_max_Set() const;
    bool is_max_Valid() const;

    QList<OAIV0_0_40_tres> getMin() const;
    void setMin(const QList<OAIV0_0_40_tres> &min);
    bool is_min_Set() const;
    bool is_min_Valid() const;

    QList<OAIV0_0_40_tres> getAverage() const;
    void setAverage(const QList<OAIV0_0_40_tres> &average);
    bool is_average_Set() const;
    bool is_average_Valid() const;

    QList<OAIV0_0_40_tres> getTotal() const;
    void setTotal(const QList<OAIV0_0_40_tres> &total);
    bool is_total_Set() const;
    bool is_total_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIV0_0_40_tres> m_max;
    bool m_max_isSet;
    bool m_max_isValid;

    QList<OAIV0_0_40_tres> m_min;
    bool m_min_isSet;
    bool m_min_isValid;

    QList<OAIV0_0_40_tres> m_average;
    bool m_average_isSet;
    bool m_average_isValid;

    QList<OAIV0_0_40_tres> m_total;
    bool m_total_isSet;
    bool m_total_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_40_step_tres_requested)

#endif // OAIV0_0_40_step_tres_requested_H
