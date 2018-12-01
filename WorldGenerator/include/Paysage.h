#ifndef PAYSAGE_H
#define PAYSAGE_H
#include <iostream>
#include <vector>
#include <Plan.h>
#include <fstream>


class Paysage
{
public:
    Paysage();
    virtual ~Paysage();
    ///Choix des parametres utilisateur
    void choix();
    void choixseed();
    void choixdensite();
    void choixtaille();
    ///Fonction pour dessiner
    void medessiner();
    ///Permet de créer 4 plans differents pour l'image
    void createplan();

protected:
    std::vector<Plan*> m_plan;
    std::mt19937 m_seed;
    double m_densite;
    double m_taille;
private:
};

#endif // PAYSAGE_H
