#include "Arbre.h"

void Arbre::medessiner()
{
    for(unsigned int i=0;i<m_polygon.size();i++)
    {
        m_polygon[i].sedessiner();
    }
    for(unsigned int i=0;i<m_ellipse.size();i++)
    {
        m_ellipse[i].sedessiner();
    }
}
