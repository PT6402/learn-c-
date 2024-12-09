#include <iostream>
class Animal
{
private:
  std::string name;

public:
  bool alive = true;
  void eat()
  {
    std::cout << "this animal is eatting" << std::endl;
  }
};

class Dog : public Animal
{
public:
  void bark()
  {
    std::cout << "the dog goes woof" << std::endl;
  }
  void eat()
  {
    std::cout
        << "this dog is eatting";
  }
};

int main()
{
  Dog dog;
  dog.bark();
  dog.eat();
  return 0;
}