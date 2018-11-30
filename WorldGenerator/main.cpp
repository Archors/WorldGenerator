#include <iostream>
#include <vector>
#include "Triangle.h"
#include "Polygon.h"
#include "Arbre.h"

using namespace std;

// IMPORTANT : effacer à chaque fois le fin de div de l'objet et le </svg> avant de compiler
int main()
{
    /*Paysage thepaysage;
    thepaysage.choix();
    thepaysage.createplan();
    thepaysage.medessiner();*/
    vector <Object*> test;
    mt19937 laseed(2);

    for(int i=0;i<5;i++)
    {
        test.push_back(new Arbre(Coords(100+100*i,500),100,alea(0,50,laseed)));
        test[i]->medessiner();
    }

    for(unsigned int i=0; i<test.size(); i++)
    {
        delete test[i];
    }

    return 0;
}

