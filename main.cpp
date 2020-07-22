#include "Account.hpp"
#include "CheckingAccount.hpp"
#include "SavingsAccount.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout<<fixed<<setprecision(2); //setting the precision of the decimal to 2
    Account obj1(200.0); //setting the balance of Account to 200
    SavingAccounts obj2(150, 0.05); //Setting the balance of SavingsAccount to 150 and the interest rate to 0.05
    CheckingAccount obj3(170, 3); //Setting the Checking Account to 170 and a fee of 3$
    cout<<"THE INITIAL BALANCE OF THE ACCOUNTS ARE:"<<endl;
    cout<<"Balance in Account: "<<obj1.getBalance()<<endl; //printing the balance of account
    cout<<"Balance in Savings Account: "<<obj2.getBalance()<<endl; //printitng the balance of Savings account
    cout<<"Balance in Checking Account: "<<obj3.getBalance()<<endl; //Printing the balance of checking account
    
    cout<<endl;
    
    obj1.debit(25.50); //Withdraw of 25.50 on all 3 balances
    obj2.debit(25.50);
    obj3.debit(25.50);
    
    
    cout<<"BALANCE AFTER DEBITING 25.00 FROM ALL ACCOUNTS:"<<endl;
    cout<<"Balance in Account: "<<obj1.getBalance()<<endl;
    cout<<"Balance in Savings Account: "<<obj2.getBalance()<<endl;
    cout<<"Balance in Checking Account: "<<obj3.getBalance()<<endl;
    cout<<endl;
    //Printing the balance of all three accounts after debit transaction
   
    obj1.credit(50.75); //Deposit of 50.75 on all three balances
    obj2.credit(50.75);
    obj3.credit(50.75);

    cout<<"BALANCE AFTER CREDITING 50.75 FROM ALL ACCOUNTS:"<<endl;
    cout<<"Balance in Account: "<<obj1.getBalance()<<endl;
    cout<<"Balance in Savings Account: "<<obj2.getBalance()<<endl;
    cout<<"Balance in Checking Account: "<<obj3.getBalance()<<endl;
    cout<<endl;
    //Printing the balance of all 3 accounts after credit transaction
    
    cout<<"ERROR TRIAL:"<<endl;
    obj1.debit(500); //Trying to withdraw more than the balance of all accounts
    obj2.debit(500);
    obj3.debit(500);
    cout<<endl;
    
    obj2.addInterest(); //add the interest to the balance of savings account
    cout<<"The balance in Savings account after interest rate is: "<<obj2.getBalance()<<endl;
    //printing the value balance after adding the interest to the previous balance
}

