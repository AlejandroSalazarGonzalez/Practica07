/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file reberse_number.cc
  * @author Alejandro Salazar González alu0101583211@ull.edu.es 
  * @date 2 Nov
  * @brief lee un numero y lo imprime al reves.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P50327_en/submissions/S002
  */
#include <iostream>

int main() {

  int num = 0;  
  std::cin >> num;
  if( num == 0){
    std::cout << "0";
  }
  while( num > 0 ){
    std::cout << num%10; 
    num /= 10;
}
  std::cout << std::endl;
return 0;
}

