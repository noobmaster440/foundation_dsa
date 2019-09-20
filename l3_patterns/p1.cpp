#include <iostream>
using namespace std;

void print(int n)
{
  int nst = 1;
  for (int r = 1; r <= n; r++)
  {
    //loop for stars
    for (int cst = 1; cst <= nst; cst++)
    {
      cout << "*";
    }
    nst++;
    cout << endl;
  }
}

int main(int args, char **argv)
{
  print(9);
  return 0;
}