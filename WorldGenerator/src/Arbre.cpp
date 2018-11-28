#include "Arbre.h"

Arbre::Arbre(Coords const & lacoord,double taille)
{

    m_taille=taille;
    Polygon recip(Couleur (91,60,17));

    recip.addPoint(Coords(m_barycentre.getx()+m_taille/10,m_barycentre.gety()+m_taille/2));
    recip.addPoint(Coords(m_barycentre.getx()+m_taille/10,m_barycentre.gety()-m_taille/2));
    recip.addPoint(Coords(m_barycentre.getx()-m_taille/10,m_barycentre.gety()+m_taille/2));
    recip.addPoint(Coords(m_barycentre.getx()-m_taille/10,m_barycentre.gety()-m_taille/2));

    m_polygon.push_back(recip);
}

void Arbre::medessiner()
{
    for(unsigned int i=0;i<m_polygon.size();i++)
    {
        std::cout<<"dans le medessiner\n";
        m_polygon[i].sedessiner();
    }
    for(unsigned int i=0;i<m_ellipse.size();i++)
    {
        m_ellipse[i].sedessiner();
    }
}
