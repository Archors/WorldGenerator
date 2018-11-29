#include <iostream>
#include <vector>
#include "Triangle.h"
#include "Polygon.h"
#include "Plan.h"
#include "Arbre.h"

using namespace std;

// IMPORTANT : effacer à chaque fois le fin de div de l'objet et le </svg> avant de compiler
int main()
{
    vector <Plan> image;
    vector <Object*> test;
    test.push_back(new Arbre(Coords(100,100),300));
    test[0]->medessiner();
    //test[0]->sedessiner();
    for(unsigned int i=0;i<test.size();i++)
    {
        delete test[i];
    }

    return 0;
}

