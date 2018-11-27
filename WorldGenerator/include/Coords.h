#ifndef COORDS_H
#define COORDS_H
#include <iostream>
#include <fstream>

class Coords
{
    public:
        Coords(){};
        Coords (double x,double y):m_x(x),m_y(y){};
        Coords(Coords const & copie);
        virtual ~Coords();
        double getx(){return m_x;};
        double gety(){return m_y;};

        Coords & operator=(Coords const & a);

        void afficher(std::ostream &flux)const;
        friend std::ostream& operator<<(std::ostream & flux,Coords const & lacoord);


    protected:
        double m_x,m_y;

    private:
};

#endif // COORDS_H
