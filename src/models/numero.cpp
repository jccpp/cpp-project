#include "numero.hpp"

Numero::Numero() : value(0){};

Numero::Numero(int value) : value(value) {}

int Numero::getValue() {
    return value;
}

void Numero::setValue(int value) {
    this->value = value;
}
