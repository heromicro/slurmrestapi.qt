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
 * OAIV0_0_40_openapi_error.h
 *
 * 
 */

#ifndef OAIV0_0_40_openapi_error_H
#define OAIV0_0_40_openapi_error_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIV0_0_40_openapi_error : public OAIObject {
public:
    OAIV0_0_40_openapi_error();
    OAIV0_0_40_openapi_error(QString json);
    ~OAIV0_0_40_openapi_error() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    qint32 getErrorNumber() const;
    void setErrorNumber(const qint32 &error_number);
    bool is_error_number_Set() const;
    bool is_error_number_Valid() const;

    QString getError() const;
    void setError(const QString &error);
    bool is_error_Set() const;
    bool is_error_Valid() const;

    QString getSource() const;
    void setSource(const QString &source);
    bool is_source_Set() const;
    bool is_source_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    qint32 m_error_number;
    bool m_error_number_isSet;
    bool m_error_number_isValid;

    QString m_error;
    bool m_error_isSet;
    bool m_error_isValid;

    QString m_source;
    bool m_source_isSet;
    bool m_source_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIV0_0_40_openapi_error)

#endif // OAIV0_0_40_openapi_error_H
