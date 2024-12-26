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
 * OAIV0_0_39_cron_entry_line.h
 *
 * 
 */

#ifndef OAIV0_0_39_cron_entry_line_H
#define OAIV0_0_39_cron_entry_line_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV0_0_39_cron_entry_line : public OAIObject {
public:
    OAIV0_0_39_cron_entry_line();
    OAIV0_0_39_cron_entry_line(QString json);
    ~OAIV0_0_39_cron_entry_line() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getEnd() const;
    void setEnd(const qint32 &end);
    bool is_end_Set() const;
    bool is_end_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_end;
    bool m_end_isSet;
    bool m_end_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_39_cron_entry_line)

#endif // OAIV0_0_39_cron_entry_line_H
