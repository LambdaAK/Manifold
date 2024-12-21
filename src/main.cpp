#include <stdlib.h>
#include <iostream>
#include "complex.hpp"
#include "matrix.hpp"

#define LOG(x) std::cout << x << std::endl

int main() {
  std::cout << "Hello, World!" << std::endl;

  // make a matrix

  Matrix m1({{1, 2}, {3, 4}, {5, 6}});

  LOG(m1);

  return 0;
}