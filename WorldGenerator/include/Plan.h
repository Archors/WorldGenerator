#ifndef PLAN_H
#define PLAN_H
#include <vector>
#include "Arbre.h"
#include "Nuage.h"
#include "Etoile.h"
#include "Coords.h"
#include "Ellipse.h"
#define TAILLEX 1000
#define TAILLEY 800

class Plan
{
public:
    Plan(double densite, double taille,std::mt19937 laseed, int min, int max);
    virtual ~Plan();
    void medessiner();
    void createArbre(double x, double y);
    void createNuage();
    void createEtoile();
    void trierObjet();
    void createListArbre();
    void createListNuage();
    void createListEtoile();
    void createCiel();
    void drawEllipse();

protected:
    ///Liste polymorphique des objets contenu dans un plan
    std::vector <Object*> m_objet;
    ///Interval de creation du plan
    double m_densite;
    double m_taille;
    std::mt19937 m_seed;
    ///Minimum et maximum des coordonnes de generation d'objet dans le plan
    int m_min;
    int m_max;

private:
};

#endif // PLAN_H
