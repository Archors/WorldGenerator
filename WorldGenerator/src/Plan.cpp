#include "Plan.h"

Plan::Plan()
{
    //ctor
}

Plan::~Plan()
{
    for(unsigned int i=0;i<m_objet.size();++i)
        delete m_objet[i];
}

void Plan::medessiner()
{
    for(unsigned int i=0;i<m_objet.size();++i)
        m_objet[i]->medessiner();
}


/*void Plan::addArbre(Arbre *Thearbre)
{
    m_objet.push_back(Thearbre);
}*/

/*void Plan::addNuage(Nuage* Thenuage)
{
    m_objet.push_back(Thenuage);
}*/
