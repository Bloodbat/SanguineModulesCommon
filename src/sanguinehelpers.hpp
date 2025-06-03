#pragma once

#include "rack.hpp"
#include <time.h>

rack::math::Vec millimetersToPixelsVec(const float x, const float y);

rack::math::Vec centerWidgetInMillimeters(rack::widget::Widget* theWidget, const float x, const float y);

inline long long getSystemTimeMs() {
	clock_t now = clock();
	return static_cast<long long>(now * 1000.0 / CLOCKS_PER_SEC);
}

inline bool strToUInt32(const char* inString, uint32_t& value) {
	char* endPtr = {};
	errno = 0;
	value = std::strtoul(inString, &endPtr, 10);
	return errno != ERANGE && errno != EINVAL && *endPtr == '\0';
}