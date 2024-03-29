#include "Plan.h"

Plan::Plan(double densite, double taille,double laseed, int themin, int themax, int choix) : m_densite(densite), m_taille(taille), m_seed1(laseed), m_min(themin), m_max(themax),m_choix(choix)
{
    std::mt19937 seed{m_seed1};
    m_seed = seed;
}

Plan::~Plan()
{
    for(unsigned int i=0; i<m_objet.size(); ++i)
        delete m_objet[i];
}

void Plan::medessiner()
{
    for(unsigned int i=0; i<m_objet.size(); i++)
    {
        if(i==0 && m_choix==2)
            drawCiel();
        if(i==0 && m_choix==1)
            drawSol();
        if(i==0 && m_choix==3)
            drawMer();
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
    m_objet.push_back(new Nuage(Coords(alea(0,TAILLEX,m_seed),alea(m_min,m_max,m_seed)),m_taille/2,alea(0,50,m_seed)));
}

void Plan::createEtoile()
{
    m_objet.push_back(new Etoile(Coords(alea(0,TAILLEX,m_seed),alea(m_min,m_max,m_seed)),m_taille/2,alea(0,50,m_seed)));
}

void Plan::createBateau()
{
    m_objet.push_back(new Bateau(Coords(alea(0,TAILLEX,m_seed),alea(m_min,m_max,m_seed)),m_taille,alea(0,50,m_seed)));
}

void Plan::createVoiture(double x, double y)
{
    m_objet.push_back(new Voiture(Coords(x,y),m_taille/3,alea(0,50,m_seed)));
}

void Plan::createListArbre()
{
    double x,y;
    bool test=false;
    for(int i=0; i < 2*m_densite; i++)
    {
        do
        {
            x = alea(0,TAILLEX,m_seed);
            y = alea(m_min,m_max,m_seed);
            for(int j=0; j<i-1; ++j)
            {
                if((x < m_objet[j]->getx()+((m_taille+20)/5)) && (x > m_objet[j]->getx()-((m_taille+20)/5)) && (y < m_objet[j]->gety()+((m_taille+20)/5)) && (y > m_objet[j]->gety()-(m_taille+20)/5))
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

void Plan::createListVoiture()
{
    double x,y;
    bool test=false;
    for(int i=0; i < m_densite/3; i++)
    {
        do
        {
            x = alea(0,TAILLEX,m_seed);
            y = alea(m_min,m_max,m_seed);
            for(int j=0; j<i-1; ++j)
            {
                if((x < m_objet[j]->getx()+((m_taille+20)/5)) && (x > m_objet[j]->getx()-((m_taille+20)/5)) && (y < m_objet[j]->gety()+((m_taille+20)/5)) && (y > m_objet[j]->gety()-(m_taille+20)/5))
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
        createVoiture(x,y);
    }
    trierObjet();
}

void Plan::createListBateau()
{
    for(int i=0; i < m_densite/4; i++)
    createBateau();
    trierObjet();
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

void Plan::drawSol()
{
    Ellipse *theellispe = new Ellipse(Coords(500,4100),Couleur(127,221,76),3500,3700);
    theellispe->sedessiner();
    delete theellispe;
}

void Plan::drawCiel()
{
    Ellipse *theellispe = new Ellipse(Coords(500,500),Couleur(0,191,255),1500,1700);
    theellispe->sedessiner();
    delete theellispe;
}

void Plan::drawMer()
{
    Polygon *thepolygon = new Polygon(Coords(0,0),Couleur(0,0,255));
    thepolygon->addPoint(Coords(0,750));
    thepolygon->addPoint(Coords(0,800));
    thepolygon->addPoint(Coords(1000,800));
    thepolygon->addPoint(Coords(1000,750));
    thepolygon->sedessiner();
    delete thepolygon;
}


