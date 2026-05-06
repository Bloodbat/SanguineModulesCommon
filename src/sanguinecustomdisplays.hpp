#pragma once

#include "rack.hpp"

#ifdef CARDINALMUTANTS
#define sanguineCommonCode mutantsCommonCode
#endif

#ifdef CARDINALMONSTERS
#define sanguineCommonCode monstersCommonCode
#endif

namespace sanguineCommonCode {
    static const NVGcolor displayColorGlass = nvgRGB(10, 10, 10);
    static const NVGcolor displayColorBorder = nvgRGB(100, 100, 100);
    static const NVGcolor displayColorBlackTransparent = nvgRGBA(0, 0, 0, 0);
}