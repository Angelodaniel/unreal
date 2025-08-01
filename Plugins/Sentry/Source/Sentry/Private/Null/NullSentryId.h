#pragma once

#include "Interface/SentryIdInterface.h"

class FNullSentryId final : public ISentryId
{
public:
	virtual ~FNullSentryId() override = default;

	virtual FString ToString() const override { return TEXT(""); }
};

typedef FNullSentryId FPlatformSentryId;
