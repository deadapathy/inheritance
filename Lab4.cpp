#include <iostream>
#include "Passport.h"
#include "ForeignPassport.h"

using namespace std;

int main()
{
    Passport pass;
    pass.Show();

    ForeignPassport forPass;
    forPass.Show();

}

