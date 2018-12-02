#include "Paysage.h"

Paysage::Paysage(double seed,double taille,double densite)
{
    m_seed=seed;
    m_taille=taille;
    m_densite=densite;
}

Paysage::~Paysage()
{
    for(unsigned int i=0; i<m_plan.size(); i++)
        delete m_plan[i];
}

///Dessine tous les objets
void Paysage::medessiner()
{
    std::string const nomFichier("output.svg");
    std::ofstream monFlux(nomFichier.c_str());//ouverture de fichier en ecriture, code identique à celui d'openclassroom

    if(monFlux)
    {
        monFlux<<"<?xml version=\"1.0\" encoding=\"utf-8\"?>\n";
        monFlux<<"<svg xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\" width=\""<<TAILLEX<<"\" height=\""<<TAILLEY<<"\">";

        monFlux.close();
    }
    else
    {
        std::cout<<"\nERREUR : Pas de fichier "<<nomFichier<<std::endl;
    }

    for(unsigned int i=0; i<m_plan.size(); ++i)
    {
        m_plan[i]->medessiner();
    }

    monFlux.open(nomFichier,std::ios::app);

    if(monFlux)
    {
        monFlux.seekp(0,std::ios::end);
        monFlux<<"</svg>";
    }
    else
    {
        std::cout<<"\nERREUR : Plan.cpp l.25\nPas de fichier "<<nomFichier<<std::endl;
    }
}

void Paysage::createplan()
{
    m_plan.push_back(new Plan(m_densite,m_taille,m_seed,0,200,2));
    m_plan[0]->createCiel();
    m_plan.push_back(new Plan(m_densite,m_taille,m_seed,200,450,0));
    m_plan[1]->createListVoiture();
    m_plan.push_back(new Plan(m_densite,m_taille,m_seed,450,700,1));
    m_plan[2]->createListArbre();
    m_plan.push_back(new Plan(m_densite,m_taille,m_seed,750,800,0));
    m_plan[3]->createListBateau();
}

