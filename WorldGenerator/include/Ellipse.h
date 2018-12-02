#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "Coords.h"
#include <iostream>
#include "Figure.h"

class Ellipse : public Figure
{
public:
    Ellipse() {};
    Ellipse(Coords const & barycentre,Couleur const & lacoul,double rayonx,double rayony):Figure(barycentre,lacoul),m_rayonx(rayonx),m_rayony(rayony) {};
    virtual ~Ellipse() {};
    virtual void sedessiner();

protected:
    double m_rayonx,m_rayony;

private:
};

#endif // ELLIPSE_H
