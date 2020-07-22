
#include "CheckingAccount.hpp"
#include<iostream>
#include <stdexcept>
using namespace std;

CheckingAccount::CheckingAccount(double x, double f): Account(x)
//Constructor takes two double. One to set the balance throught accounts constructor and the other to set the value of the fee if the fee is bigger than 0.
{
    if (f>0) {
        fee=f;
    } else {
        throw invalid_argument("Error: The fee cannot be negative!");
    }
}
void CheckingAccount::credit(double y)
//Adds double y to the balance using credit function from Account class. Moreover, it applies a fee to the transaction. That fee is set in the constructor.
{
    Account::credit(y);
    applyFee();
    
}
void CheckingAccount::applyFee()
//sets the balance to the balance minus the fee. Then it prints how much was the fee for the transaction.
{
    Account::setBalance(getBalance()-fee);
    cout<<"The fee charged on the checking account balance is: "<<fee<<"$"<<endl;

}
bool CheckingAccount::debit(double x)
//Removes a fee if the debit function is used
{
    bool debit = Account::debit(x);
    
    if (debit) {
        applyFee();
        return true;
    }
    else
        return false;
}



