#include "SavingAccount.h"



SavingAccount::SavingAccount() : Account()
{
	interestRate = 0;

}


SavingAccount::SavingAccount(int _ID, string _fname, string _lname, string _address, string _email, int _phone, double _balance, int _points, int _wds, int _depos, double _interestR) : Account(_ID, _wds, _depos, _balance, _points, _fname, _lname, _address, _email, _phone)
{
	interestRate = _interestR;

}


void SavingAccount:: payInterest(double balance, double amount)
{
	amount = balance* interestRate;
	 
	balance = balance + amount;

}











