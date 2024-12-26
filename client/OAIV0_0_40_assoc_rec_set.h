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
 * OAIV0_0_40_assoc_rec_set.h
 *
 * 
 */

#ifndef OAIV0_0_40_assoc_rec_set_H
#define OAIV0_0_40_assoc_rec_set_H

#include <QJsonObject>

#include "OAIV0_0_40_tres.h"
#include "OAIV0_0_40_uint32_no_val.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIV0_0_40_uint32_no_val;
class OAIV0_0_40_tres;

class OAIV0_0_40_assoc_rec_set : public OAIObject {
public:
    OAIV0_0_40_assoc_rec_set();
    OAIV0_0_40_assoc_rec_set(QString json);
    ~OAIV0_0_40_assoc_rec_set() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getComment() const;
    void setComment(const QString &comment);
    bool is_comment_Set() const;
    bool is_comment_Valid() const;

    QString getDefaultqos() const;
    void setDefaultqos(const QString &defaultqos);
    bool is_defaultqos_Set() const;
    bool is_defaultqos_Valid() const;

    OAIV0_0_40_uint32_no_val getGrpjobs() const;
    void setGrpjobs(const OAIV0_0_40_uint32_no_val &grpjobs);
    bool is_grpjobs_Set() const;
    bool is_grpjobs_Valid() const;

    OAIV0_0_40_uint32_no_val getGrpjobsaccrue() const;
    void setGrpjobsaccrue(const OAIV0_0_40_uint32_no_val &grpjobsaccrue);
    bool is_grpjobsaccrue_Set() const;
    bool is_grpjobsaccrue_Valid() const;

    OAIV0_0_40_uint32_no_val getGrpsubmitjobs() const;
    void setGrpsubmitjobs(const OAIV0_0_40_uint32_no_val &grpsubmitjobs);
    bool is_grpsubmitjobs_Set() const;
    bool is_grpsubmitjobs_Valid() const;

    QList<OAIV0_0_40_tres> getGrptres() const;
    void setGrptres(const QList<OAIV0_0_40_tres> &grptres);
    bool is_grptres_Set() const;
    bool is_grptres_Valid() const;

    QList<OAIV0_0_40_tres> getGrptresmins() const;
    void setGrptresmins(const QList<OAIV0_0_40_tres> &grptresmins);
    bool is_grptresmins_Set() const;
    bool is_grptresmins_Valid() const;

    QList<OAIV0_0_40_tres> getGrptresrunmins() const;
    void setGrptresrunmins(const QList<OAIV0_0_40_tres> &grptresrunmins);
    bool is_grptresrunmins_Set() const;
    bool is_grptresrunmins_Valid() const;

    OAIV0_0_40_uint32_no_val getGrpwall() const;
    void setGrpwall(const OAIV0_0_40_uint32_no_val &grpwall);
    bool is_grpwall_Set() const;
    bool is_grpwall_Valid() const;

    OAIV0_0_40_uint32_no_val getMaxjobs() const;
    void setMaxjobs(const OAIV0_0_40_uint32_no_val &maxjobs);
    bool is_maxjobs_Set() const;
    bool is_maxjobs_Valid() const;

    OAIV0_0_40_uint32_no_val getMaxjobsaccrue() const;
    void setMaxjobsaccrue(const OAIV0_0_40_uint32_no_val &maxjobsaccrue);
    bool is_maxjobsaccrue_Set() const;
    bool is_maxjobsaccrue_Valid() const;

    OAIV0_0_40_uint32_no_val getMaxsubmitjobs() const;
    void setMaxsubmitjobs(const OAIV0_0_40_uint32_no_val &maxsubmitjobs);
    bool is_maxsubmitjobs_Set() const;
    bool is_maxsubmitjobs_Valid() const;

    QList<OAIV0_0_40_tres> getMaxtresminsperjob() const;
    void setMaxtresminsperjob(const QList<OAIV0_0_40_tres> &maxtresminsperjob);
    bool is_maxtresminsperjob_Set() const;
    bool is_maxtresminsperjob_Valid() const;

    QList<OAIV0_0_40_tres> getMaxtresrunmins() const;
    void setMaxtresrunmins(const QList<OAIV0_0_40_tres> &maxtresrunmins);
    bool is_maxtresrunmins_Set() const;
    bool is_maxtresrunmins_Valid() const;

    QList<OAIV0_0_40_tres> getMaxtresperjob() const;
    void setMaxtresperjob(const QList<OAIV0_0_40_tres> &maxtresperjob);
    bool is_maxtresperjob_Set() const;
    bool is_maxtresperjob_Valid() const;

