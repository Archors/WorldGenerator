#ifndef ARBRE_H
#define ARBRE_H
#include <iostream>
#include <vector>
#include "Rectangle.h"
#include "Ellipse.h"
#include "Object.h"

// Composite Design pour eviter l'heritage diamant mais on aurrait pu utiliser de l'heritage vituel
// FAUX ! On a un vecteur de polygon et d'elipse donc l'heritage virtuel ne peut pas creer l'objet
// lien vers heritage virtuel
// https://cpp.developpez.com/faq/cpp/?page=L-heritage
// https://www.ljll.math.upmc.fr/courscpp/Sections/Sect08-E3.html
class Arbre : public Object
{
public:
    Arbre() {};
    Arbre(Coords const & lacoord,double taille,double generator);
    virtual ~Arbre() {};
    virtual void medessiner();

protected:
    std::vector <Polygon> m_polygon;
    std::vector <Ellipse> m_ellipse;

private:
};

#endif // ARBRE_H
