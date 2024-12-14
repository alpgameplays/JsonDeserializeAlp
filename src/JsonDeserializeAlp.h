/// @file JsonDeserializeAlp.h
/// @brief Class for deserializing and extracting values from JSON strings on Arduino.

#ifndef JSON_DESERIALIZE_ALP_H
#define JSON_DESERIALIZE_ALP_H

#include <Arduino.h>

/// @class JsonDeserializeAlp
/// @brief Class providing methods to deserialize and extract values from JSON.
class JsonDeserializeAlp {
public:
    /// @brief Constructor of the class.
    JsonDeserializeAlp();

    /// @brief Deserializes a key and returns its value as a string.
    /// @param json Input JSON string.
    /// @param key Key to search for in the JSON.
    /// @return Value corresponding to the key as a const char*.
    const char *deserialize(const String &json, const char *key);

    /// @brief Retrieves the float value associated with a key in the JSON.
    /// @param json Input JSON string.
    /// @param key Key to search for in the JSON.
    /// @return Float value associated with the key.
    float getFloatValue(const String &json, const char *key);

    /// @brief Retrieves the integer value associated with a key in the JSON.
    /// @param json Input JSON string.
    /// @param key Key to search for in the JSON.
    /// @return Integer value associated with the key.
    int getIntValue(const String &json, const char *key);

    /// @brief Retrieves the boolean value associated with a key in the JSON.
    /// @param json Input JSON string.
    /// @param key Key to search for in the JSON.
    /// @return Boolean value associated with the key.
    bool getBoolValue(const String &json, const char *key);

    /// @brief Retrieves the string value associated with a key in the JSON.
    /// @param json Input JSON string.
    /// @param key Key to search for in the JSON.
    /// @return String value associated with the key.
    const char *getStringValue(const String &json, const char *key);

private:
    /// @brief Returns the value associated with a key in the converted JSON.
    /// @param convertedJson JSON converted to const char*.
    /// @param key Key to search for.
    /// @return Value associated with the key as const char*.
    const char *getValueFromKey(const char *convertedJson, const char *key);

    /// @brief Removes spaces from a string.
    /// @param str Pointer to the input string to be modified.
    void removeSpaces(char *str);

    /// @brief Converts a string to a boolean value.
    /// @param valor String to be converted.
    /// @return Corresponding boolean value.
    bool toBoolean(const char *valor);
};

#endif
