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
 * OAIStatus.h
 *
 * 
 */

#ifndef OAIStatus_H
#define OAIStatus_H

#include <QJsonObject>

#include "OAIV0_0_39_error.h"
#include "OAIV0_0_39_meta.h"
#include "OAIV0_0_39_warning.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace hm:slurm:client {
class OAIV0_0_39_meta;
class OAIV0_0_39_error;
class OAIV0_0_39_warning;

class OAIStatus : public OAIObject {
public:
    OAIStatus();
    OAIStatus(QString json);
    ~OAIStatus() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIV0_0_39_meta getMeta() const;
    void setMeta(const OAIV0_0_39_meta &meta);
    bool is_meta_Set() const;
    bool is_meta_Valid() const;

    QList<OAIV0_0_39_error> getErrors() const;
    void setErrors(const QList<OAIV0_0_39_error> &errors);
    bool is_errors_Set() const;
    bool is_errors_Valid() const;

    QList<OAIV0_0_39_warning> getWarnings() const;
    void setWarnings(const QList<OAIV0_0_39_warning> &warnings);
    bool is_warnings_Set() const;
    bool is_warnings_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIV0_0_39_meta m_meta;
    bool m_meta_isSet;
    bool m_meta_isValid;

    QList<OAIV0_0_39_error> m_errors;
    bool m_errors_isSet;
    bool m_errors_isValid;

    QList<OAIV0_0_39_warning> m_warnings;
    bool m_warnings_isSet;
    bool m_warnings_isValid;
};

} // namespace hm:slurm:client

Q_DECLARE_METATYPE(hm:slurm:client::OAIStatus)

#endif // OAIStatus_H
