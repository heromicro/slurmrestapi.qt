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
 * OAIV0_0_39_meta.h
 *
 * 
 */

#ifndef OAIV0_0_39_meta_H
#define OAIV0_0_39_meta_H

#include <QJsonObject>

#include "OAIV0_0_39_meta_Slurm.h"
#include "OAIV0_0_39_meta_plugin.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_39_meta_plugin;
class OAIV0_0_39_meta_Slurm;

class OAIV0_0_39_meta : public OAIObject {
public:
    OAIV0_0_39_meta();
    OAIV0_0_39_meta(QString json);
    ~OAIV0_0_39_meta() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_39_meta_plugin getPlugin() const;
    void setPlugin(const OAIV0_0_39_meta_plugin &plugin);
    bool is_plugin_Set() const;
    bool is_plugin_Valid() const;

    OAIV0_0_39_meta_Slurm getSlurm() const;
    void setSlurm(const OAIV0_0_39_meta_Slurm &slurm);
    bool is_slurm_Set() const;
    bool is_slurm_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_39_meta_plugin m_plugin;
    bool m_plugin_isSet;
    bool m_plugin_isValid;

    OAIV0_0_39_meta_Slurm m_slurm;
    bool m_slurm_isSet;
    bool m_slurm_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_39_meta)

#endif // OAIV0_0_39_meta_H
