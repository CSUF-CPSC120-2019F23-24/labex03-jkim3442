// This program calculates a person's height in feet (') and inches (").

#include <iostream>

int main()
{
  //First we name the program and ask for their height in inches as well as identify our variables.

  int height_in_inches;

  std::cout << "Please enter the person's height in inches: ";
  std::cin >> height_in_inches;

  //Next we do our calculations.

  int total = height_in_inches / 12;
  int remainder = height_in_inches % 12;

  //Finally we write out our answer.

  std::cout << "Total height is: " << total << "\'" << remainder << "\".\n";

  return 0;
}
