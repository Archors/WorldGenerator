#include "Polygon.h"
#include <fstream>
#include <iostream>
#include <string>

void Polygon::sedessiner()
{
    std::string const nomFichier("output.svg");
    std::ofstream monFlux(nomFichier.c_str(),std::ios::app);//ouverture de fichier, code identique à celui d'openclassroom

    std::cout<<"le barycentre :"<<m_barycentre<<std::endl<<m_couleur<<std::endl;//simple test

    // On rajoute le "</svg>" à la fin pour fermer la div du svg, il faudras le changer pour le code d'après
    if(monFlux)
    {
        monFlux.seekp(0,std::ios::end);
        monFlux<<"\n<polygon points=\" ";  // On va se placer à la fin puis ecrit la div du polygon

        for(unsigned int i=0;i<m_coords.size();i++)
        {
        monFlux<<m_coords[i]<<" ";    // On affiche les coordonnées les une à la suite des autres
        }
        monFlux<<"\"";
        monFlux<<" style=\"fill:"<<m_couleur<<"\"";
        monFlux<<"/>";       // On ferme la div du polygon
    }
    else
    {
        std::cout<<"ERREUR: Impossible d'ouvrir le fichier.\n";
    }
}

void Polygon::addPoint(Coords const & lacoord)
{
    m_coords.push_back(Coords(lacoord));

}
