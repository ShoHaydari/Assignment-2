#include "Account.hpp"
#ifndef SavingsAccount_hpp
#define SavingsAccount_hpp
class SavingAccounts : public Account{

public:
    
    SavingAccounts(double , double); //Default Constructor
    double calculateInterest(); //Calculate the interest on the total balance
    void addInterest(); //adds the calculated interest to the balance
    
private:
    double interestRate;
    
    
};
#endif /* SavingsAccount_hpp */

