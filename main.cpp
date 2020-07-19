#include "Account.hpp"
#include "CheckingAccount.hpp"
#include "SavingsAccount.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout<<fixed<<setprecision(2);
    Account obj1(200.0);
    SavingAccounts obj2(150, 0.05);
    CheckingAccount obj3(170, 3);
    cout<<"THE INITIAL BALANCE OF THE ACCOUNTS ARE:"<<endl;
    cout<<"Balance in Account: "<<obj1.getBalance()<<endl;
    cout<<"Balance in Savings Account: "<<obj2.getBalance()<<endl;
    cout<<"Balance in Checking Account: "<<obj3.getBalance()<<endl;
    
    cout<<endl;
    
    obj1.debit(25.50);
    obj2.debit(25.50);
    obj3.debit(25.50);
    
    
    cout<<"BALANCE AFTER DEBITING 25.00 FROM ALL ACCOUNTS:"<<endl;
    cout<<"Balance in Account: "<<obj1.getBalance()<<endl;
    cout<<"Balance in Savings Account: "<<obj2.getBalance()<<endl;
    cout<<"Balance in Checking Account: "<<obj3.getBalance()<<endl;
    cout<<endl;
   
    obj1.credit(50.75);
    obj2.credit(50.75);
    obj3.credit(50.75);

    cout<<"BALANCE AFTER CREDITING 50.00 FROM ALL ACCOUNTS:"<<endl;
    cout<<"Balance in Account: "<<obj1.getBalance()<<endl;
    cout<<"Balance in Savings Account: "<<obj2.getBalance()<<endl;
    cout<<"Balance in Checking Account: "<<obj3.getBalance()<<endl;
    cout<<endl;
    
    cout<<"ERROR TRIAL:"<<endl;
    obj1.debit(500);
    obj2.debit(500);
    obj3.debit(500);
    cout<<endl;
    obj2.addInterest();
    cout<<"The balance in Savings account after interest rate is: "<<obj2.getBalance()<<endl;
}
