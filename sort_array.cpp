#include <iostream>

void sort(int arrays[], int size);
int main()
{
  int arrays[] = {10, 9, 1, 3, 8, 7};
  int size = sizeof(arrays) / sizeof(int);
  sort(arrays, size);
  for (int item : arrays)
  {
    std::cout << item << " ";
  }
  return 0;
}

void sort(int arrays[], int size)
{
  int temp;
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arrays[j] > arrays[j + 1])
      {
        temp = arrays[j];
        arrays[j] = arrays[j + 1];
        arrays[j + 1] = temp;
      }
    }
  }
}