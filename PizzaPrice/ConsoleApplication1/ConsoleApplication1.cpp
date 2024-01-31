

#include <iostream>

using namespace std;

int main()
{
    const double cenaPica = 7.0;
    const double otstapka = 0.2;
    const int rabotniDni = 5;

    double zaplataAngel = 1800.0;
    double zaplataBorislava = 4000.0;

    double pagaAngel = 0.0;
    double pagaBorislava = 0.0;
    double obshtaPaga = 0.0;

    for (int den = 1; den <= rabotniDni; ++den) {
       
        pagaAngel += cenaPica;
        pagaBorislava += cenaPica;

        
        if (den % 2 == 0) {
            pagaAngel += cenaPica * (1 - otstapka);
            pagaBorislava += cenaPica * (1 - otstapka);
        }

       
        pagaAngel += cenaPica * 4 / 3;
        pagaBorislava += cenaPica * 2 / 3;
    }

    
    obshtaPaga = pagaAngel + pagaBorislava;
    double sA = pagaAngel * (zaplataAngel / (zaplataAngel + zaplataBorislava));
    double sB = pagaBorislava * (zaplataBorislava / (zaplataAngel + zaplataBorislava));

    cout <<   sA << " лв." << endl;
    cout <<   sB << " лв." << endl;
    


    

    




    
     
  




      

    
}

