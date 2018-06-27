#include "coordp.h"
#include <iostream>
#include <cctype>
#include <ctime>

using std::cout;
using std::endl;
using std::cin;

bool CoordP::isGood(char tab[]) const
{
    if(tab[x]==' ')
        return true;
    cout <<"you can't put sign on occupided field !\n";
    return false;
}

bool CoordP::CoordSet(char tab[],int t)
{
    cout <<"player "<<name <<" < "<< sign<<" >"<<" put coordinates < A , B , C >  < 1 , 2 , 3 >  : ";
    char m;
    cin >> m >> x ;
    m=toupper(m);
    cin.clear();
    cin.sync();
    while (!((m=='A'||m=='B'||m=='C')&&(x==1||x==2||x==3)))
    {
        cout << "Bad coordinates, try again: ";
        cin >> m >> x ;
        m=toupper(m);
        cin.clear();
        cin.sync();
    }
    --x;
    x+= static_cast<int>(m-'A')*3;
    return true;
}