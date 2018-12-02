#include <iostream>
#include <vector>
#include "Paysage.h"
#include "Triangle.h"
#include "Polygon.h"
#include "Arbre.h"
#include "Nuage.h"
#include "Etoile.h"
#include "Ellipse.h"

using namespace std;

// IMPORTANT : effacer à chaque fois le fin de div de l'objet et le </svg> avant de compiler
int main()
{
    int choix=0;
    double seed=0,densite=0,taille=0;
    while(choix != 5)
    {
        cout<<"Menu du generateur de monde\nQue souhaitez vous faire ?\n1.Choisir une seed\n2.Choisir la densite des objets\n3.Choisir la taille des objets\n4.Dessiner dans le fichier svg\n5.Quitter"<<endl;
        cin>>choix;
        switch (choix)
        {
        case 1:
        {
            int seed;
            cout<<"Saisissez le seed de la generation du monde"<<endl;
            cin>>seed;
            break;
        }
        case 2:
        {
            cout<<"Saisissez la densite d'objet dans le monde entre 0 et 50\n0 = pas d'objet, 50 = maximum d'objet"<<endl;
            do
            {
                cin>>densite;
            }
            while(densite > 50 || densite < 0);
            break;
        }
        case 3:
        {
            cout<<"Saisissez la taille des objets entre 1 et 10\n1 = tres petit, 10 = tres grand"<<endl;
            do
            {
                cin>>taille;
            }
            while(taille < 1 || taille > 10);
            taille*=10;
            break;
        }
        case 4:
        {
            Paysage* thepaysage = new Paysage(seed,taille,densite);
            thepaysage->createplan();
            thepaysage->medessiner();
            delete thepaysage;
            break;
        }
        case 5:
        {
            cout<<"Fermeture du programme"<<endl;
        }
        }
    }
    return 0;
}



