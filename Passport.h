#pragma once
#include <iostream>
#include <string>
using namespace std;
class Passport
{
public:
	Passport() : name(" "), lastName(" "), numOfPass(" "), IIN(" ") {}
	Passport(const string& n, const string& l, const string& N, const string& I);
	
	virtual void Show() const;

private:
	string name, lastName, numOfPass, IIN;
	
};


