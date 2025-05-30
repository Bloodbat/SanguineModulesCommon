#pragma once

#include "rack.hpp"
#include <chrono>

rack::math::Vec millimetersToPixelsVec(const float x, const float y);

rack::math::Vec centerWidgetInMillimeters(rack::widget::Widget* theWidget, const float x, const float y);

inline long long getSystemTimeMs() {
	return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch()).count();
}

inline bool strToUInt32(const char* inString, uint32_t& value) {
	char* endPtr = {};
	errno = 0;
	value = std::strtoul(inString, &endPtr, 10);
	return errno != ERANGE && errno != EINVAL && *endPtr == '\0';
}