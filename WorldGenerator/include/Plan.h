#ifndef PLAN_H
#define PLAN_H
#include <vector>
#include "Arbre.h"
#include "Nuage.h"
#include "Coords.h"
#define TAILLEX 1000
#define TAILLEY 800



class Plan
{
    public:
        Plan(double densite, double taille,std::mt19937 laseed, int min, int max);
        virtual ~Plan();
        void medessiner();
        void createArbre();
        void createNuage();
        void createListArbre();
        void createListNuage();

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