    QList<OAIV0_0_40_tres> getMaxtrespernode() const;
    void setMaxtrespernode(const QList<OAIV0_0_40_tres> &maxtrespernode);
    bool is_maxtrespernode_Set() const;
    bool is_maxtrespernode_Valid() const;

    OAIV0_0_40_uint32_no_val getMaxwalldurationperjob() const;
    void setMaxwalldurationperjob(const OAIV0_0_40_uint32_no_val &maxwalldurationperjob);
    bool is_maxwalldurationperjob_Set() const;
    bool is_maxwalldurationperjob_Valid() const;

    OAIV0_0_40_uint32_no_val getMinpriothresh() const;
    void setMinpriothresh(const OAIV0_0_40_uint32_no_val &minpriothresh);
    bool is_minpriothresh_Set() const;
    bool is_minpriothresh_Valid() const;

    QString getParent() const;
    void setParent(const QString &parent);
    bool is_parent_Set() const;
    bool is_parent_Valid() const;

    OAIV0_0_40_uint32_no_val getPriority() const;
    void setPriority(const OAIV0_0_40_uint32_no_val &priority);
    bool is_priority_Set() const;
    bool is_priority_Valid() const;

    QList<QString> getQoslevel() const;
    void setQoslevel(const QList<QString> &qoslevel);
    bool is_qoslevel_Set() const;
    bool is_qoslevel_Valid() const;

    qint32 getFairshare() const;
    void setFairshare(const qint32 &fairshare);
    bool is_fairshare_Set() const;
    bool is_fairshare_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_comment;
    bool m_comment_isSet;
    bool m_comment_isValid;

    QString m_defaultqos;
    bool m_defaultqos_isSet;
    bool m_defaultqos_isValid;

    OAIV0_0_40_uint32_no_val m_grpjobs;
    bool m_grpjobs_isSet;
    bool m_grpjobs_isValid;

    OAIV0_0_40_uint32_no_val m_grpjobsaccrue;
    bool m_grpjobsaccrue_isSet;
    bool m_grpjobsaccrue_isValid;

    OAIV0_0_40_uint32_no_val m_grpsubmitjobs;
    bool m_grpsubmitjobs_isSet;
    bool m_grpsubmitjobs_isValid;

    QList<OAIV0_0_40_tres> m_grptres;
    bool m_grptres_isSet;
    bool m_grptres_isValid;

    QList<OAIV0_0_40_tres> m_grptresmins;
    bool m_grptresmins_isSet;
    bool m_grptresmins_isValid;

    QList<OAIV0_0_40_tres> m_grptresrunmins;
    bool m_grptresrunmins_isSet;
    bool m_grptresrunmins_isValid;

    OAIV0_0_40_uint32_no_val m_grpwall;
    bool m_grpwall_isSet;
    bool m_grpwall_isValid;

    OAIV0_0_40_uint32_no_val m_maxjobs;
    bool m_maxjobs_isSet;
    bool m_maxjobs_isValid;

    OAIV0_0_40_uint32_no_val m_maxjobsaccrue;
    bool m_maxjobsaccrue_isSet;
    bool m_maxjobsaccrue_isValid;

    OAIV0_0_40_uint32_no_val m_maxsubmitjobs;
    bool m_maxsubmitjobs_isSet;
    bool m_maxsubmitjobs_isValid;

    QList<OAIV0_0_40_tres> m_maxtresminsperjob;
    bool m_maxtresminsperjob_isSet;
    bool m_maxtresminsperjob_isValid;

    QList<OAIV0_0_40_tres> m_maxtresrunmins;
    bool m_maxtresrunmins_isSet;
    bool m_maxtresrunmins_isValid;

    QList<OAIV0_0_40_tres> m_maxtresperjob;
    bool m_maxtresperjob_isSet;
    bool m_maxtresperjob_isValid;

    QList<OAIV0_0_40_tres> m_maxtrespernode;
    bool m_maxtrespernode_isSet;
    bool m_maxtrespernode_isValid;

    OAIV0_0_40_uint32_no_val m_maxwalldurationperjob;
    bool m_maxwalldurationperjob_isSet;
    bool m_maxwalldurationperjob_isValid;

    OAIV0_0_40_uint32_no_val m_minpriothresh;
    bool m_minpriothresh_isSet;
    bool m_minpriothresh_isValid;

    QString m_parent;
    bool m_parent_isSet;
    bool m_parent_isValid;

    OAIV0_0_40_uint32_no_val m_priority;
    bool m_priority_isSet;
    bool m_priority_isValid;

    QList<QString> m_qoslevel;
    bool m_qoslevel_isSet;
    bool m_qoslevel_isValid;

    qint32 m_fairshare;
    bool m_fairshare_isSet;
    bool m_fairshare_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_40_assoc_rec_set)

#endif // OAIV0_0_40_assoc_rec_set_H
