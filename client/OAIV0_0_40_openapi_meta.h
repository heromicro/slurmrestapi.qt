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
 * OAIV0_0_40_openapi_meta.h
 *
 * 
 */

#ifndef OAIV0_0_40_openapi_meta_H
#define OAIV0_0_40_openapi_meta_H

#include <QJsonObject>

#include "OAIV0_0_40_openapi_meta_client.h"
#include "OAIV0_0_40_openapi_meta_plugin.h"
#include "OAIV0_0_40_openapi_meta_slurm.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_40_openapi_meta_plugin;
class OAIV0_0_40_openapi_meta_client;
class OAIV0_0_40_openapi_meta_slurm;

class OAIV0_0_40_openapi_meta : public OAIObject {
public:
    OAIV0_0_40_openapi_meta();
    OAIV0_0_40_openapi_meta(QString json);
    ~OAIV0_0_40_openapi_meta() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_40_openapi_meta_plugin getPlugin() const;
    void setPlugin(const OAIV0_0_40_openapi_meta_plugin &plugin);
    bool is_plugin_Set() const;
    bool is_plugin_Valid() const;

    OAIV0_0_40_openapi_meta_client getClient() const;
    void setClient(const OAIV0_0_40_openapi_meta_client &client);
    bool is_client_Set() const;
    bool is_client_Valid() const;

    QList<QString> getCommand() const;
    void setCommand(const QList<QString> &command);
    bool is_command_Set() const;
    bool is_command_Valid() const;

    OAIV0_0_40_openapi_meta_slurm getSlurm() const;
    void setSlurm(const OAIV0_0_40_openapi_meta_slurm &slurm);
    bool is_slurm_Set() const;
    bool is_slurm_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_40_openapi_meta_plugin m_plugin;
    bool m_plugin_isSet;
    bool m_plugin_isValid;

    OAIV0_0_40_openapi_meta_client m_client;
    bool m_client_isSet;
    bool m_client_isValid;

    QList<QString> m_command;
    bool m_command_isSet;
    bool m_command_isValid;

    OAIV0_0_40_openapi_meta_slurm m_slurm;
    bool m_slurm_isSet;
    bool m_slurm_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIV0_0_40_openapi_meta)

#endif // OAIV0_0_40_openapi_meta_H
