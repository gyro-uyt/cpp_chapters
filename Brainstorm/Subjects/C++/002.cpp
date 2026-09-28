#include <iostream> // for std::cout and std::cin

int main() {
  std::cout << "Enter a number: "; // ask user for a number
  int x{};                         // define variable x to hold user input
  std::cin >> x; // get number from keyboard and store it in variable x
  std::cout << "You entered " << x << '\n';

  // Given input 3.2, the 3 gets extracted, but . is an invalid character,
  // so extraction stops here. The .2 remains for a future extraction attempt.
  // float y{};
  // std::cin >> y;
  // std::cout << y << "\n";

  // Given input 123abc, the 123 gets extracted, but abc are left for a later
  // extraction.
  // char z[10];
  // std::cin >> z;
  // std::cout << z << '\n';

  return 0;
}