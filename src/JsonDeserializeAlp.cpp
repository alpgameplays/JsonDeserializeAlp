/// @file JsonDeserializeAlp.cpp

#include "JsonDeserializeAlp.h"

JsonDeserializeAlp::JsonDeserializeAlp() {}

bool JsonDeserializeAlp::getBoolValue(const String &json, const char *key)
{
    const char *convertedJson = json.c_str();
    const char *result = getValueFromKey(convertedJson, key);
    return toBoolean(result);
}

float JsonDeserializeAlp::getFloatValue(const String &json, const char *key)
{
    const char *convertedJson = json.c_str();
    const char *result = getValueFromKey(convertedJson, key);
    return atof(result);
}

int JsonDeserializeAlp::getIntValue(const String &json, const char *key)
{
    const char *convertedJson = json.c_str();
    const char *result = getValueFromKey(convertedJson, key);
    return atoi(result);
}

const char *JsonDeserializeAlp::getStringValue(const String &json, const char *key)
{
    return deserialize(json, key);
}

const char *JsonDeserializeAlp::deserialize(const String &json, const char *key)
{
    const char *convertedJson = json.c_str();
    return getValueFromKey(json.c_str(), key);
}

const char *JsonDeserializeAlp::getValueFromKey(const char *convertedJson, const char *key)
{
    int pos = strstr(convertedJson, key) - convertedJson;
    if (pos < 0)
        return ""; 

    pos += strlen(key) + 2;

    char valor[50];
    int i = 0;
    while (convertedJson[pos] != ',' && convertedJson[pos] != '}' && i < sizeof(valor) - 1)
    {
        valor[i++] = convertedJson[pos++];
    }
    valor[i] = '\0';

    removeSpaces(valor);

    static char resultado[50];

    strcpy(resultado, "");

    strcpy(resultado, valor);

    return resultado;
}

bool JsonDeserializeAlp::toBoolean(const char *valor)
{
    return (strcasecmp(valor, "true") == 0 || strcmp(valor, "1") == 0);
}

void JsonDeserializeAlp::removeSpaces(char *str)
{
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        { 
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
