#include "Seed.h"

using namespace std;

//retourne un r�el al�atoire dans [min...max[
double alea(double min, double max, mt19937& randGen)
{
    return uniform_real_distribution<>(min, max)(randGen);
}

