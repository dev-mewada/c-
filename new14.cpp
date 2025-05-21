#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a value of a";
    cin>>a;
    cout<<"enter a value of b";
    cin>>b;
    cout<<"enter a value of c";
    cin>>c;
    (a>b&&a>c)?cout<<"a is greater":(b>a&&b>c)?cout<<"b is greater":cout<<"c is greater";
    
}