#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
#include "Coords.h"

class Object
{
    public:
        Object(){};
        virtual ~Object(){};
        virtual void medessiner();

    protected:
        Coords m_barycentre;

    private:
};

#endif // OBJECT_H
