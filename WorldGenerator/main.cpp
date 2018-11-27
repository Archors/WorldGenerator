#include <iostream>
#include "Triangle.h"
#include <vector>

using namespace std;

// IMPORTANT : effacer à chaque fois le fin de div de l'objet et le </svg> avant de compiler
int main()
{
    vector <Figure*> test;
    test.push_back(new Triangle(Coords(200,10),Coords(190,250),Coords(160,210)));
    test[0]->sedessiner();
    return 0;
}
