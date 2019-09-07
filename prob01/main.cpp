// This program tests output on the ASCII character set, and on the sizeof operator.

#include <iostream>

int main()
{
  // DONE#1: try changing these values to others found in the ASCII character set
  // The class Quick Reference Guide contains this chart on page 5
  char my_char1 = 43;   // decimal
  char my_char2 = 0x2B; // hex
  char my_char3 = '+';  // character

  std::cout << "Char1: " << my_char1 << std::endl;
  std::cout << "Char2: " << my_char2 << std::endl;
  std::cout << "Char3: " << my_char3 << std::endl;

  std::cout << std::endl; // blank line to separate the different exercises

  // DONE#2: the following statement displays a plus sign
  // add 3 more cout statements that all print the same thing - a plus sign
  // however, use a different method to do so for each cout statement
  // hint: use the ASCII character set
  std::cout << "Pure string: "<< "+" << std::endl;
  std::cout << "Integer casting: " << char(43) << std::endl;
  std::cout << "Hexadecimal casting: " << char(0x2B) << std::endl;
  std::cout << "Octal casting: " << char(053) << std::endl;

  std::cout << std::endl; // blank line to separate the different exercises

  // DONE#3: update the following statement to include escape characters
  // note that clang does not require an escape character on the single quote
  // but many other compilers do require it
  std::cout << "\'Y\'" << "   \"This sentence is in double quotes!\"" << std::endl;

  std::cout << std::endl; // blank line to separate the different exercises

  // DONE#4: try changing the variable types and the data types in the
  // statements below to see what is returned by the sizeof operator
  bool my_bool = 1;
  std::cout << my_bool << ' ' << sizeof(my_bool) << '\n';
  short my_int = 1;
  std::cout << my_int << ' ' << sizeof(my_int) << '\n';

  double amount = 1;
  std::cout << "A bool is stored in: " << sizeof(bool) << " bytes\n";
  std::cout << "A char is stored in: " << sizeof(char) << " bytes\n";
  std::cout << "A short is stored in: " << sizeof(short) << " bytes\n";
  std::cout << "An int is stored in: " << sizeof(int) << " bytes\n";
  std::cout << "A long is stored in: " << sizeof(int) << " bytes\n";
  std::cout << "A float is stored in " << sizeof(float) << " bytes\n";
  std::cout << "A double is stored in: " << sizeof(double) << " bytes\n";
  std::cout << "The variable \"amount\" is stored in " << sizeof(amount) << " bytes\n";

  return 0;
}
