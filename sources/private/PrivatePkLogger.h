#pragma once
#ifndef PRIVATEPKLOGGER_H
#define PRIVATEPKLOGGER_H

//==============================================================================
#include <QObject>
#include <QDebug>
//==============================================================================

class PrivatePKLogger: QObject
{
    Q_OBJECT

public:
    void foo();
};
//==============================================================================
#endif // PRIVATEPKLOGGER_H
