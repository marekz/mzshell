#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>

using namespace std;

class Rectangle {
    public:
            Rectangle(const std::string param1, std::string param2);
            void PrintRectangle();
        
    private:
        int height;
        int width;

};

#endif /* RECTANGLE_H */

