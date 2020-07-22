
#ifndef CheckingAccount_hpp
#define CheckingAccount_hpp
#include "Account.hpp"

class CheckingAccount:public Account{
    
public:
    CheckingAccount(double, double); //default constructor
    void credit(double); //redefinition of credit function
    bool debit(double); //redefinition of debit function
    void applyFee(); //function that will apply a fee on either transaction done
    
private:
    
double fee;
    
};

#endif /* CheckingAccount_hpp */
