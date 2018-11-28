#ifndef PLAN_H
#define PLAN_H
#include <vector>
#include "Object.h"


class Plan
{
    public:
        Plan();
        virtual ~Plan();
        void medessiner();

    protected:
        std::vector <Object> Objets;

    private:
};

#endif // PLAN_H
