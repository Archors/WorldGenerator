#include <iostream>
#include <vector>
#include "Paysage.h"
#include "Polygon.h"
#include "Arbre.h"
#include "Nuage.h"
#include "Etoile.h"
#include "Ellipse.h"
#include "Bateau.h"

using namespace std;

int main()
{

    int choix=0;
    double seed=0,densite=30,taille=70;
    while(choix != 5)
    {
        cout<<"Menu du generateur de monde\nQue souhaitez vous faire ?\n1.Choisir une seed\n2.Choisir la densite des objets\n3.Choisir la taille des objets\n4.Dessiner dans le fichier svg\n5.Quitter"<<endl;
        cin>>choix;
        switch (choix)
        {
        case 1:
        {
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

    /*vector<Object*> test;

    mt19937 seed(0);

    for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
    {
        test.push_back(new Bateau(Coords(100+100*i,100+100*j),50,alea(0,50,seed)));
    }

    for(unsigned int i=0;i<test.size();i++)
    {
        test[i]->medessiner();
    }
    for(unsigned int i=0;i<test.size();i++)
    {
        delete test[i];
    }*/

    return 0;
}



