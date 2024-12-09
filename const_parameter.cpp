#include <iostream>

void print(const std::string name, const int age);
int main()
{
  std::string name = "phat";
  int age = 22;
  print(name, age);
  return 0;
}

void print(const std::string name, const int age)
{
  std::cout << name << "\n";
  std::cout << age;
}

// usefull pointer and references
// code is more secure and conveys intent