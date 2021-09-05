#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(SERVICE_CALLER_LIB)
#  define SERVICE_CALLER_EXPORT Q_DECL_EXPORT
# else
#  define SERVICE_CALLER_EXPORT Q_DECL_IMPORT
# endif
#else
# define SERVICE_CALLER_EXPORT
#endif
