#ifndef CREATEDIR_H
#define CREATEDIR_H

#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

class CreateDir {
public:
    CreateDir(const std::string file);
private:
    string folderName;

};

#endif /* CREATEDIR_H */

