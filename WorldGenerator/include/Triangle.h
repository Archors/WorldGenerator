#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"
#include <iostream>

class Triangle : public Polygon
{
public:
    Triangle() {};
    Triangle(Coords const x,Coords const y,Coords const z,Couleur const lacoul);
    virtual ~Triangle() {};
protected:
    int m_nbdepoint;

private:
};

#endif // TRIANGLE_H
