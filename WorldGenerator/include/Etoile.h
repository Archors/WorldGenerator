#ifndef ETOILE_H
#define ETOILE_H
#include "Object.h"
#include "Polygon.h"


class Etoile : public Object
{
    public:
        Etoile(){};
        Etoile(Coords const & lacoord,double taille,double generator);
        virtual ~Etoile(){};
        virtual void medessiner();

    protected:
        std::vector<Polygon> m_polygon;

    private:
};

#endif // ETOILE_H
