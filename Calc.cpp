#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include "h/Calc.h"

using namespace std;

Calc::Calc(std::string param1, std::string param2, std::string param3) {

    cout << "Prosty kalkulator\n";
    
    int i_param1 = atoi(param1.c_str());
    int i_param3 = atoi(param3.c_str());
    float result = 0;
    
    if (param2=="+")
        result = i_param1 + i_param3;
    else if (param2=="-")
        result = i_param1 - i_param3;
    else if (param2=="*")
        result = i_param1 * i_param3;
    else if (param2=="/")
        result = i_param1 / i_param3;
    else if (param2=="%")
        result = i_param1 % i_param3;
    cout << "Policz: " << param1 << " " << param2 << " " << param3 << " = "  <<  result << endl;
}