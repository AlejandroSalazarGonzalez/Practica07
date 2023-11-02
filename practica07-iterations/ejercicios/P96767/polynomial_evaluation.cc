/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file polynomial_evaluation.cc
  * @author Alejandro Salazar González alu0101583211@ull.edu.es 
  * @date 2 Nov 
  * @brief 
  * @bug There are no known bugs
  * @see 
  */
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
 double numero{0}, base{0}, total{0.0};
    int exponente{0};
    std::cin >> base;
    while (std::cin >> numero) {
        total = (numero * pow(base,exponente)) + total; //uso pow para elevar a la base a un exponente
        exponente++;
    }
    std::cout << std::fixed << std::setprecision(4) << total << std::endl;
    return 0;
}
    
