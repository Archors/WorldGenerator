#include "Triangle.h"

Triangle::Triangle(Coords const x,Coords const y,Coords const z)
{
    m_coords.push_back(Coords(x));
    m_coords.push_back(Coords(y));
    m_coords.push_back(Coords(z));
}
