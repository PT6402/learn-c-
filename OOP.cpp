#include <iostream>

class Car
{
private:
  std::string color;

public:
  std::string name;
  int HP;
  Car(std::string name, std::string color, int HP)
  {
    this->name = name;
    this->color = color;
    this->HP = HP;
  }

  void run()
  {
    std::cout << "this car is running";
  }

  void print()
  {
    std::cout << this->name << std::endl;
    std::cout << this->color << std::endl;
    std::cout << this->HP << std::endl;
  }

  std::string getColor()
  {
    return this->color;
  }

  void setColor(std::string color)
  {
    this->color = color;
  }
};

void paint(Car &car, std::string color)
{
  car.setColor(color);
}

int main()
{
  Car car1("car 1", "red", 200);
  car1.print();
  paint(car1, "green");
  car1.setColor("blue");
  car1.print();
  return 0;
}