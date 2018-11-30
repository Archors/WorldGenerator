#include "Seed.h"

//retourne un réel aléatoire dans [min...max[
double alea(double min, double max, std::mt19937& randGen)
{
    return std::uniform_real_distribution<>(min, max)(randGen);
}

int aleaentier(double min,double max,std::mt19937 & graine)
{
    return std::uniform_int_distribution<>(min,max)(graine);
}
