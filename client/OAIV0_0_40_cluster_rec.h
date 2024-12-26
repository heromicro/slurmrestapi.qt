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
 * OAIV0_0_40_cluster_rec.h
 *
 * 
 */

#ifndef OAIV0_0_40_cluster_rec_H
#define OAIV0_0_40_cluster_rec_H

#include <QJsonObject>

#include "OAIV0_0_40_cluster_rec_associations.h"
#include "OAIV0_0_40_cluster_rec_controller.h"
#include "OAIV0_0_40_tres.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_40_cluster_rec_controller;
class OAIV0_0_40_cluster_rec_associations;
class OAIV0_0_40_tres;

class OAIV0_0_40_cluster_rec : public OAIObject {
public:
    OAIV0_0_40_cluster_rec();
    OAIV0_0_40_cluster_rec(QString json);
    ~OAIV0_0_40_cluster_rec() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_40_cluster_rec_controller getController() const;
    void setController(const OAIV0_0_40_cluster_rec_controller &controller);
    bool is_controller_Set() const;
    bool is_controller_Valid() const;

    QList<QString> getFlags() const;
    void setFlags(const QList<QString> &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getNodes() const;
    void setNodes(const QString &nodes);
    bool is_nodes_Set() const;
    bool is_nodes_Valid() const;

    QString getSelectPlugin() const;
    void setSelectPlugin(const QString &select_plugin);
    bool is_select_plugin_Set() const;
    bool is_select_plugin_Valid() const;

    OAIV0_0_40_cluster_rec_associations getAssociations() const;
    void setAssociations(const OAIV0_0_40_cluster_rec_associations &associations);
    bool is_associations_Set() const;
    bool is_associations_Valid() const;

    qint32 getRpcVersion() const;
    void setRpcVersion(const qint32 &rpc_version);
    bool is_rpc_version_Set() const;
    bool is_rpc_version_Valid() const;

    QList<OAIV0_0_40_tres> getTres() const;
    void setTres(const QList<OAIV0_0_40_tres> &tres);
    bool is_tres_Set() const;
    bool is_tres_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_40_cluster_rec_controller m_controller;
    bool m_controller_isSet;
    bool m_controller_isValid;

    QList<QString> m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_nodes;
    bool m_nodes_isSet;
    bool m_nodes_isValid;

    QString m_select_plugin;
    bool m_select_plugin_isSet;
    bool m_select_plugin_isValid;

    OAIV0_0_40_cluster_rec_associations m_associations;
    bool m_associations_isSet;
    bool m_associations_isValid;

    qint32 m_rpc_version;
    bool m_rpc_version_isSet;
    bool m_rpc_version_isValid;

    QList<OAIV0_0_40_tres> m_tres;
    bool m_tres_isSet;
    bool m_tres_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_40_cluster_rec)

#endif // OAIV0_0_40_cluster_rec_H
