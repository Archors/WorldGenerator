#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"
#include <iostream>

class Triangle : public Polygon
{
    public:
        Triangle();
        virtual ~Triangle();
        virtual void sedessiner(){std::cout<<"ceci est un triangle\n";};
    protected:

    private:
};

#endif // TRIANGLE_H
