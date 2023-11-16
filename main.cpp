#include "Lada_Frigorifica.h"
#include "Frigider.h"

int main()
{
    /*Produs a(co,0.2);
    //a.afisare();
    Produs b(co,0.5);
    a=b;
    //a.afisare();
    Frigider c(co,0.7,1.245,ch,1);
    //c.afisare();
    Frigider d(ch,0.12,1.211,co,0);
    //cout<<endl<<endl;
    //d.afisare();
    c=d;
    //cout<<endl<<endl;
    //c.afisare();
    //Produs e(a);
    //e.afisare();
    Lada_Frigorifica f(co,4.5,di,ch);
    //f.afisare();
    //cout<<endl<<endl;
    Lada_Frigorifica g(f);
    //g.afisare();
    //cout<<endl<<endl;
    Lada_Frigorifica h(co,1.2,di,ch);
    h=g;
    //h.afisare();*/
    char co[6]="abcab";
    char ch[4]="pp";
    double di[3]={21221.21, 523.231, 65.121};
    Produs** vec= new Produs*[3];
    vec[0]= new Frigider(co,0.7,9.245,ch,1);
    vec[1]= new Frigider(ch,0.12,12.211,co,0);
    vec[2]= new Lada_Frigorifica(co,4.5,di,ch);
    Produs *aux= new Produs[1];
    for(int i=0; i<3; i++)
    {
        vec[i]->afisare();
        cout<<endl<<endl;
    }
    for(int i=0; i<3; i++)
        for(int j=i+1; j<3; j++)
            if(vec[i]->get_volume()>vec[j]->get_volume())
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
    for(int i=0; i<3; i++)
    {
        vec[i]->afisare();
        cout<<endl<<endl;
    }
    cout<<"URMATOARELE AU VOLUMUL SUB 100m_cub & PRET SUB 2000:"<<endl;
    for(int i=0; i<3; i++)
    {
        if(vec[i]->get_volume()<100000000 && vec[i]->get_pret()<2000)
        vec[i]->afisare();
        cout<<endl<<endl;
    }
    return 0;
}
