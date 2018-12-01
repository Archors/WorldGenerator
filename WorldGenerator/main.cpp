#include <iostream>
#include <vector>
#include "Paysage.h"
#include "Triangle.h"
#include "Polygon.h"
#include "Arbre.h"
#include "Nuage.h"
#include "Etoile.h"

using namespace std;

// IMPORTANT : effacer à chaque fois le fin de div de l'objet et le </svg> avant de compiler
int main()
{
    /*
    Paysage thepaysage;
    thepaysage.choix();
    thepaysage.createplan();
    thepaysage.medessiner();
    */
    vector <Object*> test;
    mt19937 laseed(0);


    for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
    {
        test.push_back(new Etoile(Coords(100+100*i,100+100*j),50,alea(0,50,laseed)));
    }

    //test.push_back(new Etoile(Coords(100,300),50,alea(0,50,laseed)));

    for (unsigned int i=0;i<test.size();i++)
    {
        test[i]->medessiner();
    }

    for(unsigned int i=0; i<test.size(); i++)
    {
        delete test[i];
    }

    return 0;
}



