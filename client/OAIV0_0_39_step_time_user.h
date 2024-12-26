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
 * OAIV0_0_39_step_time_user.h
 *
 * 
 */

#ifndef OAIV0_0_39_step_time_user_H
#define OAIV0_0_39_step_time_user_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV0_0_39_step_time_user : public OAIObject {
public:
    OAIV0_0_39_step_time_user();
    OAIV0_0_39_step_time_user(QString json);
    ~OAIV0_0_39_step_time_user() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getMicroseconds() const;
    void setMicroseconds(const qint32 &microseconds);
    bool is_microseconds_Set() const;
    bool is_microseconds_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_microseconds;
    bool m_microseconds_isSet;
    bool m_microseconds_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_39_step_time_user)

#endif // OAIV0_0_39_step_time_user_H
