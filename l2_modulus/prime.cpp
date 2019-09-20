#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int number)
{
  if (number == 1)
    return false;
  if (number == 2 || number == 3)
  {
    return true;
  }
  for (int i = 2; i * i <= number; i++)
  {
    if (number % i == 0)
    {
      return false;
    }
  }
  return true;
}
int main(int args, char **argv)
{
  int number = 1;
  cin >> number;
  for (int i = 1; i <= number; i++)
  {
    if (isPrime(i))
      cout << i << " ";
  }
}