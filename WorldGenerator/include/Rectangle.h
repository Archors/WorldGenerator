#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "Polygon.h"

class Rectangle : public Polygon
{
    public:
        Rectangle(){};
        virtual ~Rectangle(){};
        virtual void sedessiner(){std::cout<<"rectangle que je suis\n";};

    protected:

    private:
};

#endif // RECTANGLE_H
