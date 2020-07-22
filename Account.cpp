
#include "Account.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

Account::Account(double d){ //constructor takes a double and sets it to the balance if the double is bigger or equal than 0. Else an invalid argument is thrown.
    
    if (d>=0.0) {
        setBalance(d);
    }
    
    else{
        throw invalid_argument("Balance must be bigger or equal than 0.0");
    }
}

void Account::setBalance(double c){ //sets the balance to the double entered.
    
    balance=c;
    
}
void Account::credit(double y){ //adds a positive double to the balance
    if (y>0.0) {
        balance=balance+y;
    }
    else {
        throw invalid_argument ("The amount for credit needs to be bigger than 0.0");
    }
}

bool Account::debit(double x) //boolean function that withdraw a double x, if the double is less or equal that the double x. 
{
    if (x>balance) {
        cout<<"The amount wanted is bigger than the balance"<<endl;
        return false;
    }
    else{
    balance=balance-x;
        return true;
    }
}

double Account:: getBalance(){ //prints the value of the balance
    return balance;
}
