#include "Coords.h"

Coords::~Coords()
{
    //dtor
}

// *this est l'objet concret qui est manipuler dans le sous-programme
// operator= definie le "=" dans le code pour les objets coords
Coords & Coords::operator=(Coords const & a)
{
    this->m_x=a.m_x;
    this->m_y=a.m_y;
    return *this;
}

Coords::Coords(Coords const & copie)
{
    m_x=copie.m_x;
    m_y=copie.m_y;
}

void Coords::afficher(std::ostream & flux)const
{
    flux<<m_x<<","<<m_y;
}

std::ostream& operator<<(std::ostream &flux,Coords const & lacoord)
{
    lacoord.afficher(flux);
    return flux;
}
