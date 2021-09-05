#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(MSG_BUS_LIB)
#  define MSG_BUS_EXPORT Q_DECL_EXPORT
# else
#  define MSG_BUS_EXPORT Q_DECL_IMPORT
# endif
#else
# define MSG_BUS_EXPORT
#endif
