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
 * OAIV0_0_39_stats_rpc_time.h
 *
 * 
 */

#ifndef OAIV0_0_39_stats_rpc_time_H
#define OAIV0_0_39_stats_rpc_time_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV0_0_39_stats_rpc_time : public OAIObject {
public:
    OAIV0_0_39_stats_rpc_time();
    OAIV0_0_39_stats_rpc_time(QString json);
    ~OAIV0_0_39_stats_rpc_time() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint64 getTotal() const;
    void setTotal(const qint64 &total);
    bool is_total_Set() const;
    bool is_total_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint64 m_total;
    bool m_total_isSet;
    bool m_total_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_39_stats_rpc_time)

#endif // OAIV0_0_39_stats_rpc_time_H
