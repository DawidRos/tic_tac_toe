#include <iostream>
#include <string>
#include <ctime>
#include "coord.cpp"


using std::cout;
using std::endl;
using std::cin;
using std::string;

void show(char  tab[][3]);
bool win(char  tab[][3],const char ch);

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
    string winner = "no one ";
    string p1,p2;
    cin.get();
    cout << " Player 1 nick: ";
    getline(cin,p1);
    CoordP * list[2];
    int first = rand()%2;
    list[first] = new CoordP(p1);
    if(a=='1') {
        cout << " Player 2 nick: ";
        getline(cin, p2);
        list[first ? 0 : 1] = new CoordP(p2);
    }
    else
        list[first ? 0 : 1] = new CoordC();
    list[0]->setSign('O');
    list[1]->setSign('X');

    char tab[3][3] = {
            {' ',' ',' '},
            {' ',' ',' '},
            {' ',' ',' '}
    };
    show(tab);

    for(int i=0;i<9;i++)
    {
        int k=i%2;
        cout <<"\nROUND "<<i+1 <<":\n";
        do{
            list[k]->CoordSet();
        }
        while (!list[k]->isGood(tab));
        tab[list[k]->getX()][list[k]->getY()] = list[k]->getSign();
        show(tab);
        if(i>3 && win(tab,list[k]->getSign()))
        {
            winner = list[k]->Name();
            break;
        }
    }
    cout <<"\n\n  <<< "<<winner<<" WIN >>>\n";
    return 0;
}


void show( char  tab[][3])
{

    cout <<"\n\t" << 1 << ' ' << (char)179 << ' ' << 2 << ' ' << (char)179 << ' ' << 3 <<endl
         << "\n"<<"   A    " << tab[0][0] << ' ' << (char)179 << ' ' << tab[0][1] << ' ' << (char)179 << ' ' << tab[0][2] << std::endl
         << "   "<< (char)196<<"   " << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << std::endl
         << "   B    " << tab[1][0] << ' ' << (char)179 << ' ' << tab[1][1] << ' ' << (char)179 << ' ' << tab[1][2] << std::endl
         << "   "<< (char)196<<"   " << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << std::endl
         << "   C    " << tab[2][0] << ' ' << (char)179 << ' ' << tab[2][1] << ' ' << (char)179 << ' ' << tab[2][2] << std::endl;
}

bool win(char tab[][3], const char ch)
{
    int sum1,sum2,sum3,sum4;
    sum3=sum4=0;
    for(int i=0;i<3;i++)
    {
        sum1=sum2=0;
        for (int j=0;j<3;j++)
        {
            if(tab[i][j]==ch)
                sum1++;
            if(tab[j][i]==ch)
                sum2++;
        }
        if(tab[i][i] ==ch)
            sum3++;
        if(tab[i][2-i])
            sum4++;
        if (sum1==3||sum2==3||sum3==3||sum4==3)
            return true;
        return false;
    }

}

