# JsonDeserializeAlp

## **Descrição**
A classe `JsonDeserializeAlp` fornece métodos simples para desserializar e extrair valores de uma string JSON no Arduino.

## **Como Usar**

### 1. Inicializar a Classe
```cpp
JsonDeserializeAlp jsonDeserializer;
```

### 2. Extrair Valores do JSON

#### a) Obter um valor booleano
```cpp
bool valor = jsonDeserializer.getBoolValue(json, "chave");
```
- `json`: String JSON.
- `chave`: Chave do valor booleano no JSON.

#### b) Obter um valor float
```cpp
float valor = jsonDeserializer.getFloatValue(json, "chave");
```
- `json`: String JSON.
- `chave`: Chave do valor float no JSON.

#### c) Obter um valor inteiro
```cpp
int valor = jsonDeserializer.getIntValue(json, "chave");
```
- `json`: String JSON.
- `chave`: Chave do valor inteiro no JSON.

#### d) Obter uma string
```cpp
const char* valor = jsonDeserializer.getStringValue(json, "chave");
```
- `json`: String JSON.
- `chave`: Chave da string no JSON.

## **Exemplo Completo**

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
    // Código principal
}
```


[EN version](./README.md)