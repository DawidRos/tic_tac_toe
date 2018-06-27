#pragma once
#include "../coordp/coordp.h"

class CoordC : public CoordP
{
private:
public:
     CoordC() : CoordP("CPU") {}
    ~CoordC() {}
    bool CoordSet( char tab[],int t);

};