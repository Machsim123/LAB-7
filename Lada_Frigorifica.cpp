#include "Lada_Frigorifica.h"

void Lada_Frigorifica::set_descriere(char *v)
{
    if(v==NULL)
        descriere=NULL;
    else
    {
        descriere=new char[strlen(v)+1];
        strcpy(descriere,v);
    }
}

void Lada_Frigorifica::set_dim(double d[])
{
    for(int i=0; i<3; i++)
        dim[i]=d[i];
}

Lada_Frigorifica::Lada_Frigorifica(char v[], double p, double d[], char *c):Produs(v,p)
{
    set_descriere(c);
    set_dim(d);
}

Lada_Frigorifica::Lada_Frigorifica(const Lada_Frigorifica &l):Produs(l)
{
    for(int i=0; i<3; i++)
        dim[i]=l.dim[i];
    set_descriere(l.descriere);
}

Lada_Frigorifica& Lada_Frigorifica::operator=(const Lada_Frigorifica &l)
{
    Produs::operator=(l);
    for(int i=0; i<3; i++)
        dim[i]=(l.dim)[i];
    set_descriere(l.descriere);
}

Lada_Frigorifica::~Lada_Frigorifica()
{
    delete [] descriere;
    descriere = NULL;
}

void Lada_Frigorifica::afisare()
{
    Produs::afisare();
    cout<<"dim: "<<dim[0]<<" "<<dim[1]<<" "<<dim[2]<<endl;
    cout<<"descriere: "<<descriere<<endl;
}

double Lada_Frigorifica::get_volume()
{
    return (dim[0]*dim[1]*dim[2]);
}

double Lada_Frigorifica::get_pret()
{
    return pret;
}
