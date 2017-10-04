#include <iostream>
#include <stdio.h>
#include <dirent.h>
#include <fstream>
#include "h/ListDir.h"

using namespace std;

ListDir::ListDir() {
    DIR *dpdf;
    struct dirent *epdf;
    dpdf = opendir("./");
    
    if (dpdf != NULL)
    {
        while (epdf = readdir(dpdf)) 
        {
            cout << epdf->d_name << endl;
        }
    }
}


