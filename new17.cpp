#include <iostream>
using namespace std;
int main(){
 int l;
 int b;
 cout<<"enter the valye of l";
 cin>>l;
 cout<<"enter the value of b";
 cin>>b;
  int  area = l*b;
 int pre = 2*(l+b);
 cout<<"area"<<area;
 cout<<"pre"<<pre;
 if (area>pre){
    cout<<"area is greater";

 }
 else if(area<pre)
 {
    cout<<"area is smaller";
 }
 else{
    cout<<"both are eqal";
 }
    
return 0;
}