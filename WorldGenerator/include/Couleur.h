#ifndef COULEUR_H
#define COULEUR_H
#include <iostream>

class Couleur
{
    public:
        Couleur(){};
        Couleur(int rouge,int vert,int bleu):m_r(rouge),m_g(vert),m_b(bleu){};
        Couleur(Couleur const & copie);
        virtual ~Couleur(){};

        Couleur & operator=(Couleur const & a);

        void afficher(std::ostream &flux)const;
        friend std::ostream& operator<<(std::ostream & flux,Couleur const & lacoul);

    protected:
        int m_r,m_g,m_b;

    private:
};

#endif // COULEUR_H
