#ifndef SEED_H_INCLUDED
#define SEED_H_INCLUDED
#include <random>

int alea(int min, int max, std::mt19937& randGen);
double alea(double min, double max, std::mt19937& randGen);

#endif // SEED_H_INCLUDED
