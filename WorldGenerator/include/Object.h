#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
#include "Coords.h"
#include <random>
#include "Seed.h"

class Object
{
    public:
        Object(){};
        Object(Coords const & lacoord,double taille,double generator);
        double getx(){return m_barycentre.getx();};
        double gety(){return m_barycentre.gety();};
        virtual ~Object(){};
        virtual void medessiner()=0;

    protected:
        Coords m_barycentre;
        double m_taille;
        std::mt19937 m_seed;
    private:
};

#endif // OBJECT_H
