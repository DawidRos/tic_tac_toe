#pragma once
#include <string>

class CoordP
{
private:
    int x;
    char sign ;
    std::string name;
public:
    CoordP() {}
    CoordP (const std::string & str) : name(str) {}
    virtual ~CoordP() {}
    virtual bool CoordSet(char tab[], int t);
    int getX() const {return x;}
    void setX(int n) {x=n;}
    bool isGood(char tab[]) const;
    void setSign( const char ch) {sign =ch;}
    const std::string & getName() const {return name;}
    const char & getSign() const {return sign;}
};
