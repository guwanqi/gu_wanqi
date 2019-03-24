#include <string>
#include"Account.h"
#include<iostream>
using namespace std;

Account::Account(int initialBalance)
{
    balance=0;
    if(initialBalance>0)
        balance=initialBalance;
    if(initialBalance<0)
        cout<<"initial balance cannot be negative"<<endl;
}
void Account::credit(int amout)
 {
     balance=balance+amout ;
 }
void Account::debit(int amount)
{
    if(amount>balance)
        cout<<"Debit amount exceeded account balance"<<endl;
    if(amount<=balance)
        balance=balance-amount ;
}
int Account::getBalance()
{
    return balance;
}
