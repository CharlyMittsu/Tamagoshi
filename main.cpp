#include "animal.cpp"
#include "chat.cpp"
#include <string>
#include <iostream>

int main(){
    Animal monAnimal = Animal();
    
    Chat * monChat = new Chat;
    std::cout << monChat->getName() <<std::endl;

    std::cout << monAnimal.getName() <<std::endl;
}