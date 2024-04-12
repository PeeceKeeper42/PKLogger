#ifndef CONSOLELOGGER_H
#define CONSOLELOGGER_H
//==============================================================================
#include <QObject>

#include <iostream>

#include "AbstractLogger.h"
#include "PrivatePkLogger.h"
//==============================================================================
class ConsoleLogger : public AbstractLogger
{
    Q_OBJECT
public:
    ConsoleLogger();
    ~ConsoleLogger();
public slots:
    void processLogMessage(const QString message_from_subject) override;
private:
    PrivatePKLogger* logger;
    quint8 m_number;
    quint8 static m_static_number;
};
//==============================================================================
#endif // CONSOLELOGGER_H
