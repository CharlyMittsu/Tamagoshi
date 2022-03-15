#ifndef animal_cpp
#define animal_cpp

#include "animal.h"
#include <iostream>

Animal::Animal(): _name("sans nom"),_maxHealth(100){}
Animal::Animal(std::string nom,std::string espece, int maxVie) :
    _name(nom),_species(espece),_maxHealth(maxVie){}

std::string Animal::getName(){
    return _name;
}


#endif