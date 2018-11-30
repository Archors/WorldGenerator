#include "Arbre.h"

Arbre::Arbre(Coords const & lacoord,double taille,double generator)
{
    m_barycentre=lacoord;/// On met le barycentre la taille dans l'objet
    m_taille=taille;
    m_seed=std::mt19937(generator);

    /// CREATION DU TRONC
    Polygon recip(Coords(m_barycentre),Couleur(91,60,17));/// On creer un recip qui va ensuite etre push_back
    /// Les attribut de Polygon ne sont pas accesible dans Arbre
    /// On doit donc creer un recip, ajouter les attribut du recip, et APRÈS le push_back dans l'objet

    recip.addPoint(Coords(m_barycentre.getx()-m_taille/10,m_barycentre.gety()+m_taille/2));/// tout ça c'est les coords d'un rectangle
    recip.addPoint(Coords(m_barycentre.getx(),m_barycentre.gety()+m_taille/2+m_taille/15));
    recip.addPoint(Coords(m_barycentre.getx()+m_taille/10,m_barycentre.gety()+m_taille/2));
    recip.addPoint(Coords(m_barycentre.getx()+m_taille/10,m_barycentre.gety()-m_taille/2));
    recip.addPoint(Coords(m_barycentre.getx()-m_taille/10,m_barycentre.gety()-m_taille/2));

    m_polygon.push_back(recip);/// Dès que le rectangle est bien on le push dans l'objet
    /// Il sera detruit par default

    ///Meme chose avec l'ellipse, elle est plus facile car elle n'a pas de conteneurs donc accede à tout directement

    m_ellipse.push_back(Ellipse(Coords(m_barycentre.getx(),m_barycentre.gety()-m_taille/2),Couleur(27,79,8),m_taille/3,m_taille/5));
    /// CREATION D'UNE BRANCHE ///////////////////////////////////

    double possible=alea(0,1,m_seed);
    if(possible)
    {
        double x,y;

        x=m_barycentre.getx()+m_taille/5;
        y=m_barycentre.gety()+alea(-m_taille/3,m_taille/6,m_seed);

        Polygon autre(Coords(x+m_taille/8,y+alea(-m_taille/2,0,m_seed)),Couleur(91,60,17));
        autre.addPoint(Coords(x+m_taille/10,y-m_taille/18));
        autre.addPoint(Coords(x+m_taille/8,y-m_taille/18));
        autre.addPoint(Coords(x-m_taille/8,y+m_taille/18));
        autre.addPoint(Coords(x-m_taille/5,y+m_taille/18));

        m_polygon.push_back(autre);
        m_ellipse.push_back(Ellipse(Coords((((x+m_taille/10)+(x+m_taille/8))/2),y-m_taille/18),Couleur(27,79,8),m_taille/6,m_taille/10));
    }

    possible=alea(0,1,m_seed);

    if(possible)
    {
        double a,b;
        a=m_barycentre.getx()-m_taille/5;
        b=m_barycentre.gety()+alea(-m_taille/3,m_taille/6,m_seed);

        Polygon autre(Coords(a+m_taille/8,b+alea(-m_taille/2,0,m_seed)),Couleur(91,60,17));
        autre.addPoint(Coords(a-m_taille/10,b-m_taille/18));
        autre.addPoint(Coords(a-m_taille/8,b-m_taille/18));
        autre.addPoint(Coords(a+m_taille/8,b+m_taille/18));
        autre.addPoint(Coords(a+m_taille/5,b+m_taille/18));

        m_polygon.push_back(autre);
        m_ellipse.push_back(Ellipse(Coords((((a-m_taille/10)+(a-m_taille/8))/2),b-m_taille/18),Couleur(27,79,8),m_taille/6,m_taille/10));

    }

}

void Arbre::medessiner()
{
    std::cout<<alea(0,50,m_seed)<<std::endl;
    for(unsigned int i=0;i<m_polygon.size();i++)
    {
        std::cout<<"dans le medessiner\n";
        m_polygon[i].sedessiner();
    }
    for(unsigned int i=0;i<m_ellipse.size();i++)
    {
        m_ellipse[i].sedessiner();
    }
    //Object::medessiner();
}
