#include "fu.h"
#include <iostream>

double minmax(char tab[], int t, char ch)
{

    if(win(tab,ch))
        return (ch=='O' ? 1 : -1);
    else if(t==9)
        return 0;
    ch=(ch=='X'?'O':'X');
    double max_c = (ch=='X'? 10 : -10);

    for(int i=0;i<9;++i)
    {
        if(tab[i]==' ')
        {
            double c = 0;
            tab[i] = ch;
            c += minmax(tab,++t,ch);
            tab[i] = ' ';
            if(((ch=='O')&&(c>=max_c))||((ch=='X')&&(c<=max_c)))
                max_c = c/t;
        }
    }
    return max_c;
}

using std::cout;
void show(char tab[])
{
    cout <<"\n\t" << 1 << ' ' << (char)179 << ' ' << 2 << ' ' << (char)179 << ' ' << 3 <<std::endl
         << "\n"<<"   A    " << tab[0] << ' ' << (char)179 << ' ' << tab[1] << ' ' << (char)179 << ' ' << tab[2] << std::endl
         << "   "<< (char)196<<"   " << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << std::endl
         << "   B    " << tab[3] << ' ' << (char)179 << ' ' << tab[4] << ' ' << (char)179 << ' ' << tab[5] << std::endl
         << "   "<< (char)196<<"   " << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << std::endl
         << "   C    " << tab[6] << ' ' << (char)179 << ' ' << tab[7] << ' ' << (char)179 << ' ' << tab[8] << std::endl;
}

bool win(char tab[], const char ch)
{
    if (
            (ch == tab[0] && ch == tab[1] && ch == tab[2])
            || (ch == tab[3] && ch == tab[4] && ch == tab[5])
            || (ch == tab[6] && ch == tab[7] && ch == tab[8])
            || (ch == tab[0] && ch == tab[3] && ch == tab[6])
            || (ch == tab[1] && ch == tab[4] && ch == tab[7])
            || (ch == tab[2] && ch == tab[5] && ch == tab[8])
            || (ch == tab[0] && ch == tab[4] && ch == tab[8])
            || (ch == tab[2] && ch == tab[4] && ch == tab[6])
            )
        return true;
    return false;
}
