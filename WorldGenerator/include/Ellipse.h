#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "Coords.h"
#include <iostream>
#include "Figure.h"

class Ellipse : public Figure
{
    public:
        Ellipse(){};
        virtual ~Ellipse(){};
        virtual void sedessiner(){std::cout<<"je suis une ellipse\n";};

    protected:
        Coords m_centre;
        double m_rayonx,m_rayony;

    private:
};

#endif // ELLIPSE_H
