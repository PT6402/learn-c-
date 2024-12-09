#include <iostream>

int main()
{
  // & adddress-of operator;
  // * dereference operator;
  std::string name = "Phat";
  int age = 20;
  std::string freePizza[] = {"pizza1", "pizza2", "pizza3"};

  std::string *pName = &name;
  int *pAge = &age;
  std::string *pFreePizza = freePizza;

  int *pointer = nullptr;

  std::cout << *pName << std::endl;
  std::cout << *pAge << std::endl;
  std::cout << *freePizza << std::endl;
  std::cout << pointer << std::endl;

  return 0;
}