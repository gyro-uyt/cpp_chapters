#include <iostream>

int main() {
  int x{5};
  int y = 10;
  std::cout << x << " " << y << std::endl;

  int a; // default-initialization (no initializer)

  // Traditional initialization forms:
  int b = 5; // copy-initialization (initial value after equals sign)
  int c(6);  // direct-initialization (initial value in parenthesis)

  // Modern initialization forms (preferred):
  int d{7}; // direct-list-initialization (initial value in braces)
  int e{};  // value-initialization (empty braces)

  std::cout << a << " " << b << " " << c << " " << d << " " << e << std::endl;

  [[maybe_unused]] float pi = 3.14; // no unused_variable warning

  return 0;
}