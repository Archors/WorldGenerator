#include <iostream>
#include "Paysage.h"

/// Certains sous-programme ne figurent pas dans le diagramme de classe
/// La raison est qu'ils ne servent à rien dans le code final
/// Ils furents coder pour aider l'ecriture du code
/// Il ne sont pas appelés dans cette version finale

using namespace std;

int main()
{

    int choix=0;
    double seed=0,densite=30,taille=70;
    while(choix != 7)
    {
        cout<<"Menu du generateur de monde\nQue souhaitez vous faire ?\n1.Choisir une seed\n2.Choisir la densite des objets\n3.Choisir la taille des objets\n4.Dessiner dans le fichier svg\n";
        cout<<"5.Sauvegarder\n6.Charger\n7.Quitter\n";
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
            cout<<"Saisissez la densite d'objet dans le monde entre 1 et 50\n, 50 = maximum d'objet"<<endl;
            do
            {
                cin>>densite;
            }
            while(densite > 50 || densite < 1);
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
            cout<<"Sauvegarde effectuée\n";
            Paysage * thepaysage = new Paysage(seed,taille,densite);
            thepaysage->sauvegarder();
            delete thepaysage;
            break;
        }
        case 6:
        {
            Paysage * thepaysage = new Paysage();
            thepaysage->charger();
            thepaysage->createplan();
            thepaysage->medessiner();
            delete thepaysage;
            break;
        }
        case 7:
        {
            cout<<"Fermeture du programme"<<endl;
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



