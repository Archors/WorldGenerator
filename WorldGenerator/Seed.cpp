#include "Seed.h"

using namespace std;

//retourne un entier aléatoire dans [min...max]
int alea(int min, int max, mt19937& randGen)
{
    return uniform_int_distribution<>(min, max)(randGen);
}
//retourne un réel aléatoire dans [min...max[
double alea(double min, double max, mt19937& randGen)
{
    return uniform_real_distribution<>(min, max)(randGen);
}

void menu(vector<Plan> lesplans)
{
    int seed=choixseed();
    int densite=choixdensite();
    int taille=choixtaille();
    for(unsigned int i=0;i<lesplans.size();++i)
        lesplans[i].medessiner();
}

int choixseed()
{
    int seed;
    cout<<"Saisissez le seed de la generation du monde"<<endl;
    cin>>seed;
    return seed;
}

int choixdensite()
{
    int densite;
    cout<<"Saisissez la densite d'objet dans le monde entre 0 et 100\n0 = pas d'objet, 100 = maximum d'objet"<<endl;
    do{
        cin>>densite;
    }while(densite < 100 || densite < 0);
    return densite;
}

int choixtaille()
{
    int taille;
    cout<<"Saisissez la taille des objets entre 0 et 10\n0 = tres petit, 100 = tres grand"<<endl;
    do{
        cin>>taille;
    }while(taille < 0 || taille > 10);
    return taille;
}
