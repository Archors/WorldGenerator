#include "Plan.h"

Plan::Plan(double densite, double taille,std::mt19937 laseed, int min, int max) : m_densite(densite), m_taille(taille), m_seed(laseed), m_min(min), m_max(max)
{}

Plan::~Plan()
{
    for(unsigned int i=0; i<m_objet.size(); ++i)
        delete m_objet[i];
}

void Plan::medessiner()
{
    for(unsigned int i=0; i<m_objet.size(); ++i)
        m_objet[i]->medessiner();
}


void Plan::createArbre()
{
//    m_objet.push_back(new Arbre(Coords(alea(0,TAILLEX,m_seed),alea(m_min,m_max,m_seed)),m_taille,m_seed));
}

void Plan::createNuage()
{
//    m_objet.push_back(new Nuage(Coords(alea(0,TAILLEX,m_seed),alea(m_min,m_max,m_seed)),m_taille,m_seed));
}

void Plan::createListArbre()
{
    for(int i=0; i < m_densite; i++)
        createArbre();
}

void Plan::createListNuage()
{
    for(int i=0; i < m_densite*2; i++)
        createNuage();
}
