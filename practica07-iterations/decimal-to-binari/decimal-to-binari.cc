/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file decimal-to-binari.cc
  * @author Alejandro Salazar González alu0101583211@ull.edu.es 
  * @date 2 Nov
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main() {
    int numeroDecimal;
    std::cin >> numeroDecimal;

    if (numeroDecimal < 0) {
        std::cout << "El número debe ser no negativo." << std::endl;
        return 1; // Salir con código de error.
    }

    if (numeroDecimal == 0) {
        std::cout << numeroDecimal << std::endl;
        return 0;
    }

    int binario[32]; // Se asume que estamos manejando enteros de 32 bits o menos.

    int indice = 0;
    while (numeroDecimal > 0) {
        binario[indice] = numeroDecimal % 2;
        numeroDecimal /= 2;
        indice++;
    }

    for (int i = indice - 1; i >= 0; i--) {
        std::cout << binario[i];
    }
    std::cout << std::endl;

    return 0;
}
