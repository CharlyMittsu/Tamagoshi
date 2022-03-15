#ifndef animal_h
#define animal_h

#include <string>
using namespace std;


class Animal {

    protected:
        string _name;
        string _species;
        int _maxHealth;

        /*
        int _health;
        int _kindness;
        int _happiness;
        */

    public :
        Animal();
        Animal(string nom,string espece,int maxVie);
        string getName ();
        string getSpecies();

        void changeName(std::string newName);
        void changeHealth(int value);
};

#endif