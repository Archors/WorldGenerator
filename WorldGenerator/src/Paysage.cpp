#include "Paysage.h"

Paysage::Paysage()
{
    //ctor
}

Paysage::~Paysage()
{
    for(unsigned int i=0; i<m_plan.size(); i++)
        delete m_plan[i];
}

///Demande � l'utilisateur de saisir une seed
void Paysage::choixseed()
{
    int seed;
    std::cout<<"Saisissez le seed de la generation du monde"<<std::endl;
    std::cin>>seed;
    std::mt19937 Theseed{seed};
    m_seed = Theseed;
}

///Demande � l'utilisateur de saisir la densite d'objet
void Paysage::choixdensite()
{
    std::cout<<"Saisissez la densite d'objet dans le monde entre 0 et 50\n0 = pas d'objet, 50 = maximum d'objet"<<std::endl;
    do
    {
        std::cin>>m_densite;
    }
    while(m_densite > 50 || m_densite < 0);
}

///Demande � l'utilisateur de saisir la taille des objets
void Paysage::choixtaille()
{
    std::cout<<"Saisissez la taille des objets entre 0 et 100\n0 = tres petit, 100 = tres grand"<<std::endl;
    do
    {
        std::cin>>m_taille;
    }
    while(m_taille < 0 || m_taille > 100);
}

///Recuperation des choix de l'utilisateur
void Paysage::choix()
{
    choixseed();
    choixdensite();
    choixtaille();
}

///Dessine tous les objets
void Paysage::medessiner()
{
    for(unsigned int i=0; i<m_plan.size(); ++i)
        m_plan[i]->medessiner();
}

void Paysage::createplan()
{
    m_plan.push_back(new Plan(m_densite,m_taille,m_seed,0,200));
    m_plan[0]->createListNuage();
    m_plan.push_back(new Plan(m_densite,m_taille,m_seed,400,700));
    m_plan[1]->createListArbre();
}
