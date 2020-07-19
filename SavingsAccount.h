#include "Account.hpp"
#ifndef SavingsAccount_hpp
#define SavingsAccount_hpp
class SavingAccounts : public Account{

public:
    
    SavingAccounts(double , double);
    double calculateInterest();
    void addInterest();
private:
    double interestRate;
    
    
};
#endif /* SavingsAccount_hpp */
