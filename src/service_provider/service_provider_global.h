#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(SERVICE_PROVIDER_LIB)
#  define SERVICE_PROVIDER_EXPORT Q_DECL_EXPORT
# else
#  define SERVICE_PROVIDER_EXPORT Q_DECL_IMPORT
# endif
#else
# define SERVICE_PROVIDER_EXPORT
#endif
