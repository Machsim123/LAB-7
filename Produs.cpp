#include "Produs.h"

Produs::Produs(char v[], double p):pret(p)
{
    strcpy(cod,v);
}

void Produs::afisare()
{
    cout<<"cod: "<<cod<<endl;
    cout<<"pret: "<<pret<<endl;
}

double Produs::get_volume()
{
    return 0;
}

double Produs::get_pret()
{
    return pret;
}
