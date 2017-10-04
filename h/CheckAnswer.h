#ifndef CHECKANSWER_H
#define CHECKANSWER_H

#include <string>
#include <iostream>

using namespace std;

class CheckAnswer {
private:
    /**
     */
    string command;
    string choice;
    string order;
    string param1;
    string param2;
    string param3;
    
    /**
     */
    void executeCommand();
    
public:
    CheckAnswer(const string answ); 
};

#endif /* CHECKANSWER_H */

