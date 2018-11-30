#include <iostream>
#include <vector>
#include "Triangle.h"
#include "Polygon.h"
#include "Plan.h"
#include "Arbre.h"
#include "Paysage.h"

using namespace std;

// IMPORTANT : effacer à chaque fois le fin de div de l'objet et le </svg> avant de compiler
int main()
{
    /*Paysage thepaysage;
    thepaysage.choix();
    thepaysage.createplan();
    thepaysage.medessiner();*/
    vector <Object*> test;
    mt19937 laseed(0);

    test.push_back(new Arbre(Coords(100,500),100,laseed));
    test[0]->medessiner();

    for(unsigned int i=0; i<test.size(); i++)
    {
        delete test[i];
    }

    return 0;
}

