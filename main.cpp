#include <iostream>
#include <ctime>
#include "coordp/coordp.h"
#include "coordc/coordc.h"
#include "fu/fu.h"


using std::cout;
using std::endl;
using std::cin;
using std::string;


int main() {
    srand(time(0));
    cout << "\tHello !\n\tPlease choose mode:\n\t<1> PvP\n\t<2> PvC\n\t";
    char a;
    cin >>a;
    while(!(a=='1'||a=='2'))
    {
        cout << "Please  pres <1> or <2>\n";
        cin>>a;
    }
    string winner = "no one";
    string p1,p2;
    cin.get();
    cout << " Player 1 nick: ";
    getline(cin,p1);
    CoordP * list[2];
    int first = rand()%2;
    list[first] = new CoordP(p1);
    if(a=='1')
    {
        cout << " Player 2 nick: ";
        getline(cin, p2);
        list[first ? 0 : 1] = new CoordP(p2);
    }
    else
       list[first ? 0 : 1] = new CoordC();
    list[0]->setSign('O');
    list[1]->setSign('X');

    char tab[9];
    for(int i=0;i<9;++i)
        tab[i] = ' ';
    show(tab);
    for(int i=0;i<9;i++)
    {
        int k=i%2;
        cout <<"\nROUND "<<i+1 <<":\n";
        do{
            list[k]->CoordSet(tab,i);
        }
        while (!list[k]->isGood(tab));
        tab[list[k]->getX()] = list[k]->getSign();
        show(tab);
        if(i>3 && win(tab,list[k]->getSign()))
        {
            winner = list[k]->getName();
            break;
        }
    }
    cout <<"\n\n  <<< "<<winner<<" WIN >>>\n";
    return 0;
}




