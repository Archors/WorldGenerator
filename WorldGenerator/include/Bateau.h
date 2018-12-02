#ifndef BATEAU_H
#define BATEAU_H
#include <iostream>
#include <vector>
#include "Object.h"
#include "Polygon.h"

class Bateau : public Object
{
public:
    Bateau(){};
    Bateau(Coords const & lacoord,double taille,double generator);
    virtual ~Bateau() {};
    virtual void medessiner();

protected:
    std::vector<Polygon> m_polygon;

private:
};

#endif // BATEAU_H
