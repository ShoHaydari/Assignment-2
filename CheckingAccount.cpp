
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

    Account::credit(y);
    applyFee();
    
}
void CheckingAccount::applyFee(){
    
    Account::setBalance(getBalance()-fee);
    cout<<"The fee charged on the checking account balance is: "<<fee<<"$"<<endl;

}
bool CheckingAccount::debit(double x){
    
    bool debit = Account::debit(x);
    
    if (debit) {
        applyFee();
        return true;
        
    }
    else
        return false;

}


