#include <iostream>
using namespace std;
//code for greates number
int main(int args, char **argv)
{
  int a, b, c;
  cout << "Enter a  ";
  cin >> a;
  cout << endl
       << "Enter b  ";
  cin >> b;
  cout << endl
       << "Enter c  ";
  cin >> c;

  if (a >= b && a > c)
  {
    cout << endl
         << a;
  }
  else if (b > a && b >= c)
  {
    cout << b;
  }
  else
  {
    cout << c;
  }

  return 0;
}