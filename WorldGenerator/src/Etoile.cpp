#include "Etoile.h"

Etoile::Etoile(Coords const & lacoord,double taille,double generator):Object(lacoord,taille,generator)
{
    Polygon recip(Coords(m_barycentre.getx(),m_barycentre.gety()),Couleur(253,238,0));

    recip.addPoint(Coords(m_barycentre.getx(),m_barycentre.gety()-m_taille/2));

    recip.addPoint(Coords(m_barycentre.getx()-(m_taille/2)*2/3,m_barycentre.gety()+m_taille/2));
    recip.addPoint(Coords(m_barycentre.getx()+m_taille/2,m_barycentre.gety()-(m_taille/2)*1/3));
    recip.addPoint(Coords(m_barycentre.getx()-m_taille/2,m_barycentre.gety()-(m_taille/2)*1/3));
    recip.addPoint(Coords(m_barycentre.getx()+(m_taille/2)*2/3,m_barycentre.gety()+m_taille/2));

    m_polygon.push_back(recip);
}

void Etoile::medessiner()
{
    for(unsigned int i=0;i<m_polygon.size();i++)
    {
        m_polygon[i].sedessiner();
    }
}
