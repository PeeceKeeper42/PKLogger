#ifndef ABSTRACTLOGGER_H
#define ABSTRACTLOGGER_H
//==============================================================================
#include <QObject>

//==============================================================================
class AbstractLogger : public QObject
{
    Q_OBJECT
public:
    virtual ~AbstractLogger(){};


public slots:
    virtual void processLogMessage(const QString message_from_subject) = 0;

protected:
    quint8 m_number;
    quint32 static m_static_number;
};
//==============================================================================
#endif // ABSTRACTLOGGER_H
