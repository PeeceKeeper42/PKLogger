#pragma once
#ifndef PKLOGGER_H
#define PKLOGGER_H

//==============================================================================
#include "lib_pk_logger.h"
#include "p_pk_logger.h"
#include <QObject>
#include <QDebug>
//==============================================================================

//==============================================================================
class LIB_PKLOGGER_EXPORT PkLogger: QObject
{
    Q_OBJECT

public:

    void foo();
private:
    PrivatePKLogger pkLogger;/*pkLogger {nullptr};*/
};
//==============================================================================
#endif // PKLOGGER_H
