#ifndef PRINTFILE_H
#define PRINTFILE_H

#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

class PrintFile {
public:
    PrintFile(const std::string file);
private:
    string file;

};

#endif /* PRINTFILE_H */

