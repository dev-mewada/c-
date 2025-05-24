#include <iostream>
using namespace std;
int main(){
    int num,ans=1;
    cout<<"enter a num";
    cin>>num;
    for(int i=1;i<=num;i++){
        ans=ans*i;
    }
    cout<<ans;
}
