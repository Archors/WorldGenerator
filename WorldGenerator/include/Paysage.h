#ifndef PAYSAGE_H
#define PAYSAGE_H
#include <iostream>
#include <vector>
#include <Plan.h>
#include <fstream>
#include "Ellipse.h"


class Paysage
{
public:
    Paysage(){};
    Paysage(double seed, double taille, double densite);
    virtual ~Paysage();
    ///Fonction pour dessiner
    void medessiner();
    ///Permet de cr�er 4 plans differents pour l'image
    void createplan();
    void charger();
    void sauvegarder();

protected:
    std::vector<Plan*> m_plan;
    double m_seed;
    double m_densite;
    double m_taille;
private:
};

#endif // PAYSAGE_H
