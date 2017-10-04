#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>

#include "h/Rectangle.h"

using namespace std;

Rectangle::Rectangle(std::string height, std::string width)
{
    this->height = atoi(height.c_str());
    this->width = atoi(width.c_str());
    
    this->PrintRectangle();
}

void Rectangle::PrintRectangle()
{
    for(int i = 0; i < this->height; i++)
    {
        for(int j = 0; j< this->width; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

