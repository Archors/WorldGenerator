#ifndef SEED_H_INCLUDED
#define SEED_H_INCLUDED
#include <iostream>
#include <vector>
#include <random>
#include "Plan.h"


int alea(int min, int max, std::mt19937& randGen);
double alea(double min, double max, std::mt19937& randGen);
int choixseed();
int choixdensite();
int choixtaille();

#endif // SEED_H_INCLUDED
