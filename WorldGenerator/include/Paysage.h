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
    void medessiner();

protected:
    std::vector<Plan> m_plan;
    unsigned int m_seed;
    unsigned int m_densite;
    unsigned int m_taille;
    unsigned int m_nbplan;
private:
};

#endif // PAYSAGE_H
