#ifndef VOITURE_H
#define VOITURE_H
#include "Polygon.h"
#include "Ellipse.h"
#include "Object.h"

class Voiture : public Object
{
public:
    Voiture() {};
    Voiture(Coords const & lacoord,double taille,double generator);
    virtual ~Voiture() {};
    virtual void medessiner();

protected:
    std::vector <Polygon> m_polygon;
    std::vector <Ellipse> m_ellipse;

private:
};

#endif // VOITURE_H
