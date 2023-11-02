/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file sum_dig.cc
  * @author Alejandro Salazar González alu0101583211@ull.edu.es 
  * @date 1 Nov
  * @brief suma los dijitos de un número 
  * @bug There are no known bugs
  * @see 
  */
#include <iostream>

int main() {
    int numero, suma = 0;

    std::cin >> numero;

    if (numero < 0) {
        return 1;  // Salir del programa con un código de error.
    }

    // Calcula la suma de los dígitos del número.
    int temp = numero;  // Usamos una variable temporal para no modificar el número original.
    while (temp > 0) {
        suma += temp % 10;  // Obtiene el último dígito y lo suma a 'suma'.
        temp /= 10;        // Elimina el último dígito.
    }

    std::cout << suma << std::endl;

    return 0;  // Salir del programa con éxito.
}
