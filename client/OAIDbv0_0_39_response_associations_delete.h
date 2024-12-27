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
 * OAIDbv0_0_39_response_associations_delete.h
 *
 * 
 */

#ifndef OAIDbv0_0_39_response_associations_delete_H
#define OAIDbv0_0_39_response_associations_delete_H

#include <QJsonObject>

#include "OAIDbv0_0_39_error.h"
#include "OAIDbv0_0_39_meta.h"
#include "OAIDbv0_0_39_warning.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIDbv0_0_39_meta;
class OAIDbv0_0_39_error;
class OAIDbv0_0_39_warning;

class OAIDbv0_0_39_response_associations_delete : public OAIObject {
public:
    OAIDbv0_0_39_response_associations_delete();
    OAIDbv0_0_39_response_associations_delete(QString json);
    ~OAIDbv0_0_39_response_associations_delete() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIDbv0_0_39_meta getMeta() const;
    void setMeta(const OAIDbv0_0_39_meta &meta);
    bool is_meta_Set() const;
    bool is_meta_Valid() const;

    QList<OAIDbv0_0_39_error> getErrors() const;
    void setErrors(const QList<OAIDbv0_0_39_error> &errors);
    bool is_errors_Set() const;
    bool is_errors_Valid() const;

    QList<OAIDbv0_0_39_warning> getWarnings() const;
    void setWarnings(const QList<OAIDbv0_0_39_warning> &warnings);
    bool is_warnings_Set() const;
    bool is_warnings_Valid() const;

    QList<QString> getRemovedAssociations() const;
    void setRemovedAssociations(const QList<QString> &removed_associations);
    bool is_removed_associations_Set() const;
    bool is_removed_associations_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIDbv0_0_39_meta m_meta;
    bool m_meta_isSet;
    bool m_meta_isValid;

    QList<OAIDbv0_0_39_error> m_errors;
    bool m_errors_isSet;
    bool m_errors_isValid;

    QList<OAIDbv0_0_39_warning> m_warnings;
    bool m_warnings_isSet;
    bool m_warnings_isValid;

    QList<QString> m_removed_associations;
    bool m_removed_associations_isSet;
    bool m_removed_associations_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIDbv0_0_39_response_associations_delete)

#endif // OAIDbv0_0_39_response_associations_delete_H
