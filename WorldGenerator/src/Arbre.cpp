#include "Arbre.h"

Arbre::Arbre(Coords const & lacoord,double taille)
{
    m_barycentre=lacoord;/// On met le barycentre la taille dans l'objet
    m_taille=taille;

    Polygon recip(Coords(m_barycentre),Couleur(91,60,17));/// On creer un recip qui va ensuite etre push_back
    /// Les attribut de Polygon ne sont pas accesible dans Arbre
    /// On doit donc creer un recip, ajouter les attribut du recip, et APRÈS le push_back dans l'objet

    recip.addPoint(Coords(m_barycentre.getx()-m_taille/10,m_barycentre.gety()-m_taille/2));/// tout ça c'est les coords d'un rectangle
    recip.addPoint(Coords(m_barycentre.getx()-m_taille/10,m_barycentre.gety()+m_taille/2));
    recip.addPoint(Coords(m_barycentre.getx()+m_taille/10,m_barycentre.gety()+m_taille/2));
    recip.addPoint(Coords(m_barycentre.getx()+m_taille/10,m_barycentre.gety()-m_taille/2));

    m_polygon.push_back(recip);/// Dès que le rectangle est bien on le push dans l'objet
    /// Il sera detruit par default

    ///Meme chose avec l'ellipse, elle est plus facile car elle n'a pas de conteneurs donc accede à tout directement

    m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx(),m_barycentre.gety()-m_taille/2),Couleur(27,79,8),100,50));

}

void Arbre::medessiner()
{
    for(unsigned int i=0;i<m_polygon.size();i++)
    {
        std::cout<<"dans le medessiner\n";
        m_polygon[i].sedessiner();
    }
    for(unsigned int i=0;i<m_ellipse.size();i++)
    {
        m_ellipse[i].sedessiner();
    }
    Object::medessiner();
}
