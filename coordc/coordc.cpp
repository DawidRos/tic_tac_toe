#include "coordc.h"
#include "../fu/fu.h"
#include <iostream>
#include <ctime>


bool CoordC::CoordSet(char tab[],int t)
{
    srand(time(0));
    if(t>1)
    {
        for (int i = 0 ; i<9 ; ++i)
        {
            if (tab[i] == ' ')
            {
                tab[i] = getSign();
                if (win(tab, getSign()))
                {
                    setX(i);
                    tab[i] = ' ';
                    return true;
                }
                tab[i] = ' ';
            }
        }
        char ch =(getSign()=='O' ? 'X' : 'O' );
        for(int i=0 ; i<9; ++i)
        {
            if (tab[i] == ' ')
            {
                tab[i] = ch;
                if(win(tab,ch))
                {
                    setX(i);
                    tab[i] = ' ';
                    return true;
                }
                tab[i] = ' ';
            }
        }
    }
    double max_c = (getSign()=='O' ? -10 : 10);
    double c;
    int i_tab_good = 0;
    int*tab_good = new int[9-t];
    for (int i = 0; i < 9; ++i)
    {
        if (tab[i] == ' ')
        {
            tab[i] = getSign();
            c = minmax(tab, ++t, getSign());
            tab[i] = ' ';
            if (((getSign()=='O')&&(c>=max_c))||((getSign()=='X')&&(c<=max_c)))
            {
                max_c=c;
                tab_good[i_tab_good] = i;
                ++i_tab_good;
            }
        }
    }
    double ha = (tab_good[rand()%(i_tab_good)]);
    setX(ha);
    delete [] tab_good;
    std::cout <<"Player "<<getName()<<" < "<<getSign()<<" > : "  << char(getX() / 3 + 'A') << getX() % 3 + 1 <<  std::endl;
    return true;
}

