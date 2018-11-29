#ifndef PAYSAGE_H
#define PAYSAGE_H
#include <iostream>
#include <vector>
#include <Plan.h>


class Paysage
{
public:
    Paysage();
    virtual ~Paysage();
    void choixseed();
    void choixdensite();
    void choixtaille();

protected:
    std::vector<Plan> lesplans;
    int m_seed;
    int m_densite;
    int m_taille;
private:
};

#endif // PAYSAGE_H
