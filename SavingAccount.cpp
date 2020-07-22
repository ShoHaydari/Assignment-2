#include <iostream>
#include <stdexcept>
#include "SavingsAccount.hpp"
using namespace std;

SavingAccounts::SavingAccounts(double x, double y): Account(x)
//Constructor takes two double: x and y. x is set to the balance by the Account constructor and y is set to the interest rate if bigger than 0.0.
{
    if (y>0.0) {
        interestRate=y;
    }
    else{
        throw invalid_argument("Interest rate cannot be negative");
    }
}

double SavingAccounts::calculateInterest()
//calculates the interest on the total balance by multiplying the balance and the interest rate. Prints the amount calculated interest rate.
{
    return getBalance()*interestRate;
}

void SavingAccounts::addInterest()
//adds the calculated interest rate in calculateInterest() to the balance using the credit function.
{
    credit(calculateInterest());
}
