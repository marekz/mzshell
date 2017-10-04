#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>

#include "h/ChangeDirect.h"
#include "h/GetPatch.h"

using namespace std;

ChangeDirect::ChangeDirect(std::string order) {
    
    const char *path = order.c_str();
    
    cout << "Zmiana katalogu na: " << order << endl;
    
    if (order == "") 
        cout << "Brak parametru, zostaję w katalogu\n" << endl;
    else {
        chdir(path);
    }
}