#include "Produs.h"

class Lada_Frigorifica: public Produs{
    double dim[3]; //latime, adancime, inaltime in cm
    char *descriere=NULL;
    void set_descriere(char *);
    void set_dim(double []);
public:
    Lada_Frigorifica(char v[], double p, double d[], char *c);
    Lada_Frigorifica(const Lada_Frigorifica &);
    Lada_Frigorifica& operator=(const Lada_Frigorifica &);
    ~Lada_Frigorifica();
    void afisare();
    double get_volume();
    double get_pret();
};// volumul e produsul celor 3 dimensiuni
