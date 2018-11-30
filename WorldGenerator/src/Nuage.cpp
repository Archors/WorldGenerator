#include "Nuage.h"

Nuage::Nuage(Coords const & lacoord,double taille,double generator):Object(lacoord,taille,generator)
{
    m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx(),m_barycentre.gety()),Couleur(169,234,254),m_taille/4,m_taille/4));
    ///Rond de base pour le centre du nuage

    ///Les autres autour du centre
    m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx()+m_taille/2,m_barycentre.gety()+m_taille/6),Couleur(169,234,254),m_taille*2/3,m_taille/3));
    m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx()+m_taille/2,m_barycentre.gety()-m_taille/6),Couleur(169,234,254),m_taille*2/3,m_taille/3));

    if(aleaentier(0,1,m_seed))
        m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx()-m_taille/2,m_barycentre.gety()+m_taille/6),Couleur(169,234,254),m_taille*2/3,m_taille/3));
    if(aleaentier(0,1,m_seed))
        m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx()-m_taille/2,m_barycentre.gety()-m_taille/6),Couleur(169,234,254),m_taille*2/3,m_taille/3));
    if(aleaentier(0,1,m_seed))
        m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx(),m_barycentre.gety()+m_taille/5),Couleur(169,234,254),m_taille*2/3,m_taille/3));
    if(aleaentier(0,1,m_seed))
        m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx(),m_barycentre.gety()-m_taille/5),Couleur(169,234,254),m_taille*2/3,m_taille/3));
}

void Nuage::medessiner()
{
    for(unsigned int i=0;i<m_ellipse.size();i++)
    m_ellipse[i].sedessiner();
}
