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
    {
        m_objet[i]->medessiner();
    }
}

 void Plan::createArbre(double x,double y)
{
    double taille = ((m_taille*y)/700) + alea(0,10,m_seed);
    m_objet.push_back(new Arbre(Coords(x,y),taille,alea(0,50,m_seed)));
}

void Plan::createNuage()
{
    m_objet.push_back(new Nuage(Coords(alea(0,TAILLEX,m_seed),alea(m_min,m_max,m_seed)),m_taille,alea(0,50,m_seed)));
}

void Plan::createEtoile()
{
    m_objet.push_back(new Etoile(Coords(alea(0,TAILLEX,m_seed),alea(m_min,m_max,m_seed)),m_taille,alea(0,50,m_seed)));
}

void Plan::createListArbre()
{
    double x,y;
    bool test=false;
    for(int i=0; i < 3*m_densite; i++)
    {
        do
        {
            x = alea(0,TAILLEX,m_seed);
            y = alea(m_min,m_max,m_seed);
            for(int j=0; j<i-1; ++j)
            {
                if((x < m_objet[j]->getx()+(m_taille/3)) && (x > m_objet[j]->getx()-(m_taille/3)) && (y < m_objet[j]->gety()+(m_taille/3)) && (y > m_objet[j]->gety()-m_taille/3))
                {
                    test=false;
                    break;
                }
                test=true;
            }
            if(i==0 || i==1 )
                test=true;
        }
        while(!test);
        test=false;
        createArbre(x,y);
    }
    trierObjet();
}

void Plan::createListNuage()
{
    for(int i=m_densite/2; i < m_densite; i++)
        createNuage();
}

void Plan::createListEtoile()
{
    for(int i=0; i < m_densite/2; i++)
        createEtoile();
}

void Plan::createCiel()
{
    createListEtoile();
    createListNuage();
}

void Plan::trierObjet()
{
    Object *tempo;
    for(unsigned int i=0; i<m_objet.size()-1; ++i)
    {
        for(unsigned int j=0; j<m_objet.size()-i-1; ++j)
            if(m_objet[j]->gety() > m_objet[j+1]->gety())
            {
                tempo=m_objet[j];
                m_objet[j]=m_objet[j+1];
                m_objet[j+1]=tempo;
            }
    }
}

void Plan::drawEllipse
{
    Ellipse *theelispe
}
