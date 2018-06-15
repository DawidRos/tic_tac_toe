//
// Created by K i D on 07.06.2018.
//

#ifndef INC_1_1_COORD_H
#define INC_1_1_COORD_H

#include <iostream>
#include <string>

class CoordP
{
private:
    int x;
    int y;
    char sign ;
    std::string name;
public:
    CoordP() :x(0) ,y(0) {}
    CoordP (const std::string & str) : x(0),y(0), name(str) {}
    virtual ~CoordP() {}
    virtual void CoordSet();
    int getX() const {return x;}
    int getY() const {return y;}
    virtual bool isGood(char tab[][3]) const;
    void setSign( const char  ch) {sign =ch;}
    const std::string & Name() const {return name;}
    const char & getSign() const {return sign;}
};

class CoordC : public  CoordP
{
private:
public:
   // CoordC() : CoordP("CPU") {}
    ~CoordC() {}
   //bool isGood(char tab[][3]) const;
    void CoordSet();
};

#endif //INC_1_1_COORD_H
