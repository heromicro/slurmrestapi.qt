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
 * OAIV0_0_39_job_reservation.h
 *
 * 
 */

#ifndef OAIV0_0_39_job_reservation_H
#define OAIV0_0_39_job_reservation_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV0_0_39_job_reservation : public OAIObject {
public:
    OAIV0_0_39_job_reservation();
    OAIV0_0_39_job_reservation(QString json);
    ~OAIV0_0_39_job_reservation() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_39_job_reservation)

#endif // OAIV0_0_39_job_reservation_H
