#include <iostream>
#include <cmath>
#include "my_functions.hpp"  // Allows us access to our declarations so they aren't taking too much space

int main() {
  
  std::cout << is_palindrome("racecar") << "\n";
  std::cout << tenth_power(3) << "\n";
  std::cout << average(8.0, 19.0) << "\n";
  
}