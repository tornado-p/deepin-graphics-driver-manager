
#ifndef RESOLUTION_H_
#define RESOLUTION_H_

#include <QString>

class Resolution
{
public:
    explicit Resolution(const int id, const QString &name, const QString &description);

    bool operator==(const Resolution &rhs) const { return m_resId == rhs.m_resId; }

private:
    int m_resId;
    QString m_resName;
    QString m_resDescription;
};

#endif