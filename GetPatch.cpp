#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <fstream>
#include <sstream>

#define NBUF 1024

#include "h/GetPatch.h"

using namespace std;

GetPatch::GetPatch() {
}

string GetPatch::ReturnPatch() {
    char buffer[NBUF];
    getcwd(buffer,NBUF);
    string ret(buffer);
    return ret;
};