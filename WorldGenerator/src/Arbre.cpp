#include "Arbre.h"

void Arbre::medessiner()
{
    for(unsigned int i=0;i<m_rectangle.size();i++)
    {
        m_rectangle[i].sedessiner();
    }
    for(unsigned int i=0;i<m_ellipse.size();i++)
    {
        m_ellipse[i].sedessiner();
    }
}
