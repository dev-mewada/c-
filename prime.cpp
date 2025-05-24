#include <iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"enter a num";
    cin>>num;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count+=1;
        }
        
    }
    if(count==2){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    
}
