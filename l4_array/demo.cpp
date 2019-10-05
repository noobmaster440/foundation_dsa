#include <iostream>
#include <vector>
using namespace std;

void input(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }
}

void swap(vector<int> &arr, int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void reverseH(vector<int> &arr, int si, int ei)
{
  while (si < ei)
  {
    swap(arr, si, ei);
    si++;
    ei--;
  }
}
void reverse(vector<int> &arr)
{
  reverseH(arr, 0, arr.size() - 1);
}
void display(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void rotate(vector<int> &arr, int r)
{
  r = r % arr.size();
  r = r < 0 ? r + arr.size() : r;
  reverseH(arr, 0, r - 1);
  reverseH(arr, r, arr.size() - 1);
  reverseH(arr, 0, arr.size() - 1);
}

int main(int args, char **argn)
{
  int size = 0, r = 0;
  cin >> size;
  vector<int> arr(size, 0);
  input(arr);
  // reverse(arr);
  cin >> r;
  display(arr);
  rotate(arr, -99);
  display(arr);
  return 0;
}