
#ifndef Account_hpp
#define Account_hpp

class Account{
    
public:
    
    Account(double); //default constructor
    
    void credit(double); //This function allows to add a certain amount to the balance
    
    bool debit(double); //This function allows to withdraw a certain amount form the balance
    
    void setBalance(double); //This function sets the balance of the account
    
    double getBalance(); //returns the balance
    
private:
    
    double balance; 
    

};
#endif /* Account_hpp */
