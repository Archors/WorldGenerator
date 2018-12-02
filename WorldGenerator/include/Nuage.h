#ifndef NUAGE_H
#define NUAGE_H
#include "Object.h"
#include "Ellipse.h"

class Nuage : public Object
{
public:
    Nuage() {};
    Nuage(Coords const & lacoord,double taille,double generator);
    virtual ~Nuage() {};
    virtual void medessiner();

protected:

    std::vector <Ellipse> m_ellipse;

private:
};

#endif // NUAGE_H
