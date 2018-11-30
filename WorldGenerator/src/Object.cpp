#include "Object.h"

Object::Object(Coords const & lacoord,double taille,double generator)
{
    m_barycentre=lacoord;
    m_taille=taille;
    m_seed=std::mt19937(generator);///Ligne TRÈS importante
    ///On creer une graine à partir de la valeur aléatoire reçus en parametre
    ///On a donc une graine propre à chaque objet, ils peuvent à leurs tour generer une suite de nombre aleatoire (Arboresence)
}

/// A enlever et a mettre dans le plan.cpp
void Object::medessiner()
{
    std::string const nomFichier("output.svg");
    std::ofstream monFlux(nomFichier.c_str(),std::ios::app);//ouverture de fichier, code identique à celui d'openclassroom
    monFlux<<"\n</svg>";
}
