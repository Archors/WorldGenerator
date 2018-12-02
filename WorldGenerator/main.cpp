#include <iostream>
#include <vector>
#include "Paysage.h"
#include "Polygon.h"
#include "Arbre.h"
#include "Nuage.h"
#include "Etoile.h"
#include "Ellipse.h"

using namespace std;

int main()
{
    int choix=0;
<<<<<<< HEAD
    double seed=0,densite=30,taille=50;
=======
    double seed=0,densite=1,taille=1;
>>>>>>> f096fb89f97b4edd81f9ac368a4d217f7160d4a7
    while(choix != 5)
    {
        cout<<"Menu du generateur de monde\nQue souhaitez vous faire ?\n1.Choisir une seed\n2.Choisir la densite des objets\n3.Choisir la taille des objets\n4.Dessiner dans le fichier svg\n5.Quitter"<<endl;
        cin>>choix;
        switch (choix)
        {
        case 1:
        {
            int seed;/// Tu declares pas deux fois seed là ? même si ils sont pas du même type
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
            ///Mettre la sauvegarde ici
            break;
        }
        }
    }
    return 0;
}



