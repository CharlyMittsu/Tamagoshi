#ifndef chat_h
#define chat_h

#include "animal.cpp"
#include <string>
using namespace std;

class Chat : public Animal {
    public:
        Chat();
        Chat(string name);
};


#endif