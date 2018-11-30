#include "Seed.h"

//retourne un réel aléatoire dans [min...max[
double alea(double min, double max, std::mt19937& randGen)
{
    return std::uniform_real_distribution<>(min, max)(randGen);
}

