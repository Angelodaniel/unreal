#pragma once

#if PLATFORM_ANDROID
#include "Android/AndroidSentryScope.h"
#elif PLATFORM_APPLE
#include "Apple/AppleSentryScope.h"
#elif USE_SENTRY_NATIVE
#include "GenericPlatform/GenericPlatformSentryScope.h"
#else
#include "Null/NullSentryScope.h"
#endif

static TSharedPtr<ISentryScope> CreateSharedSentryScope()
{
	return MakeShareable(new FPlatformSentryScope);
}
