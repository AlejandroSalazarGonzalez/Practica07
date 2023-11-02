/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file leap_year.cc
  * @author Alejandro Salazar González alu0101583211@ull.edu.es 
  * @date 2 Nov
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main() {
    int year;

    std::cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << " Yes" << std::endl;
    } else {
        std::cout << " No" << std::endl;
    }

    return 0;
}
