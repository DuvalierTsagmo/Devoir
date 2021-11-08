
/*
  Titre      : Titre du programme
  Auteur     : Duvalier Tsagmo
  Date       : 05/11/2021
  Description: Une description du programme
  Version    : 0.0.1
*/

#include <iostream>
using namespace std;
const double TAUX_TVA = 19.6;

main()
{

    double ht, ttc, net, tauxr, remise;
    cout << "donnez le prix hors taxes : ";
    cin >> ht;
    ttc = ht * (1. + TAUX_TVA / 100.);
    if (ttc < 1000.)
    {
        tauxr = 0;
    }
    else if (ttc < 2000)
    {
        tauxr = 1.;
    }
    else if (ttc < 5000)
    {
        tauxr = 3.;
    }
    else
    {
        tauxr = 5.;
    }
    remise = ttc * tauxr / 100.;
    net = ttc - remise;
    cout << "prix ttc = " << ttc << "\n";
    cout << "remise = " << remise << "\n";
    cout << "net à payer = " << net << "\n";
}