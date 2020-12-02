#pragma once
#include <iostream>
#include <string>
#include "Passport.h"
using namespace std;


class ForeignPassport : public Passport
{
public:
	ForeignPassport(){}
	ForeignPassport(const string& name, const string& lastname, const string& numOfPass, const string& IIN, const string& Viza, const string& numOfZagran);
	virtual void Show() const;

private:
	enum { VizaSize = 10 };
	string numofZagran;
	string viza[VizaSize];
};


