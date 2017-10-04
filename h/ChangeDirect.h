#ifndef CHANGEDIRECT_H
#define CHANGEDIRECT_H

#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
    
using namespace std;

class ChangeDirect {
    
    private:
        string order;
        string homeFolder;

    public:
        ChangeDirect();
        ChangeDirect(const std::string order);
};

#endif /* CHANGEDIRECT_H */