#ifndef POLYGON_H
#define POLYGON_H
#include <vector>
#include "Coords.h"
#include "Figure.h"
#include "Couleur.h"

class Polygon : public Figure
{
public:
    Polygon() {};
    Polygon(Coords bary,Couleur coul):Figure(bary,coul) {};
    Polygon(Couleur lacoul):Figure(lacoul) {};/// Je sais même plus pour c'est là
    virtual ~Polygon() {};
    virtual void sedessiner();
    void addPoint(Coords const & lacoord);
    Coords getbary(){return m_barycentre;};///Tentative pour des sous-sous branches mais pas reussi

protected:
    std::vector <Coords> m_coords;

private:
};

#endif // POLYGON_H
