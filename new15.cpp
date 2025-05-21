#include <iostream>
using namespace std;
int main (){
    int a;
    
  cout<<"enter a value of a";
  cin>>a;

  if((a%5==0)||(a%10==0))
  {
    cout<<"a is divided by 5 or 10";
  }
  else{
    cout<<"not divided";
  }
    return 0;
}