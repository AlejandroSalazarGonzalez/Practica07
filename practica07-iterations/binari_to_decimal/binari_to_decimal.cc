/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file binari_to_dec.cc
  * @author Alejandro Salazar González alu0101583211@ull.edu.es 
  * @date 2 Nov
  * @brief 
  * @bug There are no known bugs
  * @see 
  */
#include <iostream>

bool esbinario(const char* input) {
    // verificar si la cadena solo contiene '0' y '1'.
  while (*input) {
      if (*input != '0' && *input != '1') {
  return false;
      }
      input++;
  }
  return true;
}

int main() {
  char binario[32]; // asumo que estoy manejando enteros de 32 bits o menos.

  std::cin >> binario;

  if (!esbinario(binario)) {
      return 1; // Salir con código de error.
  }

  int dec = 0;
  int largo = 0;

    // Calcula la largo de la cadena binaria.
  while (binario[largo] != '\0') {
      largo++;
  }

    // Convierte el número binario a dec.
  for (int i = largo - 1; i >= 0; i--) {
      if (binario[i] == '1') {
          dec += (1 << (largo - 1 - i));
      }
  }

  std::cout << dec << std::endl;

  return 0;
}
