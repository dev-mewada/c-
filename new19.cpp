#include <iostream>
using namespace std;
int main(){
    int i=1;
    
    for (i ;i<0 ;--i){
        cout<<i<<"\t";
        --i;
    }
    cout<<i;
}