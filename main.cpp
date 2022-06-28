// Hoppock, Zachary
// squareNumbers.cpp
// 10/13/2020
// Using a for loop, input starting and ending numbers that will output along with their squares
// Version # 1
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  int start_number;
  int end_number;
  const int SQUARE = 2;
  cout << "I will display a table of numbers and their squares." << endl;
  cout << "Enter the starting number:  ";
  cin >> start_number;
  cout << "Enter the ending number:  ";
  cin >> end_number;
  cout << "Number Number Squared" << endl;
  cout << "-------------------------" << endl;
  for (int number = start_number; number <= end_number; number++)
  {
    int number_square = pow(number, SQUARE);
    cout << number << setw(17) << number_square << endl;
  }
  return 0;
}