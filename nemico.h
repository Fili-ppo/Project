#ifndef NEMICO_H
#define NEMICO_H
#include "NPC.h"
class Nemico: public NPC{
    private:
        int danno;
    public:
        Nemico(int d, std::string s):NPC(){danno=d;texture->loadFromFile(s);sprite.setTexture(*texture); sprite.setScale(0.5,0.5); sprite.setPosition(500-85, 500-85);};
};
#endif