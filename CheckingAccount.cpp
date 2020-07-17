
#include "CheckingAccount.hpp"
#include<iostream>
using namespace std;

CheckingAccount::CheckingAccount(double x, double f): Account(x){

    if (f>0) {
        fee=f;
    } else {
        fee=0;
        cout<<"Error: The fee cannot be negative!";
    }
}
void CheckingAccount::credit(double y){

    Account::debit(y);
    
}

void CheckingAccount::debit(double x){
    
    Account::debit(x);
    
}

