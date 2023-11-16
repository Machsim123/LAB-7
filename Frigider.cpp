#include "Frigider.h"

void Frigider::set_culoare(char *v)
{
    if(v==NULL)
        culoare=NULL;
    else
    {
        culoare=new char[strlen(v)+1];
        strcpy(culoare,v);
    }
}

Frigider::Frigider(char v[], double p, double vol, char *c, bool b):Produs(v,p),volum(vol),no_frost(b)
{
    set_culoare(c);
}

Frigider::Frigider(const Frigider &f):Produs(f),volum(f.volum),no_frost(f.no_frost)
{
    set_culoare(f.culoare);
}

Frigider& Frigider::operator=(const Frigider &f)
{
    Produs::operator=(f);
    volum= f.volum;
    set_culoare(f.culoare);
    no_frost= f.no_frost;
}

Frigider::~Frigider()
{
    delete [] culoare;
    culoare = NULL;
}

void Frigider::afisare()
{
    Produs::afisare();
    cout<<"volum: "<<volum<<endl;
    cout<<"culoare: "<<culoare<<endl;
    cout<<"no_frost: "<<no_frost<<endl;
}

double Frigider::get_volume()
{
    return volum;
}

double Frigider::get_pret()
{
    return pret;
}
