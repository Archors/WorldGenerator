#include "Bateau.h"

Bateau::Bateau(Coords const & lacoord,double taille,double generator):Object(lacoord,taille,generator)
{
    int a,b,c,e,f,g;
    if(!aleaentier(0,2,m_seed))
    {
        a=141;
        b=64;
        c=36;

        e=18;
        f=13;
        g=22;
    }
    else
    {
        a=49;
        b=140;
        c=231;

        e=254;
        f=27;
        g=0;
    }

    Couleur recipient(a,b,c);
    Couleur lautrerecipient(e,f,g);

    Polygon recip(Coords(m_barycentre),Couleur(136,66,29));

    recip.addPoint(Coords(m_barycentre.getx()-m_taille*(0.05),m_barycentre.gety()));
    recip.addPoint(Coords(m_barycentre.getx()+m_taille*(0.05),m_barycentre.gety()));
    recip.addPoint(Coords(m_barycentre.getx()+m_taille*(0.05),m_barycentre.gety()-(m_taille/2)*(5/3)));
    recip.addPoint(Coords(m_barycentre.getx()-m_taille*(0.05),m_barycentre.gety()-(m_taille/2)*(5/3)));

    Polygon recip2(Coords(m_barycentre),Couleur(186,186,186));

    recip2.addPoint(Coords(m_barycentre.getx()-m_taille/2,m_barycentre.gety()));
    recip2.addPoint(Coords(m_barycentre.getx()-m_taille/2+m_taille*(0.1),m_barycentre.gety()+m_taille/8));
    recip2.addPoint(Coords(m_barycentre.getx()+m_taille/2-m_taille*(0.1),m_barycentre.gety()+m_taille/8));
    recip2.addPoint(Coords(m_barycentre.getx()+m_taille/2,m_barycentre.gety()));

    Polygon sisi(Coords(m_barycentre),lautrerecipient);

    sisi.addPoint(Coords(m_barycentre.getx()+m_taille/4+m_taille/8,m_barycentre.gety()-m_taille*(0.03)));
    sisi.addPoint(Coords(m_barycentre.getx()+m_taille*(0.03),m_barycentre.gety()-m_taille*(0.03)));
    sisi.addPoint(Coords(m_barycentre.getx()+m_taille*(0.03),m_barycentre.gety()-m_taille/2));

    Polygon baba(Coords(m_barycentre),recipient);

    baba.addPoint(Coords(m_barycentre.getx()-m_taille/4-m_taille/8,m_barycentre.gety()-m_taille*(0.03)));
    baba.addPoint(Coords(m_barycentre.getx()-m_taille*(0.03),m_barycentre.gety()-m_taille*(0.03)));
    baba.addPoint(Coords(m_barycentre.getx()-m_taille*(0.03),m_barycentre.gety()-m_taille/3));


    Polygon jppdelavieptn(Coords(m_barycentre),Couleur(0,0,0));

    jppdelavieptn.addPoint(Coords(m_barycentre.getx()-m_taille/4-m_taille/8,m_barycentre.gety()-m_taille*(0.08)-m_taille/3));
    jppdelavieptn.addPoint(Coords(m_barycentre.getx()-m_taille*(0.03),m_barycentre.gety()-m_taille*(0.03)-m_taille/3));
    jppdelavieptn.addPoint(Coords(m_barycentre.getx()-m_taille*(0.03),m_barycentre.gety()-m_taille/3-m_taille*(0.16)));

    m_polygon.push_back(recip);
    m_polygon.push_back(recip2);
    m_polygon.push_back(baba);
    m_polygon.push_back(sisi);
    m_polygon.push_back(jppdelavieptn);

}

void Bateau::medessiner()
{
    for(unsigned int i=0;i<m_polygon.size();i++)
    {
        m_polygon[i].sedessiner();
    }
}
