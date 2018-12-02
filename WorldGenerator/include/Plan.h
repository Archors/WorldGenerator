#ifndef PLAN_H
#define PLAN_H
#include <vector>
#include "Arbre.h"
#include "Nuage.h"
#include "Etoile.h"
#include "Bateau.h"
#include "Voiture.h"
#include "Coords.h"
#define TAILLEX 1000
#define TAILLEY 800

class Plan
{
public:
    Plan(double densite, double taille,double laseed, int min, int max,int choix);
    virtual ~Plan();
    void medessiner();
    void createArbre(double x, double y);
    void createNuage();
    void createEtoile();
    void createBateau();
    void createVoiture();
    void trierObjet();
    void createListArbre();
    void createListNuage();
    void createListEtoile();
    void createListVoiture();
    void createListBateau();
    void createCiel();
    void drawSol();
    void drawCiel();

protected:
    ///Liste polymorphique des objets contenu dans un plan
    std::vector <Object*> m_objet;
    ///Interval de creation du plan
    double m_densite;
    double m_taille;
    double m_seed1;
    std::mt19937 m_seed;
    ///Minimum et maximum des coordonnes de generation d'objet dans le plan
    int m_min;
    int m_max;
    int m_choix;

private:
};

#endif // PLAN_H
