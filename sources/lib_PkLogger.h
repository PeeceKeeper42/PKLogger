#pragma once
#ifndef LIB_PKLOGGER_H
#define LIB_PKLOGGER_H

#include <QtCore/QtGlobal>

#if defined(LIB_PKLOGGER_LIBRARY)
#  define LIB_PKLOGGER_EXPORT Q_DECL_EXPORT
#else
#  define LIB_PKLOGGER_EXPORT Q_DECL_IMPORT
#endif

#endif  //LIB_PKLOGGER_H
