#include "Nuage.h"

Nuage::Nuage(Coords const & lacoord,double taille,double generator):Object(lacoord,taille,generator)
{

    int a,b,c;

    if(!aleaentier(0,3,m_seed))
    {
        a=244;
        b=254;
        c=254;
    }
    else if(aleaentier(0,3,m_seed)==1)
    {
        a=142;
        b=162;
        c=198;
    }
    else
    {
        a=223;
        b=242;
        c=255;
    }

    Couleur recipient(a,b,c);

    m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx(),m_barycentre.gety()),recipient,m_taille/4,m_taille/4));
    ///Rond de base pour le centre du nuage

    ///Les autres autour du centre
    m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx()+m_taille/2,m_barycentre.gety()+m_taille/6),recipient,m_taille*2/3,m_taille/3));
    m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx()+m_taille/2,m_barycentre.gety()-m_taille/6),recipient,m_taille*2/3,m_taille/3));

    if(aleaentier(0,1,m_seed))
        m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx()-m_taille/2,m_barycentre.gety()+m_taille/6),recipient,m_taille*2/3,m_taille/3));
    if(aleaentier(0,1,m_seed))
        m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx()-m_taille/2,m_barycentre.gety()-m_taille/6),recipient,m_taille*2/3,m_taille/3));
    if(aleaentier(0,1,m_seed))
        m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx(),m_barycentre.gety()+m_taille/5),recipient,m_taille*2/3,m_taille/3));
    if(aleaentier(0,1,m_seed))
        m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx(),m_barycentre.gety()-m_taille/5),recipient,m_taille*2/3,m_taille/3));
}

void Nuage::medessiner()
{
    for(unsigned int i=0; i<m_ellipse.size(); i++)
        m_ellipse[i].sedessiner();
}
