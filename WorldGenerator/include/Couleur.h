#ifndef COULEUR_H
#define COULEUR_H


class Couleur
{
    public:
        Couleur();
        Couleur(int rouge,int vert,int bleu):m_r(rouge),m_g(vert),m_b(bleu){};
        virtual ~Couleur();

    protected:
        int m_r,m_g,m_b;

    private:
};

#endif // COULEUR_H
