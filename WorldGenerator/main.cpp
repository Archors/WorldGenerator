#include <iostream>
#include <vector>
#include "Triangle.h"
#include "Polygon.h"
#include "Plan.h"
#include "Arbre.h"
#include "Ellipse.h"

using namespace std;

// IMPORTANT : effacer à chaque fois le fin de div de l'objet et le </svg> avant de compiler
int main()
{
    vector<Object*> test;
    test.push_back(new Arbre(Coords(500,500),100));

    test[0]->medessiner();

    for(unsigned int i=0;i<test.size();i++)
    {
        delete test[i];
    }

    return 0;
}
