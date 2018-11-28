#include "Plan.h"

Plan::Plan()
{
    //ctor
}

Plan::~Plan()
{
    //dtor
}

void Plan::medessiner()
{
    for(unsigned int i=0;i<m_objet.size();++i)
        m_objet[i].medessiner();
}
