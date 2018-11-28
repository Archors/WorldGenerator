#include "Object.h"

void Object::medessiner()
{
    std::string const nomFichier("output.svg");
    std::ofstream monFlux(nomFichier.c_str(),std::ios::app);//ouverture de fichier, code identique à celui d'openclassroom
    monFlux<<"\n</svg>";
}
