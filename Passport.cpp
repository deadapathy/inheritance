#include "Passport.h"

Passport::Passport(const string& n, const string& l,  const string& N, const string& I)
{
	name = n;
	lastName = l;
	numOfPass = N;
	IIN = I;
}

void Passport::Show() const
{
	cout << "Name: Maxim" << name << endl;
	cout << "Last name: Maximov" << lastName << endl;
	cout << "Number of passport: 556250251" << numOfPass << endl;
	cout << "IIN: 010813125012 " << IIN << endl;
}
