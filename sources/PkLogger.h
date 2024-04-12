#pragma once
#ifndef PKLOGGER_H
#define PKLOGGER_H

//==============================================================================
#include "lib_PkLogger.h"
#include "PrivatePkLogger.h"
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
