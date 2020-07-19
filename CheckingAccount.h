
#ifndef CheckingAccount_hpp
#define CheckingAccount_hpp
#include "Account.hpp"

class CheckingAccount:public Account{
    
public:
    CheckingAccount(double, double);
    void credit(double);
    bool debit(double);
    void applyFee();
    
private:
    
double fee;
    
};

#endif /* CheckingAccount_hpp */
