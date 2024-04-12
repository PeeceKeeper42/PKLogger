#include "ConsoleLogger.h"

//==============================================================================
ConsoleLogger::ConsoleLogger()
{
    qDebug() << tr("Created ConsoleLogger %1").arg(++m_static_number);
    m_number = m_static_number;
}
//==============================================================================
ConsoleLogger::~ConsoleLogger()
{
    qDebug() << tr("Deleted ConsoleLogger %1").arg(m_number);
    --m_static_number;
}
//==============================================================================
void ConsoleLogger::processLogMessage(const QString message_from_subject)
{
    std::cerr << qPrintable(message_from_subject);
}
//==============================================================================
