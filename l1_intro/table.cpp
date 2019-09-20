#include <iostream>
using namespace std;

int main(int args, char **argv)
{
  int number = 0;
  cout << "Enter the number for table ";
  cin >> number;

  int limit = 0;
  cout << "upto ";
  cin >> limit;

  cout << "The table is" << endl;

  for (int i = 1; i <= limit; i++)
  {
    cout << number << " * " << i << " = " << i * number << endl;
  }

  return 0;
}