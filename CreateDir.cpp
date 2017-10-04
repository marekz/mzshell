#include "h/CreateDir.h"

#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sys/stat.h>

using namespace std;

CreateDir::CreateDir(const std::string file) {

    string folderName = file;
    cout << folderName.c_str() << endl;

    const int dir_err = mkdir(folderName.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);

    if (-1 == dir_err) {
        printf("Error creating directory!n");
        exit(1);
    }
}