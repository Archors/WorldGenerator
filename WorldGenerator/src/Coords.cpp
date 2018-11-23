#include "Coords.h"

Coords::~Coords()
{
    //dtor
}

Coords & Coords::operator=(Coords const & a)
{
    this->m_x=a.m_x;
    this->m_y=a.m_y;
    return *this;
}
