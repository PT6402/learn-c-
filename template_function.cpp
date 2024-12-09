#include <iostream>
template <typename T, typename U>
auto max(T a, U b)
{
  return (a > b) ? a : b;
}

int main()
{
  std::cout << max(1, 1.4);
  return 0;
}