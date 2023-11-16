#include "Produs.h"

class Frigider: public Produs{
     double volum=0.0;
     char *culoare=NULL;
     bool no_frost=false;
     void set_culoare(char *);
public:
    Frigider(char v[]="", double p=0.0, double vol=0.0, char *c=NULL, bool b=false);
    Frigider(const Frigider &);
    Frigider& operator=(const Frigider &);
    ~Frigider();
    void afisare();
    double get_volume();
    double get_pret();
}; // volumul este volum
