#ifndef FIGURE_H
#define FIGURE_H
#include "Coords.h"
#include "Couleur.h"


class Figure
{
    public:
        Figure(){};
        Figure(Coords bary,Couleur coul):m_barycentre(bary),m_couleur(coul){};
        virtual ~Figure(){};
        virtual void sedessiner()=0;

    protected:
        Coords m_barycentre;// Pour manipuler les objets dans les graines
        // on peut le barycentre et on fait des translation a partir de celui-ci
        Couleur m_couleur;
};

#endif // FIGURE_H
