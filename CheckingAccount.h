#ifndef CheckingAccount_hpp
#define CheckingAccount_hpp
#include "Account.hpp"

class CheckingAccount:public Account{
    
public:
    CheckingAccount(double, double);
    void credit(double);
    void debit(double);
private:
    
double fee;
    
};

#endif /* CheckingAccount_hpp */
