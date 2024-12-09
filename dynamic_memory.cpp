#include <iostream>

int main()
{
  char *pGrades = NULL;
  int size;
  std::cout << "enter size: ";
  std::cin >> size;
  pGrades = new char[size];
  for (int i = 0; i < size; i++)
  {
    std::cout << "enter :";
    std::cin >> pGrades[i];
  }
  for (int i = 0; i < size; i++)
  {
    std::cout << pGrades[i] << " ";
  }

  delete[] pGrades;

  return 0;
}