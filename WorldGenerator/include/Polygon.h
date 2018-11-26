#ifndef POLYGON_H
#define POLYGON_H
#include <vector>
#include "Coords.h"
#include "Figure.h"


class Polygon : public Figure
{
    public:
        Polygon(){};
        virtual ~Polygon(){};
        virtual void sedessiner()=0;

    protected:
        std::vector <Coords> m_coords;


    private:
};

#endif // POLYGON_H
