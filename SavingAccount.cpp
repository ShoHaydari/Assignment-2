#include <iostream>
#include "SavingsAccount.hpp"
using namespace std;

SavingAccounts::SavingAccounts(double x, double y): Account(x){
    if (y>0.0) {
        interestRate=y;
    }
    else{
        cout<<"Interest rate cannot be negative";
    }
}

void SavingAccounts::addInterest(){
    credit(calculateInterest());
}

double SavingAccounts::calculateInterest(){
    
    return getBalance()*interestRate;

}
