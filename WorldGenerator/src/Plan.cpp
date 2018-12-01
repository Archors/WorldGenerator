#include "Plan.h"

Plan::Plan(double densite, double taille,std::mt19937 laseed, int themin, int themax) : m_densite(densite), m_taille(taille), m_seed(laseed), m_min(themin), m_max(themax)
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
    double y = alea(m_min,m_max,m_seed);
    double taille = ((m_taille*y)/700) + alea(0,10,m_seed);
    m_objet.push_back(new Arbre(Coords(alea(0,TAILLEX,m_seed),y),taille,alea(0,50,m_seed)));
}

void Plan::createNuage()
{
    m_objet.push_back(new Nuage(Coords(alea(0,1000,m_seed),alea(m_min,m_max,m_seed)),m_taille,alea(0,50,m_seed)));
}

void Plan::createListArbre()
{
    for(int i=0; i < 3*m_densite; i++)
        createArbre();
    trierObjet();
}

void Plan::createListNuage()
{
    for(int i=0; i < m_densite; i++)
        createNuage();
        trierObjet();
}

void Plan::trierObjet()
{
    Object *tempo;
    for(unsigned int i=0;i<m_objet.size()-1;++i)
    {
        for(unsigned int j=0;j<m_objet.size()-i-1;++j)
            if(m_objet[j]->gety() > m_objet[j+1]->gety())
            {
                tempo=m_objet[j];
                m_objet[j]=m_objet[j+1];
                m_objet[j+1]=tempo;
            }
    }
}
