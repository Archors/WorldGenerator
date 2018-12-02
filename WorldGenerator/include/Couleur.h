#ifndef COULEUR_H
#define COULEUR_H
#include <iostream>

/// lien utile :
/// https://www.toutes-les-couleurs.com/code-couleur-rvb.php
class Couleur
{
public:
    Couleur() {};
    Couleur(int rouge,int vert,int bleu):m_r(rouge),m_g(vert),m_b(bleu) {};
    Couleur(Couleur const & copie);/// Ne sers à rien, je sais plus pourquoi il est là
    /// Au cas ou, je ne l'ellimine pas
    virtual ~Couleur() {};

    Couleur & operator=(Couleur const & a);

    void afficher(std::ostream &flux)const;
    friend std::ostream& operator<<(std::ostream & flux,Couleur const & lacoul);

protected:
    int m_r,m_g,m_b;

private:
};

#endif // COULEUR_H
