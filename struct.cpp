#include <iostream>

struct Student
{
  std::string name;
  double gpa = 0;
};
void print(Student &stu)
{
  std::cout << &stu << std::endl;
  std::cout << stu.name << std::endl;
  std::cout << stu.gpa << std::endl;
}
void changeGPA(Student &stu, double gpa)
{
  stu.gpa = gpa;
}
int main()
{
  Student stu1;
  stu1.name = "phat";
  stu1.gpa = 3.0;
  std::cout << &stu1 << std::endl;
  changeGPA(stu1, 3.9);
  print(stu1);
  return 0;
}