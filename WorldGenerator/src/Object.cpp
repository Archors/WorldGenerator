#include "Object.h"

Object::Object(Coords const & lacoord,double taille,double generator)
{
    m_barycentre=lacoord;
    m_taille=taille;
    m_seed=std::mt19937(generator);///Ligne TRÈS importante
    ///On creer une graine à partir de la valeur aléatoire reçus en parametre
    ///On a donc une graine propre à chaque objet, ils peuvent à leurs tour generer une suite de nombre aleatoire (Arboresence)
}
