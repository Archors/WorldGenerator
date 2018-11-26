#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "Coords.h"


class Ellipse
{
    public:
        Ellipse(){};
        virtual ~Ellipse(){};
        virtual void sedessiner()=0;

    protected:
        Coords m_centre;
        double m_rayonx,m_rayony;

    private:
};

#endif // ELLIPSE_H
