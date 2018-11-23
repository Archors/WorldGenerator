#ifndef COORDS_H
#define COORDS_H


class Coords
{
    public:
        Coords(){};
        Coords (double x,double y):m_x(x),m_y(y){};
        virtual ~Coords();
        double getx(){return m_x;};
        double gety(){return m_y;};

        Coords & operator=(Coords const & a);

    protected:
        double m_x,m_y;

    private:
};

#endif // COORDS_H
