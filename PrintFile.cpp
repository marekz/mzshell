#include "h/PrintFile.h"

#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

PrintFile::PrintFile(const std::string file) {
    this->file = file;
    cout << "Wyswietl plik " << this->file << endl;
    
    ifstream file1 (this->file.c_str(), fstream::in);
    if(!file1.good())
        cout << "Plik nie istnieje lub złe uprawnienia dostępu do pliku";
    
    else 
    {
        cout << file1.rdbuf() << endl;
        file1.close();
    }
}