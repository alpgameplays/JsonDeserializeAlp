# JsonDeserializeAlp

## **Description**
The `JsonDeserializeAlp` class provides simple methods to deserialize and extract values from a JSON string on Arduino.

## **How to Use**

### 1. Initialize the Class
```cpp
JsonDeserializeAlp jsonDeserializer;
```

### 2. Extract Values from JSON

#### a) Get a Boolean Value
```cpp
bool value = jsonDeserializer.getBoolValue(json, "key");
```
- `json`: JSON string.
- `key`: Key for the boolean value in JSON.

#### b) Get a Float Value
```cpp
float value = jsonDeserializer.getFloatValue(json, "key");
```
- `json`: JSON string.
- `key`: Key for the float value in JSON.

#### c) Get an Integer Value
```cpp
int value = jsonDeserializer.getIntValue(json, "key");
```
- `json`: JSON string.
- `key`: Key for the integer value in JSON.

#### d) Get a String
```cpp
const char* value = jsonDeserializer.getStringValue(json, "key");
```
- `json`: JSON string.
- `key`: Key for the string in JSON.

## **Full Example**

```cpp
#include "JsonDeserializeAlp.h"

JsonDeserializeAlp jsonDeserializer;

void setup() {
    Serial.begin(9600);
    String json = R"({"boolKey": true, "floatKey": 12.34, "intKey": 42, "stringKey": "Hello"})";

    bool boolValue = jsonDeserializer.getBoolValue(json, "boolKey");
    float floatValue = jsonDeserializer.getFloatValue(json, "floatKey");
    int intValue = jsonDeserializer.getIntValue(json, "intKey");
    const char* stringValue = jsonDeserializer.getStringValue(json, "stringKey");

    Serial.println(boolValue);
    Serial.println(floatValue);
    Serial.println(intValue);
    Serial.println(stringValue);
}

void loop() {
    // Main code
}
```

[PT-BR version](./README-PT_BR.md)