#include "mercante.h"
//Mercante::Mercante(){

//}
int Mercante::interazione(Personaggio *p){
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num1) && p->getGemme()>=50){
        giaInteragito=true;
        p->setGemme(p->getGemme()-50);
        p->aumenta();
        return 1;     
    } 
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num2)){
        return 2;
    }
    else return 0;
}