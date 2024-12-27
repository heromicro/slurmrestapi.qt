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
 * OAIV0_0_39_assoc_max_tres_per.h
 *
 * 
 */

#ifndef OAIV0_0_39_assoc_max_tres_per_H
#define OAIV0_0_39_assoc_max_tres_per_H

#include <QJsonObject>

#include "OAIV0_0_39_tres.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_39_tres;

class OAIV0_0_39_assoc_max_tres_per : public OAIObject {
public:
    OAIV0_0_39_assoc_max_tres_per();
    OAIV0_0_39_assoc_max_tres_per(QString json);
    ~OAIV0_0_39_assoc_max_tres_per() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIV0_0_39_tres> getJob() const;
    void setJob(const QList<OAIV0_0_39_tres> &job);
    bool is_job_Set() const;
    bool is_job_Valid() const;

    QList<OAIV0_0_39_tres> getNode() const;
    void setNode(const QList<OAIV0_0_39_tres> &node);
    bool is_node_Set() const;
    bool is_node_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIV0_0_39_tres> m_job;
    bool m_job_isSet;
    bool m_job_isValid;

    QList<OAIV0_0_39_tres> m_node;
    bool m_node_isSet;
    bool m_node_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_39_assoc_max_tres_per)

#endif // OAIV0_0_39_assoc_max_tres_per_H
