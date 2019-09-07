// This program calculates a person's height in feet (') and inches (").

#include<iostream>

int main()
{
  int height;
  int feet, inches;

  std::cout << "How tall is the person in inches: "; std::cin >> height;

  feet = height / 12;
  inches = height % 12;

  std::cout << "The person is: " << feet << "\'" << inches << "\"" << std::endl;

  return 0;
}
