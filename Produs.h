#include <iostream>
#include <string.h>
#pragma once

using namespace std;


class Produs {
protected:
    char cod[6]="";
    double pret=0.0;
public:
    Produs(char v[]="", double p=0.0);
    ///Produs(const Produs &);
    ///Produs& operator=(const Produs &);
    virtual ~Produs()=default;
    virtual void afisare();
    virtual double get_volume();
    virtual double get_pret();
};//volumul e 0
