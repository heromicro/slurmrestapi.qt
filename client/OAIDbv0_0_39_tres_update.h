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
 * OAIDbv0_0_39_tres_update.h
 *
 * 
 */

#ifndef OAIDbv0_0_39_tres_update_H
#define OAIDbv0_0_39_tres_update_H

#include <QJsonObject>

#include "OAIV0_0_39_tres.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_39_tres;

class OAIDbv0_0_39_tres_update : public OAIObject {
public:
    OAIDbv0_0_39_tres_update();
    OAIDbv0_0_39_tres_update(QString json);
    ~OAIDbv0_0_39_tres_update() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIV0_0_39_tres> getTres() const;
    void setTres(const QList<OAIV0_0_39_tres> &tres);
    bool is_tres_Set() const;
    bool is_tres_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIV0_0_39_tres> m_tres;
    bool m_tres_isSet;
    bool m_tres_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIDbv0_0_39_tres_update)

#endif // OAIDbv0_0_39_tres_update_H
