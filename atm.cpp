#include <iostream>
using namespace std;
int main(){
   
    string bank;
    int balance=10000,amt;
    cout<<"Enter Bank Name: ";
    cin>>bank;

    if(bank=="sbi"){
        
        cout<<"Enter your pin: ";
        cin>>bank;

        if(bank=="1234"){

            cout<<"Withdrwal \n deposite\n balance_check: ";
            cin>>bank;

            if(bank=="withdawal"){

                cout<<"Enter the amount: ";
                cin>>amt;

                if(amt>0 && amt<=10000){
                    cout<<"After withdrwal your current amount is: "<<balance-amt;
                }

                else{cout<<"Invalid";}

            }

            else if(bank=="deposite"){

                cout<<"ENter amount: ";
                cin>>amt;

                if(amt>0){
                    cout<<"After deposite you balance is: "<<balance+amt;
                }

                else{cout<<"Invalid";}
            }

            else if(bank=="balance_check"){
                cout<<"Your balance is: "<<balance;
            }

            else{cout<<"Invalid";}

        }

        else{cout<<"Invalid";}
    }

    else{cout<<"Invalid";}
}