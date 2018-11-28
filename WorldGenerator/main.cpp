#include <iostream>
#include <vector>
#include "Triangle.h"
#include "Polygon.h"
#include "Plan.h"

using namespace std;

// IMPORTANT : effacer à chaque fois le fin de div de l'objet et le </svg> avant de compiler
int main()
{
    vector <Plan> Image;
    vector <Figure*> test;
    test.push_back(new Triangle(Coords(200,10),Coords(190,250),Coords(160,210),Couleur(65,134,18)));
    test.push_back(new Polygon(Coords(15,15),Couleur(255,0,0)));

    test[0]->sedessiner();
    for(unsigned int i=0;i<test.size();i++)
    {
        delete test[i];
    }

    return 0;
}
