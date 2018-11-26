#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include <vector>
// j'ai mis ces includes juste pour faire le test du polymorphisme avec plusieurs heritage de classes abstraites(!= de heritage multiple)
// j'ai toujours fait du polymorphisme avec heritage simple
// là ça marche avec plusieurs heritage consecutif
using namespace std;

int main()
{
    vector <Figure*> test;
    test.push_back(new Triangle());
    test[0]->sedessiner();
    return 0;
}
//les destructeurs par default font le taff osef de la memoire
