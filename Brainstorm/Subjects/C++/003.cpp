#include <iostream>

// Inputs 3 element from user and then displays them immediately
int main() {
  std::cout << "Enter three numbers: ";
  int x{}, y{}, z{};
  std::cin >> x >> y >> z;
  std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";
  return 0;
}