#include <iostream>

int main()
{
  std::string foods[5];
  std::string temp;
  int size = sizeof(foods) / sizeof(foods[0]);

  for (int i = 0; i < size; i++)
  {
    std::cout << "enter food or 'q' to quit: ";
    std::getline(std::cin, temp);
    if (temp == "q")
    {
      break;
    }
    else
    {
      foods[i] = temp;
    }
  }
  for (int i = 0; !foods[i].empty(); i++)
  {
    std::cout << foods[i] << std::endl;
  }
  return 0;
}