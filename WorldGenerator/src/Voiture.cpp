#include "Voiture.h"

Voiture::Voiture(Coords const & lacoord,double taille,double generator):Object(lacoord,taille,generator)
{
    int a,b,c;
    if(!aleaentier(0,3,m_seed))
    {
        a=103;b=113;c=121;
    }
    else if(aleaentier(0,3,m_seed)==1)
    {
        a=19;b=14;c=10;
    }
    else
    {
        a=217;b=1;c=21;
    }

    Couleur recipient(a,b,c);

    Polygon recip(Coords(m_barycentre),recipient);

    recip.addPoint(Coords(m_barycentre.getx()-m_taille/6,m_barycentre.gety()-m_taille/2));
    recip.addPoint(Coords(m_barycentre.getx()+m_taille*4/3,m_barycentre.gety()-m_taille/2));
    recip.addPoint(Coords(m_barycentre.getx()+m_taille*4/3,m_barycentre.gety()));
    recip.addPoint(Coords(m_barycentre.getx()+m_taille*45/30,m_barycentre.gety()));
    recip.addPoint(Coords(m_barycentre.getx()+m_taille*45/30,m_barycentre.gety()+(m_taille/2)*2/3));
    recip.addPoint(Coords(m_barycentre.getx()-m_taille*5/3,m_barycentre.gety()+(m_taille/2)*2/3));
    recip.addPoint(Coords(m_barycentre.getx()-m_taille*4/3,m_barycentre.gety()));
    recip.addPoint(Coords(m_barycentre.getx()-m_taille/2*(1.8),m_barycentre.gety()));

    m_polygon.push_back(recip);

    m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx()-m_taille,m_barycentre.gety()+(m_taille/2)*2/3),Couleur(0,0,0),m_taille/4,m_taille/4));
    m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx()-m_taille,m_barycentre.gety()+(m_taille/2)*2/3),Couleur(255,255,255),m_taille/16,m_taille/16));
    m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx()+m_taille,m_barycentre.gety()+(m_taille/2)*2/3),Couleur(0,0,0),m_taille/4,m_taille/4));
    m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx()+m_taille,m_barycentre.gety()+(m_taille/2)*2/3),Couleur(255,255,255),m_taille/16,m_taille/16));

}

void Voiture::medessiner()
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
