#include "models/numero.hpp"
#include <iostream>

int main() {

    Numero numero(69);
    std::cout << "numero = " << numero.getValue() << std::endl;
    return 0;
}