#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string.h>
#include "Ninja.hpp"
#include "point.hpp"
#include "Character.hpp"
using namespace std;

#ifndef YOUNGNINGA
#define YOUNGNINGA
class YoungNinja:public Ninja{
public:
    YoungNinja(string name,Point point);
    string print();
    ~YoungNinja();

};
#endif
