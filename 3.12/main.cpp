#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
 Account account1(7) ;
 Account account2(3) ;
 cout<<"account1 balance: $"<<account1.getBalance()<<endl;
 cout<<"account2 balance: $"<<account2.getBalance()<<endl;

 int withdrawalAmount;
 cout<<"ender withdrawal amount for account1:";
 cin>>withdrawalAmount;
 cout<<"attempting to subtract"<<withdrawalAmount<<"from account1 balance ";
account1.debit(withdrawalAmount);
cout<<"account1 balance: $"<<account1.getBalance()<<endl;
cout<<"account2 balance: $"<<account2.getBalance()<<endl;
cout<<"ender withdrawal amount for account2:";
cin>>withdrawalAmount;
cout<<"attempting to subtract"<<withdrawalAmount<<"from account2 balance ";
account2.debit(withdrawalAmount);
cout<<"account1 balance: $"<<account1.getBalance()<<endl;
cout<<"account2 balance: $"<<account2.getBalance()<<endl;
}
