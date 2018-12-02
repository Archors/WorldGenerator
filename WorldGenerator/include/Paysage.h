#ifndef PAYSAGE_H
#define PAYSAGE_H
#include <iostream>
#include <vector>
#include <Plan.h>
#include <fstream>


class Paysage
{
public:
    Paysage(double seed, double taille, double densite);
    virtual ~Paysage();
    ///Fonction pour dessiner
    void medessiner();
    ///Permet de créer 4 plans differents pour l'image
    void createplan();

protected:
    std::vector<Plan*> m_plan;
    double m_seed;
    double m_densite;
    double m_taille;
private:
};

#endif // PAYSAGE_H
