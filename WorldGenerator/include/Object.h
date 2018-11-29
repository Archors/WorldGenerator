#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
#include "Coords.h"
#include <random>

class Object
{
    public:
        Object(){};
        virtual ~Object(){};
        virtual void medessiner();

    protected:
        Coords m_barycentre;
        double m_taille;
        std::mt19937 m_seed;
    private:
};

#endif // OBJECT_H
