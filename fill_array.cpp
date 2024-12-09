#include <iostream>

int main()
{
  const int SIZE = 10;
  std::string foods[SIZE];
  fill(foods, foods + (SIZE / 3), "hello");
  fill(foods + SIZE / 3, foods + (SIZE / 3) * 2, "world");
  fill(foods + (SIZE / 3) * 2, foods + SIZE, "funny");
  for (std::string item : foods)
  {
    std::cout << item << std::endl;
  }
  return 0;
}