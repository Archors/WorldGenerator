#include "Seed.h"

/// Cette fonction retourne un entier al�atoire dans [min...max]
int alea(int min, int max, std::mt19937& randGen)
{
    return std::uniform_int_distribution<>(min, max)(randGen);
}
/// Cette fonction retourne un r�el al�atoire dans [min...max[
double alea(double min, double max, std::mt19937& randGen)
{
    return std::uniform_real_distribution<>(min, max)(randGen);
}
