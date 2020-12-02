#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(const string& name, const string& lastname, const string& numOfPass, const string& IIN, const string& Viza, const string& numOfZagran)
    :Passport(name, lastname, numOfPass, IIN)
{
    for (int i = 0; i < VizaSize; i++)
        viza[i] = Viza[i];
    numofZagran = numOfZagran;
    
}

void ForeignPassport::Show() const
{
    
    cout << "\nZagran Passport: " << endl;
    Passport::Show();
    cout << "Number of zagran passport: 123456 " << numofZagran << endl;
    cout << "Viza: dont know" << endl;
    for (int i = 0; i < VizaSize; i++)
        if (viza[i] != " ")
            cout << viza[i] << endl;
}
