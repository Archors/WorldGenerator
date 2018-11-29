#ifndef PLAN_H
#define PLAN_H
#include <vector>
#include "Plan.h"
#include "Object.h"

class Plan
{
    public:
        Plan();
        virtual ~Plan();
        void medessiner();
        //void addArbre(Arbre *Thearbre);
        //void addNuage(Nuage *Thenuage);

    protected:
        ///Liste polymorphique des objets contenu dans un plan
        std::vector <Object*> m_objet;
        ///Interval de creation du plan
        int m_min;
        int m_max;

    private:
};

#endif // PLAN_H
