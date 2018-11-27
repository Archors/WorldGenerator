#ifndef POLYGON_H
#define POLYGON_H
#include <vector>
#include "Coords.h"
#include "Figure.h"
#include "Couleur.h"

class Polygon : public Figure
{
    public:
        Polygon(){};
        Polygon(Coords bary,Couleur coul):Figure(bary,coul){};
        virtual ~Polygon(){};
        virtual void sedessiner();

    protected:
        std::vector <Coords> m_coords;

    private:
};

#endif // POLYGON_H
