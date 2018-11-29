#include "Paysage.h"

Paysage::Paysage()
{
    //ctor
}

Paysage::~Paysage()
{
    //dtor
}

void Paysage::choixseed()
{
    std::cout<<"Saisissez le seed de la generation du monde"<<std::endl;
    std::cin>>m_seed;
}

void Paysage::choixdensite()
{
    std::cout<<"Saisissez la densite d'objet dans le monde entre 0 et 100\n0 = pas d'objet, 100 = maximum d'objet"<<std::endl;
    do{
        std::cin>>m_densite;
    }while(m_densite < 100 || m_densite < 0);
}

void Paysage::choixtaille()
{
    int m_taille;
    std::cout<<"Saisissez la taille des objets entre 0 et 10\n0 = tres petit, 100 = tres grand"<<std::endl;
    do{
        std::cin>>m_taille;
    }while(m_taille < 0 || m_taille > 10);
}

void Paysage::medessiner()
{
    for(unsigned int i=0;i<m_plan.size();++i)
        m_plan[i].medessiner();
}
