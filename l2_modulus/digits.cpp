#include <iostream>
using namespace std;

int main(int args, char **argv)
{
  int number = 0;
  cout << "Enter the number ";
  cin >> number;
  if (number == 0)
  {
    cout << "Length is 1";
    return 0;
  }
  int counter = 0;
  while (number > 0)
  {
    number /= 10;
    counter++;
  }
  cout << "Length is " << counter;
  return 0;
}