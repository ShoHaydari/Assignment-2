#include "Account.hpp"
#ifndef SavingsAccount_hpp
#define SavingsAccount_hpp
class SavingAccounts : public Account{

public:
    
    SavingAccounts(double , double);
    double calculateInterest();
    
    
private:
    double interestRate;
    
    
};
#endif /* SavingsAccount_hpp */
