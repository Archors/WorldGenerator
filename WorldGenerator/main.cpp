#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Ellipse.h"
#include <vector>

using namespace std;

int main()
{
    // J'AI AMELIORER LE DIAGRAMME DE CLASSE GO CHECKER 10:22 27/11
    vector <Figure*> test;
    test.push_back(new Triangle());
    test.push_back(new Rectangle());
    test.push_back(new Ellipse());
    test[0]->sedessiner();
    test[1]->sedessiner();
    test[2]->sedessiner();
    return 0;
}
//les destructeurs par default font le taff osef de la memoire
