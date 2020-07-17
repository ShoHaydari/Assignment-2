
#include "Account.hpp"
#include <iostream>
using namespace std;

Account::Account(double d){
    if (d>=0.0) {
        balance=d;
        cout<<"Initial balance of account is "<<balance;
    }
    
    else{
        balance=0;
        cout<<"Error, balance should be set bigger or equal than 0.0";
    }
}


void Account::credit(double y){
    
    balance=balance+y;
}
bool Account::debit(double x){ 
    if (x>balance) {
        cout<<"The amount wanted is bigger than the balance";
        return false;
    }
    else{
    balance=balance-x;
        return true;
    }
}
double Account:: getBalance(){
    
    return balance;
}
