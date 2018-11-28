#include "Couleur.h"

Couleur::Couleur(Couleur const & copie)
{
    m_r=copie.m_r;
    m_g=copie.m_g;
    m_b=copie.m_b;
}

Couleur & Couleur::operator=(Couleur const & a)
{
    this->m_r=a.m_r;
    this->m_g=a.m_g;
    this->m_b=a.m_b;
    return *this;
}


void Couleur::afficher(std::ostream & flux)const
{
    flux<<"rgb("<<m_r<<","<<m_g<<","<<m_b<<")";
}

std::ostream& operator<<(std::ostream &flux,Couleur const & lacoul)
{
    lacoul.afficher(flux);
    return flux;
}
