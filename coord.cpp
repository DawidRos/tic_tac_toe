//
// Created by K i D on 07.06.2018.
//
#include "coord.h"
#include <iostream>
#include <cctype>

using std::cout;
using std::endl;
using std::cin;

bool CoordP::isGood(char tab[][3]) const
{
if(tab[x][y]==' ')
    return true;
else
    {
        cout <<"you can't put sign on occupided field\n";
    return false;
    }
}

void CoordP::CoordSet()
{
    cout <<"player "<<name <<" < "<< sign<<" >"<<" put coordinates < A , B , C >  < 1 , 2 , 3 >  : ";
    char m;
    cin >> m >> y ;
    x=toupper(m);
    cin.clear();
    cin.sync();
    while (!((x=='A'||x=='B'||x=='C')&&(y==1||y==2||y==3)))
    {
        cout << "Bad coordinates, try again: ";
        cin >> m >> y ;
        x=toupper(m);
        cin.clear();
        cin.sync();
    }
    x-='A';
    y--;
}

void CoordC::CoordSet()
{
    std::cout << " This options is not active yet, bye then !\n";
    exit(EXIT_FAILURE);
}


