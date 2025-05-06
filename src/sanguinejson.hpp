#pragma once

#include "rack.hpp"

inline bool getJsonInt(json_t* rootJ, const char* keyName, json_int_t& intValue) {
    json_t* jsonObject = json_object_get(rootJ, keyName);

    if (jsonObject) {
        intValue = json_integer_value(jsonObject);
    }
    return static_cast<bool>(jsonObject);
}

inline bool getJsonBoolean(json_t* rootJ, const char* keyName, bool& booleanValue) {
    json_t* jsonObject = json_object_get(rootJ, keyName);

    if (jsonObject) {
        booleanValue = json_boolean_value(jsonObject);
    }
    return static_cast<bool>(jsonObject);
}

inline bool getJsonDouble(json_t* rootJ, const char* keyName, double& doubleValue) {
    json_t* jsonObject = json_object_get(rootJ, keyName);

    if (jsonObject) {
        doubleValue = json_number_value(jsonObject);
    }
    return static_cast<bool>(jsonObject);
}

inline bool getJsonFloat(json_t* rootJ, const char* keyName, float& floatValue) {
    json_t* jsonObject = json_object_get(rootJ, keyName);

    if (jsonObject) {
        floatValue = json_number_value(jsonObject);
    }
    return static_cast<bool>(jsonObject);
}

inline bool getJsonString(json_t* rootJ, const char* keyName, std::string& stringValue) {
    json_t* jsonObject = json_object_get(rootJ, keyName);

    if (jsonObject) {
        stringValue = json_string_value(jsonObject);
    }
    return static_cast<bool>(jsonObject);
}

inline void setJsonInt(json_t* rootJ, const char* keyName, const json_int_t intValue) {
    json_object_set_new(rootJ, keyName, json_integer(intValue));
}

inline void setJsonBoolean(json_t* rootJ, const char* keyName, const bool booleanValue) {
    json_object_set_new(rootJ, keyName, json_boolean(booleanValue));
}

inline void setJsonDouble(json_t* rootJ, const char* keyName, const double doubleValue) {
    json_object_set_new(rootJ, keyName, json_real(doubleValue));
}

inline void setJsonFloat(json_t* rootJ, const char* keyName, const float floatValue) {
    json_object_set_new(rootJ, keyName, json_real(floatValue));
}

inline void setJsonString(json_t* rootJ, const char* keyName, const char* stringValue) {
    json_object_set_new(rootJ, keyName, json_string(stringValue));
}