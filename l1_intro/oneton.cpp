#include <iostream>
using namespace std;

int main(int args,char** argv){
  int number=0;
  cout<<"Enter a number ";
  cin>>number;

  for(int i=1;i<=number;i++){
    cout<<i<<" ";
  }

  return 0;
}