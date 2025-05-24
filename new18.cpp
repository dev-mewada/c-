#include <iostream>
using namespace std;
int main(){
    int a, b ;
    char op;
    cout<<"enter the value of a and b";
    cin>>a;
    cin>>b;
    cout<<"+ - * / %";
    cin>>op;
    
    switch (op){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
        case '%':
        cout<<a%b;
        break;
        default:
        cout<<"invalid";


    }
}