#include "Ellipse.h"

void Ellipse::sedessiner()
{
    std::string const nomFichier("output.svg");
    std::ofstream monFlux(nomFichier.c_str(),std::ios::app);//ouverture de fichier, code identique à celui d'openclassroom

    std::cout<<"le barycentre :"<<m_barycentre<<std::endl<<m_couleur<<std::endl;//simple test

    if(monFlux)
    {
        monFlux.seekp(0,std::ios::end);
        monFlux<<"\n<ellipse cx=\""<<m_barycentre.getx()<<"\" cy=\""<<m_barycentre.gety()<<"\" rx=\""<<m_rayonx<<"\" ry=\""<<m_rayony<<"\" fill=\""<<m_couleur<<"\" />";
    }
    else
    {
        std::cout<<"ERREUR: Impossible d'ouvrir le fichier.\n";
    }
}
