#ifndef CALC_H
#define CALC_H

#include <string>

using namespace std;

class Calc {
    public:
        Calc(std::string param1, std::string param2, std::string param3);
    private:
        string param1;
        string param2;
        string param3;
};

#endif /* CALC_H */

