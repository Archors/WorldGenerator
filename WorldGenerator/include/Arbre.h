#ifndef ARBRE_H
#define ARBRE_H
#include <iostream>
#include <vector>
#include "Rectangle.h"
#include "Ellipse.h"
#include "Object.h"

// Composite Design pour eviter l'heritage diament mais on aurrait pu utiliser de l'heritage vituel
// lien vers heritage virtuel
// https://cpp.developpez.com/faq/cpp/?page=L-heritage
// https://www.ljll.math.upmc.fr/courscpp/Sections/Sect08-E3.html
class Arbre : public Object
{
    public:
        Arbre(){};
        virtual ~Arbre(){};
        virtual void medessiner();

    protected:
        std::vector <Rectangle> m_rectangle;
        std::vector <Ellipse> m_ellipse;

    private:
};

#endif // ARBRE_H
